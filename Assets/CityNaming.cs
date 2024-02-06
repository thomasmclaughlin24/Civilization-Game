using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CityNaming : MonoBehaviour
{
    public GameObject CityNameInput;
    public GameObject CityName;
    public GameManager gm;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void CloseCityNaming()
    {
        CityName.SetActive(false);
        gm.player.cities[0].name = GetComponent<TMP_InputField>().text;
    }
}
