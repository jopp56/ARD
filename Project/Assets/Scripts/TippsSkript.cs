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
                tippsText.text = "Eine konsistente Wurfform ist entscheidend f�r gute Ergebnisse.\n" +
                        "�be regelm��ig und versuche, deine Wurftechnik zu verbessern.";
            }

            else if (seite == 2)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Zielen";
                tippsText.text = "Konzentriere dich auf deine Ziele.\n" +
                        "Fixiere das gew�nschte Ziel auf der Dartscheibe und versuche, den Dartpfeil genau dorthin zu werfen.\n" +
                        "Kontrolliere deinen K�rper: Achte auf deine K�rperhaltung und -balance w�hrend des Wurfs.\n" +
                        "Ein stabiler Stand und eine entspannte Hand k�nnen dazu beitragen, deine W�rfe genauer zu machen.";
            }

            else if (seite == 3)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - �be das Timing";
                tippsText.text = "Finde das richtige Timing f�r deinen Wurf.\n" +
                        "Zu schnell oder zu langsam zu werfen, kann deine Genauigkeit beeintr�chtigen.\n" +
                        "Experimentiere und finde heraus, welches Timing f�r dich am besten funktioniert.";
            }

            else if (seite == 4)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Strategisches Spielen";
                tippsText.text = "Denke voraus und entwickle eine Spielstrategie.\n" +
                        "�berlege, welche Ziele du anvisieren m�chtest, um das meiste aus deinen W�rfen herauszuholen.\n" +
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
                tippsTextTitel.text = "Tipps - Mentale St�rke";
                tippsText.text = "Dart ist auch ein mentaler Sport.\n" +
                        "Trainiere deine Konzentration und bleibe ruhig, auch wenn du unter Druck stehst.\n" +
                        "Der richtige Fokus kann einen gro�en Unterschied machen.";
            }

            else if (seite == 7)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Trainiere regelm��ig";
                tippsText.text = "�bung macht den Meister!\n" +
                        "Widme regelm��ig Zeit zum Dartspielen, um deine F�higkeiten zu verbessern.\n" +
                        "Je mehr du trainierst, desto besser wirst du.\n" +
                        "Die Brille kann dir mit den unterschiedlichen Spielmodi dabei helfen.";
            }

            else if (seite == 8)
            {
                seitenZahl.text = seite.ToString() + "/8";
                tippsTextTitel.text = "Tipps - Spa� haben";
                tippsText.text = "Genie�e das Spiel und hab Spa� daran.\n" +
                        "Der Spa�faktor kann dazu beitragen, dass du entspannt bleibst und besser spielst.";
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
            tippsText.text = "Eine konsistente Wurfform ist entscheidend f�r gute Ergebnisse.\n" +
                    "�be regelm��ig und versuche, deine Wurftechnik zu verbessern.";
        }

        else if (seite == 2)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Zielen";
            tippsText.text = "Konzentriere dich auf deine Ziele.\n" +
                    "Fixiere das gew�nschte Ziel auf der Dartscheibe und versuche, den Dartpfeil genau dorthin zu werfen.\n" +
                    "Kontrolliere deinen K�rper: Achte auf deine K�rperhaltung und -balance w�hrend des Wurfs.\n" +
                    "Ein stabiler Stand und eine entspannte Hand k�nnen dazu beitragen, deine W�rfe genauer zu machen.";
        }

        else if (seite == 3)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - �be das Timing";
            tippsText.text = "Finde das richtige Timing f�r deinen Wurf.\n" +
                    "Zu schnell oder zu langsam zu werfen, kann deine Genauigkeit beeintr�chtigen.\n" +
                    "Experimentiere und finde heraus, welches Timing f�r dich am besten funktioniert.";
        }

        else if (seite == 4)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Strategisches Spielen";
            tippsText.text = "Denke voraus und entwickle eine Spielstrategie.\n" +
                    "�berlege, welche Ziele du anvisieren m�chtest, um das meiste aus deinen W�rfen herauszuholen.\n" +
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
            tippsTextTitel.text = "Tipps - Mentale St�rke";
            tippsText.text = "Dart ist auch ein mentaler Sport.\n" +
                    "Trainiere deine Konzentration und bleibe ruhig, auch wenn du unter Druck stehst.\n" +
                    "Der richtige Fokus kann einen gro�en Unterschied machen.";
        }

        else if (seite == 7)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Trainiere regelm��ig";
            tippsText.text = "�bung macht den Meister!\n" +
                    "Widme regelm��ig Zeit zum Dartspielen, um deine F�higkeiten zu verbessern.\n" +
                    "Je mehr du trainierst, desto besser wirst du.\n" +
                    "Die Brille kann dir mit den unterschiedlichen Spielmodi dabei helfen.";
        }

        else if (seite == 8)
        {
            seitenZahl.text = seite.ToString() + "/8";
            tippsTextTitel.text = "Tipps - Spa� haben";
            tippsText.text = "Genie�e das Spiel und hab Spa� daran.\n" +
                    "Der Spa�faktor kann dazu beitragen, dass du entspannt bleibst und besser spielst.";
            seite = 0;
        }
    }
/*TextMeshProUGUI tippsTextComponent = tippsText.GetComponent<TextMeshProUGUI>();
            tippsTextComponent.text = "Praktiziere deine Wurfform: Eine konsistente Wurfform ist entscheidend f�r gute Ergebnisse. �be regelm��ig und versuche, deine Wurftechnik zu verbessern.\r\n\r\n\r\n" +

                "Zielen: Konzentriere dich auf deine Ziele. Fixiere das gew�nschte Ziel auf der Dartscheibe und versuche, den Dartpfeil genau dorthin zu werfen.\r\n\r\n\r\n" +
                "Kontrolliere deinen K�rper: Achte auf deine K�rperhaltung und -balance w�hrend des Wurfs. " +
                "Ein stabiler Stand und eine entspannte Hand k�nnen dazu beitragen, deine W�rfe genauer zu machen.\r\n\r\n\r\n" +

                "�be das Timing: Finde das richtige Timing f�r deinen Wurf. Zu schnell oder zu langsam zu werfen, kann deine Genauigkeit beeintr�chtigen. " +
                "Experimentiere und finde heraus, welches Timing f�r dich am besten funktioniert.\r\n\r\n\r\n" +

                "Strategisches Spielen: Denke voraus und entwickle eine Spielstrategie. �berlege, welche Ziele du anvisieren m�chtest, um das meiste aus deinen W�rfen herauszuholen. " +
                "Zum Beispiel, indem du versuchst, in bestimmten Bereichen der Dartscheibe zu bleiben, um Punkte zu maximieren oder bestimmte Ziele zu blockieren.\r\n\r\n\r\n" +

                "Trainiere verschiedene Wurftechniken: Versuche, verschiedene Wurftechniken zu erlernen und zu beherrschen. " +
                "Je mehr Variationen du beherrschst, desto besser kannst du auf verschiedene Spielsituationen reagieren.\r\n\r\n\r\n" +

                "Mentale St�rke: Dart ist auch ein mentaler Sport. Trainiere deine Konzentration und bleibe ruhig, auch wenn du unter Druck stehst. " +
                "Der richtige Fokus kann einen gro�en Unterschied machen.\r\n\r\n\r\n" +

                "Trainiere regelm��ig: �bung macht den Meister! Widme regelm��ig Zeit zum Dartspielen, um deine F�higkeiten zu verbessern. " +
                "Je mehr du trainierst, desto besser wirst du. Die Briblle kann dir mit den unterschiedlichen Spielmodi dabei helfen.\r\n\r\n\r\n" +

                "Spa� haben: Genie�e das Spiel und hab Spa� daran. Der Spa�faktor kann dazu beitragen, dass du entspannt bleibst und besser spielst.\r\n";*/

    // Update is called once per frame
    void Update()
    {

    }
}