using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeMaterialScript : MonoBehaviour
{
    public static ChangeMaterialScript instance;
    public Material[] material;
    Renderer rend;
    public string feld;

    void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponent<Renderer>();
        rend.enabled = true;
        rend.sharedMaterial = material[0];
    }

    /*public void changeColor()
    {
        if (FinishWegeScript.wurfarray[0] == feld || FinishWegeScript.wurfarray[1] == feld)
        {
            rend.sharedMaterial = material[1];
        }
        else if (FinishWegeScript.wurfarray[2] == feld)
        {
            rend.sharedMaterial = material[2];
        }
        else if (FinishWegeScript.wurfarray[3] == feld || FinishWegeScript.wurfarray[4] == feld)
        {
            rend.sharedMaterial = material[3];
        }
        else if (FinishWegeScript.wurfarray[5] == feld)
        {
            rend.sharedMaterial = material[4];
        }
        else if (FinishWegeScript.wurfarray[6] == feld || FinishWegeScript.wurfarray[7] == feld)
        {
            rend.sharedMaterial = material[5];
        }
        else if (FinishWegeScript.wurfarray[8] == feld)
        {
            rend.sharedMaterial = material[6];
        }
        else
        {
            rend.sharedMaterial = material[0];
        }
    }*/

    // Update is called once per frame
    void Update()
    {
        if (FinishWegeScript.wurfarray[0] == feld || FinishWegeScript.wurfarray[1] == feld)
        {
            rend.sharedMaterial = material[1];
        }
        else if (FinishWegeScript.wurfarray[2] == feld)
        {
            rend.sharedMaterial = material[2];
        }
        else if (FinishWegeScript.wurfarray[3] == feld || FinishWegeScript.wurfarray[4] == feld)
        {
            rend.sharedMaterial = material[3];
        }
        else if (FinishWegeScript.wurfarray[5] == feld)
        {
            rend.sharedMaterial = material[4];
        }
        else if (FinishWegeScript.wurfarray[6] == feld || FinishWegeScript.wurfarray[7] == feld)
        {
            rend.sharedMaterial = material[5];
        }
        else if (FinishWegeScript.wurfarray[8] == feld)
        {
            rend.sharedMaterial = material[6];
        }
        else
        {
            rend.sharedMaterial = material[0];
        }
    }
}
