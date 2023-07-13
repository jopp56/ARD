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
    public GameObject formen;
    public GameObject eingabemenu;
    public GameObject arrowPrefab;
    public Transform[] targetPositions;

    public string[] targetListFieldNames;
    private string[,] targetListWithFieldNamesAndProbabilities;
    public float[] targetProbabilities;

    public AudioSource winAudio;
    public AudioSource loseAudio;
    public AudioSource missedAudio;
    private object spawnedArrows;

    void Start()
    {
        dartsCount = 0;
        scoreKICount = 301;
        this.targetListFieldNames = targetListFieldNames;
        AssignProbabilitiesToTargets(targetListFieldNames);

    }


    void Update()
    {
        scorePlayerCount = ScoreAnzeigeScript.score;
        if (scoreKICount > 0 && scorePlayerCount > 0)
        {
            StartCoroutine(KIRun());
        }
    }

    IEnumerator KIRun()
    {
        this.scorePlayerCount = ScoreAnzeigeScript.score;
        if (dartsCount < 3 && scoreKICount > 170)
        {
            formen.SetActive(true);
            KIChooseAndHitTarget();

        }
        if (scoreKICount <= 170 && dartsCount == 0)
        {
            formen.SetActive(true);
            KIChooseAndHitFinishTargets();
        }
        if (scoreKICount == 0 || scorePlayerCount == 0)
        {
            EndGameSequence();
        }
        formen.SetActive(false);
        yield return null;
    }

    public void AssignProbabilitiesToTargets(string[] targetListFieldNames)
    {
        this.targetListWithFieldNamesAndProbabilities = new string[82, 2];
        for (int index = 0; index < targetListFieldNames.Length; index++)
        {
            string probability = CalculateProbabilityFromFieldName(targetListFieldNames[index]);
            string fieldName = targetListFieldNames[index];
            targetListWithFieldNamesAndProbabilities[index, 0] = fieldName;
            targetListWithFieldNamesAndProbabilities[index, 1] = probability;
        }
    }
    private string CalculateProbabilityFromFieldName(string fieldName)
    {
        if (fieldName.EndsWith("A") || fieldName.EndsWith("I"))
        {
            return "0.5";
        }

        else if (fieldName.EndsWith("D"))
        {
            return "0.17";
        }

        else if (fieldName.EndsWith("T"))
        {
            return "0,13";
        }

        else if (fieldName.EndsWith("Center"))
        {
            return "0.15";
        }
        else if (fieldName.EndsWith("Bullseye"))
        {
            return "0.1";
        }

        return "Kein Feld vorhanden";
    }

    public void KIChooseAndHitTarget()
    {
        System.Random random = new System.Random();

        int randomFieldChoose = random.Next(0, targetListFieldNames.Length - 1);
        //hitQuote muss angepasst werden wenn Probs feststehen~hier trifft er erste bei einer quote von ca.0.5
        double hitQuote = random.NextDouble() * 2.5;

        string targetName = targetListWithFieldNamesAndProbabilities[randomFieldChoose, 0];
        string targetProbability = targetListWithFieldNamesAndProbabilities[randomFieldChoose, 1];


        if (double.Parse(targetProbability) < hitQuote)
        {
            dartsCount++;
            Debug.Log("Hit Nothing");
            missedAudio.Play();
            animateDarts("0");
            Debug.Log("Returned");
        }
        else
        {
            dartsCount++;
            animateDarts(targetName);
            if (targetName.Length == 3)
            {
                int targetValue = int.Parse(targetName[0] + "" + targetName[1]);
                scoreKICount -= targetValue;
                UpdateKIScoreAnzeige(scoreKICount);

            }
            if (targetName.Length == 2)
            {
                int targetValue = int.Parse(targetName[0] + "");
                scoreKICount -= targetValue;
                UpdateKIScoreAnzeige(scoreKICount);
            }
        }
    }
    public void KIWaitForPlayerToFinishRound()
    {
        dartsCount = 0;
        //delete darts der KI
    }

    public void KIChooseAndHitFinishTargets()
    {
        System.Random random = new System.Random();
        int randomIndex = random.Next(0, targetListFieldNames.Length - 1);
        string targetName = targetListWithFieldNamesAndProbabilities[randomIndex, 0];

        if (targetName.Length == 3)
        {
            int targetValue = int.Parse(targetName[0] + "" + targetName[1]);
            int checkIfLeadsToWin = scoreKICount - targetValue;
            if (checkIfLeadsToWin < 0)
            {
                return;
            }
            else
            {
                string targetProbability = targetListWithFieldNamesAndProbabilities[randomIndex, 1];
                double hitQuote = random.NextDouble() * 0.25;
                if (double.Parse(targetProbability) < hitQuote)
                {
                    dartsCount++;
                    animateDarts("0");
                    missedAudio.Play();
                }
                else
                {
                    scoreKICount -= targetValue;
                    UpdateKIScoreAnzeige(scoreKICount);
                }
            }
        }
        if (targetName.Length == 2)
        {
            int targetValue = int.Parse(targetName[0] + "");
            int checkIfLeadsToWin = scoreKICount - targetValue;
            if (checkIfLeadsToWin < 0)
            {
                return;
            }
            else
            {
                string targetProbability = targetListWithFieldNamesAndProbabilities[randomIndex, 1];
                double hitQuote = random.NextDouble() * 0.25;
                if (double.Parse(targetProbability) < hitQuote)
                {
                    dartsCount++;
                    animateDarts("0");
                    missedAudio.Play();
                }
                else
                {
                    scoreKICount -= targetValue;
                    UpdateKIScoreAnzeige(scoreKICount);
                }
            }
        }
    }

    public void EndGameSequence()
    {
        menu.SetActive(true);
        closeButton.SetActive(false);
        eingabemenu.SetActive(false);

        if (scoreKICount == 0)
        {
            loseAudio.Play();
        }

        if (scorePlayerCount == 0)
        {
            winAudio.Play();
        }

    }

    public void UpdateKIScoreAnzeige(int newScore)
    {
        TextMeshProUGUI scoreKI = scoreAnzeigeKIText.GetComponent<TextMeshProUGUI>();
        scoreKI.SetText("KI Score:" + "\n" + newScore.ToString() + "/" + "301");
    }

    public void animateDarts(string targetName)
    {

    }
}
