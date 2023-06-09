using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Video;

public class LoadTitle : MonoBehaviour
{
    public VideoPlayer IntroVideo;
    public GameObject titlescreen;
    public VideoPlayer TitleBG;
    // Start is called before the first frame update
    void Start()
    {
        IntroVideo.loopPointReached += OnFinished;
    }

    // Update is called once per frame
    private void OnFinished(VideoPlayer vp)
    {
        titlescreen.SetActive(true);
        TitleBG.Play();
    }
}
