using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Abstand : MonoBehaviour
{
    [SerializeField] GameObject abstandslinie;
    [SerializeField] GameObject dartscheibe;
    
    void Awake()
    {
        dartscheibe = GameObject.FindWithTag("Dartscheibe");

    }

    // Start is called before the first frame update
    void Start() { 
    
        abstandslinie.transform.position = new Vector3(0f, 1f, 1f) * dartscheibe.transform.position.y + new Vector3(0f, 1f, 1f) * dartscheibe.transform.position.z - new Vector3(0f, 1.73f, 2.37f);
        Instantiate(abstandslinie, abstandslinie.transform.position, Quaternion.identity, dartscheibe.transform);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
