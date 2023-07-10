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
    public TextMeshProUGUI finishText;

    public bool finishopt1;
    public bool finishopt2;
    public bool finishopt3;

    public int score;
    public int randomScore;
    public int eingabesumme;

    public static List<int> range = new List<int>();
    public static System.Random rnd = new System.Random();

    void Awake()
    {
        instance = this;


        //Alle Zahlen die in max drei Würfen gefinished werden können(nicht 169, 168, 166, 165, 163, 162, 159)
        for (int i = 2; i <= 158; i++)
        {
            range.Add(i);
        }
        range.Add(160);
        range.Add(161);
        range.Add(164);
        range.Add(167);
        range.Add(170);

        //Generate random index for range
        int index = rnd.Next(range.Count);
        //randomScore = rnd.Next(min, max);     //im Bereich min bis max
        randomScore = range[index];             //aus Liste random Zahl
        score = randomScore;
    }


    void Start()
    {
        scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
        finishopt1 = false;
        finishopt2 = false;
        finishopt3 = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (ScoreEingabeScript.scorearray[0] == "2x" || ScoreEingabeScript.scorearray[0] == "50")
        {
            finishopt1 = true;
        }
        if (ScoreEingabeScript.scorearray[1] == "2x" || ScoreEingabeScript.scorearray[1] == "50")
        {
            finishopt2 = true;
        }
        if (ScoreEingabeScript.scorearray[2] == "2x" || ScoreEingabeScript.scorearray[2] == "50")
        {
            finishopt3 = true;
        }
    }

    public void changeScore()
    {
        eingabesumme = int.Parse(ScoreEingabeScript.scorearray[0]) + int.Parse(ScoreEingabeScript.scorearray[1]) + int.Parse(ScoreEingabeScript.scorearray[2]);
        if (eingabesumme < score - 1)
        {
            score -= eingabesumme;
            scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishopt1 = false;
            finishopt2 = false;
            finishopt3 = false;
        }
        else if (eingabesumme > score)
        {
            scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishopt1 = false;
            finishopt2 = false;
            finishopt3 = false;
        }
        else if (eingabesumme == score && finishopt3)
        {
            score -= eingabesumme;
            scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishopt1 = false;
            finishopt2 = false;
            finishopt3 = false;
            finishText.text = "FINISHED!";
        }
        else if (eingabesumme == score && finishopt2 && ScoreEingabeScript.scorearray[2] == "0")
        {
            score -= eingabesumme;
            scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishopt1 = false;
            finishopt2 = false;
            finishopt3 = false;
            finishText.text = "FINISHED!";
        }
        else if (eingabesumme == score && finishopt1 && ScoreEingabeScript.scorearray[2] == "0" && ScoreEingabeScript.scorearray[1] == "0")
        {
            score -= eingabesumme;
            scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishopt1 = false;
            finishopt2 = false;
            finishopt3 = false;
            finishText.text = "FINISHED!";
        }

    }
}