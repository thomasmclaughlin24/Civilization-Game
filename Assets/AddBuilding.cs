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
        buildings = new Buildings(name);
        if ((buildings.productioncost > 0 && city.empire.totalproduction >= buildings.productioncost && gm.productionMode == "Production") ||
            (buildings.goldcost > 0 && city.empire.totalgold >= buildings.goldcost && gm.productionMode == "Gold") || 
            (buildings.faithcost > 0 && city.empire.totalfaith >= buildings.faithcost && gm.productionMode == "Faith"))
        {
            TerrainTile buildingtile;
            for(var i = 0; i<city.OwnedTiles.Count; i++)
            {
                buildingtile = city.OwnedTiles[i];
                if(buildingtile.building == null && buildingtile.hasCity == false)
                {
                    buildingtile.building = buildings;
                    Vector3Int position = new Vector3Int(buildingtile.x, buildingtile.y, 0);
                    Tile t = ScriptableObject.CreateInstance<Tile>();
                    t.sprite = buildings.image;
                    gm.buildingoverlay.SetTile(position, t);
                    if (gm.productionMode == "Production")
                        city.empire.totalproduction -= buildings.productioncost;
                    if (gm.productionMode == "Gold")
                        city.empire.totalgold -= buildings.goldcost;
                    if (gm.productionMode == "Faith")
                        city.empire.totalfaith -= buildings.faithcost;
                    city.foodmodifier += buildings.foodmodifier;
                    city.goldmodifier += buildings.goldmodifier;
                    city.productionmodifier += buildings.productionmodifier;
                    city.culturemodifier += buildings.culturemodifier;
                    city.faithmodifier += buildings.faithmodifier;
                    city.ExpandTile(buildingtile);
                    return;
                }
                else if (i == city.OwnedTiles.Count - 1)
                {
                    Debug.Log("No more tiles.");
                }
            }
        }
    }
}
