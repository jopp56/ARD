using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class RegelnSkript : MonoBehaviour
{
    public GameObject anleitungText;
    // Start is called before the first frame update
    void Start()
    {
    }

    public void ButtonTipps()
    {
        TextMeshProUGUI textComponent = anleitungText.GetComponent<TextMeshProUGUI>();
        textComponent.text = "Das Dartboard: Ein Dartboard besteht aus 20 nummerierten Segmenten, die als \"Zahlen\" von 1 bis 20 bezeichnet werden. In der Mitte befindet sich das Bulls-Eye, das in das innere Bulls-Eye (meistens rot) und das �u�ere Bulls-Eye (meistens gr�n) unterteilt ist.\r\n\r\n\r\nAbstand und Position: Die Spieler werfen ihre Darts von einem Abstand von 2,37 Metern (7 Fu� 9 1/4 Zoll) zur Wurflinie, die \"Oche\" genannt wird. Beim Werfen m�ssen sich beide F��e des Spielers hinter der Linie befinden.\r\n\r\n\r\nPunkte z�hlen: Beim Dartspiel gibt es verschiedene Wege, Punkte zu erzielen. Die h�chste Punktzahl, die man mit einem einzelnen Dart erzielen kann, ist 60 (Treffer im Triple-20-Segment). Das Bulls-Eye z�hlt 50 Punkte im �u�eren Ring und 25 Punkte im inneren Ring.\r\n\r\n\r\nTrefferwertung: Jedes Segment des Dartboards hat einen bestimmten Wert. Die �u�eren Ringe (Doppel) haben den doppelten Wert des Segments, w�hrend die inneren Ringe (Triple) den dreifachen Wert des Segments haben. Ein Treffer in das Bulls-Eye z�hlt entweder 50 oder 25 Punkte, je nachdem ob der �u�ere oder innere Ring getroffen wird.\r\n\r\n\r\nAbwechselndes Werfen: Beim Dart werfen die Spieler abwechselnd ihre drei Darts auf das Dartboard. Der Spieler, der an der Reihe ist, darf so lange werfen, bis er entweder sein Ziel verfehlt oder das Spiel beendet hat.\r\n\r\n\r\nunterschiedliche Felder:\r\n\r\n\r\nTriple 20: Das Feld Triple 20 ist das h�chstbewertete Feld auf dem Dartboard. Ein Treffer in diesem Feld bringt 60 Punkte, was das Maximum f�r einen einzelnen Wurf ist. Die KI sollte also versuchen, so oft wie m�glich Triple 20 zu treffen, um schnell viele Punkte zu sammeln.\r\n\r\n\r\nDouble-Felder: Die Double-Felder befinden sich am �u�eren Rand des Dartboards. Ein Treffer in einem Double-Feld verdoppelt die Punktzahl des entsprechenden Segments. Die KI sollte strategisch versuchen, diese Felder zu treffen, um ihre Punktzahl zu maximieren.\r\n\r\n\r\nTriple-Felder: �hnlich wie die Double-Felder befinden sich die Triple-Felder in der N�he des Zentrums des Dartboards. Ein Treffer in einem Triple-Feld verdreifacht die Punktzahl des Segments. Die KI sollte die Triple-Felder anvisieren, um ihre Punktzahl zu erh�hen.\r\n\r\n\r\nBullseye: Das Bullseye besteht aus zwei Teilen - dem Inner Bullseye (Bulls-Eye oder Doppel-Bull) in der Mitte und dem Outer Bullseye (Bulls) im inneren Kreis des Dartboards. Ein Treffer im Inner Bullseye bringt 50 Punkte, w�hrend ein Treffer im Outer Bullseye 25 Punkte bringt. Die KI sollte versuchen, das Bullseye zu treffen, insbesondere das Inner Bullseye, um eine hohe Punktzahl zu erzielen.\r\n";
    }


    // Update is called once per frame
    void Update()
    {

    }
}