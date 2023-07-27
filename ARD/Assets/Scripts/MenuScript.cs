using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuScript : MonoBehaviour

{
    public GameObject menu;
    public GameObject toggleOff;
    public GameObject toggleOn;

    void Awake()
    {
        this.menu = menu;
        this.toggleOff = toggleOff;
        this.toggleOn = toggleOn;
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
        Scene currentScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(currentScene.name, LoadSceneMode.Single);
    }

    public void CloseMenu()
    {
        toggleOn.SetActive(false);
        toggleOff.SetActive(true);
        menu.SetActive(false);
    }

    public void ToogleMenu()
    {
        if (toggleOff.activeSelf == true)
        {
            menu.SetActive(true);
        }

        if(toggleOn.activeSelf == true)
        {
            menu.SetActive(false);
        }
    }

    public void BackToMainMenu()
    {
        SceneManager.LoadScene("MenuScene", LoadSceneMode.Single);
    }
}
