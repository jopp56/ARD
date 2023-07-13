using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class AnleitungLvl4Skript : MonoBehaviour
{
    public TextMeshProUGUI anleitungText;
    // Start is called before the first frame update
    void Start()
    { }

    public void ButtonAnleitung()
    {
        anleitungText.text = "Bei diesem Spielmodus musst du versuchen, die Zahlen auf dem Dartboard der Reihe nach zu treffen, beginnend mit der 1 und endet mit der 20.";
    }


    // Update is called once per frame
    void Update()
    {

    }
}