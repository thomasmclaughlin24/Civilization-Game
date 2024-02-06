using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Empires
{
    public string empirename;
    public List<City> cities = new List<City>();
    public List<Units> units = new List<Units>();
    public int totalfood = 0;
    public int totalgold = 0;
    public int totalproduction = 0;
    public int totalculture = 0;
    public int totalfaith = 0;
    public List<string> cityNames = new List<string>();
    public Color borderColor = Color.blue;

    public Empires(string empirename)
    {
        this.empirename = empirename;
    }

    public void TakeTurn(GameManager gm)
    {
        foreach (City city in cities)
        {
            var buildingname = gm.buildings[Random.Range(0, gm.buildings.Count - 1)];
            Buildings building = new Buildings(buildingname);
            Debug.Log(building.productioncost);
            if (building.productioncost != 0 && totalproduction >= building.productioncost)
            {
                Buildings.PurchaseBuilding(gm, buildingname, city, "Production");
            }
            else if (building.goldcost != 0 && totalgold >= building.goldcost)
            {
                Buildings.PurchaseBuilding(gm, buildingname, city, "Gold");
            }
            else if (building.faithcost != 0 && totalfaith >= building.faithcost)
            {
                Buildings.PurchaseBuilding(gm, buildingname, city, "Faith");
            }
        }
    }
}

public class FlowerKingdom: Empires
{
    public FlowerKingdom(): base("The Flower Kingdom")
    {
        borderColor = Color.red;
        cityNames = new List<string>() {"Pipe-Rock Plateau", "Fluff-Puff Peaks", "Shining Falls", "Sunbaked Desert", "Fungi Mines", "Deep Magma Bog", "Petal Isles" };
    }
}
