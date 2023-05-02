using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GameManager : MonoBehaviour
{
    public Tilemap terrainmap;
    public Tilemap overlay;
    public TerrainTile[,] tiles;
    public List<Empires> empires = new List<Empires>();
    public Empires player;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
