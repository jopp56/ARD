using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ScoreAnzeige : MonoBehaviour
{
    public static ScoreAnzeige instance;

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
        //scoreText.text = "Dein Score:\n" + score.ToString() + " / " spielmodus.ToString();
    }

    public void changeScore()
    {
        score -= ;
        scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
    }
