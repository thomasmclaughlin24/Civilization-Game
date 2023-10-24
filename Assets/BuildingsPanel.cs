using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BuildingsPanel : ClickPanel
{
    public GameObject totalproduction;
    public GameObject totalgold;
    public GameObject totalfaith;
    public City city;

    // Update is called once per frame
    void Update()
    {
        if(city != null)
        {
            totalproduction.GetComponent<TextMeshProUGUI>().text = "Total Production: " + city.empire.totalproduction.ToString();
            totalgold.GetComponent<TextMeshProUGUI>().text = "Total Gold: " + city.empire.totalgold.ToString();
            totalfaith.GetComponent<TextMeshProUGUI>().text = "Total Faith: " + city.empire.totalfaith.ToString();
        }
    }
}
