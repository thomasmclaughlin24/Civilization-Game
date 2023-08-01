using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingsOpen : MonoBehaviour
{
    public ClickPanel BuildingsPanel;
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
        BuildingsPanel.Open();
    }
}
