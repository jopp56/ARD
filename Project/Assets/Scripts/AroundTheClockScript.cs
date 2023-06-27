using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AroundTheClockScript : MonoBehaviour
{
    public TextMeshProUGUI levelText;
    public int feld;

    void Start()
    {
        feld = 1;
        levelText.text = "Triff Feld " + feld.ToString() + "!";
    }

    void Update()
    {
        
    }

}
