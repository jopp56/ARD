using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class RegelnSkript : MonoBehaviour
{
    //public GameObject anleitungText;
    public GameObject menu;
    public TextMeshProUGUI regelnText;
    public TextMeshProUGUI regelnTextTitel;
    public TextMeshProUGUI seitenZahl;
    public int seite = 1;

    // Start is called before the first frame update
    void Start()
    {
        menu.SetActive(false);
    }

    public void ButtonClose()
    {
        menu.SetActive(false);
        seite = 1;
    }

    public void ButtonRegeln()
    {
        if (menu.activeSelf)
        {
            menu.SetActive(false);
        }
        else if (!menu.activeSelf)
        {
            menu.SetActive(true);

            if (seite == 1)
            {
                seitenZahl.text = seite.ToString() + "/9";
                regelnTextTitel.text = "Regeln - Das Dartboard";
                regelnText.text = "Ein Dartboard besteht aus 20 nummerierten Segmenten, die als \"Zahlen\" von 1 bis 20 bezeichnet werden.\n" +
                    "In der Mitte befindet sich das Bulls - Eye, das in das innere Bulls - Eye(meistens rot) und das äußere Bulls-Eye(meistens grün) unterteilt ist.";
            }

            else if (seite == 2)
            {
                seitenZahl.text = seite.ToString() + "/9";
                regelnTextTitel.text = "Regeln - Abstand und Position";
                regelnText.text = "Die Spieler werfen ihre Darts von einem Abstand von 2,37 Metern (7 Fuß 9 1/4 Zoll) zur Wurflinie, die \"Oche\" genannt wird.\n" +
                    "Beim Werfen müssen sich beide Füße des Spielers hinter der Linie befinden.";
            }

            else if (seite == 3)
            {
                seitenZahl.text = seite.ToString() + "/9";
                regelnTextTitel.text = "Regeln - Punkte zählen";
                regelnText.text = "Beim Dartspiel gibt es verschiedene Wege, Punkte zu erzielen.\n" +
                    " Die höchste Punktzahl, die man mit einem einzelnen Dart erzielen kann, ist 60 (Treffer im Triple-20-Segment).\n" +
                    "Das Bulls-Eye zählt 50 Punkte im äußeren Ring und 25 Punkte im inneren Ring.";
            }

            else if (seite == 4)
            {
                seitenZahl.text = seite.ToString() + "/9";
                regelnTextTitel.text = "Regeln - Trefferwertung";
                regelnText.text = "Jedes Segment des Dartboards hat einen bestimmten Wert.\n" +
                    "Die äußeren Ringe (Doppel) haben den doppelten Wert des Segments, während die inneren Ringe (Triple) den dreifachen Wert des Segments haben.\n" +
                    "Ein Treffer in das Bulls-Eye zählt entweder 50 oder 25 Punkte, je nachdem ob der äußere oder innere Ring getroffen wird.";
            }

            else if (seite == 5)
            {
                seitenZahl.text = seite.ToString() + "/9";
                regelnTextTitel.text = "Regeln - Abwechselndes Werfen";
                regelnText.text = "Beim Dart werfen die Spieler abwechselnd ihre drei Darts auf das Dartboard.\n" +
                    "Der Spieler, der an der Reihe ist, darf so lange werfen, bis er entweder sein Ziel verfehlt oder das Spiel beendet hat.";
            }

            else if (seite == 6)
            {
                seitenZahl.text = seite.ToString() + "/9";
                regelnTextTitel.text = "Regeln - unterschiedliche Felder";
                regelnText.text = "Triple 20:\n" +
                    "Das Feld Triple 20 ist das höchstbewertete Feld auf dem Dartboard.\n" +
                    "Ein Treffer in diesem Feld bringt 60 Punkte, was das Maximum für einen einzelnen Wurf ist.\n" +
                    "Die KI sollte also versuchen, so oft wie möglich Triple 20 zu treffen, um schnell viele Punkte zu sammeln.";
            }

            else if (seite == 7)
            {
                seitenZahl.text = seite.ToString() + "/9";
                regelnTextTitel.text = "Regeln - unterschiedliche Felder";
                regelnText.text = "Double-Felder:\n" +
                    "Die Double-Felder befinden sich am äußeren Rand des Dartboards.\n" +
                    "Ein Treffer in einem Double-Feld verdoppelt die Punktzahl des entsprechenden Segments.\n" +
                    "Die KI sollte strategisch versuchen, diese Felder zu treffen, um ihre Punktzahl zu maximieren.";
            }

            else if (seite == 8)
            {
                seitenZahl.text = seite.ToString() + "/9";
                regelnTextTitel.text = "Regeln - unterschiedliche Felder";
                regelnText.text = "Triple-Felder:\n" +
                    "Ähnlich wie die Double-Felder befinden sich die Triple-Felder in der Nähe des Zentrums des Dartboards.\n" +
                    "Ein Treffer in einem Triple-Feld verdreifacht die Punktzahl des Segments.\n" +
                    "Die KI sollte die Triple-Felder anvisieren, um ihre Punktzahl zu erhöhen.";
            }

            else if (seite == 9)
            {
                seitenZahl.text = seite.ToString() + "/9";
                regelnTextTitel.text = "Regeln - unterschiedliche Felder";
                regelnText.text = "Bullseye:\n" +
                    "Das Bullseye besteht aus zwei Teilen - dem Inner Bullseye (Bulls-Eye oder Doppel-Bull) in der Mitte und dem Outer Bullseye (Bulls) im inneren Kreis des Dartboards.\n" +
                    "Ein Treffer im Inner Bullseye bringt 50 Punkte, während ein Treffer im Outer Bullseye 25 Punkte bringt.\n" +
                    "Die KI sollte versuchen, das Bullseye zu treffen, insbesondere das Inner Bullseye, um eine hohe Punktzahl zu erzielen.";
                seite = 0;
            }
        }
    }

    public void ButtonWeiter()
    {
        seite = seite + 1;
        if (seite == 1)
        {
            seitenZahl.text = seite.ToString() + "/9";
            regelnTextTitel.text = "Regeln - Das Dartboard";
            regelnText.text = "Ein Dartboard besteht aus 20 nummerierten Segmenten, die als \"Zahlen\" von 1 bis 20 bezeichnet werden.\n" +
                "In der Mitte befindet sich das Bulls - Eye, das in das innere Bulls - Eye(meistens rot) und das äußere Bulls-Eye(meistens grün) unterteilt ist.";
        }

        else if (seite == 2)
        {
            seitenZahl.text = seite.ToString() + "/9";
            regelnTextTitel.text = "Regeln - Abstand und Position";
            regelnText.text = "Die Spieler werfen ihre Darts von einem Abstand von 2,37 Metern (7 Fuß 9 1/4 Zoll) zur Wurflinie, die \"Oche\" genannt wird.\n" + 
                "Beim Werfen müssen sich beide Füße des Spielers hinter der Linie befinden.";
        }

        else if (seite == 3)
        {
            seitenZahl.text = seite.ToString() + "/9";
            regelnTextTitel.text = "Regeln - Punkte zählen";
            regelnText.text = "Beim Dartspiel gibt es verschiedene Wege, Punkte zu erzielen.\n" +
                " Die höchste Punktzahl, die man mit einem einzelnen Dart erzielen kann, ist 60 (Treffer im Triple-20-Segment).\n" +
                "Das Bulls-Eye zählt 50 Punkte im äußeren Ring und 25 Punkte im inneren Ring.";
        }

        else if (seite == 4)
        {
            seitenZahl.text = seite.ToString() + "/9";
            regelnTextTitel.text = "Regeln - Trefferwertung";
            regelnText.text = "Jedes Segment des Dartboards hat einen bestimmten Wert.\n" +
                "Die äußeren Ringe (Doppel) haben den doppelten Wert des Segments, während die inneren Ringe (Triple) den dreifachen Wert des Segments haben.\n" +
                "Ein Treffer in das Bulls-Eye zählt entweder 50 oder 25 Punkte, je nachdem ob der äußere oder innere Ring getroffen wird.";
        }

        else if (seite == 5)
        {
            seitenZahl.text = seite.ToString() + "/9";
            regelnTextTitel.text = "Regeln - Abwechselndes Werfen";
            regelnText.text = "Beim Dart werfen die Spieler abwechselnd ihre drei Darts auf das Dartboard.\n" +
                "Der Spieler, der an der Reihe ist, darf so lange werfen, bis er entweder sein Ziel verfehlt oder das Spiel beendet hat.";
        }

        else if (seite == 6)
        {
            seitenZahl.text = seite.ToString() + "/9";
            regelnTextTitel.text = "Regeln - unterschiedliche Felder";
            regelnText.text = "Triple 20:\n" +
                "Das Feld Triple 20 ist das höchstbewertete Feld auf dem Dartboard.\n" +
                "Ein Treffer in diesem Feld bringt 60 Punkte, was das Maximum für einen einzelnen Wurf ist.\n" +
                "Die KI sollte also versuchen, so oft wie möglich Triple 20 zu treffen, um schnell viele Punkte zu sammeln.";
        }

        else if (seite == 7)
        {
            seitenZahl.text = seite.ToString() + "/9";
            regelnTextTitel.text = "Regeln - unterschiedliche Felder";
            regelnText.text = "Double-Felder:\n" +
                "Die Double-Felder befinden sich am äußeren Rand des Dartboards.\n" +
                "Ein Treffer in einem Double-Feld verdoppelt die Punktzahl des entsprechenden Segments.\n" +
                "Die KI sollte strategisch versuchen, diese Felder zu treffen, um ihre Punktzahl zu maximieren.";
        }

        else if (seite == 8)
        {
            seitenZahl.text = seite.ToString() + "/9";
            regelnTextTitel.text = "Regeln - unterschiedliche Felder";
            regelnText.text = "Triple-Felder:\n" +
                "Ähnlich wie die Double-Felder befinden sich die Triple-Felder in der Nähe des Zentrums des Dartboards.\n" +
                "Ein Treffer in einem Triple-Feld verdreifacht die Punktzahl des Segments.\n" +
                "Die KI sollte die Triple-Felder anvisieren, um ihre Punktzahl zu erhöhen.";
        }

        else if (seite == 9)
        {
            seitenZahl.text = seite.ToString() + "/9";
            regelnTextTitel.text = "Regeln - unterschiedliche Felder";
            regelnText.text = "Bullseye:\n" +
                "Das Bullseye besteht aus zwei Teilen - dem Inner Bullseye (Bulls-Eye oder Doppel-Bull) in der Mitte und dem Outer Bullseye (Bulls) im inneren Kreis des Dartboards.\n" +
                "Ein Treffer im Inner Bullseye bringt 50 Punkte, während ein Treffer im Outer Bullseye 25 Punkte bringt.\n" +
                "Die KI sollte versuchen, das Bullseye zu treffen, insbesondere das Inner Bullseye, um eine hohe Punktzahl zu erzielen.";
            seite = 0;
        }
        

        /*TextMeshProUGUI textComponent = anleitungText.GetComponent<TextMeshProUGUI>();
        textComponent.text = "Das Dartboard: Ein Dartboard besteht aus 20 nummerierten Segmenten, die als \"Zahlen\" von 1 bis 20 bezeichnet werden. " +
            "In der Mitte befindet sich das Bulls-Eye, das in das innere Bulls-Eye (meistens rot) und das äußere Bulls-Eye (meistens grün) unterteilt ist.\r\n\r\n\r\n" +

            "Abstand und Position: Die Spieler werfen ihre Darts von einem Abstand von 2,37 Metern (7 Fuß 9 1/4 Zoll) zur Wurflinie, die \"Oche\" genannt wird. " +
            "Beim Werfen müssen sich beide Füße des Spielers hinter der Linie befinden.\r\n\r\n\r\n" +

            "Punkte zählen: Beim Dartspiel gibt es verschiedene Wege, Punkte zu erzielen. " +
            "Die höchste Punktzahl, die man mit einem einzelnen Dart erzielen kann, ist 60 (Treffer im Triple-20-Segment). " +
            "Das Bulls-Eye zählt 50 Punkte im äußeren Ring und 25 Punkte im inneren Ring.\r\n\r\n\r\n" +

            "Trefferwertung: Jedes Segment des Dartboards hat einen bestimmten Wert. " +
            "Die äußeren Ringe (Doppel) haben den doppelten Wert des Segments, während die inneren Ringe (Triple) den dreifachen Wert des Segments haben. " +
            "Ein Treffer in das Bulls-Eye zählt entweder 50 oder 25 Punkte, je nachdem ob der äußere oder innere Ring getroffen wird.\r\n\r\n\r\n" +

            "Abwechselndes Werfen: Beim Dart werfen die Spieler abwechselnd ihre drei Darts auf das Dartboard. " +
            "Der Spieler, der an der Reihe ist, darf so lange werfen, bis er entweder sein Ziel verfehlt oder das Spiel beendet hat.\r\n\r\n\r\n" +

            "unterschiedliche Felder:\r\n\r\n\r\n" +
            "Triple 20: Das Feld Triple 20 ist das höchstbewertete Feld auf dem Dartboard. " +
            "Ein Treffer in diesem Feld bringt 60 Punkte, was das Maximum für einen einzelnen Wurf ist. " +
            "Die KI sollte also versuchen, so oft wie möglich Triple 20 zu treffen, um schnell viele Punkte zu sammeln.\r\n\r\n\r\n" +

            "Double-Felder: Die Double-Felder befinden sich am äußeren Rand des Dartboards. " +
            "Ein Treffer in einem Double-Feld verdoppelt die Punktzahl des entsprechenden Segments. " +
            "Die KI sollte strategisch versuchen, diese Felder zu treffen, um ihre Punktzahl zu maximieren.\r\n\r\n\r\n" +

            "Triple-Felder: Ähnlich wie die Double-Felder befinden sich die Triple-Felder in der Nähe des Zentrums des Dartboards. " +
            "Ein Treffer in einem Triple-Feld verdreifacht die Punktzahl des Segments. Die KI sollte die Triple-Felder anvisieren, um ihre Punktzahl zu erhöhen.\r\n\r\n\r\n" +

            "Bullseye: Das Bullseye besteht aus zwei Teilen - dem Inner Bullseye (Bulls-Eye oder Doppel-Bull) in der Mitte und dem Outer Bullseye (Bulls) im inneren Kreis des Dartboards. " +
            "Ein Treffer im Inner Bullseye bringt 50 Punkte, während ein Treffer im Outer Bullseye 25 Punkte bringt. " +
            "Die KI sollte versuchen, das Bullseye zu treffen, insbesondere das Inner Bullseye, um eine hohe Punktzahl zu erzielen.\r\n";*/
    }


    // Update is called once per frame
    void Update()
    {

    }
}