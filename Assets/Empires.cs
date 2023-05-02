using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Empires
{
    public string empirename;
    public List<City> cities = new List<City>();
    public int totalfood = 0;
    public int totalgold = 0;
    public int totalproduction = 0;
    public int totalculture = 0;
    public int totalfaith = 0;

    public Empires(string empirename)
    {
        this.empirename = empirename;
    }
}
