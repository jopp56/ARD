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

    public GameObject scoreAnzeigeKI;
    private TextMeshPro scoreAnzeigeKIText;

  
    public string[] targetListAfterDifficulty;
    //12.0481928% für evenly verteilung auf 83 bei 1000%


   
    void Start()
    {
        dartsCount = 0;
        scoreAnzeigeKICount = 310;



        scoreAnzeigeKIText = scoreAnzeigeKI.GetComponent<TextMeshPro>();
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

        while (true)
        {
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
