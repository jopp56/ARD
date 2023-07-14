using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class TippsSkript : MonoBehaviour
{
    public GameObject tippsText;
    // Start is called before the first frame update
    void Start()
    {
    }

    public void ButtonTipps()
    {
        TextMeshProUGUI tippsTextComponent = tippsText.GetComponent<TextMeshProUGUI>();
        tippsTextComponent.text = "Praktiziere deine Wurfform: Eine konsistente Wurfform ist entscheidend f�r gute Ergebnisse. �be regelm��ig und versuche, deine Wurftechnik zu verbessern.\r\n\r\n\r\nZielen: Konzentriere dich auf deine Ziele. Fixiere das gew�nschte Ziel auf der Dartscheibe und versuche, den Dartpfeil genau dorthin zu werfen.\r\n\r\n\r\nKontrolliere deinen K�rper: Achte auf deine K�rperhaltung und -balance w�hrend des Wurfs. Ein stabiler Stand und eine entspannte Hand k�nnen dazu beitragen, deine W�rfe genauer zu machen.\r\n\r\n\r\n�be das Timing: Finde das richtige Timing f�r deinen Wurf. Zu schnell oder zu langsam zu werfen, kann deine Genauigkeit beeintr�chtigen. Experimentiere und finde heraus, welches Timing f�r dich am besten funktioniert.\r\n\r\n\r\nStrategisches Spielen: Denke voraus und entwickle eine Spielstrategie. �berlege, welche Ziele du anvisieren m�chtest, um das meiste aus deinen W�rfen herauszuholen. Zum Beispiel, indem du versuchst, in bestimmten Bereichen der Dartscheibe zu bleiben, um Punkte zu maximieren oder bestimmte Ziele zu blockieren.\r\n\r\n\r\nTrainiere verschiedene Wurftechniken: Versuche, verschiedene Wurftechniken zu erlernen und zu beherrschen. Je mehr Variationen du beherrschst, desto besser kannst du auf verschiedene Spielsituationen reagieren.\r\n\r\n\r\nMentale St�rke: Dart ist auch ein mentaler Sport. Trainiere deine Konzentration und bleibe ruhig, auch wenn du unter Druck stehst. Der richtige Fokus kann einen gro�en Unterschied machen.\r\n\r\n\r\nTrainiere regelm��ig: �bung macht den Meister! Widme regelm��ig Zeit zum Dartspielen, um deine F�higkeiten zu verbessern. Je mehr du trainierst, desto besser wirst du. Die Briblle kann dir mit den unterschiedlichen Spielmodi dabei helfen.\r\n\r\n\r\nSpa� haben: Genie�e das Spiel und hab Spa� daran. Der Spa�faktor kann dazu beitragen, dass du entspannt bleibst und besser spielst.\r\n";
    }


    // Update is called once per frame
    void Update()
    {

    }
}