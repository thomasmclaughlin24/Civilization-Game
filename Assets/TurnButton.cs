using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnButton : MonoBehaviour
{
    private GameManager gm;
    public AudioSource nextturnmusic;
    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("/GameManager").GetComponent<GameManager>();
    }

    public void NextTurn()
    {
        foreach(Empires e in gm.empires)
        {
            foreach(City c in e.cities)
            {
                foreach(TerrainTile tile in c.OwnedTiles)
                {
                    e.totalfood += tile.basefood;
                    e.totalgold += tile.basegold;
                    e.totalproduction += tile.baseproduction;
                    e.totalculture += tile.baseculture;
                    e.totalfaith += tile.basefaith;
                }
            }
            Debug.Log(e.totalfood);
        }
        nextturnmusic.Play();
    }
}
