using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AroundTheClockScript : MonoBehaviour
{
    public TextMeshProUGUI levelText;
    public TextMeshProUGUI lebenText;
    public TextMeshProUGUI endeText;
    public int feld;
    public int leben;
    public static int i;

    void Start()
    {
        feld = 1;
        leben = 3;
        i = 1;
        levelText.text = "Triff Feld S" + feld.ToString() + "!";
        lebenText.text = "Du hast noch " + leben.ToString() + " Leben";
    }

    void Update()
    {
        
    }

    public void ButtonGetroffen()
    {
        /* if (feld < 20)
        {
            feld += 1;
            levelText.text = "Triff Feld " + feld.ToString() + "!";
        }
        else if (feld == 20)
        {
            endeText.text = "Du hast das Training erfolreich abgeschlossen!";
        } */

        if (i <= 60)
        { 
            if (i < 20)
            {
                if (feld < 20)
                {
                    feld += 1;
                    levelText.text = "Triff Feld S" + feld.ToString() + "!";
                }
            } 
            else if (i >= 20 && i < 40)
            {
                if (i == 20)
                {
                    feld = 0;
                }
                    feld += 1;
                    levelText.text = "Triff Feld D" + feld.ToString() + "!";
            }
            else if (i >= 40 && i < 60)
            {
                if (i == 40)
                {
                    feld = 0;
                }
                    feld += 1;
                    levelText.text = "Triff Feld T" + feld.ToString() + "!";
            }
            else if (i == 60)
            {
                endeText.text = "Du hast das Training erfolreich abgeschlossen!";
            }
            i++;
        }
    }

    public void ButtonVerfehlt()
    {
        leben -= 1;
        lebenText.text = "Du hast noch " + leben.ToString() + " Leben";

        if (leben == 0 && feld > 1 && i <= 20)
        {
            i--;
            feld -= 1;
            levelText.text = "Triff Feld S" + feld.ToString() + "!";
            leben = 3;
            lebenText.text = "Du hast noch " + leben.ToString() + " Leben";
        }
        else if (leben == 0 && feld > 1 && i > 20 && i <= 40)
        {
            i--;
            feld -= 1;
            levelText.text = "Triff Feld D" + feld.ToString() + "!";
            leben = 3;
            lebenText.text = "Du hast noch " + leben.ToString() + " Leben";
        }
        else if (leben == 0 && feld > 1 && i > 40)
        {
            i--;
            feld -= 1;
            levelText.text = "Triff Feld T" + feld.ToString() + "!";
            leben = 3;
            lebenText.text = "Du hast noch " + leben.ToString() + " Leben";
        }
        else if (leben == 0 && feld == 1)
        {
            leben = 3;
            lebenText.text = "Du hast noch " + leben.ToString() + " Leben";
        }
        
    }
}
