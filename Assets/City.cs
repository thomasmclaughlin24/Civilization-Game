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
    public Empires empire;
    
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
            centralTile.SetTile(new Vector3Int(centralTile.x + 1, centralTile.y, 0), gm.overlay, abf);
            OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY + 1]);
            centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y + 1, 0), gm.overlay, abc);
            OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY]);
            centralTile.SetTile(new Vector3Int(centralTile.x - 1, centralTile.y, 0), gm.overlay, cde);
            OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY - 1]);
            centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y - 1, 0), gm.overlay, aef);
            OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY + 1]);
            centralTile.SetTile(new Vector3Int(centralTile.x - 1, centralTile.y + 1, 0), gm.overlay, bcd);
            OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY - 1]);
            centralTile.SetTile(new Vector3Int(centralTile.x - 1, centralTile.y - 1, 0), gm.overlay, def);
        }
        else
        {
            OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY - 1]);
            centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y - 1, 0), gm.overlay, def);
            OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY]);
            centralTile.SetTile(new Vector3Int(centralTile.x + 1, centralTile.y, 0), gm.overlay, abf);
            OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY]);
            centralTile.SetTile(new Vector3Int(centralTile.x - 1, centralTile.y, 0), gm.overlay, cde);
            OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY + 1]);
            centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y + 1, 0), gm.overlay, bcd);
            OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY + 1]);
            centralTile.SetTile(new Vector3Int(centralTile.x + 1, centralTile.y + 1, 0), gm.overlay, abc);
            OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY - 1]);
            centralTile.SetTile(new Vector3Int(centralTile.x + 1, centralTile.y - 1, 0), gm.overlay, aef);
        }
        centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y, 0), gm.overlay, TerrainTile.cityImage);
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

    public int GetFoodPerTurn()
    {
        int foodperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            foodperturn += tile.basefood;
        }
        return foodperturn;
    }

    public int GetGoldPerTurn()
    {
        int goldperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            goldperturn += tile.basegold;
        }
        return goldperturn;
    }

    public int GetProductionPerTurn()
    {
        int productionperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            productionperturn += tile.baseproduction;
        }
        return productionperturn;
    }

    public int GetCulturePerTurn()
    {
        int cultureperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            cultureperturn += tile.baseculture;
        }
        return cultureperturn;
    }

    public int GetFaithPerTurn()
    {
        int faithperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            faithperturn += tile.basefaith;
        }
        return faithperturn;
    }
}
