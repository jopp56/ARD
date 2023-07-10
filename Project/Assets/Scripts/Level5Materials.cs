using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level5Materials : MonoBehaviour
{
    public static Level5Materials instance;
    public Material[] material;
    Renderer rend;
    public int feld;
    

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

    // Update is called once per frame
    void Update()
    {
        if (Level5ButtonScript.instance.randomFeld1.Equals(feld))
        {
            rend.sharedMaterial = material[1];
        }
        else if (Level5ButtonScript.instance.randomFeld2.Equals(feld))
        {
            rend.sharedMaterial = material[2];
        }
        else if (Level5ButtonScript.instance.randomFeld3.Equals(feld))
        {
            rend.sharedMaterial = material[3];
        }
        else
        {
             rend.sharedMaterial = material[0];
        }
    }
}
