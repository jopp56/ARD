using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level3RandomFelderScript : MonoBehaviour
{
    public static Level3RandomFelderScript instance;
    public Material[] material;
    Renderer rend;
    //MeshRenderer rend;
    public string feld;

    void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponent<Renderer>();
        //rend = GetComponent<MeshRenderer>();
        rend.enabled = true;
        rend.sharedMaterial = material[0];
    }

    // Update is called once per frame
    void Update()
    {
        if (Random3FelderScript.instance.randomFeld1.Equals(feld) || Random3FelderScript.instance.randomFeld2.Equals(feld) || Random3FelderScript.instance.randomFeld3.Equals(feld))
        {
            rend.sharedMaterial = material[1];
            //GetComponent<MeshRenderer>().material = material[1];
        }
        else
        {
            rend.sharedMaterial = material[0];
            //GetComponent<MeshRenderer>().material = material[0];
        }
    }
}
