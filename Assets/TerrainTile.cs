using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class TerrainTile
{
    public string type;
    public int basefood;
    public int basegold;
    public int baseproduction;
    public int baseculture;
    public int basefaith;
    public int x;
    public int y;
    public Sprite tileImage;
    public static Sprite grassImage, waterImage, gravelImage, sandImage, desertImage;
    public bool hasCity = false;
    public static Sprite cityImage;
    public GameManager gm;
    public int gridX, gridY;

    public TerrainTile(string type, int x, int y, GameManager gm, int gridX, int gridY)
    {
        this.type = type;
        this.x = x;
        this.y = y;
        this.gm = gm;
        this.gridX = gridX;
        this.gridY = gridY;
        if(type == "Grass")
        {
            basefood = 5;
            basegold = 3;
            baseproduction = 2;
            baseculture = 3;
            basefaith = 2;
            tileImage = grassImage;
        }
        if (type == "Water")
        {
            basefood = 4;
            basegold = 2;
            baseproduction = 3;
            baseculture = 5;
            basefaith = 4;
            tileImage = waterImage;
        }
        if (type == "Gravel")
        {
            basefood = 2;
            basegold = 5;
            baseproduction = 4;
            baseculture = 2;
            basefaith = 3;
            tileImage = gravelImage;
        }
        if (type == "Sand")
        {
            basefood = 1;
            basegold = 4;
            baseproduction = 2;
            baseculture = 4;
            basefaith = 4;
            tileImage = sandImage;
        }
        if (type == "Desert")
        {
            basefood = 1;
            basegold = 3;
            baseproduction = 1;
            baseculture = 2;
            basefaith = 4;
            tileImage = desertImage;
        }
        //Debug.Log(tileImage);
    }
    
    public static void LoadImages()
    {
        grassImage = Resources.Load<Sprite>("Tile Sprites/Grass Tile");
        waterImage = Resources.Load<Sprite>("Tile Sprites/Water Tile");
        gravelImage = Resources.Load<Sprite>("Tile Sprites/Gravel Tile");
        sandImage = Resources.Load<Sprite>("Tile Sprites/Desert Rocky Dirt Tile");
        desertImage = Resources.Load<Sprite>("Tile Sprites/Desert Tile");
        cityImage = Resources.Load<Sprite>("Tile Sprites/City Tile");
    }

    public void AddCity(Tilemap overlay, Empires empire)
    {
        Vector3Int position = new Vector3Int(x, y, 0);
        Tile t = ScriptableObject.CreateInstance<Tile>();
        t.sprite = cityImage;
        overlay.SetTile(position, t);
        hasCity = true;
        City c = new City(this);
        empire.cities.Add(c);
    }
}
