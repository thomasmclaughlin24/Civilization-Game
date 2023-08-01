using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class clickanddrag : MonoBehaviour
{
    public float dragSpeed = 0.1f;
    private Vector3 dragStartPos;
    private Vector3 dragDistance;
    private bool dragging = false;
    private GameManager gm;
    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 mousepos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        if (Input.GetMouseButton(0))
        {     
            if(dragging == false)
            {
                dragging = true;
                dragStartPos = mousepos;
            }
            dragDistance = mousepos - Camera.main.transform.position;
        }
        else
        {
            dragging = false;
        }
        if(dragging == true)
        {
            float moveX = Camera.main.transform.position.x;
            float moveY = Camera.main.transform.position.y;
            if((Camera.main.transform.position.y >= -gm.mapWidth / 2 && dragDistance.y >= 0) || (Camera.main.transform.position.y <= gm.mapWidth / 2 && dragDistance.y <= 0))
            {
                moveY = dragStartPos.y - dragDistance.y;
            }
            if ((Camera.main.transform.position.x >= -gm.mapHeight * 0.5 * 0.75 && dragDistance.x >= 0) || (Camera.main.transform.position.x <= gm.mapHeight * 0.5 * 0.75 && dragDistance.x <= 0))
            {
                moveX = dragStartPos.x - dragDistance.x;
            }
            Camera.main.transform.position = new Vector3(moveX, moveY, -10);
        }
    }
}
