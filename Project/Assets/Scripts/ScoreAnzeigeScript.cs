using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ScoreAnzeigeScript : MonoBehaviour
{
    public static ScoreAnzeigeScript instance;

    public TextMeshProUGUI scoreText;

    int score = 301;
    //int spielmodus = ;

    void Awake()
    {
        instance = this;
    }


    void Start()
    {
        scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
      
    }

    public void changeScore()
    {
        score -= 0 ;
        scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
    }
}