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
       // abstandslinie = GameObject.Find("Abstandslinie");
    }

    // Start is called before the first frame update
    void Start()
    {
        //abstandslinie.transform.position = new Vector3(dartscheibe.transform.position.y - 1.73f) + (dartscheibe.transform.position.z - 2.37f);
        abstandslinie.transform.position = new Vector3(0f, 1f, 1f) * dartscheibe.transform.position.y + new Vector3(0f, 1f, 1f) * dartscheibe.transform.position.z - new Vector3(0f, 1.73f, 2.37f);
        //abstandslinie.transform.position = new Vector3(0f, dartscheibe.transform.position - 1.73f, dartscheibe.transform.position - 2.37f);
        //abstandslinie.transform.position.x = 0f;
        //abstandslinie.transform.position.y = dartscheibe.transform.position.y - 1.73f;
        //abstandslinie.transform.position.z = dartscheibe.transform.position.z - 2.37f;
        Instantiate(abstandslinie, abstandslinie.transform.position, Quaternion.identity);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
