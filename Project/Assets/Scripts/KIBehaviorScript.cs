using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class KIBehaviorScript : MonoBehaviour
{
    private int dartsCount;
    private int scoreAnzeigeKICount;
    private int scoreAnzeigePlayerCount;

    public TextMeshPro scoreAnzeigeKIText;

    public string[] outerNormalRing;
    public string[] innerNormalRing;
    public string[] tripleRing;
    public string[] doubleRing;
    public string[] center;
    private string[][] targetListAfterDifficulty;
    private int targetListAfterDifficultyLength;

   
    void Start()
    {
        dartsCount = 0;
        scoreAnzeigeKICount = 310;

        //Target List for difficulty normal probabilty values: outerNormalRing=innerNormalRing=1/3; center=tripleRing=1/12; doubleRing= 1/6 
        targetListAfterDifficulty = new string[][] { outerNormalRing,outerNormalRing, outerNormalRing, outerNormalRing, innerNormalRing, innerNormalRing, innerNormalRing,innerNormalRing, 
                                                    center, tripleRing, doubleRing, doubleRing};
        targetListAfterDifficultyLength = targetListAfterDifficulty.Length;

        scoreAnzeigeKIText = GameObject.Find("ScoreAnzeigeKI").GetComponent<TextMeshPro>();
        scoreAnzeigePlayerCount = ScoreAnzeigeScript.score;

    }

    
    void Update()
    {
        KIRun();
    }

    public void KIRun()
    {
        while (true)
        {
            if(dartsCount<=3)
            {
                KIChooseAndHitTarget();
            }
            else if(scoreAnzeigeKICount >= 180)
            {
                KIChooseAndHitFinishTargets();
            }
            else if(scoreAnzeigeKICount == 0 || scoreAnzeigePlayerCount == 0)
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

    public void KIChooseAndHitTarget()
    {
        System.Random choosePossibility = new System.Random();

        while (true)
        {
            int choosePossibilityForHitArea = choosePossibility.Next(0, targetListAfterDifficultyLength);

            string[] intendedTargetInHitArea = targetListAfterDifficulty[choosePossibilityForHitArea];
            int choosePossibilityForIntendedTarget = choosePossibility.Next(0, intendedTargetInHitArea.Length);

            string intendedTargetAsString = intendedTargetInHitArea[choosePossibilityForIntendedTarget];
            int intendedTargetAsInt = int.Parse(intendedTargetAsString);

            double chooseHitProbability = choosePossibility.NextDouble();
            double chooseMissProbability = choosePossibility.NextDouble();

            if (chooseHitProbability > chooseMissProbability)
            {
                UpdateKIScore(intendedTargetAsInt);
                return;
            }
            else if (chooseHitProbability < chooseMissProbability)
            {
                int chooseProbabilityHitAnotherArea = choosePossibility.Next(0, 1);

                if (chooseProbabilityHitAnotherArea == 0)
                {
                    UpdateKIScore(0);
                    continue;
                }
            //Hier wählt man einen neuen target allerdings OHNE den intended target
            }
        }
    }

    public void KIWaitForPlayerToFinishRound()
    {
        return;
    }

    public void KIChooseAndHitFinishTargets()
    {
        return;
    }

    public void EndGameSequence()
    {
        SceneManager.LoadScene("MenuScene", LoadSceneMode.Single);
    }

    public void UpdateKIScore(int intendedTargetAsInt)
    {
        return;
    }
}
