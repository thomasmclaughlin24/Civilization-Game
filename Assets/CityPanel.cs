using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class CityPanel : MonoBehaviour
{
    public City city;
    public GameObject cityname;
    public GameObject foodperturn;
    public GameObject goldperturn;
    public GameObject productionperturn;
    public GameObject cultureperturn;
    public GameObject faithperturn;
    public GameObject cityNameInput;

    // Start is called before the first frame update
    void Start()
    {
        
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
            cityname.GetComponent<TextMeshProUGUI>().text = cityNameInput.GetComponent<TextMeshProUGUI>().text;
            foodperturn.GetComponent<TextMeshProUGUI>().text = "Food Per Turn: " + city.GetFoodPerTurn().ToString();
            goldperturn.GetComponent<TextMeshProUGUI>().text = "Gold Per Turn: " + city.GetGoldPerTurn().ToString();
            productionperturn.GetComponent<TextMeshProUGUI>().text = "Production Per Turn: " + city.GetProductionPerTurn().ToString();
            cultureperturn.GetComponent<TextMeshProUGUI>().text = "Culture Per Turn: " + city.GetCulturePerTurn().ToString();
            faithperturn.GetComponent<TextMeshProUGUI>().text = "Faith Per Turn: " + city.GetFaithPerTurn().ToString();
        }
    }
}
