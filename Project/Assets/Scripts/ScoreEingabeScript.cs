using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ScoreEingabeScript : MonoBehaviour
{
    public TextMeshProUGUI wurf_einsText;
    public TextMeshProUGUI wurf_zweiText;
    public TextMeshProUGUI wurf_dreiText;

    public int wurf_eins = 0;
    public int wurf_zwei = 0;
    public int wurf_drei = 0;

    void Start()
    {
        wurf_einsText.text = "Wurf 1";
        wurf_zweiText.text = "Wurf 2";
        wurf_dreiText.text = "Wurf 3";
    }

    
    void Update()
    {
        
    }
}
