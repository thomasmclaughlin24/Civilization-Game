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
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    public void NextTurn()
    {
        foreach(Empires e in gm.empires)
        {
            foreach(City c in e.cities)
            {
                e.totalfood += c.GetFoodPerTurn();
                e.totalgold += c.GetGoldPerTurn();
                e.totalproduction += c.GetProductionPerTurn();
                e.totalculture += c.GetCulturePerTurn();
                e.totalfaith += c.GetFaithPerTurn();
            }
            foreach (Units unit in e.units)
            {
                unit.ProcessTurn();
                Debug.Log("Processed Unit Turn");
            }
            if (e != gm.player)
            {
                e.TakeTurn(gm);
            }
            Debug.Log(e.empirename + " " + e.totalfood.ToString());
        }
        nextturnmusic.Play();
    }
}
