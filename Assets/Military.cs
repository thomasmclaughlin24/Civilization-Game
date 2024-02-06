using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Military : Units
{
    public Military(TerrainTile startTile, Empires empire) : base("Military", 1, 1, 1, 100, 50, startTile, empire, Resources.Load<Sprite>("Unit Sprites/Military Toad"))
    {
        UnityEvent attack = new UnityEvent();
        attack.AddListener(StartAttack);
        base.actions.Add("Attack", attack);
    }

    public void Attack(Units target)
    {
        target.Defend(this, strength);
    }

    public void StartAttack()
    {
        //Wait for TileClick
    }
}
