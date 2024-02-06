using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;
using TMPro;

public class AddUnits : MonoBehaviour
{
    public City city;
    public Units units;
    public GameManager gm;
    public string name;

    // Start is called before the first frame update
    void Start()
    {
        units = Units.MakeUnit(name, null, null);
    }

    // Update is called once per frame
    void Update()
    {
        var currentcost = units.foodcost;
        if (gm.unitProductionMode == "Culture")
        {
            currentcost = units.culturecost;
        }
        transform.GetChild(0).gameObject.GetComponent<TextMeshProUGUI>().text = name + " (" + currentcost.ToString() + ")";
    }

    public void AddUnit(string name)
    {
        city = gm.gameObject.GetComponent<UI>().cityPanel.city;
        Units.MakeUnit(name, city.centralTile, city.empire);
    }
}
