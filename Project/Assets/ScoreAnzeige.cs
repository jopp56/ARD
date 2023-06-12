using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ScoreAnzeige : MonoBehaviour
{
    public TextMeshProUGUI scoreText;

    int score = 301;

    // Start is called before the first frame update
    void Start()
    {
        scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
