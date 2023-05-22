using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RestartButtonScript : MonoBehaviour

{
    public GameObject closeButton;

    void Awake()
    {
        this.closeButton = closeButton;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void ClickToRestart()
    {
        SceneManager.LoadScene("DartScene", LoadSceneMode.Single);
    }
    public void CloseMenu()
    {
        closeButton.SetActive(false);
    }
}
