using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class KIBehaviorScript : MonoBehaviour
{
    private int dartsCount;
    private int scoreKICount;
    private int scorePlayerCount;

    public GameObject scoreAnzeigePlayerText;
    public GameObject scoreAnzeigeKIText;
    public GameObject menu;
    public GameObject closeButton;

    public string[] targetListFieldNames;
    private string[,] targetListWithFieldNamesAndProbabilities;


    void Start()
    {
        dartsCount = 0;
        scoreKICount = 310;
        this.targetListFieldNames = targetListFieldNames;
        AssignProbabilitiesToTargets(targetListFieldNames);

    }

    
    void Update()
    {
        StartCoroutine(KIRun());
    }

    IEnumerator KIRun()
    {
            this.scorePlayerCount = ScoreAnzeigeScript.score;
            if (dartsCount<3)
            {
                KIChooseAndHitTarget();

            }
            if (scoreKICount <= 170 && dartsCount == 0)
            {
                KIChooseAndHitFinishTargets();
            }
            if (scoreKICount == 0 || scorePlayerCount == 0)
            {
                EndGameSequence();
            }
        yield return null;
    }

    public void AssignProbabilitiesToTargets(string[] targetListFieldNames)
    {
        //equal distributed 100% over 82 fields -> 1.20481928%
        this.targetListWithFieldNamesAndProbabilities = new string[82, 2];
        for(int index = 0; index < targetListFieldNames.Length; index++)
        {
            string probability = "1.20481928";
            string fieldName = targetListFieldNames[index];
            targetListWithFieldNamesAndProbabilities[index,0] = fieldName;
            targetListWithFieldNamesAndProbabilities[index,1] = probability;
        }

    }

    public void KIChooseAndHitTarget()
    {
        System.Random random = new System.Random();

        while (dartsCount < 3)
        {
            int randomFieldChoose = random.Next(0, targetListFieldNames.Length - 1);
            //hitQuote muss angepasst werden wenn Probs feststehen~hier trifft er erste bei einer quote von ca.0.5
            double hitQuote = random.NextDouble() * 2.5;

            string targetName = targetListWithFieldNamesAndProbabilities[randomFieldChoose,0];
            string targetProbability = targetListWithFieldNamesAndProbabilities[randomFieldChoose,1];


            if(double.Parse(targetProbability) < hitQuote)
            {
                dartsCount++;
                animateDarts("0");
                //sound abspielen f�r nicht treffen 
            }
            else
            {
                dartsCount++;
                animateDarts(targetName);
                if(targetName.Length == 3)
                {
                    int targetValue = int.Parse(targetName[0] + "" + targetName[1]);
                    scoreKICount -= targetValue;
                    UpdateKIScoreAnzeige(scoreKICount);
               
                }
                if(targetName.Length == 2)
                {
                    int targetValue = int.Parse(targetName[0] + "");
                    scoreKICount -= targetValue;
                    UpdateKIScoreAnzeige(scoreKICount);
                }
            }
        }
        //zerst�ren der vorhanden darts am ende
    }
    public void KIWaitForPlayerToFinishRound()
    {
        Debug.Log("Called wait");
        dartsCount = 0;
    }

    public void KIChooseAndHitFinishTargets()
    {
        //trifft finish weg oder nicht
        return;
    }

    public void EndGameSequence()
    {
        menu.SetActive(true);
        closeButton.SetActive(false);
    }

    public void UpdateKIScoreAnzeige(int newScore)
    {
        TextMeshProUGUI scoreKI = scoreAnzeigeKIText.GetComponent<TextMeshProUGUI>();
        scoreKI.SetText("KI Score:" + "\n" + newScore.ToString() + "/" + "310");
    }

    public void animateDarts(string targetName) {
        //Flug animierung, spawn auf feld
        return;
    }
}
