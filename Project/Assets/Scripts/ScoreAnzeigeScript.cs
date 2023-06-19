using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ScoreAnzeigeScript : MonoBehaviour
{
    public static ScoreAnzeigeScript instance;

    public TextMeshProUGUI scoreText;

    public static int score = 301;
    public int eingabesumme;

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
        eingabesumme = int.Parse(ScoreEingabeScript.scorearray[0]) + int.Parse(ScoreEingabeScript.scorearray[1]) + int.Parse(ScoreEingabeScript.scorearray[2]);
        score -= eingabesumme;
        scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
        ScoreEingabeScript.scorearray[0] = "Wurf 1";
        ScoreEingabeScript.scorearray[1] = "Wurf 2";
        ScoreEingabeScript.scorearray[2] = "Wurf 3";
    }
}