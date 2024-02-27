using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using System;
using UnityEngine.UI;
using UnityEngine.Events;

public class TileClick : MonoBehaviour
{
    private Vector2 WorldPoint;
    public GameManager gm;
    public CityPanel cityPanelPlayer;
    public CityPanel cityPanelAI;
    public BuildingsPanel buildingsPanel;

    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            WorldPoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            gm.hit = gm.terrainmap.WorldToCell(WorldPoint);
            ProcessClick();
        }
    }

    void ProcessClick()
    {
        try 
        {
            TerrainTile t = gm.tiles[gm.hit.x + gm.mapWidth / 2, gm.hit.y + gm.mapHeight / 2];
            gm.selectedTile = t;
            gm.onTileClicked.Invoke();
            if (t.hasCity == true)
            {
                var openPanel = cityPanelAI;
                if(t.city.empire == gm.player)
                {
                    openPanel = cityPanelPlayer;
                }
                openPanel.city = t.city;
                openPanel.UpdateText();
                openPanel.gameObject.GetComponent<ClickPanel>().Open();
                openPanel.city = t.city;
            }
            if(t.unitList.Count > 0)
            {
                Debug.Log(t.unitList);
                for(var i = gm.unitIconPanel.transform.childCount - 1; i>=0; i--)
                {
                    GameObject.Destroy(gm.unitIconPanel.transform.GetChild(i).gameObject);
                }
                foreach(Units unit in t.unitList)
                {
                    GameObject icon = new GameObject();
                    icon.AddComponent<Image>().sprite = unit.unitImage;
                    icon.transform.parent = gm.unitIconPanel.transform;
                    icon.GetComponent<RectTransform>().sizeDelta = new Vector2(40f, 40f);
                }
                List<MenuButton> menuButtonList = new List<MenuButton>();
                foreach(var action in t.unitList[0].actions)
                {
                    menuButtonList.Add(new MenuButton(action.Key, action.Value));
                }
                Debug.Log(menuButtonList[0].name);
                CircleMenu.MakeCircleMenu(menuButtonList, gm.UIPanel);
            }
        }
        catch(IndexOutOfRangeException e)
        {
            //this exception is allowed
        }
    }
}
