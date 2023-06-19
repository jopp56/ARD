using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MinusOne : MonoBehaviour
{
    public static MinusOne instance;

    public static int counter;

    void Awake()
    {
        instance = this;
    }

    public void ButtonPressed()
    {
        counter = ScoreAnzeigeScript.score;


    }
}