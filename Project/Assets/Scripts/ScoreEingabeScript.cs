using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ScoreEingabeScript : MonoBehaviour
{
    ///public static ScoreEingabeScript instance;/

    /*void Awake()
    {
        instance = this;
    }*/

    public TextMeshProUGUI wurf_einsText;
    public TextMeshProUGUI wurf_zweiText;
    public TextMeshProUGUI wurf_dreiText;

    public static int wurf_eins = -99;
    public static int wurf_zwei = -99;
    public static int wurf_drei = -99;

    public static int wurf;

    public void Start()
    {
        wurf_einsText.text = "Wurf 1";
        wurf_zweiText.text = "Wurf 2";
        wurf_dreiText.text = "Wurf 3";
    }

    /*//Funktioniert
    void Update()
    {
        wurf_einsText.text = wurf_eins.ToString();
    }*/

    //Funktioniert nicht
    public static void changeWurfScore(int button2)
    {
        //Zahl die eingegeben wurde
        wurf = button2;
        //Alternative zu button2
        //wurf = NumberText.buttonName;
        Debug.Log(wurf.ToString());

        if (wurf_eins == -99)
        {
            wurf_eins = wurf;
            Debug.Log(wurf_eins.ToString());
            //wurf_einsText.text = wurf_eins.ToString();;
        }
        /*else if (wurf_zwei == -99)
        {
            wurf_zwei = wurf;
            wurf_zweiText.text = wurf_zwei.ToString();
        }
        else if (wurf_drei == -99)
        {
            wurf_drei = wurf;
            wurf_dreiText.text = wurf_drei.ToString();
        }
        else Debug.Log("Drei Werte wurden eingetragen!");*/
    }
    public static void delete()
    {
        if (wurf_drei != -99)
        {
            wurf_drei = -99;
            //wurf_dreiText.text = "Wurf 3";
        }
        else if (wurf_zwei != -99)
        {
            wurf_zwei = -99;
            //wurf_zweiText.text = "Wurf 2";
        }
        else if (wurf_eins != -99)
        {
            wurf_eins = -99;
            //wurf_einsText.text = "Wurf 1";
        }
        else Debug.Log("Es ist bereits alles gelöscht!");
    }
}
