using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;
using TMPro;

public class AddBuilding : MonoBehaviour
{
    public City city;
    public Buildings buildings;
    public GameManager gm;
    public string name;

    // Start is called before the first frame update
    void Start()
    {
        buildings = new Buildings(name);
    }

    // Update is called once per frame
    void Update()
    {
        var currentcost = buildings.productioncost;
        if(gm.productionMode == "Gold")
        {
            currentcost = buildings.goldcost;
        }
        if(gm.productionMode == "Faith")
        {
            currentcost = buildings.faithcost;
        }
        transform.GetChild(0).gameObject.GetComponent<TextMeshProUGUI>().text = name + " (" + currentcost.ToString() + ")";
    }

    public void AddBuildings(string name)
    {
        city = gm.gameObject.GetComponent<UI>().cityPanel.city;
        Buildings.PurchaseBuilding(gm, name, city, gm.productionMode);
    }
}
