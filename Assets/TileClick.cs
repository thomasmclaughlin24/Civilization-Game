using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using System;

public class TileClick : MonoBehaviour
{
    private Vector2 WorldPoint;
    public GameManager gm;
    public CityPanel cityPanel;
    public BuildingsPanel buildingsPanel;
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
            ProcessClick();
        }
    }

    void ProcessClick()
    {
        try 
        {
            TerrainTile t = gm.tiles[gm.hit.x + gm.mapWidth / 2, gm.hit.y + gm.mapHeight / 2];
            if (t.hasCity == true)
            {
                cityPanel.city = t.city;
                cityPanel.UpdateText();
                cityPanel.gameObject.GetComponent<ClickPanel>().Open();
                buildingsPanel.city = t.city;
            }
        }
        catch(IndexOutOfRangeException e)
        {
            //this exception is allowed
        }
    }
}
