using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MinusTwo : MonoBehaviour
{
    public static MinusTwo instance;

    public static int counter;

    void Awake()
    {
        instance = this;
    }

    public void ButtonPressed()
    {
        counter = ScoreAnzeigeScript.score;

        if (counter > 1)
        {
            counter -= 2;
            ScoreAnzeigeScript.instance.changeScore();
        }

    }
}
