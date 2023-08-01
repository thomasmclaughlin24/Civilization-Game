using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Buildings
{
    public int productioncost = 0;
    public int goldcost = 0;
    public int faithcost = 0;
    public int foodmodifier = 1;
    public int goldmodifier = 1;
    public int productionmodifier = 1;
    public int culturemodifier = 1;
    public int faithmodifier = 1;
    public City city;
    public string name;

    public Buildings(string name, int productioncost, int goldcost, int faithcost, int foodmodifier, int goldmodifier, int productionmodifier, int culturemodifier, int faithmodifier)
    {
        this.name = name;
        this.productioncost = productioncost;
        this.goldcost = goldcost;
        this.faithcost = faithcost;
        this.foodmodifier = foodmodifier;
        this.goldmodifier = goldmodifier;
        this.productionmodifier = productionmodifier;
        this.culturemodifier = culturemodifier;
        this.faithmodifier = faithmodifier;
    }
}
