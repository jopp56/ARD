using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class TippsSkript : MonoBehaviour
{
    //public GameObject tippsText;
    public GameObject menu;
    public TextMeshProUGUI tippsText;
    public TextMeshProUGUI tippsTextTitel;
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

    public void ButtonTipps()
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
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Praktiziere deine Wurfform";
                tippsText.text = "Eine konsistente Wurfform ist entscheidend für gute Ergebnisse.\n" +
                        "Übe regelmäßig und versuche, deine Wurftechnik zu verbessern.";
            }

            else if (seite == 2)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Zielen";
                tippsText.text = "Konzentriere dich auf deine Ziele.\n" +
                        "Fixiere das gewünschte Ziel auf der Dartscheibe und versuche, den Dartpfeil genau dorthin zu werfen.\n" +
                        "Kontrolliere deinen Körper: Achte auf deine Körperhaltung und -balance während des Wurfs.\n" +
                        "Ein stabiler Stand und eine entspannte Hand können dazu beitragen, deine Würfe genauer zu machen.";
            }

            else if (seite == 3)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Übe das Timing";
                tippsText.text = "Finde das richtige Timing für deinen Wurf.\n" +
                        "Zu schnell oder zu langsam zu werfen, kann deine Genauigkeit beeinträchtigen.\n" +
                        "Experimentiere und finde heraus, welches Timing für dich am besten funktioniert.";
            }

            else if (seite == 4)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Strategisches Spielen";
                tippsText.text = "Denke voraus und entwickle eine Spielstrategie.\n" +
                        "Überlege, welche Ziele du anvisieren möchtest, um das meiste aus deinen Würfen herauszuholen.\n" +
                        "Zum Beispiel, indem du versuchst, in bestimmten Bereichen der Dartscheibe zu bleiben, um Punkte zu maximieren oder bestimmte Ziele zu blockieren.";
            }

            else if (seite == 5)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Trainiere verschiedene Wurftechniken";
                tippsText.text = "Versuche, verschiedene Wurftechniken zu erlernen und zu beherrschen.\n" +
                        "Je mehr Variationen du beherrschst, desto besser kannst du auf verschiedene Spielsituationen reagieren.";
            }

            else if (seite == 6)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Mentale Stärke";
                tippsText.text = "Dart ist auch ein mentaler Sport.\n" +
                        "Trainiere deine Konzentration und bleibe ruhig, auch wenn du unter Druck stehst.\n" +
                        "Der richtige Fokus kann einen großen Unterschied machen.";
            }

            else if (seite == 7)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Trainiere regelmäßig";
                tippsText.text = "Übung macht den Meister!\n" +
                        "Widme regelmäßig Zeit zum Dartspielen, um deine Fähigkeiten zu verbessern.\n" +
                        "Je mehr du trainierst, desto besser wirst du.\n" +
                        "Die Brille kann dir mit den unterschiedlichen Spielmodi dabei helfen.";
            }

            else if (seite == 8)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Spaß haben";
                tippsText.text = "Genieße das Spiel und hab Spaß daran.\n" +
                        "Der Spaßfaktor kann dazu beitragen, dass du entspannt bleibst und besser spielst.";
                seite = 0;
            }
        }
    }

    public void ButtonWeiter()
    {
        seite = seite + 1;
        if (seite == 1)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Praktiziere deine Wurfform";
            tippsText.text = "Eine konsistente Wurfform ist entscheidend für gute Ergebnisse.\n" +
                    "Übe regelmäßig und versuche, deine Wurftechnik zu verbessern.";
        }

        else if (seite == 2)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Zielen";
            tippsText.text = "Konzentriere dich auf deine Ziele.\n" +
                    "Fixiere das gewünschte Ziel auf der Dartscheibe und versuche, den Dartpfeil genau dorthin zu werfen.\n" +
                    "Kontrolliere deinen Körper: Achte auf deine Körperhaltung und -balance während des Wurfs.\n" +
                    "Ein stabiler Stand und eine entspannte Hand können dazu beitragen, deine Würfe genauer zu machen.";
        }

        else if (seite == 3)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Übe das Timing";
            tippsText.text = "Finde das richtige Timing für deinen Wurf.\n" +
                    "Zu schnell oder zu langsam zu werfen, kann deine Genauigkeit beeinträchtigen.\n" +
                    "Experimentiere und finde heraus, welches Timing für dich am besten funktioniert.";
        }

        else if (seite == 4)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Strategisches Spielen";
            tippsText.text = "Denke voraus und entwickle eine Spielstrategie.\n" +
                    "Überlege, welche Ziele du anvisieren möchtest, um das meiste aus deinen Würfen herauszuholen.\n" +
                    "Zum Beispiel, indem du versuchst, in bestimmten Bereichen der Dartscheibe zu bleiben, um Punkte zu maximieren oder bestimmte Ziele zu blockieren.";
        }

        else if (seite == 5)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Trainiere verschiedene Wurftechniken";
            tippsText.text = "Versuche, verschiedene Wurftechniken zu erlernen und zu beherrschen.\n" +
                    "Je mehr Variationen du beherrschst, desto besser kannst du auf verschiedene Spielsituationen reagieren.";
        }

        else if (seite == 6)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Mentale Stärke";
            tippsText.text = "Dart ist auch ein mentaler Sport.\n" +
                    "Trainiere deine Konzentration und bleibe ruhig, auch wenn du unter Druck stehst.\n" +
                    "Der richtige Fokus kann einen großen Unterschied machen.";
        }

        else if (seite == 7)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Trainiere regelmäßig";
            tippsText.text = "Übung macht den Meister!\n" +
                    "Widme regelmäßig Zeit zum Dartspielen, um deine Fähigkeiten zu verbessern.\n" +
                    "Je mehr du trainierst, desto besser wirst du.\n" +
                    "Die Brille kann dir mit den unterschiedlichen Spielmodi dabei helfen.";
        }

        else if (seite == 8)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Spaß haben";
            tippsText.text = "Genieße das Spiel und hab Spaß daran.\n" +
                    "Der Spaßfaktor kann dazu beitragen, dass du entspannt bleibst und besser spielst.";
            seite = 0;
        }
    }
/*TextMeshProUGUI tippsTextComponent = tippsText.GetComponent<TextMeshProUGUI>();
            tippsTextComponent.text = "Praktiziere deine Wurfform: Eine konsistente Wurfform ist entscheidend für gute Ergebnisse. Übe regelmäßig und versuche, deine Wurftechnik zu verbessern.\r\n\r\n\r\n" +

                "Zielen: Konzentriere dich auf deine Ziele. Fixiere das gewünschte Ziel auf der Dartscheibe und versuche, den Dartpfeil genau dorthin zu werfen.\r\n\r\n\r\n" +
                "Kontrolliere deinen Körper: Achte auf deine Körperhaltung und -balance während des Wurfs. " +
                "Ein stabiler Stand und eine entspannte Hand können dazu beitragen, deine Würfe genauer zu machen.\r\n\r\n\r\n" +

                "Übe das Timing: Finde das richtige Timing für deinen Wurf. Zu schnell oder zu langsam zu werfen, kann deine Genauigkeit beeinträchtigen. " +
                "Experimentiere und finde heraus, welches Timing für dich am besten funktioniert.\r\n\r\n\r\n" +

                "Strategisches Spielen: Denke voraus und entwickle eine Spielstrategie. Überlege, welche Ziele du anvisieren möchtest, um das meiste aus deinen Würfen herauszuholen. " +
                "Zum Beispiel, indem du versuchst, in bestimmten Bereichen der Dartscheibe zu bleiben, um Punkte zu maximieren oder bestimmte Ziele zu blockieren.\r\n\r\n\r\n" +

                "Trainiere verschiedene Wurftechniken: Versuche, verschiedene Wurftechniken zu erlernen und zu beherrschen. " +
                "Je mehr Variationen du beherrschst, desto besser kannst du auf verschiedene Spielsituationen reagieren.\r\n\r\n\r\n" +

                "Mentale Stärke: Dart ist auch ein mentaler Sport. Trainiere deine Konzentration und bleibe ruhig, auch wenn du unter Druck stehst. " +
                "Der richtige Fokus kann einen großen Unterschied machen.\r\n\r\n\r\n" +

                "Trainiere regelmäßig: Übung macht den Meister! Widme regelmäßig Zeit zum Dartspielen, um deine Fähigkeiten zu verbessern. " +
                "Je mehr du trainierst, desto besser wirst du. Die Briblle kann dir mit den unterschiedlichen Spielmodi dabei helfen.\r\n\r\n\r\n" +

                "Spaß haben: Genieße das Spiel und hab Spaß daran. Der Spaßfaktor kann dazu beitragen, dass du entspannt bleibst und besser spielst.\r\n";*/

    // Update is called once per frame
    void Update()
    {

    }
}