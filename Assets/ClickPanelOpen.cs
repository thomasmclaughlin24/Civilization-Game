using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClickPanelOpen : MonoBehaviour
{
    public ClickPanel clickPanel;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnClick()
    {
        clickPanel.Open();
    }
}
