using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Random3FelderScript : MonoBehaviour
{
    public static Random3FelderScript instance;

    public TextMeshProUGUI randomFelderText;

    public string randomFeld1;
    public string randomFeld2;
    public string randomFeld3;
    public static List<string> range = new List<string>();
    public static System.Random rnd = new System.Random();

    void Awake()
    {
        instance = this;


        //Alle Felder
        for (int i = 1; i <= 20; i++)
        {
            range.Add("Inner " + i.ToString());
            range.Add("Outter " + i.ToString());
            range.Add("Double " + i.ToString());
            range.Add("Triple " + i.ToString());

        }
        range.Add("25");
        range.Add("50");

        //Generate random index for range
        int index1 = rnd.Next(range.Count);
        int index2 = rnd.Next(range.Count);
        int index3 = rnd.Next(range.Count);
        randomFeld1 = range[index1];             //aus Liste random Feld
        randomFeld2 = range[index2];             //aus Liste random Feld
        randomFeld3 = range[index3];             //aus Liste random Feld

    }

    // Start is called before the first frame update
    void Start()
    {
        randomFelderText.text = "Zu werfende Felder:\n" + randomFeld1 + " | " + randomFeld2 + " | " + randomFeld3;
    }

    // Update is called once per frame
    void Update()
    {

    }
}
