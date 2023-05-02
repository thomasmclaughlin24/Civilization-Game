using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class City
{
    private TerrainTile centralTile;
    public List<TerrainTile> OwnedTiles;
    private GameManager gm;
    public static Sprite abc, abf, aef, bcd, cde, def;
    
    public City(TerrainTile centralTile)
    {
        OwnedTiles = new List<TerrainTile>();
        this.centralTile = centralTile;
        gm = centralTile.gm;
        TerrainTile[,] tiles = gm.tiles;
        Debug.Log(tiles[centralTile.gridX, centralTile.gridY].type);
        if(centralTile.y % 2 == 0)
        {
            OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY]);
            SetTile(new Vector3Int(centralTile.x + 1, centralTile.y, 0), abf);
            OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY + 1]);
            SetTile(new Vector3Int(centralTile.x, centralTile.y + 1, 0), abc);
            OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY]);
            SetTile(new Vector3Int(centralTile.x - 1, centralTile.y, 0), cde);
            OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY - 1]);
            SetTile(new Vector3Int(centralTile.x, centralTile.y - 1, 0), aef);
            OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY + 1]);
            SetTile(new Vector3Int(centralTile.x - 1, centralTile.y + 1, 0), bcd);
            OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY - 1]);
            SetTile(new Vector3Int(centralTile.x - 1, centralTile.y - 1, 0), def);
        }
        else
        {
            OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY - 1]);
            SetTile(new Vector3Int(centralTile.x, centralTile.y - 1, 0), def);
            OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY]);
            SetTile(new Vector3Int(centralTile.x + 1, centralTile.y, 0), abf);
            OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY]);
            SetTile(new Vector3Int(centralTile.x - 1, centralTile.y, 0), cde);
            OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY + 1]);
            SetTile(new Vector3Int(centralTile.x, centralTile.y + 1, 0), bcd);
            OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY + 1]);
            SetTile(new Vector3Int(centralTile.x + 1, centralTile.y + 1, 0), abc);
            OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY - 1]);
            SetTile(new Vector3Int(centralTile.x + 1, centralTile.y - 1, 0), aef);
        }
        SetTile(new Vector3Int(centralTile.x, centralTile.y, 0), TerrainTile.cityImage);
    }

    public static void LoadImages()
    {
        abc = Resources.Load<Sprite>("Tile Sprites/abc");
        abf = Resources.Load<Sprite>("Tile Sprites/abf");
        aef = Resources.Load<Sprite>("Tile Sprites/aef");
        bcd = Resources.Load<Sprite>("Tile Sprites/bcd");
        cde = Resources.Load<Sprite>("Tile Sprites/cde");
        def = Resources.Load<Sprite>("Tile Sprites/def");
    }

    private void SetTile(Vector3Int position, Sprite sprite)
    {
        Tile t = ScriptableObject.CreateInstance<Tile>();
        t.sprite = sprite;
        gm.overlay.SetTile(position, t);
    }
}
