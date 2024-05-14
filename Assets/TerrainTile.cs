using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;
using System.Linq;

public class TerrainTile
{
    public string type;
    public int basefood;
    public int basegold;
    public int baseproduction;
    public int baseculture;
    public int basefaith;
    public int x;
    public int y;
    public Sprite tileImage;
    public static Sprite grassImage, waterImage, gravelImage, sandImage, desertImage, fogImage;
    public bool hasCity = false; //whether there is a city center on this tile
    public static Sprite cityImage;
    public GameManager gm;
    public Tilemap cityOverlay;
    public int gridX, gridY;
    public City city;
    public Buildings building;
    public bool isRevealed;
    public List<Units> unitList = new List<Units>();

    public TerrainTile(string type, int x, int y, GameManager gm, int gridX, int gridY, bool isRevealed = false)
    {
        this.type = type;
        this.x = x;
        this.y = y;
        this.gm = gm;
        this.cityOverlay = gm.buildingoverlay;
        this.gridX = gridX;
        this.gridY = gridY;
        this.isRevealed = isRevealed;
        if(isRevealed == false)
        {
            SetTile(gm.fogoverlay, fogImage);
        }
        if(type == "Grass")
        {
            basefood = 5;
            basegold = 1;
            baseproduction = 4;
            baseculture = 2;
            basefaith = 2;
            tileImage = grassImage;
        }
        if (type == "Water")
        {
            basefood = 4;
            basegold = 2;
            baseproduction = 3;
            baseculture = 5;
            basefaith = 5;
            tileImage = waterImage;
        }
        if (type == "Gravel")
        {
            basefood = 2;
            basegold = 5;
            baseproduction = 5;
            baseculture = 1;
            basefaith = 1;
            tileImage = gravelImage;
        }
        if (type == "Sand")
        {
            basefood = 1;
            basegold = 4;
            baseproduction = 2;
            baseculture = 4;
            basefaith = 3;
            tileImage = sandImage;
        }
        if (type == "Desert")
        {
            basefood = 3;
            basegold = 3;
            baseproduction = 1;
            baseculture = 3;
            basefaith = 4;
            tileImage = desertImage;
        }
        //Debug.Log(tileImage);
    }
    
    public static void LoadImages()
    {
        grassImage = Resources.Load<Sprite>("Tile Sprites/Grass Tile");
        waterImage = Resources.Load<Sprite>("Tile Sprites/Water Tile");
        gravelImage = Resources.Load<Sprite>("Tile Sprites/Gravel Tile");
        sandImage = Resources.Load<Sprite>("Tile Sprites/Desert Rocky Dirt Tile");
        desertImage = Resources.Load<Sprite>("Tile Sprites/Desert Tile");
        cityImage = Resources.Load<Sprite>("Tile Sprites/City Tile");
        fogImage = Resources.Load<Sprite>("Tile Sprites/Fog Tile");
    }

    public void AddCity(Empires empire, string name)
    {
        Vector3Int position = new Vector3Int(x, y, 0);
        Tile t = ScriptableObject.CreateInstance<Tile>();
        t.sprite = cityImage;
        cityOverlay.SetTile(position, t);
        hasCity = true;
        City c = new City(this, name, empire);
        city = c;
    }

    public void SetTile(Tilemap map, Sprite sprite)
    {
        Vector3Int position = new Vector3Int(x, y, 0);
        SetTile(position, map, sprite);
    }

    public void SetTile(Vector3Int position, Tilemap map, Sprite sprite)
    {
        Tile t = ScriptableObject.CreateInstance<Tile>();
        t.sprite = sprite;
        map.SetTile(position, t);
    }

    public void Reveal()
    {
        if(isRevealed == true)
        {
            return;
        }
        isRevealed = true;
        gm.fogoverlay.SetTile(new Vector3Int(x, y, 0), null);
    }

    public List<Node> GetNeighborNodes()
    {
        List<TerrainTile> neighbors = GetNeighbors();
        List<Node> neighborNodes = new List<Node>();
        foreach(TerrainTile n in neighbors)
        {
            neighborNodes.Add(new Node(n));
        }
        return neighborNodes;
    }

    public List<TerrainTile> GetNeighbors()
    {
        TerrainTile[,] tiles = gm.tiles;
        List<TerrainTile> neighbors = new List<TerrainTile>();
        if (y % 2 == 0)
        {
            if (gridX < tiles.GetLength(0) - 1)
                neighbors.Add(tiles[gridX + 1, gridY]);
            if (gridY < tiles.GetLength(1) - 1)
                neighbors.Add(tiles[gridX, gridY + 1]);
            if (gridX > 0)
                neighbors.Add(tiles[gridX - 1, gridY]);
            if (gridY > 0)
                neighbors.Add(tiles[gridX, gridY - 1]);
            if (gridX > 0 && gridY < tiles.GetLength(1) - 1)
                neighbors.Add(tiles[gridX - 1, gridY + 1]);
            if (gridX > 0 && gridY > 0)
                neighbors.Add(tiles[gridX - 1, gridY - 1]);
        }
        else
        {
            if (gridY > 0)
                neighbors.Add(tiles[gridX, gridY - 1]);
            if (gridX < tiles.GetLength(0) - 1)
                neighbors.Add(tiles[gridX + 1, gridY]);
            if (gridX > 0)
                neighbors.Add(tiles[gridX - 1, gridY]);
            if (gridY < tiles.GetLength(1) - 1)
                neighbors.Add(tiles[gridX, gridY + 1]);
            if (gridX < tiles.GetLength(0) - 1 && gridY < tiles.GetLength(1) - 1)
                neighbors.Add(tiles[gridX + 1, gridY + 1]);
            if (gridX < tiles.GetLength(0) - 1 && gridY > 0)
                neighbors.Add(tiles[gridX + 1, gridY - 1]);
        }
        return neighbors;
    }

    public void RevealAround()
    {
        Reveal();
        List<TerrainTile> neighbors = GetNeighbors();
        foreach(TerrainTile tile in neighbors)
        {
            tile.Reveal();
        }
    }

    public static int GetDistance(Node node1, Node node2)
    {
        int dx = node2.tile.x - node1.tile.x;
        int dy = node2.tile.y - node1.tile.y;
        int absx = Mathf.Abs(dx);
        int absy = Mathf.Abs(dy);

        if((dx < 0) ^ (node1.tile.y % 2 == 1))
        {
            absx = Mathf.Max(0, absx - (absy + 1) / 2);
        }
        else
        {
            absx = Mathf.Max(0, absx - absy / 2);
        }
        return absx + absy;
    }

    public List<Node> FindPathTo(TerrainTile target)
    {
        
        var height = gm.tiles.GetLength(1);
        var width = gm.tiles.GetLength(0);
        List<Node> open = new List<Node>();
        List<Node> closed = new List<Node>();
        Node startNode = new Node(this);
        Node endNode = new Node(target);

        open.Add(startNode);
        while(open.Count > 0)
        {
            Node currentNode = open[0];
            for(var i=1; i<open.Count; i++)
            {
                if(open[i].fcost < currentNode.fcost || open[i].fcost == currentNode.fcost && open[i].hcost < currentNode.hcost)
                {
                    currentNode = open[i];
                }
            }
            open.Remove(currentNode);
            closed.Add(currentNode);
            if (currentNode.Equals(endNode))
            {
                List<Node> path = new List<Node>();
                while(currentNode != startNode)
                {
                    path.Insert(0, currentNode);
                    currentNode = currentNode.parent;
                }
                return path; //Retrace path
            }
            foreach(Node neighbor in currentNode.tile.GetNeighborNodes())
            {
                if(closed.Any(n => n.tile == neighbor.tile))
                {
                    continue;
                }
                int neighborMoveCost = currentNode.gcost + 1;
                if(neighborMoveCost < neighbor.gcost || !open.Any(n => n.tile == neighbor.tile))
                {
                    neighbor.gcost = neighborMoveCost;
                    neighbor.hcost = GetDistance(neighbor, endNode);
                    neighbor.parent = currentNode;
                    if(!open.Any(n => n.tile == neighbor.tile))
                    {
                        open.Add(neighbor);
                    }
                }
            }
        }
        return null;
    }
}

public class Node
{
    public int fcost = 10000;
    public int gcost = 10000;
    public int hcost = 10000;
    public Node parent;
    public TerrainTile tile;
    public Node(TerrainTile tile)
    {
        this.tile = tile;
    }

    public override bool Equals(object obj)
    {
        var other = obj as Node;
        if(other == null)
        {
            return false;
        }
        return this.tile.Equals(other.tile);
    }
}
