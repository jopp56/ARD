using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckPositionScript : MonoBehaviour
{
    /*[SerializeField] GameObject dartscheibe;
    [SerializeField] GameObject camera;
    Vector3 position;
    Vector3 linieposition;
    Vector3 dartscheibeposition;
    bool anLinie = false;

    void Awake()
    {
        dartscheibe = GameObject.FindWithTag("Dartscheibe");
        camera = GameObject.FindWithTag("Camera");
        linie = GameObject.FindWithTag("Abstandslinie");
    }

    // Start is called before the first frame update
    void Start()
    {
        position = camera.transform.position;
        dartscheibeposition = dartscheibe.transform.position;
        linieposition = linie.transform.position;
        if (position == null)
        {
            Level3RandomFelderScript.changeMaterial();
        }
    }

    // Update is called once per frame
    void Update()
    {
        position = camera.transform.position;
        dartscheibeposition = dartscheibe.transform.position;
        linieposition = linie.transform.position;
        if (position < new Vector3(0f, 0f, 1f) * linie.transform.position.z - new Vector3(0f, 0, 1f) && position > new Vector3(0f, 0f, 1f) * linie.transform.position.z - new Vector3(0f, 0, 1f))
        {
            anLinie = true;
            Level3RandomFelderScript.changeMaterial();
        }
        else
        {
            anLinie = false;
        }
    }*/
}
