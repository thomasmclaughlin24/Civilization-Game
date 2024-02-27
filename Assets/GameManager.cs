using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.Events;

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
    public Tilemap fogoverlay;
    public TerrainTile[,] tiles;
    public List<Empires> empires = new List<Empires>();
    public Empires player;
    public int mapHeight;
    public int mapWidth;
    public Vector3Int hit;
    public List<string> buildings;
    public string productionMode = "Production";
    public string unitProductionMode = "Food";
    public GameObject UIPanel;
    public GameObject unitIconPanel;
    public TerrainTile selectedTile;
    public UnityEvent onTileClicked = new UnityEvent();

    // Start is called before the first frame update
    void Start()
    {
        buildings = new List<string>() { "Barn", "Market", "Mine", "Monument", "Temple", "World Wonder"};
        CircleMenu.MakeCircleMenu(new List<MenuButton>() { new MenuButton("Move", null), new MenuButton("Attack", null), new MenuButton("Attack", null), new MenuButton("Attack", null), new MenuButton("Die", null) }, UIPanel);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
