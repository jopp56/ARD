using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ATCUhrzeigersinnScript : MonoBehaviour
{
    public TextMeshProUGUI levelText;
    public TextMeshProUGUI lebenText;
    public TextMeshProUGUI endeText;
    public int feld;
    public int leben;
    public static int i;
    public int[] felderreihenfolge = new int[20];

    // Start is called before the first frame update
    void Start()
    {
        feld = felderreihenfolge[0];
        leben = 3;
        i = 1;
        levelText.text = "Triff Feld S" + feld.ToString() + "!";
        lebenText.text = "Du hast noch " + leben.ToString() + " Leben";
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ButtonGetroffen()
    {
        if (i <= 60)
        {
            if (i < 20)
            {
                    feld = felderreihenfolge[i];
                    levelText.text = "Triff Feld S" + feld.ToString() + "!";
            }
            else if (i >= 20 && i < 40)
            {
                if (i == 20)
                {
                    feld = felderreihenfolge[0];
                }
                feld = felderreihenfolge[i - 20];
                levelText.text = "Triff Feld D" + feld.ToString() + "!";
            }
            else if (i >= 40 && i < 60)
            {
                if (i == 40)
                {
                    feld = felderreihenfolge[0];
                }
                feld = felderreihenfolge[i - 40];
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

    }
}
