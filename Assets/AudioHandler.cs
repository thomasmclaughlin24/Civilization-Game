using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioHandler : MonoBehaviour
{
    public AudioSource maintheme;
    public AudioClip mainthemeclip;
    // Start is called before the first frame update
    void Start()
    {
        maintheme.Play();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
