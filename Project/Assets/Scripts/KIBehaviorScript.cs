using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Random;

public class KIBehaviorScript : MonoBehaviour
{
    private int dartsCount;
    private int scoreAnzeige;
    public string[] outterNormalRing;
    public string[] innerNormalRing;
    public string[] tripleRing;
    public string[] doubleRing;
    public string[] center;
   
    void Start()
    {
        dartsCount = 0;
        scoreAnzeige = 310;
        string[][] targetListDifficultyNormal = [outerNormalRing, outerNormalRing,outerNormalRing, outerNormalRing, innerNormalRing, innerNormalRing, innerNormalRing,innerNormalRing,
            center, tripleRing, doubleRing, doubleRing];
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
                KIChooseTarget();
            }else if(scoreAnzeige >= 180)
            {
                KIChooseFinishTargets();
            }else if(scoreAnzeige == 0)
            {
                break;
            }
            else
            {
                KIWaitForPlayerToFinishRound();
            }
        }
    }

    public void KIChooseTarget()
    {   
        
        return;
    }

    public void KIWaitForPlayerToFinishRound()
    {
        return;
    }

    public void KIChooseFinishTargets()
    {
        return;
    }
}
