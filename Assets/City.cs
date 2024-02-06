using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class City
{
    internal TerrainTile centralTile;
    public List<TerrainTile> OwnedTiles;
    private GameManager gm;
    public Sprite a, b, c, d, e, f;
    public Empires empire;
    public float foodmodifier = 1f;
    public float goldmodifier = 1f;
    public float productionmodifier = 1f;
    public float culturemodifier = 1f;
    public float faithmodifier = 1f;
    public string name;

    public City(TerrainTile centralTile, string name, Empires empire)
    {
        this.name = name;
        this.empire = empire;
        empire.cities.Add(this);
        OwnedTiles = new List<TerrainTile>();
        this.centralTile = centralTile;
        gm = centralTile.gm;
        TerrainTile[,] tiles = gm.tiles;
        LoadImages();
        
        if (centralTile.y % 2 == 0)
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

    private void LoadImages()
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
        if(empire == gm.player)
        {
            tile.RevealAround();
        }
        tile.city = this;
        CityBoundaryAdjustment();
    }

    private void CityBoundaryAdjustment()
    {
        TerrainTile[,] tiles = gm.tiles;
        foreach (TerrainTile tile in OwnedTiles)
        {
            Vector3Int position = new Vector3Int(tile.x, tile.y, 0);
            if (tile.y % 2 == 0)
            {
                if (tile.gridX < tiles.GetLength(0) - 1 && (tiles[tile.gridX + 1, tile.gridY].city == null || tiles[tile.gridX + 1, tile.gridY].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayA, a);
                    gm.overlayA.SetTileFlags(position, TileFlags.None);
                    gm.overlayA.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayA, null);
                }
                if(tile.gridY < tiles.GetLength(1) - 1 && (tiles[tile.gridX, tile.gridY + 1].city == null || tiles[tile.gridX, tile.gridY + 1].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayB, b);
                    gm.overlayB.SetTileFlags(position, TileFlags.None);
                    gm.overlayB.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayB, null);
                }
                if(tile.gridX > 0 && (tiles[tile.gridX - 1, tile.gridY].city == null || tiles[tile.gridX - 1, tile.gridY].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayD, d);
                    gm.overlayD.SetTileFlags(position, TileFlags.None);
                    gm.overlayD.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayD, null);
                }
                if(tile.gridY > 0 && (tiles[tile.gridX, tile.gridY - 1].city == null || tiles[tile.gridX, tile.gridY - 1].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayF, f);
                    gm.overlayF.SetTileFlags(position, TileFlags.None);
                    gm.overlayF.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayF, null);
                }
                if(tile.gridX > 0 && tile.gridY < tiles.GetLength(1) - 1 && (tiles[tile.gridX - 1, tile.gridY + 1].city == null || tiles[tile.gridX - 1, tile.gridY + 1].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayC, c);
                    gm.overlayC.SetTileFlags(position, TileFlags.None);
                    gm.overlayC.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayC, null);
                }
                if(tile.gridX > 0 && tile.gridY > 0 && (tiles[tile.gridX - 1, tile.gridY - 1].city == null || tiles[tile.gridX - 1, tile.gridY - 1].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayE, e);
                    gm.overlayE.SetTileFlags(position, TileFlags.None);
                    gm.overlayE.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayE, null);
                }
            }
            else
            {
                if(tile.gridY > 0 && (tiles[tile.gridX, tile.gridY - 1].city == null || tiles[tile.gridX, tile.gridY - 1].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayE, e);
                    gm.overlayE.SetTileFlags(position, TileFlags.None);
                    gm.overlayE.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayE, null);
                }
                if(tile.gridX < tiles.GetLength(0) - 1 && (tiles[tile.gridX + 1, tile.gridY].city == null || tiles[tile.gridX + 1, tile.gridY].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayA, a);
                    gm.overlayA.SetTileFlags(position, TileFlags.None);
                    gm.overlayA.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayA, null);
                }
                if(tile.gridX > 0 && (tiles[tile.gridX - 1, tile.gridY].city == null || tiles[tile.gridX - 1, tile.gridY].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayD, d);
                    gm.overlayD.SetTileFlags(position, TileFlags.None);
                    gm.overlayD.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayD, null);
                }
                if(tile.gridY < tiles.GetLength(1) - 1 && (tiles[tile.gridX, tile.gridY + 1].city == null || tiles[tile.gridX, tile.gridY + 1].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayC, c);
                    gm.overlayC.SetTileFlags(position, TileFlags.None);
                    gm.overlayC.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayC, null);
                }
                if(tile.gridX < tiles.GetLength(0) - 1 && tile.gridY < tiles.GetLength(1) - 1 && (tiles[tile.gridX + 1, tile.gridY + 1].city == null || tiles[tile.gridX + 1, tile.gridY + 1].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayB, b);
                    gm.overlayB.SetTileFlags(position, TileFlags.None);
                    gm.overlayB.SetColor(new Vector3Int(tile.x, tile.y, 0), empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayB, null);
                }
                if(tile.gridX < tiles.GetLength(0) - 1 && tile.gridY > 0 && (tiles[tile.gridX + 1, tile.gridY - 1].city == null || tiles[tile.gridX + 1, tile.gridY - 1].city.empire != empire))
                {
                    tile.SetTile(position, gm.overlayF, f);
                    gm.overlayF.SetTileFlags(position, TileFlags.None);
                    gm.overlayF.SetColor(position, empire.borderColor);
                }
                else
                {
                    tile.SetTile(position, gm.overlayF, null);
                }
            }
        }
    }

    internal void ExpandTile(TerrainTile tile)
    {
        TerrainTile[,] tiles = gm.tiles;
        if (tile.y % 2 == 0)
        {
            if(tile.gridX < tiles.GetLength(0) - 1 && tiles[tile.gridX + 1, tile.gridY].city == null)
                AddTile(tiles[tile.gridX + 1, tile.gridY]);
            if(tile.gridY < tiles.GetLength(1) - 1 && tiles[tile.gridX, tile.gridY + 1].city == null)
                AddTile(tiles[tile.gridX, tile.gridY + 1]);
            if(tile.gridX > 0 && tiles[tile.gridX - 1, tile.gridY].city == null)
                AddTile(tiles[tile.gridX - 1, tile.gridY]);
            if(tile.gridY > 0 && tiles[tile.gridX, tile.gridY - 1].city == null)
                AddTile(tiles[tile.gridX, tile.gridY - 1]);
            if(tile.gridX > 0 && tile.gridY < tiles.GetLength(1) - 1 && tiles[tile.gridX - 1, tile.gridY + 1].city == null)
                AddTile(tiles[tile.gridX - 1, tile.gridY + 1]);
            if(tile.gridX > 0 && tile.gridY > 0 && tiles[tile.gridX - 1, tile.gridY - 1].city == null)
                AddTile(tiles[tile.gridX - 1, tile.gridY - 1]);
        }
        else
        {
            if(tile.gridY > 0 && tiles[tile.gridX, tile.gridY - 1].city == null)
                AddTile(tiles[tile.gridX, tile.gridY - 1]);
            if(tile.gridX < tiles.GetLength(0) - 1 && tiles[tile.gridX + 1, tile.gridY].city == null)
                AddTile(tiles[tile.gridX + 1, tile.gridY]);
            if(tile.gridX > 0 && tiles[tile.gridX - 1, tile.gridY].city == null)
                AddTile(tiles[tile.gridX - 1, tile.gridY]);
            if(tile.gridY < tiles.GetLength(1) - 1 && tiles[tile.gridX, tile.gridY + 1].city == null)
                AddTile(tiles[tile.gridX, tile.gridY + 1]);
            if(tile.gridX < tiles.GetLength(0) - 1 && tile.gridY < tiles.GetLength(1) - 1 && tiles[tile.gridX + 1, tile.gridY + 1].city == null)
                AddTile(tiles[tile.gridX + 1, tile.gridY + 1]);
            if(tile.gridX < tiles.GetLength(0) - 1 && tile.gridY > 0 && tiles[tile.gridX + 1, tile.gridY - 1].city == null)
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
