using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartMenuScript : MonoBehaviour
{
    public GameObject singlePlayerButton;
    public GameObject trainingButton1;
    public GameObject trainingButton2;
    public GameObject trainingButton3;
    public GameObject kiButton;
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

    public void ClickOnTrainingButton1()
    {
        SceneManager.LoadScene("Level1FinishWegeScene", LoadSceneMode.Single);
    }

    public void ClickOnTrainingButton2()
    {
        SceneManager.LoadScene("Level2Scene", LoadSceneMode.Single);
    }

    public void ClickOnTrainingButton3()
    {
        SceneManager.LoadScene("Level3RandomFelderScene", LoadSceneMode.Single);
    }

    public void ClickOnKIButton()
    {
        SceneManager.LoadScene("KIDartScene", LoadSceneMode.Single);
    }

}
