using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

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
    public bool allowedOnWater = false;
    public City city;
    public string name;
    public Sprite image;

    public Buildings(string name, int productioncost, int goldcost, int faithcost, float foodmodifier, float goldmodifier, float productionmodifier, float culturemodifier, float faithmodifier, Sprite image, bool allowedOnWater)
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
        this.allowedOnWater = allowedOnWater;
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
            this.allowedOnWater = true;
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
            this.allowedOnWater = true;
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
            this.allowedOnWater = true;
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
            this.allowedOnWater = true;
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

    public static void PurchaseBuilding(GameManager gm, string buildingName, City city, string productionMode)
    {
        var buildings = new Buildings(buildingName);
        if ((buildings.productioncost > 0 && city.empire.totalproduction >= buildings.productioncost && productionMode == "Production") ||
            (buildings.goldcost > 0 && city.empire.totalgold >= buildings.goldcost && productionMode == "Gold") ||
            (buildings.faithcost > 0 && city.empire.totalfaith >= buildings.faithcost && productionMode == "Faith"))
        {
            TerrainTile buildingtile;
            for (var i = 0; i < city.OwnedTiles.Count; i++)
            {
                buildingtile = city.OwnedTiles[i];
                if (buildingtile.building == null && !buildingtile.hasCity && buildingtile.city == city && (buildingtile.type != "Water" || buildings.allowedOnWater == true))
                {
                    buildingtile.building = buildings;
                    Vector3Int position = new Vector3Int(buildingtile.x, buildingtile.y, 0);
                    Tile t = ScriptableObject.CreateInstance<Tile>();
                    t.sprite = buildings.image;
                    gm.buildingoverlay.SetTile(position, t);
                    if (productionMode == "Production")
                        city.empire.totalproduction -= buildings.productioncost;
                    if (productionMode == "Gold")
                        city.empire.totalgold -= buildings.goldcost;
                    if (productionMode == "Faith")
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
