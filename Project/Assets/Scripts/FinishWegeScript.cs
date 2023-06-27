using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class FinishWegeScript : MonoBehaviour
{
    public TextMeshProUGUI zuWerfenText;

    public static string[] wurfarray = new string[9] { "Werfe1.1", "Werfe2.1", "Werfe3.1", "Werfe1.2", "Werfe2.2", "Werfe3.2", "Werfe1.3", "Werfe2.3", "Werfe3.3" };

    public static int rndScore;

    void Awake()
    {
        //zuWerfenText.text = "In drei Würfen Finishen, werfe:\n\n" + wurfarray[0] + " | " + wurfarray[1] + " | " + wurfarray[2];
        //oder:
        zuWerfenText.text = "In maximal drei Würfen Finishen, werfe:\n\n" + wurfarray[0] + " | " + wurfarray[1] + " | " + wurfarray[2]
            + "\n oder:\n" + wurfarray[3] + " | " + wurfarray[4] + " | " + wurfarray[5]
            + "\n oder:\n" + wurfarray[6] + " | " + wurfarray[7] + " | " + wurfarray[8];
    }

    // Start is called before the first frame update
    void Start()
    {
        rndScore = RandomZahlScoreAnzeigeScript.instance.randomScore;

        switch (rndScore)
        {
            case 170:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Bull's-Eye";
                wurfarray[3] = "-";
                break;

            case 167:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Bull's-Eye";
                wurfarray[3] = "-";
                break;

            case 164:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 18";
                wurfarray[2] = "Bull's-Eye";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "Triple 19";
                wurfarray[5] = "Bull's-Eye";
                wurfarray[6] = "-";
                break;

            case 161:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 17";
                wurfarray[2] = "Bull's-Eye";
                wurfarray[3] = "Triple 19"; //?
                wurfarray[4] = "Triple 18";
                wurfarray[5] = "Bull's-Eye";
                wurfarray[6] = "-";
                break;

            case 160:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "-";
                break;

            case 158:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Double 19";
                wurfarray[3] = "-";
                break;

            case 157:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "-";
                break;

            case 156:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Double 18";
                wurfarray[3] = "-";
                break;

            case 155:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 19";
                wurfarray[3] = "-";
                break;

            case 154:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 18";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "Triple 19";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 153:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 18";
                wurfarray[3] = "-";
                break;

            case 152:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "-";
                break;

            case 151:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 17";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "Triple 18";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 150:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 18";
                wurfarray[2] = "Double 18";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "Triple 19";
                wurfarray[5] = "Double 18";
                wurfarray[6] = "-";
                break;

            case 149:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "-";
                break;

            case 148:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Double 14";
                wurfarray[3] = "Triple 18";
                wurfarray[4] = "Triple 18";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 147:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 17";
                wurfarray[2] = "Double 18";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "Triple 18";
                wurfarray[5] = "Double 18";
                wurfarray[6] = "-";
                break;

            case 146:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 18";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "Triple 19";
                wurfarray[5] = "Double 16";
                wurfarray[6] = "-";
                break;

            case 145:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 14";
                wurfarray[3] = "-";
                break;

            case 144:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Double 12";
                wurfarray[3] = "Triple 18";
                wurfarray[4] = "Triple 18";
                wurfarray[5] = "Double 18";
                wurfarray[6] = "-";
                break;

            case 143:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 17";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "Triple 18";
                wurfarray[5] = "Double 16";
                wurfarray[6] = "-";
                break;

            case 142:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 14";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 17";
                wurfarray[4] = "Triple 17";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 141:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 12";
                wurfarray[3] = "-";
                break;

            case 140:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Double 10";
                wurfarray[3] = "-";
                break;

            case 139:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 13";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "Triple 14";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "Triple 19";
                wurfarray[7] = "Bull's-Eye";
                wurfarray[8] = "Double 16";
                break;

            case 138:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 18";
                wurfarray[2] = "Double 12";
                wurfarray[3] = "Triple 17";
                wurfarray[4] = "Triple 17";
                wurfarray[5] = "Double 18";
                wurfarray[6] = "Triple 19";
                wurfarray[7] = "Triple 19";
                wurfarray[8] = "Double 12";
                break;

            case 137:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 10";
                wurfarray[3] = "-";
                break;

            case 136:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Double 8";
                wurfarray[3] = "-";
                break;

            case 135:
                wurfarray[0] = "Bull";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Bull's-Eye";
                wurfarray[3] = "Triple 20";
                wurfarray[4] = "Triple 17";
                wurfarray[5] = "Double 12";
                wurfarray[6] = "-";
                break;

            case 134:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 16";
                wurfarray[2] = "Double 13";
                wurfarray[3] = "Triple 17";
                wurfarray[4] = "Triple 17";
                wurfarray[5] = "Double 16";
                wurfarray[6] = "-";
                break;

            case 133:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 8";
                wurfarray[3] = "-";
                break;

            case 132:
                wurfarray[0] = "Bull's-Eye";
                wurfarray[1] = "Bull's-Eye";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 19";
                wurfarray[5] = "Bull's-Eye";
                wurfarray[6] = "-";
                break;

            case 131:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 13";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "Triple 17";
                wurfarray[4] = "Double 20";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 130:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 20";
                wurfarray[2] = "Double 5";
                wurfarray[3] = "-";
                break;

            case 129:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Triple 16";
                wurfarray[2] = "Double 12";
                wurfarray[3] = "-";
                break;

            case 128:
                wurfarray[0] = "Triple 18";
                wurfarray[1] = "Triple 14";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "-";
                break;

            case 127:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 17";
                wurfarray[2] = "Double 8";
                wurfarray[3] = "-";
                break;

            case 126:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 6";
                wurfarray[3] = "-";
                break;

            case 125:
                wurfarray[0] = "Triple 18";
                wurfarray[1] = "Triple 19";
                wurfarray[2] = "Double 7";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 20";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 124:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 14";
                wurfarray[2] = "Double 11";
                wurfarray[3] = "Triple 14";
                wurfarray[4] = "Triple 14";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 123:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Triple 16";
                wurfarray[2] = "Double 9";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 20";
                wurfarray[5] = "Double 19";
                wurfarray[6] = "-";
                break;

            case 122:
                wurfarray[0] = "Triple 18";
                wurfarray[1] = "Triple 18";
                wurfarray[2] = "Double 7";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 19";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 121:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 11";
                wurfarray[2] = "Double 14";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 20";
                wurfarray[5] = "Double 18";
                wurfarray[6] = "-";
                break;

            case 120:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "20";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Double 20";
                wurfarray[4] = "Double 20";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 119:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Triple 12";
                wurfarray[2] = "Double 13";
                wurfarray[3] = "-";
                break;

            case 118:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "18";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "-";
                break;

            case 117:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "17";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "20";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 116:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "19";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 20";
                wurfarray[4] = "16";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 115:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "15";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "18";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "Bull's-Eye";
                wurfarray[7] = "Bull";
                wurfarray[8] = "Double 20";
                break;

            case 114:
                wurfarray[0] = "Triple 18";
                wurfarray[1] = "20";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 20";
                wurfarray[4] = "14";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "Triple 19";
                wurfarray[7] = "17";
                wurfarray[8] = "Double 20";
                break;

            case 113:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "16";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "-";
                break;

            case 112:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Triple 12";
                wurfarray[2] = "Double 8";
                wurfarray[3] = "-";
                break;

            case 111:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "14";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 20";
                wurfarray[4] = "11";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 110:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "13";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 20";
                wurfarray[4] = "Triple 10";
                wurfarray[5] = "Double 10";
                wurfarray[6] = "Triple 20";
                wurfarray[7] = "Bull's-Eye";
                wurfarray[8] = "-";
                break;

            case 109:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "9";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "-";
                break;

            case 108:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "16";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "Triple 20";
                wurfarray[4] = "8";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "Triple 18";
                wurfarray[7] = "18";
                wurfarray[8] = "Double 18";
                break;

            case 107:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Triple 10";
                wurfarray[2] = "Double 10";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "Bull's-Eye";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 106:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "10";
                wurfarray[2] = "Double 18";
                wurfarray[3] = "Triple 20";
                wurfarray[4] = "6";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "Triple 20";
                wurfarray[7] = "Triple 10";
                wurfarray[8] = "Double 8";
                break;

            case 105:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "13";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "-";
                break;

            case 104:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "7";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 18";
                wurfarray[4] = "Bull's-Eye";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 103:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "6";
                wurfarray[2] = "Double 20";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "10";
                wurfarray[5] = "Double 18";
                wurfarray[6] = "-";
                break;

            case 102:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "10";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "Triple 20";
                wurfarray[4] = "6";
                wurfarray[5] = "Double 18";
                wurfarray[6] = "-";
                break;

            case 101:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "9";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "Triple 17";
                wurfarray[4] = "Bull's-Eye";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 100:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 99:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "10";
                wurfarray[2] = "Double 16";
                wurfarray[3] = "Triple 19";
                wurfarray[4] = "6";
                wurfarray[5] = "Double 18";
                wurfarray[6] = "-";
                break;

            case 98:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 19";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 97:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 96:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 18";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 95:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Double 19";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 20";
                wurfarray[5] = "Double 5";
                wurfarray[6] = "-";
                break;

            case 94:
                wurfarray[0] = "Triple 18";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 19";
                wurfarray[5] = "Double 6";
                wurfarray[6] = "-";
                break;

            case 93:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Double 18";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 18";
                wurfarray[5] = "Double 7";
                wurfarray[6] = "-";
                break;

            case 92:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 17";
                wurfarray[5] = "Double 8";
                wurfarray[6] = "-";
                break;

            case 91:
                wurfarray[0] = "Triple 17";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Triple 16";
                wurfarray[5] = "Double 9";
                wurfarray[6] = "-";
                break;

            case 90:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 15";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 18";
                wurfarray[4] = "Double 18";
                wurfarray[5] = "-";
                wurfarray[6] = "20";
                wurfarray[7] = "20";
                wurfarray[8] = "Bull's-Eye";
                break;

            case 89:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 88:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 14";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 87:
                wurfarray[0] = "Triple 17";
                wurfarray[1] = "Double 18";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 86:
                wurfarray[0] = "Triple 18";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 85:
                wurfarray[0] = "Triple 15";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "20";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 84:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 12";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 16";
                wurfarray[4] = "Double 18";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 83:
                wurfarray[0] = "Triple 17";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "18";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 82:
                wurfarray[0] = "Bull's-Eye";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 14";
                wurfarray[4] = "Double 20";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 81:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Double 12";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "16";
                wurfarray[5] = "Double 20";
                wurfarray[6] = "-";
                break;

            case 80:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 10";
                wurfarray[2] = "-";
                wurfarray[3] = "Double 20";
                wurfarray[4] = "Double 20";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 79:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Double 11";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 13";
                wurfarray[4] = "Double 20";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 78:
                wurfarray[0] = "Triple 18";
                wurfarray[1] = "Double 12";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 77:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Double 10";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 76:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 16";
                wurfarray[4] = "Double 14";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 75:
                wurfarray[0] = "Triple 17";
                wurfarray[1] = "Double 12";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 74:
                wurfarray[0] = "Triple 14";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 18";
                wurfarray[4] = "Double 10";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 73:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 11";
                wurfarray[4] = "Double 20";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 72:
                wurfarray[0] = "Triple 16";
                wurfarray[1] = "Double 12";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 12";
                wurfarray[4] = "Double 18";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 71:
                wurfarray[0] = "Triple 13";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 17";
                wurfarray[4] = "Double 10";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 70:
                wurfarray[0] = "Triple 18";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 10";
                wurfarray[4] = "Double 20";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 69:
                wurfarray[0] = "Triple 19";
                wurfarray[1] = "Double 6";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 15";
                wurfarray[4] = "Double 12";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 68:
                wurfarray[0] = "Triple 20";
                wurfarray[1] = "Double 4";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 16";
                wurfarray[4] = "Double 10";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 67:
                wurfarray[0] = "Triple 17";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 9";
                wurfarray[4] = "Double 20";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 66:
                wurfarray[0] = "Triple 10";
                wurfarray[1] = "Double 18";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull's-Eye";
                wurfarray[4] = "Bull's-Eye";
                wurfarray[5] = "-";
                wurfarray[6] = "Triple 16";
                wurfarray[7] = "Double 9";
                wurfarray[8] = "-";
                break;

            case 65:
                wurfarray[0] = "Triple 11";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Double 20";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 64:
                wurfarray[0] = "Triple 16";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 14";
                wurfarray[4] = "Double 11";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 63:
                wurfarray[0] = "Triple 13";
                wurfarray[1] = "Double 12";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 17";
                wurfarray[4] = "Double 6";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 62:
                wurfarray[0] = "Triple 10";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "Triple 14";
                wurfarray[4] = "Double 10";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 61:
                wurfarray[0] = "Triple 15";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "Bull";
                wurfarray[4] = "Double 18";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 60:
                wurfarray[0] = "20";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 59:
                wurfarray[0] = "19";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 58:
                wurfarray[0] = "18";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 57:
                wurfarray[0] = "17";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 56:
                wurfarray[0] = "Triple 16";
                wurfarray[1] = "Double 4";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 55:
                wurfarray[0] = "15";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 54:
                wurfarray[0] = "14";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 53:
                wurfarray[0] = "13";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 52:
                wurfarray[0] = "12";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "20";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 51:
                wurfarray[0] = "11";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "19";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 50:
                wurfarray[0] = "10";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "18";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 49:
                wurfarray[0] = "9";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "17";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 48:
                wurfarray[0] = "8";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "16";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 47:
                wurfarray[0] = "7";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "15";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 46:
                wurfarray[0] = "6";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "10";
                wurfarray[4] = "Double 18";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 45:
                wurfarray[0] = "5";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "13";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 44:
                wurfarray[0] = "4";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "12";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 43:
                wurfarray[0] = "3";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "11";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 42:
                wurfarray[0] = "6";
                wurfarray[1] = "Double 18";
                wurfarray[2] = "-";
                wurfarray[3] = "10";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 41:
                wurfarray[0] = "1";
                wurfarray[1] = "Double 20";
                wurfarray[2] = "-";
                wurfarray[3] = "9";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 40:
                wurfarray[0] = "Double 20";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 39:
                wurfarray[0] = "7";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "19";
                wurfarray[4] = "Double 10";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 38:
                wurfarray[0] = "Double 19";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "6";
                wurfarray[4] = "Double 16";
                wurfarray[5] = "-";
                wurfarray[6] = "10";
                wurfarray[7] = "Double 14";
                wurfarray[8] = "-";
                break;

            case 37:
                wurfarray[0] = "5";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 36:
                wurfarray[0] = "Double 18";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 35:
                wurfarray[0] = "3";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 34:
                wurfarray[0] = "Double 17";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 33:
                wurfarray[0] = "1";
                wurfarray[1] = "Double 16";
                wurfarray[2] = "-";
                wurfarray[3] = "17";
                wurfarray[4] = "Double 8";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 32:
                wurfarray[0] = "Double 16";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 31:
                wurfarray[0] = "15";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "19";
                wurfarray[4] = "Double 6";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 30:
                wurfarray[0] = "Double 15";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 29:
                wurfarray[0] = "13";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 28:
                wurfarray[0] = "Double 14";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 27:
                wurfarray[0] = "11";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "7";
                wurfarray[4] = "Double 10";
                wurfarray[5] = "-";
                wurfarray[6] = "19";
                wurfarray[7] = "Double 4";
                wurfarray[8] = "-";
                break;

            case 26:
                wurfarray[0] = "Double 13";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 25:
                wurfarray[0] = "9";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 24:
                wurfarray[0] = "Double 12";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 23:
                wurfarray[0] = "7";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 22:
                wurfarray[0] = "Double 11";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 21:
                wurfarray[0] = "5";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "13";
                wurfarray[4] = "Double 4";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 20:
                wurfarray[0] = "Double 10";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 19:
                wurfarray[0] = "3";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "11";
                wurfarray[4] = "Double 4";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 18:
                wurfarray[0] = "Double 9";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 17:
                wurfarray[0] = "1";
                wurfarray[1] = "Double 8";
                wurfarray[2] = "-";
                wurfarray[3] = "9";
                wurfarray[4] = "Double 4";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 16:
                wurfarray[0] = "Double 8";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 15:
                wurfarray[0] = "7";
                wurfarray[1] = "Double 4";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 14:
                wurfarray[0] = "Double 7";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "6";
                wurfarray[4] = "Double 4";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 13:
                wurfarray[0] = "5";
                wurfarray[1] = "Double 4";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 12:
                wurfarray[0] = "Double 6";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 11:
                wurfarray[0] = "3";
                wurfarray[1] = "Double 4";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 10:
                wurfarray[0] = "Double 5";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "2";
                wurfarray[4] = "Double 4";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 9:
                wurfarray[0] = "1";
                wurfarray[1] = "Double 4";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 8:
                wurfarray[0] = "Double 4";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 7:
                wurfarray[0] = "3";
                wurfarray[1] = "Double 2";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 6:
                wurfarray[0] = "Double 3";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "2";
                wurfarray[4] = "Double 2";
                wurfarray[5] = "-";
                wurfarray[6] = "-";
                break;

            case 5:
                wurfarray[0] = "1";
                wurfarray[1] = "Double 2";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 4:
                wurfarray[0] = "Double 2";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 3:
                wurfarray[0] = "1";
                wurfarray[1] = "Double 1";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;

            case 2:
                wurfarray[0] = "Double 1";
                wurfarray[1] = "-";
                wurfarray[2] = "-";
                wurfarray[3] = "-";
                break;
        }

        //Ausgabe Finishwege 1.Variante oder 2.Varianten oder 3. Variante
        if (wurfarray[3] == "-")
        {
            zuWerfenText.text = "In maximal drei Würfen Finishen, werfe:\n\n" + wurfarray[0] + " | " + wurfarray[1] + " | " + wurfarray[2];
        }
        else if (wurfarray[6] == "-")
        {
            zuWerfenText.text = "In maximal drei Würfen Finishen, werfe:\n\n" + wurfarray[0] + " | " + wurfarray[1] + " | " + wurfarray[2]
                + "\n oder:\n" + wurfarray[3] + " | " + wurfarray[4] + " | " + wurfarray[5];
        }
        else
        {
            zuWerfenText.text = "In maximal drei Würfen Finishen, werfe:\n\n" + wurfarray[0] + " | " + wurfarray[1] + " | " + wurfarray[2]
                + "\n oder:\n" + wurfarray[3] + " | " + wurfarray[4] + " | " + wurfarray[5]
                + "\n oder:\n" + wurfarray[6] + " | " + wurfarray[7] + " | " + wurfarray[8];
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
