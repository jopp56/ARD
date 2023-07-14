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
        tippsTextComponent.text = "Praktiziere deine Wurfform: Eine konsistente Wurfform ist entscheidend für gute Ergebnisse. Übe regelmäßig und versuche, deine Wurftechnik zu verbessern.\r\n\r\n\r\nZielen: Konzentriere dich auf deine Ziele. Fixiere das gewünschte Ziel auf der Dartscheibe und versuche, den Dartpfeil genau dorthin zu werfen.\r\n\r\n\r\nKontrolliere deinen Körper: Achte auf deine Körperhaltung und -balance während des Wurfs. Ein stabiler Stand und eine entspannte Hand können dazu beitragen, deine Würfe genauer zu machen.\r\n\r\n\r\nÜbe das Timing: Finde das richtige Timing für deinen Wurf. Zu schnell oder zu langsam zu werfen, kann deine Genauigkeit beeinträchtigen. Experimentiere und finde heraus, welches Timing für dich am besten funktioniert.\r\n\r\n\r\nStrategisches Spielen: Denke voraus und entwickle eine Spielstrategie. Überlege, welche Ziele du anvisieren möchtest, um das meiste aus deinen Würfen herauszuholen. Zum Beispiel, indem du versuchst, in bestimmten Bereichen der Dartscheibe zu bleiben, um Punkte zu maximieren oder bestimmte Ziele zu blockieren.\r\n\r\n\r\nTrainiere verschiedene Wurftechniken: Versuche, verschiedene Wurftechniken zu erlernen und zu beherrschen. Je mehr Variationen du beherrschst, desto besser kannst du auf verschiedene Spielsituationen reagieren.\r\n\r\n\r\nMentale Stärke: Dart ist auch ein mentaler Sport. Trainiere deine Konzentration und bleibe ruhig, auch wenn du unter Druck stehst. Der richtige Fokus kann einen großen Unterschied machen.\r\n\r\n\r\nTrainiere regelmäßig: Übung macht den Meister! Widme regelmäßig Zeit zum Dartspielen, um deine Fähigkeiten zu verbessern. Je mehr du trainierst, desto besser wirst du. Die Briblle kann dir mit den unterschiedlichen Spielmodi dabei helfen.\r\n\r\n\r\nSpaß haben: Genieße das Spiel und hab Spaß daran. Der Spaßfaktor kann dazu beitragen, dass du entspannt bleibst und besser spielst.\r\n";
    }


    // Update is called once per frame
    void Update()
    {

    }
}