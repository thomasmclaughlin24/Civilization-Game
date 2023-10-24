using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class City
{
    private TerrainTile centralTile;
    public List<TerrainTile> OwnedTiles;
    private GameManager gm;
    public static Sprite a, b, c, d, e, f;
    public Empires empire;
    public float foodmodifier = 1f;
    public float goldmodifier = 1f;
    public float productionmodifier = 1f;
    public float culturemodifier = 1f;
    public float faithmodifier = 1f;

    public City(TerrainTile centralTile)
    {
        OwnedTiles = new List<TerrainTile>();
        this.centralTile = centralTile;
        gm = centralTile.gm;
        TerrainTile[,] tiles = gm.tiles;
        if(centralTile.y % 2 == 0)
        {
            AddTile(tiles[centralTile.gridX + 1, centralTile.gridY]);
            AddTile(tiles[centralTile.gridX, centralTile.gridY + 1]);
            AddTile(tiles[centralTile.gridX - 1, centralTile.gridY]);
            AddTile(tiles[centralTile.gridX, centralTile.gridY - 1]);
            AddTile(tiles[centralTile.gridX - 1, centralTile.gridY + 1]);
            AddTile(tiles[centralTile.gridX - 1, centralTile.gridY - 1]);
        }
        else
        {
            AddTile(tiles[centralTile.gridX, centralTile.gridY - 1]);
            AddTile(tiles[centralTile.gridX + 1, centralTile.gridY]);
            AddTile(tiles[centralTile.gridX - 1, centralTile.gridY]);
            AddTile(tiles[centralTile.gridX, centralTile.gridY + 1]);
            AddTile(tiles[centralTile.gridX + 1, centralTile.gridY + 1]);
            AddTile(tiles[centralTile.gridX + 1, centralTile.gridY - 1]);
        }
        centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y, 0), gm.buildingoverlay, TerrainTile.cityImage);
        AddTile(centralTile);
    }

    public static void LoadImages()
    {
        a = Resources.Load<Sprite>("Tile Sprites/a");
        b = Resources.Load<Sprite>("Tile Sprites/b");
        c = Resources.Load<Sprite>("Tile Sprites/c");
        d = Resources.Load<Sprite>("Tile Sprites/d");
        e = Resources.Load<Sprite>("Tile Sprites/e");
        f = Resources.Load<Sprite>("Tile Sprites/f");
    }

    private void AddTile(TerrainTile tile)
    {
        if (tile.city == this)
        {
            return;
        }
        OwnedTiles.Add(tile);
        tile.city = this;
        CityBoundaryAdjustment();
    }

    private void CityBoundaryAdjustment()
    {
        TerrainTile[,] tiles = gm.tiles;
        foreach (TerrainTile tile in OwnedTiles)
        {
            if (tile.y % 2 == 0)
            {
                if(tile.gridX < tiles.GetLength(0) - 1 && tiles[tile.gridX + 1, tile.gridY].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayA, a);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayA, null);
                }
                if(tile.gridY < tiles.GetLength(1) - 1 && tiles[tile.gridX, tile.gridY + 1].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayB, b);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayB, null);
                }
                if(tile.gridX > 0 && tiles[tile.gridX - 1, tile.gridY].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayD, d);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayD, null);
                }
                if(tile.gridY > 0 && tiles[tile.gridX, tile.gridY - 1].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayF, f);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayF, null);
                }
                if(tile.gridX > 0 && tile.gridY < tiles.GetLength(1) - 1 && tiles[tile.gridX - 1, tile.gridY + 1].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayC, c);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayC, null);
                }
                if(tile.gridX > 0 && tile.gridY > 0 && tiles[tile.gridX - 1, tile.gridY - 1].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayE, e);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayE, null);
                }
            }
            else
            {
                if(tile.gridY > 0 && tiles[tile.gridX, tile.gridY - 1].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayE, e);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayE, null);
                }
                if(tile.gridX < tiles.GetLength(0) - 1 && tiles[tile.gridX + 1, tile.gridY].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayA, a);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayA, null);
                }
                if(tile.gridX > 0 && tiles[tile.gridX - 1, tile.gridY].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayD, d);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayD, null);
                }
                if(tile.gridY < tiles.GetLength(1) - 1 && tiles[tile.gridX, tile.gridY + 1].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayC, c);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayC, null);
                }
                if(tile.gridX < tiles.GetLength(0) - 1 && tile.gridY < tiles.GetLength(1) - 1 && tiles[tile.gridX + 1, tile.gridY + 1].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayB, b);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayB, null);
                }
                if(tile.gridX < tiles.GetLength(0) - 1 && tile.gridY > 0 && tiles[tile.gridX + 1, tile.gridY - 1].city == null)
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayF, f);
                }
                else
                {
                    tile.SetTile(new Vector3Int(tile.x, tile.y, 0), gm.overlayF, null);
                }
            }
        }
    }

    internal void ExpandTile(TerrainTile tile)
    {
        TerrainTile[,] tiles = gm.tiles;
        if (tile.y % 2 == 0)
        {
            if(tile.gridX < tiles.GetLength(0) - 1)
                AddTile(tiles[tile.gridX + 1, tile.gridY]);
            if(tile.gridY < tiles.GetLength(1) - 1)
                AddTile(tiles[tile.gridX, tile.gridY + 1]);
            if(tile.gridX > 0)
                AddTile(tiles[tile.gridX - 1, tile.gridY]);
            if(tile.gridY > 0)
                AddTile(tiles[tile.gridX, tile.gridY - 1]);
            if(tile.gridX > 0 && tile.gridY < tiles.GetLength(1) - 1)
                AddTile(tiles[tile.gridX - 1, tile.gridY + 1]);
            if(tile.gridX > 0 && tile.gridY > 0)
                AddTile(tiles[tile.gridX - 1, tile.gridY - 1]);
        }
        else
        {
            if(tile.gridY > 0)
                AddTile(tiles[tile.gridX, tile.gridY - 1]);
            if(tile.gridX < tiles.GetLength(0) - 1)
                AddTile(tiles[tile.gridX + 1, tile.gridY]);
            if(tile.gridX > 0)
                AddTile(tiles[tile.gridX - 1, tile.gridY]);
            if(tile.gridY < tiles.GetLength(1) - 1)
                AddTile(tiles[tile.gridX, tile.gridY + 1]);
            if(tile.gridX < tiles.GetLength(0) - 1 && tile.gridY < tiles.GetLength(1) - 1)
                AddTile(tiles[tile.gridX + 1, tile.gridY + 1]);
            if(tile.gridX < tiles.GetLength(0) - 1 && tile.gridY > 0)
                AddTile(tiles[tile.gridX + 1, tile.gridY - 1]);
        }
    }

    public int GetFoodPerTurn()
    {
        int foodperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            foodperturn += tile.basefood;
        }
        return (int)(foodperturn + foodmodifier);
    }

    public int GetGoldPerTurn()
    {
        int goldperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            goldperturn += tile.basegold;
        }
        return (int)(goldperturn + goldmodifier);
    }

    public int GetProductionPerTurn()
    {
        int productionperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            productionperturn += tile.baseproduction;
        }
        return (int)(productionperturn + productionmodifier);
    }

    public int GetCulturePerTurn()
    {
        int cultureperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            cultureperturn += tile.baseculture;
        }
        return (int)(cultureperturn + culturemodifier);
    }

    public int GetFaithPerTurn()
    {
        int faithperturn = 0;
        foreach (TerrainTile tile in OwnedTiles)
        {
            faithperturn += tile.basefaith;
        }
        return (int)(faithperturn + faithmodifier);
    }
}
