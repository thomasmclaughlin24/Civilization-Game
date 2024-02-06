using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Settler : Units
{
    public Settler(TerrainTile startTile, Empires empire) : base("Settler", 3, 0, 1, 30, 50, startTile, empire, Resources.Load<Sprite>("Unit Sprites/Settler Toad"))
    {
        UnityEvent createCity = new UnityEvent();
        createCity.AddListener(CreateCity);
        base.actions.Add("Create City", createCity);
    }

    public void CreateCity()
    {
        if(base.currentTile.city == null && base.currentTile.hasCity == false && base.currentTile.type != "Water")
        {
            base.currentTile.AddCity(empire, "Mushland");
            base.Die();
        }
    }
}
