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
    private TerrainTile startTile;
    public Tilemap overlay;
    public GameManager gm;
    //private Tilemap map;
    // Start is called before the first frame update
    void Start()
    {
        TerrainTile.LoadImages();
        City.LoadImages();
        map = GetComponent<Tilemap>();
        if(GenerationType == "Four Corners")
        {
            FourCornerGeneration();
        }
        gm.overlay = overlay;
        gm.terrainmap = map;
        gm.tiles = tiles;
        startTile = tiles[Random.Range(1, tiles.GetLength(0) - 1), Random.Range(1, tiles.GetLength(1) - 1)];
        while(startTile.type == "Water")
        {
            startTile = tiles[Random.Range(1, tiles.GetLength(0) - 1), Random.Range(1, tiles.GetLength(1) - 1)];
        }
        Empires e = new Empires("America");
        startTile.AddCity(overlay, e);
        gm.empires.Add(e);
        gm.player = e;
        Debug.Log(startTile.x + ", " + startTile.y + ", " + startTile.type);
        gm.mapWidth = mapWidth;
        gm.mapHeight = mapHeight;
    }
    // Pick certain num random tiles (always 5 tiles or area / 5 for example), pick same num of random positions (random x and y value), all tiles different
    // Update is called once per frame
    void Update()
    {
        
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
