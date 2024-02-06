using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class CityPanel : MonoBehaviour
{
    public City city;
    private GameManager gm;
    public GameObject cityname;
    public GameObject foodperturn;
    public GameObject goldperturn;
    public GameObject productionperturn;
    public GameObject cultureperturn;
    public GameObject faithperturn;
    public GameObject cityNameInput;
    public GameObject empireName;

    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        UpdateText();
    }

    public void UpdateText()
    {
        if (city != null)
        {
            cityname.GetComponent<TextMeshProUGUI>().text = city.name;
            foodperturn.GetComponent<TextMeshProUGUI>().text = "Food Per Turn: " + city.GetFoodPerTurn().ToString();
            goldperturn.GetComponent<TextMeshProUGUI>().text = "Gold Per Turn: " + city.GetGoldPerTurn().ToString();
            productionperturn.GetComponent<TextMeshProUGUI>().text = "Production Per Turn: " + city.GetProductionPerTurn().ToString();
            cultureperturn.GetComponent<TextMeshProUGUI>().text = "Culture Per Turn: " + city.GetCulturePerTurn().ToString();
            faithperturn.GetComponent<TextMeshProUGUI>().text = "Faith Per Turn: " + city.GetFaithPerTurn().ToString();
            if(city.empire == gm.player && empireName != null)
            {
                empireName.GetComponent<TextMeshProUGUI>().text = "This City Belongs to " + city.empire.empirename;
            }
        }
    }
}
