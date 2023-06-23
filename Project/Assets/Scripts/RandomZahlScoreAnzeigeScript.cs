using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class RandomZahlScoreAnzeigeScript : MonoBehaviour
{
    public static RandomZahlScoreAnzeigeScript instance;

    public TextMeshProUGUI scoreText;

    //ändern von min und max da manche nicht in 3 Züge ferig werden können
    int min = 2;
    int max = 171;
    public int score;
    public int randomScore;
    System.Random rnd = new System.Random();
    public int eingabesumme;

    void Awake()
    {
        instance = this;
        randomScore = rnd.Next(min, max);
        score = randomScore;
    }


    void Start()
    {
        scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();

    }

    public void changeScore()
    {
        eingabesumme = int.Parse(ScoreEingabeScript.scorearray[0]) + int.Parse(ScoreEingabeScript.scorearray[1]) + int.Parse(ScoreEingabeScript.scorearray[2]);
        score -= eingabesumme;
        scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
        ScoreEingabeScript.scorearray[0] = "Wurf 1";
        ScoreEingabeScript.scorearray[1] = "Wurf 2";
        ScoreEingabeScript.scorearray[2] = "Wurf 3";
    }
}
