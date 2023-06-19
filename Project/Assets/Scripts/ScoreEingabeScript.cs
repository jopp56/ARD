using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ScoreEingabeScript : MonoBehaviour
{
    public TextMeshProUGUI wurf_Text;

    public static int eingabe = 0;

    public static string[] scorearray = new string[3] { "Wurf 1", "Wurf 2", "Wurf 3" };

    void Start()
    {
        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }

    void Update()
    {

    }

    public void ButtonDouble()
    {
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = "2x";
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = "2x";
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = "2x";
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }

    public void ButtonTriple()
    {
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = "3x";
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = "3x";
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = "3x";
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }

    public void ButtonOne()
    {
        eingabe = 1;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonTwo()
    {
        eingabe = 2;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonThree()
    {
        eingabe = 3;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonFour()
    {
        eingabe = 4;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonFive()
    {
        eingabe = 5;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonSix()
    {
        eingabe = 6;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonSeven()
    {
        eingabe = 7;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonEight()
    {
        eingabe = 8;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonNine()
    {
        eingabe = 9;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonTen()
    {
        eingabe = 10;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonEleven()
    {
        eingabe = 11;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonTwelve()
    {
        eingabe = 12;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonThirteen()
    {
        eingabe = 13;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonFourteen()
    {
        eingabe = 14;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonFifteen()
    {
        eingabe = 15;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonSixteen()
    {
        eingabe = 16;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonSeventeen()
    {
        eingabe = 17;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonEighteen()
    {
        eingabe = 18;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonNineteen()
    {
        eingabe = 19;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonTwenty()
    {
        eingabe = 20;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonBull()
    {
        eingabe = 25;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonBullseye()
    {
        eingabe = 50;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
    public void ButtonZero()
    {
        eingabe = 0;
        if (scorearray[0] == "Wurf 1")
        {
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[0] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[0] = eingabe.ToString();
        }
        else if (scorearray[1] == "Wurf 2")
        {
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[1] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[1] = eingabe.ToString();
        }
        else if (scorearray[2] == "Wurf 3")
        {
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "2x")
        {
            eingabe = 2 * eingabe;
            scorearray[2] = eingabe.ToString();
        }
        else if (scorearray[2] == "3x")
        {
            eingabe = 3 * eingabe;
            scorearray[2] = eingabe.ToString();
        }

        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }

    public void ButtonDelete()
    {
        if (scorearray[2] != "Wurf 3")
        {
            scorearray[2] = "Wurf 3";
        }
        else if (scorearray[1] != "Wurf 2")
        {
            scorearray[1] = "Wurf 2";
        }
        else if (scorearray[0] != "Wurf 1")
        {
            scorearray[0] = "Wurf 1";
        }
        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }

    public void ButtonEnter()
    {
        wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
    }
}
