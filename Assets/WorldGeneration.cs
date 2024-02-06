using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class WorldGeneration : MonoBehaviour
{
    public int mapWidth = 10;
    public int mapHeight = 10;
    private int offsetX;
    private int offsetY;
    TerrainTile[,] tiles;
    public string[] TerrainTypes;
    private Tilemap map;
    public string GenerationType = "Four Corners";
    public Tilemap unitoverlay;
    public Tilemap buildingoverlay;
    public Tilemap overlayA;
    public Tilemap overlayB;
    public Tilemap overlayC;
    public Tilemap overlayD;
    public Tilemap overlayE;
    public Tilemap overlayF;
    public GameManager gm;
    //private Tilemap map;
    // Start is called before the first frame update
    void Start()
    {
        TerrainTile.LoadImages();
        map = GetComponent<Tilemap>();
        if(GenerationType == "Four Corners")
        {
            FourCornerGeneration();
        }
        gm.unitoverlay = unitoverlay;
        gm.buildingoverlay = buildingoverlay;
        gm.overlayA = overlayA;
        gm.overlayB = overlayB;
        gm.overlayC = overlayC;
        gm.overlayD = overlayD;
        gm.overlayE = overlayE;
        gm.overlayF = overlayF;
        gm.terrainmap = map;
        gm.tiles = tiles;
        gm.mapWidth = mapWidth;
        gm.mapHeight = mapHeight;
        AddEmpires();
    }
    // Pick certain num random tiles (always 5 tiles or area / 5 for example), pick same num of random positions (random x and y value), all tiles different

    void AddEmpires()
    {
        Empires[] empires = { new Empires("The Mushroom Kingdom"), new FlowerKingdom() };
        gm.player = empires[0];
        foreach (var empire in empires)
        {
            gm.empires.Add(empire);
            TerrainTile startTile;
            do
            {
                startTile = tiles[Random.Range(1, tiles.GetLength(0) - 1), Random.Range(1, tiles.GetLength(1) - 1)];
            } while (startTile.type == "Water");
            string name = "Test";
            if(empire != gm.player)
            {
                name = empire.cityNames[0];
            }
            startTile.AddCity(empire, name);
        }
    }

    void BaseGeneration()
    {
        offsetX = (int)(mapWidth * -0.5);
        offsetY = (int)(mapHeight * -0.5);
        tiles = new TerrainTile[mapWidth, mapHeight];
    }

    public void FourCornerGeneration()
    {
        BaseGeneration();
        string tr = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
        string br = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
        string tl = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
        string bl = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
        for(var x = 0; x < mapWidth; x++)
        {
            for (var y = 0; y < mapHeight; y++)
            {
                //Debug.Log("Reached Conditions");
                if (x <= mapWidth / 2 && y <= mapHeight / 2)
                {
                    TileCreation(bl, x, y);
                }
                if (x > mapWidth / 2 && y < mapHeight / 2)
                {
                    TileCreation(br, x, y);
                }
                if (x < mapWidth / 2 && y > mapHeight / 2)
                {
                    TileCreation(tl, x, y);
                }
                if (x >= mapWidth / 2 && y >= mapHeight / 2)
                {
                    TileCreation(tr, x, y);
                }
            }
        }
    }

    public void RandomPointsGeneration()
    {
        BaseGeneration();
        for (var i = 0; i < 5; i++)
        {
            int x = Random.Range(0, mapWidth);
            int y = Random.Range(0, mapHeight);
            string type = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
            TileCreation(type, x, y);
        }
    }
    
    void TileCreation(string type, int x, int y)
    {
        TerrainTile tile = new TerrainTile(type, x + offsetX, y + offsetY, gm, x, y);
        tiles[x, y] = tile;
        Tile t = ScriptableObject.CreateInstance<Tile>();
        t.sprite = tile.tileImage;
        map.SetTile(new Vector3Int(x + offsetX, y + offsetY, 0), t);
    }
}
