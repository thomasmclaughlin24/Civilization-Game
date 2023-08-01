using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class AddBuilding : MonoBehaviour
{
    public City city;
    public Buildings buildings;
    public static Sprite buildingImage;
    public GameManager gm;

    // Start is called before the first frame update
    void Start()
    {
        buildingImage = Resources.Load<Sprite>("Tile Sprites/Barn");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void AddBuildings()
    {
        int rand = (int)Random.Range(0, city.OwnedTiles.Count- 1);
        Debug.Log(rand);
        TerrainTile buildingtile = city.OwnedTiles[rand];
        Vector3Int position = new Vector3Int(buildingtile.x, buildingtile.y, 0);
        Tile t = ScriptableObject.CreateInstance<Tile>();
        t.sprite = buildingImage;
        gm.overlay.SetTile(position, t);
    }
}
