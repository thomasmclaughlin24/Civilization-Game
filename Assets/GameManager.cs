using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GameManager : MonoBehaviour
{
    public Tilemap terrainmap;
    public Tilemap overlay;
    public Tilemap unitoverlay;
    public TerrainTile[,] tiles;
    public List<Empires> empires = new List<Empires>();
    public Empires player;
    public int mapHeight;
    public int mapWidth;
    public Vector3Int hit;
    public List<Buildings> buildings = new List<Buildings>();
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
