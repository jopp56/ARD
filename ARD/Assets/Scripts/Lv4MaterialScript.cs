using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class Lv4MaterialScript : MonoBehaviour
{
    public Material[] material;
    Renderer rend;
    public string feldname;

    void Start()
    {
        rend = GetComponent<Renderer>();
        rend.enabled = true;
        rend.sharedMaterial = material[0];
    }

    void Update()
    {
        if (ATCUhrzeigersinnScript.feld.ToString() == feldname)
        {
            rend.sharedMaterial = material[1];
        }
        else
        {
            rend.sharedMaterial = material[0];
        }
    }
}
