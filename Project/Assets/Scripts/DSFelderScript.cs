using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DSFelderScript : MonoBehaviour
{
    public static DSFelderScript instance;
    public Material[] material;
    Renderer rend;
    public string feld1;
    public int feld2;
    public ScoreAnzeigeScript scoreMe;

    void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponent<Renderer>();
        rend.enabled = true;
        rend.sharedMaterial = material[7];
        scoreMe = new ScoreAnzeigeScript();

    }

    // Update is called once per frame
    void Update()
    {
        //(nicht 169, 168, 166, 165, 163, 162, 159)
        if (scoreMe.GetScore() <= 158 || scoreMe.GetScore() == 160 || scoreMe.GetScore() == 161 || scoreMe.GetScore() == 164 || scoreMe.GetScore() == 167 || scoreMe.GetScore() == 170)
        {
            if ((DSFinishWegeScript.wurfarray[0] == feld1 && DSFinishWegeScript.wurfarray[1] != "-") || (DSFinishWegeScript.wurfarray[1] == feld1 && DSFinishWegeScript.wurfarray[2] != "-"))
            {
                rend.sharedMaterial = material[1];
            }
            else if (DSFinishWegeScript.wurfarray[2] == feld1 || (DSFinishWegeScript.wurfarray[1] == feld1 && DSFinishWegeScript.wurfarray[2] == "-") || (DSFinishWegeScript.wurfarray[0] == feld1 && DSFinishWegeScript.wurfarray[1] == "-"))
            {
                rend.sharedMaterial = material[2];
            }
            else if ((DSFinishWegeScript.wurfarray[3] == feld1 && DSFinishWegeScript.wurfarray[4] != "-") || (DSFinishWegeScript.wurfarray[4] == feld1 && DSFinishWegeScript.wurfarray[5] != "-"))
            {
                rend.sharedMaterial = material[3];
            }
            else if (DSFinishWegeScript.wurfarray[5] == feld1 || (DSFinishWegeScript.wurfarray[4] == feld1 && DSFinishWegeScript.wurfarray[5] == "-") || (DSFinishWegeScript.wurfarray[3] == feld1 && DSFinishWegeScript.wurfarray[4] == "-"))
            {
                rend.sharedMaterial = material[4];
            }
            else if ((DSFinishWegeScript.wurfarray[6] == feld1 && DSFinishWegeScript.wurfarray[7] != "-") || (DSFinishWegeScript.wurfarray[7] == feld1 && DSFinishWegeScript.wurfarray[8] != "-"))
            {
                rend.sharedMaterial = material[5];
            }
            else if (DSFinishWegeScript.wurfarray[8] == feld1 || (DSFinishWegeScript.wurfarray[7] == feld1 && DSFinishWegeScript.wurfarray[8] == "-") || (DSFinishWegeScript.wurfarray[6] == feld1 && DSFinishWegeScript.wurfarray[7] == "-"))
            {
                rend.sharedMaterial = material[6];
            }
            else
            {
                if (feld2 <= scoreMe.GetScore())
                {
                    rend.sharedMaterial = material[7];
                }
                else
                {
                    rend.sharedMaterial = material[0];
                }
            }
        }
        else
        {
            if (feld2 <= scoreMe.GetScore())
            {
                rend.sharedMaterial = material[7];
            }
            else
            {
                rend.sharedMaterial = material[0];
            }
        }
        
    }
}
