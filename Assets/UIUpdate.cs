using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UIUpdate : MonoBehaviour
{
    public GameManager gm;
    public TextMeshProUGUI foodlabel;
    public TextMeshProUGUI goldlabel;
    public TextMeshProUGUI productionlabel;
    public TextMeshProUGUI culturelabel;
    public TextMeshProUGUI faithlabel;
    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("/GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        foodlabel.text = "Food: " + gm.player.totalfood;
        goldlabel.text = "Gold: " + gm.player.totalgold;
        productionlabel.text = "Production: " + gm.player.totalproduction;
        culturelabel.text = "Culture: " + gm.player.totalculture;
        faithlabel.text = "Faith: " + gm.player.totalfaith;
    }
}
