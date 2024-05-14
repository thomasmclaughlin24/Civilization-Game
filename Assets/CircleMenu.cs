using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using TMPro;

public class CircleMenu : MonoBehaviour
{
    public List<MenuButton> buttons = new List<MenuButton>();
    private Vector2 Mouseposition;
    private Vector2 fromVector2M = new Vector2(0.5f, 1.0f);
    private Vector2 centercircle = new Vector2(0.5f, 0.5f);
    private Vector2 toVector2M;

    public int menuItems;
    public int CurrentMenuItem;
    private int OldMenuItem;

    private Vector2 centerPosition;
    private float radius;

    // Start is called before the first frame update
    void Start()
    {
        menuItems = buttons.Count;
        if(menuItems > 0)
        {
            SetButtons(buttons);
        }
    }

    // Update is called once per frame
    void Update()
    {
        GetCurrentMenuItem();
        if (Input.GetButtonDown("Fire1") && CurrentMenuItem > -1)
        {
            ButtonAction();
        }
    }

    public void GetCurrentMenuItem()
    {
        Mouseposition = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
        if (Vector2.Distance(centerPosition, Mouseposition) > radius)
        {
            CurrentMenuItem = -1;
        }
        else
        {
            toVector2M = new Vector2(Mouseposition.x / Screen.width, Mouseposition.y / Screen.height);
            float angle = (Mathf.Atan2(fromVector2M.y - centercircle.y, fromVector2M.x - centercircle.x) - Mathf.Atan2(toVector2M.y - centercircle.y, toVector2M.x - centercircle.x)) * Mathf.Rad2Deg;
            if (angle < 0)
            {
                angle += 360;
            }
            CurrentMenuItem = (int)(angle / (360 / menuItems));
        }
        if (CurrentMenuItem != OldMenuItem)
        {
            if (OldMenuItem > -1)
            {
                buttons[OldMenuItem].sceneimage.color = buttons[OldMenuItem].normalColor;
            }
            OldMenuItem = CurrentMenuItem;
            if (CurrentMenuItem > -1)
            {
                buttons[CurrentMenuItem].sceneimage.color = buttons[CurrentMenuItem].highlightedColor;
            }
        }
    }

    public void ButtonAction()
    {
        buttons[CurrentMenuItem].sceneimage.color = buttons[CurrentMenuItem].pressedColor;
        if(buttons[CurrentMenuItem].whenPressed != null)
        {
            buttons[CurrentMenuItem].whenPressed.Invoke();
        }
        Destroy(gameObject);
    }

    public void SetButtons(List<MenuButton> buttonList)
    {
        foreach(Transform child in transform)
        {
            Destroy(child.gameObject);
        }
        buttons = buttonList;
        menuItems = buttons.Count;
        CurrentMenuItem = -1;
        OldMenuItem = 0;
        if (menuItems > 0)
        {
            for (int i = 0; i < buttonList.Count; i++)
            {
                MenuButton button = buttonList[i];
                GameObject buttonImage = Instantiate(Resources.Load("Prefabs/Button")) as GameObject;
                buttonImage.transform.SetParent(transform);
                buttonImage.GetComponent<RectTransform>().anchoredPosition = new Vector3(0, 0, 0);
                Image sceneImageComponent = buttonImage.GetComponent<Image>();
                button.sceneimage = sceneImageComponent;
                button.sceneimage.color = button.normalColor;
                sceneImageComponent.fillAmount = 1f / buttonList.Count;
                float imageAngle = 360f - ((360f / buttonList.Count) * i);
                buttonImage.transform.Rotate(0f, 0f, imageAngle);
                GameObject buttonText = buttonImage.transform.Find("Text").gameObject;
                buttonText.GetComponent<TextMeshProUGUI>().text = button.name;
                //buttonText.transform.Rotate(0f, 0f, -imageAngle);
                //float textAngle = Mathf.Deg2Rad * (((imageAngle + 360f) % 360f) + (sceneImageComponent.fillAmount / 2) * 360f + 90f);
                //buttonText.GetComponent<RectTransform>().anchoredPosition = new Vector3(0.25f * Mathf.Cos(textAngle), 0.25f * Mathf.Sin(textAngle), 0f);
                buttonText.GetComponent<RectTransform>().rotation = Quaternion.identity;
            }
            centerPosition = buttons[0].sceneimage.gameObject.transform.position;
            radius = buttons[0].sceneimage.gameObject.transform.localScale.x / 2;
        }
        else
        {
            Debug.LogError("Empty Menu!");
        }
    }

    public static void MakeCircleMenu(List<MenuButton> menuButtons, GameObject menuParent)
    {
        GameObject menu = Instantiate(Resources.Load("Prefabs/ActionMenu")) as GameObject;
        menu.transform.SetParent(menuParent.transform);
        menu.GetComponent<RectTransform>().anchoredPosition = new Vector3(0, 0, 0);
        menu.GetComponent<CircleMenu>().SetButtons(menuButtons);
    }
}

[System.Serializable]
public class MenuButton
{
    public string name;
    public Image sceneimage;
    public Color normalColor = Color.white;
    public Color highlightedColor = Color.black;
    public Color pressedColor = Color.white;
    public Color textColor = Color.white;
    public Color textHighlightedColor = Color.black;
    public UnityEvent whenPressed;

    public MenuButton(string name, UnityEvent whenPressed)
    {
        this.name = name;
        this.whenPressed = whenPressed;
    }
}