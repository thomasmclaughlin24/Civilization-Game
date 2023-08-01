using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class TileClick : MonoBehaviour
{
    private Vector2 WorldPoint;
    public GameManager gm;
    public CityPanel cityPanel;
    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            WorldPoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            gm.hit = gm.terrainmap.WorldToCell(WorldPoint);
            Debug.Log(gm.hit);
            ProcessClick();
        }
    }

    void ProcessClick()
    {
        TerrainTile t = gm.tiles[gm.hit.x + gm.mapWidth / 2, gm.hit.y + gm.mapHeight / 2];
        if (t.hasCity == true)
        {
            cityPanel.city = t.city;
            cityPanel.UpdateText();
            cityPanel.gameObject.GetComponent<ClickPanel>().Open();
        }
    }
}
