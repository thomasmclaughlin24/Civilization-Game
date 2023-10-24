using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GameManager : MonoBehaviour
{
    public Tilemap terrainmap;
    public Tilemap overlayA;
    public Tilemap overlayB;
    public Tilemap overlayC;
    public Tilemap overlayD;
    public Tilemap overlayE;
    public Tilemap overlayF;
    public Tilemap unitoverlay;
    public Tilemap buildingoverlay;
    public TerrainTile[,] tiles;
    public List<Empires> empires = new List<Empires>();
    public Empires player;
    public int mapHeight;
    public int mapWidth;
    public Vector3Int hit;
    public List<Buildings> buildings = new List<Buildings>();
    public string productionMode = "Production";
    // Start is called before the first frame update
    void Start()
    {
        //buildings.Add(new Buildings());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
