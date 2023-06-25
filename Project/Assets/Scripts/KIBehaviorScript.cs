using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class KIBehaviorScript : MonoBehaviour
{
    private int dartsCount;
    private int scoreKICount;
    private int scorePlayerCount;

    private TextMeshPro scoreAnzeigeKIText;
    public GameObject menu;

    public string[] targetListFieldNames;
    private string[][] targetListWithFieldNamesAndProbabilites;


    void Start()
    {
        dartsCount = 0;
        scoreKICount = 310;
        scorePlayerCount = ScoreAnzeigeScript.score;
        targetListWithFieldNamesAndProbabilites = AssignProbabilitiesToTargets(targetListFieldNames);
        scoreAnzeigeKIText = GameObject.Find("ScoreAnzeigeKI").GetComponent<TextMeshPro>();


    }

    
    void Update()
    {
        KIRun();
    }

    public void KIRun()
    {
        while (true)
        {
            if (dartsCount == 0)
            {
                KIChooseAndHitTarget();
            }
            else if(scoreKICount >= 180 && dartsCount == 0)
            {
                KIChooseAndHitFinishTargets();
            }
            else if(scoreKICount == 0 || scorePlayerCount == 0)
            {
                break;
            }
            else
            {
                KIWaitForPlayerToFinishRound();
            }
        }
        EndGameSequence();
    }

    public string[][] AssignProbabilitiesToTargets(string[] targetListFieldNames)
    {
        //equal distributed 100% over 82 fields -> 1.20481928%
        string[][] targetListWithProbabilities = new string [targetListFieldNames.Length][];
        for(int index = 0; index < targetListFieldNames.Length; index++)
        {
            string probability = "1.20481928";
            string fieldName = targetListFieldNames[index];
            targetListWithProbabilities[index][0] = fieldName;
            targetListWithProbabilities[index][1] = probability;
        }

        return targetListWithProbabilities;
    }

    public void KIChooseAndHitTarget()
    {
        System.Random random = new System.Random();

        while (dartsCount < 3)
        {
            int randomFieldChoose = random.Next(0, targetListWithFieldNamesAndProbabilites.Length - 1);
            //hitQuote muss angepasst werden wenn Probs feststehen~hier trifft er erste bei einer quote von ca.0.5
            double hitQuote = random.NextDouble() * 2.5;

            string targetName = targetListWithFieldNamesAndProbabilites[randomFieldChoose][0];
            string targetProbability = targetListWithFieldNamesAndProbabilites[randomFieldChoose][1];


            if(double.Parse(targetProbability) < hitQuote)
            {
                dartsCount++;
                animateDarts("0");
                //sound abspielen für nicht treffen 
            }
            else
            {
                dartsCount++;
                animateDarts(targetName);
                if(targetName.Length == 3)
                {
                    int targetValue = int.Parse(targetName[0] + "" + targetName[1]);
                    scoreKICount += targetValue;
                    UpdateKIScoreAnzeige(scoreKICount);
               
                }
                if(targetName.Length == 2)
                {
                    int targetValue = int.Parse(targetName[0] + "");
                    scoreKICount += targetValue;
                    UpdateKIScoreAnzeige(scoreKICount);
                }
            }
        }
        //zerstören der vorhanden darts am ende
    }
    public void KIWaitForPlayerToFinishRound()
    {
        int pastScore = scorePlayerCount;
        while(pastScore == scorePlayerCount)
        {
            pastScore = ScoreAnzeigeScript.score;
            continue;
        }
        scorePlayerCount = ScoreAnzeigeScript.score;
    }

    public void KIChooseAndHitFinishTargets()
    {
        //trifft finish weg oder nicht
        return;
    }

    public void EndGameSequence()
    {
        menu.SetActive(true);
    }

    public void UpdateKIScoreAnzeige(int newScore)
    {
        scoreAnzeigeKIText.SetText("KI Score:"+ "\n" + newScore + "/" + "310");
    }

    public void animateDarts(string targetName) {
        //Flug animierung, spawn auf feld
        return;
    }
}
