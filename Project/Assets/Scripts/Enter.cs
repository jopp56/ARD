using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enter : MonoBehaviour
{
    public static Enter instance;

    public static int counter;
    public static int wurfEins;
    public static int wurfZwei;
    public static int wurfDrei;

    void Awake()
    {
        instance = this;
    }

    public void ButtonPressed()
    {
        counter = ScoreAnzeigeScript.score;
        wurfEins = ScoreEingabeScript.wurf_eins;
        wurfZwei = ScoreEingabeScript.wurf_zwei;
        wurfDrei = ScoreEingabeScript.wurf_drei;

        if (counter > 0 && wurfEins != -99 && wurfZwei != -99 && wurfDrei != -99)
        {
            counter = counter - (wurfEins + wurfZwei + wurfDrei);
            ScoreAnzeigeScript.instance.changeScore();
        }

    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
