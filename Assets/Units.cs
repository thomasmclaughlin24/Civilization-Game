using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Units
{
    public int moveSpeed = 1;
    public int strength = 1;
    public int HP = 1;
    public string name = "Unit";
    public bool canAttack = true;
    private GameManager gm;
    private TerrainTile currentTile;

    public Units(int moveSpeed, int strength, int HP, string name, bool canAttack, TerrainTile startTile)
    {
        this.moveSpeed = moveSpeed;
        this.strength = strength;
        this.HP = HP;
        this.name = name;
        this.canAttack = canAttack;
        this.currentTile = startTile;
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
        startTile.SetTile(gm.unitoverlay, TerrainTile.cityImage);
    }

    public void Move(TerrainTile moveToTile)
    {
        currentTile = moveToTile;
    }

    public void Attack(Units target)
    {
        target.Defend(this, strength);
    }

    public void Defend(Units attacker, int damage)
    {
        HP -= damage;
        if(HP <= 0)
        {
            Die();
        }
    }

    public void Die()
    {
        //TODO: Stubbed Function
    }
}
