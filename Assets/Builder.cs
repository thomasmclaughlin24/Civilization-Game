using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Builder : Units
{
    public Builder(TerrainTile startTile, Empires empire): base("Builder", 1, 0, 1, 60, 30, startTile, empire, Resources.Load<Sprite>("Unit Sprites/Builder Toad"))
    {
        UnityEvent build = new UnityEvent();
        build.AddListener(BuildMenu);
        base.actions.Add("Build", build);
    }

    public void Build(string buildingType)
    {
        if(currentTile.building == null && currentTile.city != null && currentTile.city.empire == empire)
        {
            Buildings.PurchaseBuilding(gm, buildingType, currentTile.city, "Production");
        }
    }

    public void BuildMenu()
    {
        //Stubbed
    }
}
