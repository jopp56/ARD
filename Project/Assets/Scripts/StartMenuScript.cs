using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartMenuScript : MonoBehaviour
{
    public GameObject singlePlayerButton;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
   public void ClickOnSinglePlayerButton ()
    {
        SceneManager.LoadScene("DartScene", LoadSceneMode.Single);
    }
}
