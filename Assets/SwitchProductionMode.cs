using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwitchProductionMode : MonoBehaviour
{
    public string productionMode;
    private GameManager gm;
    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        var colors = GetComponent<Button>().colors;
        if(gm.productionMode == productionMode)
        {
            GetComponent<Image>().color = colors.highlightedColor;
        }
        else
        {
            GetComponent<Image>().color = colors.normalColor;
        }
    }

    public void ChangeProduction()
    {
        gm.productionMode = productionMode;
        Debug.Log(productionMode);
    }
}
