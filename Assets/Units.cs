using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Units
{
    public int moveSpeed = 1;
    public int strength = 1;
    public int HP = 1;
    public string name = "Unit";
    public bool canAttack = true;
    internal GameManager gm;
    internal TerrainTile currentTile;
    public Empires empire;
    public Sprite unitImage;
    public int foodcost;
    public int culturecost;
    public Dictionary<string, UnityEvent> actions = new Dictionary<string, UnityEvent>();

    public Units(string name, int moveSpeed, int strength, int HP, int foodcost, int culturecost, TerrainTile startTile, Empires empire, Sprite unitImage)
    {
        this.moveSpeed = moveSpeed;
        this.strength = strength;
        this.HP = HP;
        this.foodcost = foodcost;
        this.culturecost = culturecost;
        this.name = name;
        this.currentTile = startTile;
        this.empire = empire;
        if(moveSpeed > 0)
        {
            UnityEvent move = new UnityEvent();
            move.AddListener(startMove);
            this.actions.Add("Move", move);
        }
        if(empire != null)
        {
            empire.units.Add(this);
        }
        this.unitImage = unitImage;
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
        if (startTile != null)
        {
            startTile.unitList.Add(this);
            startTile.SetTile(gm.unitoverlay, unitImage);
        }
    }

    public static Units MakeUnit(string name, TerrainTile startTile, Empires empire)
    {
        if (name == "Settler")
        {
            return new Settler(startTile, empire);
        }
        if (name == "Builder")
        {
            return new Builder(startTile, empire);
        }
        if (name == "Military")
        {
            return new Military(startTile, empire);
        }
        Debug.LogError("Error: Unknown Unit " + name);
        return new Units("ERROR", 0, 0, 0, 0, 0, null, null, null);
    }

    public void SetTile(TerrainTile moveToTile)
    {
        if(currentTile != null)
        {
            currentTile.SetTile(gm.unitoverlay, null);
            currentTile.unitList.Remove(this);
        }
        currentTile = moveToTile;
        currentTile.SetTile(gm.unitoverlay, this.unitImage);
        currentTile.unitList.Add(this);
    }

    public void startMove()
    {
        //tell GameManager to wait for TileClick
        //after tile is clicked, GameManager runs Move with tile that was clicked passed in
    }

    public void Move(TerrainTile moveToTile)
    {
        SetTile(moveToTile);
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
