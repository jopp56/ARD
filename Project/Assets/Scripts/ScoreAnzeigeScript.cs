using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ScoreAnzeigeScript : MonoBehaviour
{
    public static ScoreAnzeigeScript instance;

    public TextMeshProUGUI scoreText;
    public TextMeshProUGUI finishText;
    public Button neustart;
    public Button men�;
    public bool finishopt1;
    public bool finishopt2;
    public bool finishopt3;

    public static int score = 301;
    public int eingabesumme;

    void Awake()
    {
        instance = this;
        men�.gameObject.SetActive(false);
        neustart.gameObject.SetActive(false);
    }


    void Start()
    {
        scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
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

    /*public void changeScore()
    {
        eingabesumme = int.Parse(ScoreEingabeScript.scorearray[0]) + int.Parse(ScoreEingabeScript.scorearray[1]) + int.Parse(ScoreEingabeScript.scorearray[2]);
        if (eingabesumme < score - 1)
        {
            score -= eingabesumme;
            scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
        } else if (eingabesumme > score)
        {
            scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
        } 
        else if (eingabesumme == score) {
            score -= eingabesumme;
            scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishText.text = "FINISHED!";
            men�.gameObject.SetActive(true);
            neustart.gameObject.SetActive(true);
        }
    }*/

    public void changeScore()
    {
        eingabesumme = int.Parse(ScoreEingabeScript.scorearray[0]) + int.Parse(ScoreEingabeScript.scorearray[1]) + int.Parse(ScoreEingabeScript.scorearray[2]);
        if (eingabesumme < score - 1)
        {
            score -= eingabesumme;
            scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishopt1 = false;
            finishopt2 = false;
            finishopt3 = false;
        }
        else if (eingabesumme > score)
        {
            scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
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
            scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishopt1 = false;
            finishopt2 = false;
            finishopt3 = false;
            finishText.text = "FINISHED!";
            men�.gameObject.SetActive(true);
            neustart.gameObject.SetActive(true);
        }
        else if (eingabesumme == score && finishopt2 && ScoreEingabeScript.scorearray[2] == "0")
        {
            score -= eingabesumme;
            scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishopt1 = false;
            finishopt2 = false;
            finishopt3 = false;
            finishText.text = "FINISHED!";
            men�.gameObject.SetActive(true);
            neustart.gameObject.SetActive(true);
        }
        else if (eingabesumme == score && finishopt1 && ScoreEingabeScript.scorearray[2] == "0" && ScoreEingabeScript.scorearray[1] == "0")
        {
            score -= eingabesumme;
            scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
            ScoreEingabeScript.scorearray[0] = "Wurf 1";
            ScoreEingabeScript.scorearray[1] = "Wurf 2";
            ScoreEingabeScript.scorearray[2] = "Wurf 3";
            finishopt1 = false;
            finishopt2 = false;
            finishopt3 = false;
            finishText.text = "FINISHED!";
            men�.gameObject.SetActive(true);
            neustart.gameObject.SetActive(true);
        }

    }
}