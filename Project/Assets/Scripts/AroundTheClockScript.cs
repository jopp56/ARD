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

    void Start()
    {
        feld = 1;
        leben = 3;
        levelText.text = "Triff Feld " + feld.ToString() + "!";
        lebenText.text = "Du hast noch " + leben.ToString() + " Leben";
    }

    void Update()
    {
        
    }

    public void ButtonGetroffen()
    {
        feld += 1;
        levelText.text = "Triff Feld " + feld.ToString() + "!";
        if (feld == 20)
        {
            endeText.text = "Du hast das Training erfolreich abgeschlossen!";
        }
    }

    public void ButtonVerfehlt()
    {
        leben -= 1;
        lebenText.text = "Du hast noch " + leben.ToString() + " Leben";

        if (leben == 0)
        {
            feld -= 1;
            levelText.text = "Triff Feld " + feld.ToString() + "!";
            leben = 3;
            lebenText.text = "Du hast noch " + leben.ToString() + " Leben";
        }
        
    }
}
