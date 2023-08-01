using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class exitbutton : MonoBehaviour
{
    public GameObject closedObject;
    public UnityEvent OnExit;
    public bool useCustomAction = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Exit()
    {
        if (useCustomAction)
        {
            OnExit.Invoke();
        }
        else
        {
            closedObject.SetActive(false);
        }
    }
}
