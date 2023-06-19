using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class NumberText : MonoBehaviour
{
    //public static int buttonName;
    
    /*public static NumberText instance;
    void Awake()
    {
        instance = this;
    }*/
    

    public void ButtonPressed(int button)
    {
        /*string ButtonName = EventSystem.current.currentSelectedGameObject.name;
        Debug.Log("Clicked on: " + ButtonName);*/

        //int buttonName = button;
        Debug.Log(button.ToString());
        ScoreEingabeScript.changeWurfScore(button);
    }
}
