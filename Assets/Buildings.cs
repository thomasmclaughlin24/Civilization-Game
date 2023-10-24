using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Buildings
{
    public int productioncost = 0;
    public int goldcost = 0;
    public int faithcost = 0;
    public float foodmodifier = 1f;
    public float goldmodifier = 1f;
    public float productionmodifier = 1f;
    public float culturemodifier = 1f;
    public float faithmodifier = 1f;
    public City city;
    public string name;
    public Sprite image;

    public Buildings(string name, int productioncost, int goldcost, int faithcost, float foodmodifier, float goldmodifier, float productionmodifier, float culturemodifier, float faithmodifier, Sprite image)
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
        this.image = image;
    }

    public Buildings(string name)
    {
        this.image = Resources.Load<Sprite>("Tile Sprites/" + name);
        if (name == "Barn")
        {
            this.productioncost = 30;
            this.goldcost = 50;
            this.faithcost = 0;
            this.foodmodifier = 5f;
            this.goldmodifier = 3f;
            this.productionmodifier = 1f;
            this.culturemodifier = 3f;
            this.faithmodifier = 0f;
        }
        else if (name == "Market")
        {
            this.productioncost = 50;
            this.goldcost = 100;
            this.faithcost = 0;
            this.foodmodifier = 3f;
            this.goldmodifier = 5f;
            this.productionmodifier = 1f;
            this.culturemodifier = 5f;
            this.faithmodifier = 0f;
        }
        else if (name == "Mine")
        {
            this.productioncost = 80;
            this.goldcost = 150;
            this.faithcost = 0;
            this.foodmodifier = 0f;
            this.goldmodifier = 5f;
            this.productionmodifier = 7f;
            this.culturemodifier = 0f;
            this.faithmodifier = 0f;
        }
        else if (name == "Monument")
        {
            this.productioncost = 70;
            this.goldcost = 75;
            this.faithcost = 50;
            this.foodmodifier = 0f;
            this.goldmodifier = 3f;
            this.productionmodifier = 3f;
            this.culturemodifier = 6f;
            this.faithmodifier = 3f;
        }
        else if (name == "Temple")
        {
            this.productioncost = 100;
            this.goldcost = 150;
            this.faithcost = 100;
            this.foodmodifier = 0f;
            this.goldmodifier = 3f;
            this.productionmodifier = 1f;
            this.culturemodifier = 7f;
            this.faithmodifier = 7f;
        }
        else if (name == "World Wonder")
        {
            this.productioncost = 500;
            this.goldcost = 350;
            this.faithcost = 250;
            this.foodmodifier = 5f;
            this.goldmodifier = 6f;
            this.productionmodifier = 3f;
            this.culturemodifier = 6f;
            this.faithmodifier = 5f;
        }
        else
        {
            this.name = "Error";
            this.productioncost = 0;
            this.goldcost = 0;
            this.faithcost = 0;
            this.foodmodifier = 1f;
            this.goldmodifier = 1f;
            this.productionmodifier = 1f;
            this.culturemodifier = 1f;
            this.faithmodifier = 1f;
        }
    }
}
