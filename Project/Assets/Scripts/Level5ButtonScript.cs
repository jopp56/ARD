using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Level5ButtonScript : MonoBehaviour
{
    public static Level5ButtonScript instance;
    public TextMeshProUGUI wurf_Text;
    public TextMeshProUGUI finished;
    public TextMeshProUGUI runde;
    public TextMeshProUGUI blauButton;
    public TextMeshProUGUI grünButton;
    public TextMeshProUGUI orangeButton;
    public string feld1;
    public string feld2;
    public string feld3;
    public static int counter = 1;
    int runden = 1;
    public static string[] farbarray = new string[3] { "-", "-", "-" };
    public int randomFeld1;
    public int randomFeld2;
    public int randomFeld3;
    public int score = 0;

    public static System.Random rnd = new System.Random();

    void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        //1 Level
        randomFeld1 = rnd.Next(1, 21);
        randomFeld2 = rnd.Next(1, 21);
        randomFeld3 = rnd.Next(1, 21);
        wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
        runde.text = "Runde:\n" + runden.ToString() + "/10";
        if (randomFeld1 < 21)
        {
            feld1 = "Outer " + randomFeld1;
        }
        else if (randomFeld1 > 20 && randomFeld1 < 41)
        {
            feld1 = "Inner " + (randomFeld1 - 20);
        }
        else if (randomFeld1 > 40 && randomFeld1 < 61)
        {
            feld1 = "Double " + (randomFeld1 - 40);
        }
        else if (randomFeld1 > 60 && randomFeld1 < 81)
        {
            feld1 = "Triple " + (randomFeld1 - 60);
        }
        else if (randomFeld1 == 81)
        {
            feld1 = "25";
        }
        else if (randomFeld1 == 82)
        {
            feld1 = "50";
        }

        if (randomFeld2 < 21)
        {
            feld2 = "Outer " + randomFeld2;
        }
        else if (randomFeld2 > 20 && randomFeld2 < 41)
        {
            feld2 = "Inner " + (randomFeld2 - 20);
        }
        else if (randomFeld2 > 40 && randomFeld2 < 61)
        {
            feld2 = "Double " + (randomFeld2 - 40);
        }
        else if (randomFeld2 > 60 && randomFeld2 < 81)
        {
            feld2 = "Triple " + (randomFeld2 - 60);
        }
        else if (randomFeld2 == 81)
        {
            feld2 = "25";
        }
        else if (randomFeld2 == 82)
        {
            feld2 = "50";
        }

        if (randomFeld3 < 21)
        {
            feld3 = "Outer " + randomFeld3;
        }
        else if (randomFeld3 > 20 && randomFeld3 < 41)
        {
            feld3 = "Inner " + (randomFeld3 - 20);
        }
        else if (randomFeld3 > 40 && randomFeld3 < 61)
        {
            feld3 = "Double " + (randomFeld3 - 40);
        }
        else if (randomFeld3 > 60 && randomFeld3 < 81)
        {
            feld3 = "Triple " + (randomFeld3 - 60);
        }
        else if (randomFeld3 == 81)
        {
            feld3 = "25";
        }
        else if (randomFeld3 == 82)
        {
            feld3 = "50";
        }
        blauButton.text = feld1;
        grünButton.text = feld2;
        orangeButton.text = feld3;

    }

    public void Blau()
    {
        farbarray[0] = "Blau";
        wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
    }

    public void Grün()
    {
        farbarray[1] = "Grün";
        wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
    }

    public void Orange()
    {
        farbarray[2] = "Orange";
        wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
    }

    public void Enter()
    {
        runden++;
        //Score berechnen Feld 1
        if (farbarray[0] == "Blau")
        {
            if (randomFeld1 <= 20)
            {
                score = score + 1;
            }
            else if (randomFeld1 > 20 && randomFeld1 <= 40)
            {
                score = score + 2;
            }
            else if (randomFeld1 > 40 && randomFeld1 <= 60)
            {
                score = score + 3;
            }
            else if (randomFeld1 > 60 && randomFeld1 <= 80)
            {
                score = score + 4;
            }
            else if (randomFeld1 == 81 || randomFeld1 == 82)
            {
                score = score + 5;
            }
        }

        //Score berechnen Feld 2
        if (farbarray[1] == "Grün")
        {
            if (randomFeld2 <= 20)
            {
                score = score + 1;
            }
            else if (randomFeld2 > 20 && randomFeld2 <= 40)
            {
                score = score + 2;
            }
            else if (randomFeld2 > 40 && randomFeld2 <= 60)
            {
                score = score + 3;
            }
            else if (randomFeld2 > 60 && randomFeld2 <= 80)
            {
                score = score + 4;
            }
            else if (randomFeld2 == 81 || randomFeld2 == 82)
            {
                score = score + 5;
            }
        }

        //Score berechnen Feld 3
        if (farbarray[2] == "Orange")
        {
            if (randomFeld1 <= 20)
            {
                score = score + 1;
            }
            else if (randomFeld1 > 20 && randomFeld1 <= 40)
            {
                score = score + 2;
            }
            else if (randomFeld1 > 40 && randomFeld1 <= 60)
            {
                score = score + 3;
            }
            else if (randomFeld1 > 60 && randomFeld1 <= 80)
            {
                score = score + 4;
            }
            else if (randomFeld1 == 81 || randomFeld1 == 82)
            {
                score = score + 5;
            }
        }

        if (counter < 10)
        {
            if (counter == 1)
            {
                //2 Level
                randomFeld1 = rnd.Next(1, 21);
                randomFeld2 = rnd.Next(21, 41);
                randomFeld3 = rnd.Next(21, 41);
            }

            else if (counter == 2)
            {
                //3 Level
                randomFeld1 = rnd.Next(21, 41);
                randomFeld2 = rnd.Next(21, 41);
                randomFeld3 = rnd.Next(21, 41);
            }

            else if (counter == 3)
            {
                //4 Level
                randomFeld1 = rnd.Next(1, 21);
                randomFeld2 = rnd.Next(21, 41);
                randomFeld3 = rnd.Next(41, 61);
            }

            else if (counter == 4)
            {
                //5 Level
                randomFeld1 = rnd.Next(1, 21);
                randomFeld2 = rnd.Next(41, 61);
                randomFeld3 = rnd.Next(61, 81);
            }

            else if (counter == 5)
            {
                //6 Level
                randomFeld1 = rnd.Next(1, 21);
                randomFeld2 = rnd.Next(61, 81);
                randomFeld3 = rnd.Next(81, 83);
            }

            else if (counter == 6)
            {
                //7 Level
                randomFeld1 = rnd.Next(41, 61);
                randomFeld2 = rnd.Next(61, 81);
                randomFeld3 = rnd.Next(61, 81);
            }

            else if (counter == 7)
            {
                //8 Level
                randomFeld1 = rnd.Next(41, 61);
                randomFeld2 = rnd.Next(41, 61);
                randomFeld3 = rnd.Next(81, 83);
            }

            else if (counter == 8)
            {
                //9 Level
                randomFeld1 = rnd.Next(41, 61);
                randomFeld2 = rnd.Next(61, 81);
                randomFeld3 = rnd.Next(81, 83);
            }

            else if (counter == 9)
            {
                //10 Level
                randomFeld1 = rnd.Next(61, 81);
                randomFeld2 = rnd.Next(61, 81);
                randomFeld3 = rnd.Next(81, 83);
            }
            farbarray[0] = "-";
            farbarray[1] = "-";
            farbarray[2] = "-";
            runde.text = "Runde:\n" + runden.ToString() + "/10";
            wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
        }
        else if (counter == 10)
        {
            farbarray[0] = "-";
            farbarray[1] = "-";
            farbarray[2] = "-";
            wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
            runde.text = "Runde:\n" + "10" + "/10";
            finished.text = "FINISHED!\n\n" + score + "/85";
        }

        //Feld über Button
        if (randomFeld1 < 21)
        {
            feld1 = "Outer " + randomFeld1;
        }
        else if (randomFeld1 > 20 && randomFeld1 < 41)
        {
            feld1 = "Inner " + (randomFeld1 - 20);
        }
        else if (randomFeld1 > 40 && randomFeld1 < 61)
        {
            feld1 = "Double " + (randomFeld1 - 40);
        }
        else if (randomFeld1 > 60 && randomFeld1 < 81)
        {
            feld1 = "Triple " + (randomFeld1 - 60);
        }
        else if (randomFeld1 == 81)
        {
            feld1 = "25";
        }
        else if (randomFeld1 == 82)
        {
            feld1 = "50";
        }

        if (randomFeld2 < 21)
        {
            feld2 = "Outer " + randomFeld2;
        }
        else if (randomFeld2 > 20 && randomFeld2 < 41)
        {
            feld2 = "Inner " + (randomFeld2 - 20);
        }
        else if (randomFeld2 > 40 && randomFeld2 < 61)
        {
            feld2 = "Double " + (randomFeld2 - 40);
        }
        else if (randomFeld2 > 60 && randomFeld2 < 81)
        {
            feld2 = "Triple " + (randomFeld2 - 60);
        }
        else if (randomFeld2 == 81)
        {
            feld2 = "25";
        }
        else if (randomFeld2 == 82)
        {
            feld2 = "50";
        }

        if (randomFeld3 < 21)
        {
            feld3 = "Outer " + randomFeld3;
        }
        else if (randomFeld3 > 20 && randomFeld3 < 41)
        {
            feld3 = "Inner " + (randomFeld3 - 20);
        }
        else if (randomFeld3 > 40 && randomFeld3 < 61)
        {
            feld3 = "Double " + (randomFeld3 - 40);
        }
        else if (randomFeld3 > 60 && randomFeld3 < 81)
        {
            feld3 = "Triple " + (randomFeld3 - 60);
        }
        else if (randomFeld3 == 81)
        {
            feld3 = "25";
        }
        else if (randomFeld3 == 82)
        {
            feld3 = "50";
        }
        blauButton.text = feld1;
        grünButton.text = feld2;
        orangeButton.text = feld3;
        counter++;

    }

    public void Delete()
    {
        if (farbarray[2] != "-")
        {
            farbarray[2] = "-";
        }
        else if (farbarray[1] != "-")
        {
            farbarray[1] = "-";
        }
        else if (farbarray[0] != "-")
        {
            farbarray[0] = "-";
        }
        wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
    }
}
