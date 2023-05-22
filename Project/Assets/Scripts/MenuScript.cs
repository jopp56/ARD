using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuScript : MonoBehaviour

{
    public GameObject menu;

    void Awake()
    {
        this.menu = menu;
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
        menu.SetActive(false);
        GameObject.Find("UIButtonToggleIconOn").SetActive(false);
        GameObject.Find("UIButtonToogleIconOff").SetActive(true);
    }

    public void ToogleMenu()
    {
        if (GameObject.Find("UIButtonToggleIconOff").activeSelf == true)
        {
            menu.SetActive(true);
        }

        if(GameObject.Find("UIButtonToggleIconOn").activeSelf == true)
        {
            menu.SetActive(false);
        }
    }
}
