using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class FinishWegeScript : MonoBehaviour
{
    public TextMeshProUGUI zuWerfenText;

    public static string[] wurfarray = new string[6] { "Werfe1", "Werfe2", "Werfe3", "Werfe1.2", "Werfe2.2", "Werfe3.2" };

    public static int rndScore;
    
    void Awake()
    {
        //zuWerfenText.text = "In drei Würfen Finishen, werfe:\n\n" + wurfarray[0] + " | " + wurfarray[1] + " | " + wurfarray[2];
        //oder:
        zuWerfenText.text = "In drei Würfen Finishen, werfe:\n\n" + wurfarray[0] + " | " + wurfarray[1] + " | " + wurfarray[2] + "\n oder:\n\n" + wurfarray[3] + " | " + wurfarray[4] + " | " + wurfarray[5];
    }

    // Start is called before the first frame update
    void Start()
    {
        rndScore = RandomZahlScoreAnzeigeScript.instance.randomScore;
        Debug.Log(rndScore);
        if (rndScore == 170 )
        { 
            wurfarray[0] = "Triple 20"; 
            wurfarray[1] = "Triple 20"; 
            wurfarray[2] = "Double Bull's-Eye";
            wurfarray[3] = "-";
            wurfarray[4] = "-";
            wurfarray[5] = "-";
        }
        else if (rndScore == 167)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 19";
            wurfarray[2] = "Double 25";
            wurfarray[3] = "-";
            wurfarray[4] = "-";
            wurfarray[5] = "-";
        }
        else if (rndScore == 164)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 18";
            wurfarray[2] = "Double 25";
            wurfarray[3] = "Triple 19";
            wurfarray[4] = "Triple 19";
            wurfarray[5] = "Double 25";
        }
        else if (rndScore == 161)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 17";
            wurfarray[2] = "Double 25";
            wurfarray[3] = "Triple 19";
            wurfarray[4] = "Triple 18";
            wurfarray[5] = "Double 25";
        }
        else if (rndScore == 160)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 20";
            wurfarray[2] = "Double 20";
            wurfarray[3] = "-";
            wurfarray[4] = "-";
            wurfarray[5] = "-";
        }
        else if (rndScore == 158)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 20";
            wurfarray[2] = "Double 19";
            wurfarray[3] = "-";
            wurfarray[4] = "-";
            wurfarray[5] = "-";
        }
        else if (rndScore == 157)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 19";
            wurfarray[2] = "Double 20";
            wurfarray[3] = "-";
            wurfarray[4] = "-";
            wurfarray[5] = "-";
        }
        else if (rndScore == 156)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 20";
            wurfarray[2] = "Double 18";
            wurfarray[3] = "-";
            wurfarray[4] = "-";
            wurfarray[5] = "-";
        }
        else if (rndScore == 155)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 19";
            wurfarray[2] = "Double 19";
            wurfarray[3] = "-";
            wurfarray[4] = "-";
            wurfarray[5] = "-";
        }
        else if (rndScore == 154)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 18";
            wurfarray[2] = "Double 20";
            wurfarray[3] = "Triple 19";
            wurfarray[4] = "Triple 19";
            wurfarray[5] = "Double 20";
        }
        else if (rndScore == 153)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 19";
            wurfarray[2] = "Double 18";
            wurfarray[3] = "-";
            wurfarray[4] = "-";
            wurfarray[5] = "-";
        }
        else if (rndScore == 152)
        {
            wurfarray[0] = "Triple 20";
            wurfarray[1] = "Triple 20";
            wurfarray[2] = "Double 16";
            wurfarray[3] = "Triple 19";
            wurfarray[4] = "Triple 18";
            wurfarray[5] = "Double 19";
        }

        //Ausgabe Finishwege 1.Variante oder 2.Varianten
        if (wurfarray[3] == "-")
        {
            zuWerfenText.text = "In drei Würfen Finishen, werfe:\n\n" + wurfarray[0] + " | " + wurfarray[1] + " | " + wurfarray[2];
        }
        else
        {
            zuWerfenText.text = "In drei Würfen Finishen, werfe:\n\n" + wurfarray[0] + " | " + wurfarray[1] + " | " + wurfarray[2] + "\n oder:" + wurfarray[3] + " | " + wurfarray[4] + " | " + wurfarray[5];
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
