#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.String[,]
struct StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// KIBehaviorScript
struct KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Level2MaterialScript
struct Level2MaterialScript_t5E497F92CB7A59C6363C0805B34BE50F562FC7FB;
// Level3RandomFelderScript
struct Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565;
// Level5ButtonScript
struct Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684;
// Level5Materials
struct Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuScript
struct MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// Random3FelderScript
struct Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19;
// RandomZahlScoreAnzeigeScript
struct RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreAnzeigeScript
struct ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6;
// ScoreEingabeScript
struct ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666;
// StartMenuScript
struct StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VuforiaLicense
struct VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC;
// KIBehaviorScript/<KIRun>d__15
struct U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AroundTheClockScript_t427ACA809A7DCB40621373668E9072FBA5834451_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01257C073AB8CA3C108848F31015E99ACBFEB8AC;
IL2CPP_EXTERN_C String_t* _stringLiteral04EC32C6FF6BEEAA16F1E43255257E0CFA7BB1A2;
IL2CPP_EXTERN_C String_t* _stringLiteral10E1A4B42B609B4C63B23FEBC0D0F2D51074E2AE;
IL2CPP_EXTERN_C String_t* _stringLiteral17CF05962AC1AC77CD4B5247CC6311690D8DAFE5;
IL2CPP_EXTERN_C String_t* _stringLiteral26EDD3876068861DDA182B9423FF4370E057E2B8;
IL2CPP_EXTERN_C String_t* _stringLiteral283A6276D8CC19A0B508090A0D2AF52503D1686E;
IL2CPP_EXTERN_C String_t* _stringLiteral38BEECAE4FE29AFCDD566ADED0435F58F7842321;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865;
IL2CPP_EXTERN_C String_t* _stringLiteral45F24F6A02100417A1201BB891EA7337C98C217B;
IL2CPP_EXTERN_C String_t* _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C;
IL2CPP_EXTERN_C String_t* _stringLiteral64EEAA3F2713CBB1D6F78CD2162A7F6F55DAD57E;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1BA1388EFEA747EA23F8D7C9B33143ABED9005;
IL2CPP_EXTERN_C String_t* _stringLiteral6BFCA97A87115C38B3D3DD61045F058C81A792D3;
IL2CPP_EXTERN_C String_t* _stringLiteral6CCE78AB553AA142AE17F49882B740C20869D76D;
IL2CPP_EXTERN_C String_t* _stringLiteral77E0F33C432D39299909E3A61634FB4A0288FA45;
IL2CPP_EXTERN_C String_t* _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A;
IL2CPP_EXTERN_C String_t* _stringLiteral7CFEE134F04DDC3BFBB77D5292707E38ECEEAD5A;
IL2CPP_EXTERN_C String_t* _stringLiteral8B1B4910097B6EA900B79DD17583005FEAE67B0F;
IL2CPP_EXTERN_C String_t* _stringLiteral8CC380261DBD65758E5E14BED09836B346408C08;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral94E9610E128CC0D88BB3B1B95985471DC2801BB7;
IL2CPP_EXTERN_C String_t* _stringLiteral95C629CCC32B4B2EA14FC5885D1DCB402AE003A8;
IL2CPP_EXTERN_C String_t* _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C52A30645908E34422B1D5E4393D189ECE60D6;
IL2CPP_EXTERN_C String_t* _stringLiteralA3627341AC0438C7F6FA5AEBCDC8438E90C20337;
IL2CPP_EXTERN_C String_t* _stringLiteralB015ABE8F4E5796CABB2090C95B134793CCA2FA5;
IL2CPP_EXTERN_C String_t* _stringLiteralB1EDAF2D6881BB251F1D599487E4623C7457658E;
IL2CPP_EXTERN_C String_t* _stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978;
IL2CPP_EXTERN_C String_t* _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E95EAAA386E912C97249D7DB44E03239C01A44;
IL2CPP_EXTERN_C String_t* _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136;
IL2CPP_EXTERN_C String_t* _stringLiteralC6C98BEC5ECA7393E1C715DD151D3967D18663A3;
IL2CPP_EXTERN_C String_t* _stringLiteralD72A59ABA5146B22B58EBC2F0BA0CEA99ACF79C4;
IL2CPP_EXTERN_C String_t* _stringLiteralD75FC888505267E8E9CB24F34E721E84934FFAD2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE288C76D2C90FADE65AE09D79433508E526D3E2;
IL2CPP_EXTERN_C String_t* _stringLiteralDF6D78714F1F32375CE6B88F3A8863A25695929D;
IL2CPP_EXTERN_C String_t* _stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED;
IL2CPP_EXTERN_C String_t* _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F;
IL2CPP_EXTERN_C String_t* _stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF;
IL2CPP_EXTERN_C String_t* _stringLiteralF57A4697175C4DE0BEB410448FBEEB337BB6A69C;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CKIRunU3Ed__15_System_Collections_IEnumerator_Reset_m7AD90DA3F3562572154ADA2FEBDE518550F79866_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// VuforiaLicense
struct VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// KIBehaviorScript/<KIRun>d__15
struct U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B  : public RuntimeObject
{
	// System.Int32 KIBehaviorScript/<KIRun>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KIBehaviorScript/<KIRun>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KIBehaviorScript KIBehaviorScript/<KIRun>d__15::<>4__this
	KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* ___U3CU3E4__this_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AroundTheClockScript
struct AroundTheClockScript_t427ACA809A7DCB40621373668E9072FBA5834451  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI AroundTheClockScript::levelText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___levelText_4;
	// TMPro.TextMeshProUGUI AroundTheClockScript::lebenText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lebenText_5;
	// TMPro.TextMeshProUGUI AroundTheClockScript::endeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___endeText_6;
	// System.Int32 AroundTheClockScript::feld
	int32_t ___feld_7;
	// System.Int32 AroundTheClockScript::leben
	int32_t ___leben_8;
};

struct AroundTheClockScript_t427ACA809A7DCB40621373668E9072FBA5834451_StaticFields
{
	// System.Int32 AroundTheClockScript::i
	int32_t ___i_9;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// KIBehaviorScript
struct KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 KIBehaviorScript::dartsCount
	int32_t ___dartsCount_4;
	// System.Int32 KIBehaviorScript::scoreKICount
	int32_t ___scoreKICount_5;
	// System.Int32 KIBehaviorScript::scorePlayerCount
	int32_t ___scorePlayerCount_6;
	// UnityEngine.GameObject KIBehaviorScript::scoreAnzeigePlayerText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scoreAnzeigePlayerText_7;
	// UnityEngine.GameObject KIBehaviorScript::scoreAnzeigeKIText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scoreAnzeigeKIText_8;
	// UnityEngine.GameObject KIBehaviorScript::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_9;
	// UnityEngine.GameObject KIBehaviorScript::closeButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___closeButton_10;
	// UnityEngine.GameObject KIBehaviorScript::formen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___formen_11;
	// System.String[] KIBehaviorScript::targetListFieldNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___targetListFieldNames_12;
	// System.String[,] KIBehaviorScript::targetListWithFieldNamesAndProbabilities
	StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* ___targetListWithFieldNamesAndProbabilities_13;
	// UnityEngine.AudioSource KIBehaviorScript::winAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___winAudio_14;
	// UnityEngine.AudioSource KIBehaviorScript::loseAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___loseAudio_15;
	// UnityEngine.AudioSource KIBehaviorScript::missedAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___missedAudio_16;
};

// Level2MaterialScript
struct Level2MaterialScript_t5E497F92CB7A59C6363C0805B34BE50F562FC7FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material[] Level2MaterialScript::material
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___material_4;
	// UnityEngine.Renderer Level2MaterialScript::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_5;
	// System.String Level2MaterialScript::feldname
	String_t* ___feldname_6;
};

// Level3RandomFelderScript
struct Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material[] Level3RandomFelderScript::material
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___material_5;
	// UnityEngine.Renderer Level3RandomFelderScript::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_6;
	// System.String Level3RandomFelderScript::feld
	String_t* ___feld_7;
};

struct Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565_StaticFields
{
	// Level3RandomFelderScript Level3RandomFelderScript::instance
	Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565* ___instance_4;
};

// Level5ButtonScript
struct Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Level5ButtonScript::wurf_Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___wurf_Text_5;
	// TMPro.TextMeshProUGUI Level5ButtonScript::finished
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___finished_6;
	// TMPro.TextMeshProUGUI Level5ButtonScript::runde
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___runde_7;
	// System.Int32 Level5ButtonScript::runden
	int32_t ___runden_9;
	// System.Int32 Level5ButtonScript::randomFeld1
	int32_t ___randomFeld1_11;
	// System.Int32 Level5ButtonScript::randomFeld2
	int32_t ___randomFeld2_12;
	// System.Int32 Level5ButtonScript::randomFeld3
	int32_t ___randomFeld3_13;
	// System.Int32 Level5ButtonScript::score
	int32_t ___score_14;
};

struct Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields
{
	// Level5ButtonScript Level5ButtonScript::instance
	Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* ___instance_4;
	// System.Int32 Level5ButtonScript::counter
	int32_t ___counter_8;
	// System.String[] Level5ButtonScript::farbarray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___farbarray_10;
	// System.Random Level5ButtonScript::rnd
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd_15;
};

// Level5Materials
struct Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material[] Level5Materials::material
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___material_5;
	// UnityEngine.Renderer Level5Materials::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_6;
	// System.Int32 Level5Materials::feld
	int32_t ___feld_7;
};

struct Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062_StaticFields
{
	// Level5Materials Level5Materials::instance
	Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062* ___instance_4;
};

// MenuScript
struct MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuScript::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_4;
	// UnityEngine.GameObject MenuScript::toggleOff
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___toggleOff_5;
	// UnityEngine.GameObject MenuScript::toggleOn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___toggleOn_6;
};

// Random3FelderScript
struct Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Random3FelderScript::randomFelderText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___randomFelderText_5;
	// System.String Random3FelderScript::randomFeld1
	String_t* ___randomFeld1_6;
	// System.String Random3FelderScript::randomFeld2
	String_t* ___randomFeld2_7;
	// System.String Random3FelderScript::randomFeld3
	String_t* ___randomFeld3_8;
};

struct Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields
{
	// Random3FelderScript Random3FelderScript::instance
	Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19* ___instance_4;
	// System.Collections.Generic.List`1<System.String> Random3FelderScript::range
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___range_9;
	// System.Random Random3FelderScript::rnd
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd_10;
};

// RandomZahlScoreAnzeigeScript
struct RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI RandomZahlScoreAnzeigeScript::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_5;
	// TMPro.TextMeshProUGUI RandomZahlScoreAnzeigeScript::finishText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___finishText_6;
	// System.Boolean RandomZahlScoreAnzeigeScript::finishopt1
	bool ___finishopt1_7;
	// System.Boolean RandomZahlScoreAnzeigeScript::finishopt2
	bool ___finishopt2_8;
	// System.Boolean RandomZahlScoreAnzeigeScript::finishopt3
	bool ___finishopt3_9;
	// System.Int32 RandomZahlScoreAnzeigeScript::score
	int32_t ___score_10;
	// System.Int32 RandomZahlScoreAnzeigeScript::randomScore
	int32_t ___randomScore_11;
	// System.Int32 RandomZahlScoreAnzeigeScript::eingabesumme
	int32_t ___eingabesumme_12;
};

struct RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields
{
	// RandomZahlScoreAnzeigeScript RandomZahlScoreAnzeigeScript::instance
	RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F* ___instance_4;
	// System.Collections.Generic.List`1<System.Int32> RandomZahlScoreAnzeigeScript::range
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___range_13;
	// System.Random RandomZahlScoreAnzeigeScript::rnd
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd_14;
};

// ScoreAnzeigeScript
struct ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ScoreAnzeigeScript::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_5;
	// TMPro.TextMeshProUGUI ScoreAnzeigeScript::finishText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___finishText_6;
	// System.Boolean ScoreAnzeigeScript::finishopt1
	bool ___finishopt1_7;
	// System.Boolean ScoreAnzeigeScript::finishopt2
	bool ___finishopt2_8;
	// System.Boolean ScoreAnzeigeScript::finishopt3
	bool ___finishopt3_9;
	// System.Int32 ScoreAnzeigeScript::eingabesumme
	int32_t ___eingabesumme_11;
};

struct ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields
{
	// ScoreAnzeigeScript ScoreAnzeigeScript::instance
	ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6* ___instance_4;
	// System.Int32 ScoreAnzeigeScript::score
	int32_t ___score_10;
};

// ScoreEingabeScript
struct ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ScoreEingabeScript::wurf_Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___wurf_Text_4;
};

struct ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields
{
	// System.Int32 ScoreEingabeScript::eingabe
	int32_t ___eingabe_5;
	// System.String[] ScoreEingabeScript::scorearray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___scorearray_6;
};

// StartMenuScript
struct StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject StartMenuScript::singlePlayerButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___singlePlayerButton_4;
	// UnityEngine.GameObject StartMenuScript::trainingButton1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trainingButton1_5;
	// UnityEngine.GameObject StartMenuScript::trainingButton2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trainingButton2_6;
	// UnityEngine.GameObject StartMenuScript::trainingButton3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trainingButton3_7;
	// UnityEngine.GameObject StartMenuScript::trainingButton4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trainingButton4_8;
	// UnityEngine.GameObject StartMenuScript::trainingButton5
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trainingButton5_9;
	// UnityEngine.GameObject StartMenuScript::kiButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___kiButton_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[,]
struct StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, String_t* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, String_t* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;

// System.Void KIBehaviorScript::AssignProbabilitiesToTargets(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_AssignProbabilitiesToTargets_m5139B2282D1C63EA34E9824FC17DA4B1D32AB645 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___targetListFieldNames0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KIBehaviorScript::KIRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KIBehaviorScript_KIRun_m372A8A549828ADBEE575350D222B80E41C7FDE19 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void KIBehaviorScript/<KIRun>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKIRunU3Ed__15__ctor_m55F408769B5FD82E3EB87BDCA52C7A8FC8665BDF (U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void KIBehaviorScript::animateDarts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_animateDarts_m253A1E620CBA2A333C49F5C61FE95C605FCCA4ED (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, String_t* ___targetName0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void KIBehaviorScript::UpdateKIScoreAnzeige(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_UpdateKIScoreAnzeige_m85D25C3C63B1CCA7C6A68271462765ECC76664B1 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, int32_t ___newScore0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___sourceText0, bool ___syncTextInputBox1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void KIBehaviorScript::KIChooseAndHitTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_KIChooseAndHitTarget_m31D06D069A2EC36CAABA1C27C9AEFED697D12766 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) ;
// System.Void KIBehaviorScript::KIChooseAndHitFinishTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_KIChooseAndHitFinishTargets_m9D04F5A66DACCAA7415782EBD93C24795170B8C8 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) ;
// System.Void KIBehaviorScript::EndGameSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_EndGameSequence_m8DD1273B9A3065B16E30EE037339916380E4175D (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KIBehaviorScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_Start_mFD4DED5F56ACB2FCBDDB8553B4F2D860A27FD975 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) 
{
	{
		// dartsCount = 0;
		__this->___dartsCount_4 = 0;
		// scoreKICount = 310;
		__this->___scoreKICount_5 = ((int32_t)310);
		// this.targetListFieldNames = targetListFieldNames;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___targetListFieldNames_12;
		__this->___targetListFieldNames_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetListFieldNames_12), (void*)L_0);
		// AssignProbabilitiesToTargets(targetListFieldNames);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___targetListFieldNames_12;
		KIBehaviorScript_AssignProbabilitiesToTargets_m5139B2282D1C63EA34E9824FC17DA4B1D32AB645(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void KIBehaviorScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_Update_m7D991534CC2DD4A62849EE287FCAEF85469980E8 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(KIRun());
		RuntimeObject* L_0;
		L_0 = KIBehaviorScript_KIRun_m372A8A549828ADBEE575350D222B80E41C7FDE19(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator KIBehaviorScript::KIRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KIBehaviorScript_KIRun_m372A8A549828ADBEE575350D222B80E41C7FDE19 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B* L_0 = (U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B*)il2cpp_codegen_object_new(U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CKIRunU3Ed__15__ctor_m55F408769B5FD82E3EB87BDCA52C7A8FC8665BDF(L_0, 0, NULL);
		U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void KIBehaviorScript::AssignProbabilitiesToTargets(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_AssignProbabilitiesToTargets_m5139B2282D1C63EA34E9824FC17DA4B1D32AB645 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___targetListFieldNames0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CCE78AB553AA142AE17F49882B740C20869D76D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// this.targetListWithFieldNamesAndProbabilities = new string[82, 2];
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)82), (il2cpp_array_size_t)2 };
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_0 = (StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF*)GenArrayNew(StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF_il2cpp_TypeInfo_var, L_1);
		__this->___targetListWithFieldNamesAndProbabilities_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetListWithFieldNamesAndProbabilities_13), (void*)L_0);
		// for(int index = 0; index < targetListFieldNames.Length; index++)
		V_0 = 0;
		goto IL_003c;
	}

IL_0012:
	{
		// string probability = "1.20481928";
		V_1 = _stringLiteral6CCE78AB553AA142AE17F49882B740C20869D76D;
		// string fieldName = targetListFieldNames[index];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___targetListFieldNames0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// targetListWithFieldNamesAndProbabilities[index,0] = fieldName;
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_6 = __this->___targetListWithFieldNamesAndProbabilities_13;
		int32_t L_7 = V_0;
		String_t* L_8 = V_2;
		NullCheck(L_6);
		(L_6)->SetAt(L_7, 0, L_8);
		// targetListWithFieldNamesAndProbabilities[index,1] = probability;
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_9 = __this->___targetListWithFieldNamesAndProbabilities_13;
		int32_t L_10 = V_0;
		String_t* L_11 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(L_10, 1, L_11);
		// for(int index = 0; index < targetListFieldNames.Length; index++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003c:
	{
		// for(int index = 0; index < targetListFieldNames.Length; index++)
		int32_t L_13 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___targetListFieldNames0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void KIBehaviorScript::KIChooseAndHitTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_KIChooseAndHitTarget_m31D06D069A2EC36CAABA1C27C9AEFED697D12766 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26EDD3876068861DDA182B9423FF4370E057E2B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283A6276D8CC19A0B508090A0D2AF52503D1686E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94E9610E128CC0D88BB3B1B95985471DC2801BB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// System.Random random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		// int randomFieldChoose = random.Next(0, targetListFieldNames.Length - 1);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___targetListFieldNames_12;
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)));
		V_0 = L_3;
		// double hitQuote = random.NextDouble() * 2.5;
		NullCheck(L_1);
		double L_4;
		L_4 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_1);
		V_1 = ((double)il2cpp_codegen_multiply(L_4, (2.5)));
		// string targetName = targetListWithFieldNamesAndProbabilities[randomFieldChoose,0];
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_5 = __this->___targetListWithFieldNamesAndProbabilities_13;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = (L_5)->GetAt(L_6, 0);
		V_2 = L_7;
		// string targetProbability = targetListWithFieldNamesAndProbabilities[randomFieldChoose,1];
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_8 = __this->___targetListWithFieldNamesAndProbabilities_13;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = (L_8)->GetAt(L_9, 1);
		// if(double.Parse(targetProbability) < hitQuote)
		double L_11;
		L_11 = Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B(L_10, NULL);
		double L_12 = V_1;
		if ((!(((double)L_11) < ((double)L_12))))
		{
			goto IL_0087;
		}
	}
	{
		// dartsCount++;
		int32_t L_13 = __this->___dartsCount_4;
		__this->___dartsCount_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		// Debug.Log("Hit Nothing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral283A6276D8CC19A0B508090A0D2AF52503D1686E, NULL);
		// missedAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___missedAudio_16;
		NullCheck(L_14);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
		// animateDarts("0");
		KIBehaviorScript_animateDarts_m253A1E620CBA2A333C49F5C61FE95C605FCCA4ED(__this, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		// Debug.Log("Returned");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral26EDD3876068861DDA182B9423FF4370E057E2B8, NULL);
		goto IL_012e;
	}

IL_0087:
	{
		// dartsCount++;
		int32_t L_15 = __this->___dartsCount_4;
		__this->___dartsCount_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		// animateDarts(targetName);
		String_t* L_16 = V_2;
		KIBehaviorScript_animateDarts_m253A1E620CBA2A333C49F5C61FE95C605FCCA4ED(__this, L_16, NULL);
		// if(targetName.Length == 3)
		String_t* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_00ea;
		}
	}
	{
		// int targetValue = int.Parse(targetName[0] + "" + targetName[1]);
		String_t* L_19 = V_2;
		NullCheck(L_19);
		Il2CppChar L_20;
		L_20 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, 0, NULL);
		V_4 = L_20;
		String_t* L_21;
		L_21 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
		String_t* L_22 = V_2;
		NullCheck(L_22);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, 1, NULL);
		V_4 = L_23;
		String_t* L_24;
		L_24 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_21, L_24, NULL);
		int32_t L_26;
		L_26 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_25, NULL);
		V_3 = L_26;
		// scoreKICount -= targetValue;
		int32_t L_27 = __this->___scoreKICount_5;
		int32_t L_28 = V_3;
		__this->___scoreKICount_5 = ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
		// UpdateKIScoreAnzeige(scoreKICount);
		int32_t L_29 = __this->___scoreKICount_5;
		KIBehaviorScript_UpdateKIScoreAnzeige_m85D25C3C63B1CCA7C6A68271462765ECC76664B1(__this, L_29, NULL);
	}

IL_00ea:
	{
		// if(targetName.Length == 2)
		String_t* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)2))))
		{
			goto IL_012e;
		}
	}
	{
		// int targetValue = int.Parse(targetName[0] + "");
		String_t* L_32 = V_2;
		NullCheck(L_32);
		Il2CppChar L_33;
		L_33 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, 0, NULL);
		V_4 = L_33;
		String_t* L_34;
		L_34 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
		String_t* L_35 = L_34;
		G_B6_0 = L_35;
		if (L_35)
		{
			G_B7_0 = L_35;
			goto IL_010c;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_010c:
	{
		int32_t L_36;
		L_36 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(G_B7_0, NULL);
		V_5 = L_36;
		// scoreKICount -= targetValue;
		int32_t L_37 = __this->___scoreKICount_5;
		int32_t L_38 = V_5;
		__this->___scoreKICount_5 = ((int32_t)il2cpp_codegen_subtract(L_37, L_38));
		// UpdateKIScoreAnzeige(scoreKICount);
		int32_t L_39 = __this->___scoreKICount_5;
		KIBehaviorScript_UpdateKIScoreAnzeige_m85D25C3C63B1CCA7C6A68271462765ECC76664B1(__this, L_39, NULL);
	}

IL_012e:
	{
		// Debug.Log("Nichts gemacht");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral94E9610E128CC0D88BB3B1B95985471DC2801BB7, NULL);
		// }
		return;
	}
}
// System.Void KIBehaviorScript::KIWaitForPlayerToFinishRound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_KIWaitForPlayerToFinishRound_mB647FC09A76A59160651A4BE26CA2157D36FA865 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) 
{
	{
		// dartsCount = 0;
		__this->___dartsCount_4 = 0;
		// }
		return;
	}
}
// System.Void KIBehaviorScript::KIChooseAndHitFinishTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_KIChooseAndHitFinishTargets_m9D04F5A66DACCAA7415782EBD93C24795170B8C8 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	String_t* G_B9_0 = NULL;
	String_t* G_B8_0 = NULL;
	{
		// System.Random random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		// for(int index = 0; index <= targetListFieldNames.Length-1; index++)
		V_1 = 0;
		goto IL_016d;
	}

IL_000d:
	{
		// string targetName = targetListWithFieldNamesAndProbabilities[index,0];
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_1 = __this->___targetListWithFieldNamesAndProbabilities_13;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = (L_1)->GetAt(L_2, 0);
		V_2 = L_3;
		// if (targetName.Length == 3)
		String_t* L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_00c8;
		}
	}
	{
		// int targetValue = int.Parse(targetName[0] + "" + targetName[1]);
		String_t* L_6 = V_2;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		V_4 = L_7;
		String_t* L_8;
		L_8 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
		String_t* L_9 = V_2;
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, 1, NULL);
		V_4 = L_10;
		String_t* L_11;
		L_11 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, L_11, NULL);
		int32_t L_13;
		L_13 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_12, NULL);
		V_3 = L_13;
		// int checkIfLeadsToWin = scoreKICount - targetValue;
		int32_t L_14 = __this->___scoreKICount_5;
		int32_t L_15 = V_3;
		// if (checkIfLeadsToWin < 0)
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) < ((int32_t)0)))
		{
			goto IL_0169;
		}
	}
	{
		// string targetProbability = targetListWithFieldNamesAndProbabilities[index, 1];
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_16 = __this->___targetListWithFieldNamesAndProbabilities_13;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = (L_16)->GetAt(L_17, 1);
		// double hitQuote = random.NextDouble() * 0.25;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_19 = V_0;
		NullCheck(L_19);
		double L_20;
		L_20 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_19);
		V_5 = ((double)il2cpp_codegen_multiply(L_20, (0.25)));
		// if (double.Parse(targetProbability) < hitQuote)
		double L_21;
		L_21 = Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B(L_18, NULL);
		double L_22 = V_5;
		if ((!(((double)L_21) < ((double)L_22))))
		{
			goto IL_00ae;
		}
	}
	{
		// dartsCount++;
		int32_t L_23 = __this->___dartsCount_4;
		__this->___dartsCount_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		// animateDarts("0");
		KIBehaviorScript_animateDarts_m253A1E620CBA2A333C49F5C61FE95C605FCCA4ED(__this, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		// missedAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = __this->___missedAudio_16;
		NullCheck(L_24);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_24, NULL);
		goto IL_00c8;
	}

IL_00ae:
	{
		// scoreKICount -= targetValue;
		int32_t L_25 = __this->___scoreKICount_5;
		int32_t L_26 = V_3;
		__this->___scoreKICount_5 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		// UpdateKIScoreAnzeige(scoreKICount);
		int32_t L_27 = __this->___scoreKICount_5;
		KIBehaviorScript_UpdateKIScoreAnzeige_m85D25C3C63B1CCA7C6A68271462765ECC76664B1(__this, L_27, NULL);
	}

IL_00c8:
	{
		// if (targetName.Length == 2)
		String_t* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_0169;
		}
	}
	{
		// int targetValue = int.Parse(targetName[0] + "");
		String_t* L_30 = V_2;
		NullCheck(L_30);
		Il2CppChar L_31;
		L_31 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, 0, NULL);
		V_4 = L_31;
		String_t* L_32;
		L_32 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
		String_t* L_33 = L_32;
		G_B8_0 = L_33;
		if (L_33)
		{
			G_B9_0 = L_33;
			goto IL_00ed;
		}
	}
	{
		G_B9_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_00ed:
	{
		int32_t L_34;
		L_34 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(G_B9_0, NULL);
		V_6 = L_34;
		// int checkIfLeadsToWin = scoreKICount - targetValue;
		int32_t L_35 = __this->___scoreKICount_5;
		int32_t L_36 = V_6;
		// if (checkIfLeadsToWin < 0)
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_35, L_36))) < ((int32_t)0)))
		{
			goto IL_0169;
		}
	}
	{
		// string targetProbability = targetListWithFieldNamesAndProbabilities[index, 1];
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_37 = __this->___targetListWithFieldNamesAndProbabilities_13;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		String_t* L_39;
		L_39 = (L_37)->GetAt(L_38, 1);
		// double hitQuote = random.NextDouble() * 0.25;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_40 = V_0;
		NullCheck(L_40);
		double L_41;
		L_41 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_40);
		V_7 = ((double)il2cpp_codegen_multiply(L_41, (0.25)));
		// if (double.Parse(targetProbability) < hitQuote)
		double L_42;
		L_42 = Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B(L_39, NULL);
		double L_43 = V_7;
		if ((!(((double)L_42) < ((double)L_43))))
		{
			goto IL_014e;
		}
	}
	{
		// dartsCount++;
		int32_t L_44 = __this->___dartsCount_4;
		__this->___dartsCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		// animateDarts("0");
		KIBehaviorScript_animateDarts_m253A1E620CBA2A333C49F5C61FE95C605FCCA4ED(__this, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		// missedAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_45 = __this->___missedAudio_16;
		NullCheck(L_45);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_45, NULL);
		goto IL_0169;
	}

IL_014e:
	{
		// scoreKICount -= targetValue;
		int32_t L_46 = __this->___scoreKICount_5;
		int32_t L_47 = V_6;
		__this->___scoreKICount_5 = ((int32_t)il2cpp_codegen_subtract(L_46, L_47));
		// UpdateKIScoreAnzeige(scoreKICount);
		int32_t L_48 = __this->___scoreKICount_5;
		KIBehaviorScript_UpdateKIScoreAnzeige_m85D25C3C63B1CCA7C6A68271462765ECC76664B1(__this, L_48, NULL);
	}

IL_0169:
	{
		// for(int index = 0; index <= targetListFieldNames.Length-1; index++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_016d:
	{
		// for(int index = 0; index <= targetListFieldNames.Length-1; index++)
		int32_t L_50 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___targetListFieldNames_12;
		NullCheck(L_51);
		if ((((int32_t)L_50) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_51)->max_length)), 1)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void KIBehaviorScript::EndGameSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_EndGameSequence_m8DD1273B9A3065B16E30EE037339916380E4175D (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) 
{
	{
		// menu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___menu_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// closeButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___closeButton_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// if(scorePlayerCount == 0)
		int32_t L_2 = __this->___scorePlayerCount_6;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		// winAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___winAudio_14;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_002b:
	{
		// if(scoreKICount == 0)
		int32_t L_4 = __this->___scoreKICount_5;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		// loseAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___loseAudio_15;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void KIBehaviorScript::UpdateKIScoreAnzeige(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_UpdateKIScoreAnzeige_m85D25C3C63B1CCA7C6A68271462765ECC76664B1 (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, int32_t ___newScore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CFEE134F04DDC3BFBB77D5292707E38ECEEAD5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD72A59ABA5146B22B58EBC2F0BA0CEA99ACF79C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextMeshProUGUI scoreKI = scoreAnzeigeKIText.GetComponent<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___scoreAnzeigeKIText_8;
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_0, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		// scoreKI.SetText("KI Score:" + "\n" + newScore.ToString() + "/" + "310");
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___newScore0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral7CFEE134F04DDC3BFBB77D5292707E38ECEEAD5A, L_2, _stringLiteralD72A59ABA5146B22B58EBC2F0BA0CEA99ACF79C4, NULL);
		NullCheck(L_1);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_1, L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void KIBehaviorScript::animateDarts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript_animateDarts_m253A1E620CBA2A333C49F5C61FE95C605FCCA4ED (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, String_t* ___targetName0, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void KIBehaviorScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KIBehaviorScript__ctor_mB27608755CAB46FAC4FD96DECA340F3139B544AB (KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KIBehaviorScript/<KIRun>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKIRunU3Ed__15__ctor_m55F408769B5FD82E3EB87BDCA52C7A8FC8665BDF (U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KIBehaviorScript/<KIRun>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKIRunU3Ed__15_System_IDisposable_Dispose_m6D1ED6ED150CCE8C20AA186A299702203489CBC7 (U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean KIBehaviorScript/<KIRun>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CKIRunU3Ed__15_MoveNext_mCEC9050E44D9E9437BFAFBF707910D5A04C7B6F0 (U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// this.scorePlayerCount = ScoreAnzeigeScript.score;
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_5 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		NullCheck(L_4);
		L_4->___scorePlayerCount_6 = L_5;
		// if (dartsCount< 3 && scoreKICount > 170)
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___dartsCount_4;
		if ((((int32_t)L_7) >= ((int32_t)3)))
		{
			goto IL_0054;
		}
	}
	{
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___scoreKICount_5;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)170))))
		{
			goto IL_0054;
		}
	}
	{
		// formen.SetActive(true);
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_10 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___formen_11;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// KIChooseAndHitTarget();
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_12 = V_1;
		NullCheck(L_12);
		KIBehaviorScript_KIChooseAndHitTarget_m31D06D069A2EC36CAABA1C27C9AEFED697D12766(L_12, NULL);
	}

IL_0054:
	{
		// if (scoreKICount <= 170 && dartsCount == 0)
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___scoreKICount_5;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)170))))
		{
			goto IL_007b;
		}
	}
	{
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___dartsCount_4;
		if (L_16)
		{
			goto IL_007b;
		}
	}
	{
		// formen.SetActive(true);
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___formen_11;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// KIChooseAndHitFinishTargets();
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_19 = V_1;
		NullCheck(L_19);
		KIBehaviorScript_KIChooseAndHitFinishTargets_m9D04F5A66DACCAA7415782EBD93C24795170B8C8(L_19, NULL);
	}

IL_007b:
	{
		// if (scoreKICount == 0 || scorePlayerCount == 0)
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = L_20->___scoreKICount_5;
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___scorePlayerCount_6;
		if (L_23)
		{
			goto IL_0091;
		}
	}

IL_008b:
	{
		// EndGameSequence();
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_24 = V_1;
		NullCheck(L_24);
		KIBehaviorScript_EndGameSequence_m8DD1273B9A3065B16E30EE037339916380E4175D(L_24, NULL);
	}

IL_0091:
	{
		// formen.SetActive(false);
		KIBehaviorScript_t001860E415CE2E63197644D29570FE611EFC6866* L_25 = V_1;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___formen_11;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ad:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object KIBehaviorScript/<KIRun>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKIRunU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFBE383556716F12E3BDDBC055C95FCA385341646 (U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KIBehaviorScript/<KIRun>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKIRunU3Ed__15_System_Collections_IEnumerator_Reset_m7AD90DA3F3562572154ADA2FEBDE518550F79866 (U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CKIRunU3Ed__15_System_Collections_IEnumerator_Reset_m7AD90DA3F3562572154ADA2FEBDE518550F79866_RuntimeMethod_var)));
	}
}
// System.Object KIBehaviorScript/<KIRun>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKIRunU3Ed__15_System_Collections_IEnumerator_get_Current_m86A6498FC64F83CC84027726EA169C67EA1E98E8 (U3CKIRunU3Ed__15_t01821C5B2CE67B5E3B306A45E1CA88029BB14A6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Level2MaterialScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level2MaterialScript_Start_mB967D10072F73565C9F9E800C6FDD36722175719 (Level2MaterialScript_t5E497F92CB7A59C6363C0805B34BE50F562FC7FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_5), (void*)L_0);
		// rend.enabled = true;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___rend_5;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// rend.sharedMaterial = material[0];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->___rend_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = __this->___material_4;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_2);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_2, L_5, NULL);
		// }
		return;
	}
}
// System.Void Level2MaterialScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level2MaterialScript_Update_m1AAA996540BBC678325E3FD6C4A554FA5F9EC18D (Level2MaterialScript_t5E497F92CB7A59C6363C0805B34BE50F562FC7FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AroundTheClockScript_t427ACA809A7DCB40621373668E9072FBA5834451_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AroundTheClockScript.i.ToString() == feldname)
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((AroundTheClockScript_t427ACA809A7DCB40621373668E9072FBA5834451_StaticFields*)il2cpp_codegen_static_fields_for(AroundTheClockScript_t427ACA809A7DCB40621373668E9072FBA5834451_il2cpp_TypeInfo_var))->___i_9), NULL);
		String_t* L_1 = __this->___feldname_6;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// rend.sharedMaterial = material[1];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___rend_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = __this->___material_4;
		NullCheck(L_4);
		int32_t L_5 = 1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_3, L_6, NULL);
		return;
	}

IL_002b:
	{
		// rend.sharedMaterial = material[0];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->___rend_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_8 = __this->___material_4;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_7, L_10, NULL);
		// }
		return;
	}
}
// System.Void Level2MaterialScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level2MaterialScript__ctor_m4B2FDDBB22A3FE267DC4CBDD15A764E44FB759AC (Level2MaterialScript_t5E497F92CB7A59C6363C0805B34BE50F562FC7FB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Level3RandomFelderScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level3RandomFelderScript_Awake_mAEA8CFA0ED984808BB4709F342FC13C588DC94BE (Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565_StaticFields*)il2cpp_codegen_static_fields_for(Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565_StaticFields*)il2cpp_codegen_static_fields_for(Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Level3RandomFelderScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level3RandomFelderScript_Start_mAA19F637D824520A9104047959241A162C525892 (Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_6), (void*)L_0);
		// rend.enabled = true;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___rend_6;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// rend.sharedMaterial = material[0];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->___rend_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = __this->___material_5;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_2);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_2, L_5, NULL);
		// }
		return;
	}
}
// System.Void Level3RandomFelderScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level3RandomFelderScript_Update_m6FE249D8FF8B4693A90314BD1737E8267F7362CE (Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Random3FelderScript.instance.randomFeld1.Equals(feld) || Random3FelderScript.instance.randomFeld2.Equals(feld) || Random3FelderScript.instance.randomFeld3.Equals(feld))
		il2cpp_codegen_runtime_class_init_inline(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var);
		Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19* L_0 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___randomFeld1_6;
		String_t* L_2 = __this->___feld_7;
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var);
		Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19* L_4 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___randomFeld2_7;
		String_t* L_6 = __this->___feld_7;
		NullCheck(L_5);
		bool L_7;
		L_7 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var);
		Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19* L_8 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		String_t* L_9 = L_8->___randomFeld3_8;
		String_t* L_10 = __this->___feld_7;
		NullCheck(L_9);
		bool L_11;
		L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}

IL_0045:
	{
		// rend.sharedMaterial = material[1];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = __this->___rend_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_13 = __this->___material_5;
		NullCheck(L_13);
		int32_t L_14 = 1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_15, NULL);
		return;
	}

IL_0059:
	{
		// rend.sharedMaterial = material[0];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_16 = __this->___rend_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_17 = __this->___material_5;
		NullCheck(L_17);
		int32_t L_18 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_16, L_19, NULL);
		// }
		return;
	}
}
// System.Void Level3RandomFelderScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level3RandomFelderScript__ctor_m2DD1FDD2B518BFAFFEE09E813410EE0B860C5E62 (Level3RandomFelderScript_tF4787B03DD2D022C5413953CC4AB07693A8A2565* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Level5ButtonScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript_Awake_m243610ECB125CCD1B2BB75E59EC5B5F6A54D190D (Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Level5ButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript_Start_m317E8D6D727C5EE1C09E2DEC7EEC023ABBD55618 (Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1EDAF2D6881BB251F1D599487E4623C7457658E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF6D78714F1F32375CE6B88F3A8863A25695929D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// randomFeld1 = rnd.Next(1, 21);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, 1, ((int32_t)21));
		__this->___randomFeld1_11 = L_1;
		// randomFeld2 = rnd.Next(1, 21);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 1, ((int32_t)21));
		__this->___randomFeld2_12 = L_3;
		// randomFeld3 = rnd.Next(1, 21);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_4, 1, ((int32_t)21));
		__this->___randomFeld3_13 = L_5;
		// wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___wurf_Text_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_10);
		int32_t L_11 = 0;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_15);
		int32_t L_16 = 1;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_14;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_20);
		int32_t L_21 = 2;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_22);
		String_t* L_23;
		L_23 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_19, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_23);
		// runde.text = "Runde:\n" + runden.ToString() + "/10";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->___runde_7;
		int32_t* L_25 = (&__this->___runden_9);
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_25, NULL);
		String_t* L_27;
		L_27 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralDF6D78714F1F32375CE6B88F3A8863A25695929D, L_26, _stringLiteralB1EDAF2D6881BB251F1D599487E4623C7457658E, NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_27);
		// }
		return;
	}
}
// System.Void Level5ButtonScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript_Update_m1A2DC3D6BB9F4097BA753D6155E544CEB93F848D (Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Level5ButtonScript::Blau()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript_Blau_m8B628B21B71CD59E86A257191ECD2548BAA567DF (Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF57A4697175C4DE0BEB410448FBEEB337BB6A69C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// farbarray[0] = "Blau";
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteralF57A4697175C4DE0BEB410448FBEEB337BB6A69C);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF57A4697175C4DE0BEB410448FBEEB337BB6A69C);
		// wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___wurf_Text_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_15);
		int32_t L_16 = 2;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		String_t* L_18;
		L_18 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_14, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_18);
		// }
		return;
	}
}
// System.Void Level5ButtonScript::Gr?n()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript_GrUFCn_m3DF943F845E411A977CADC5A672F7FA52C42F98F (Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6C98BEC5ECA7393E1C715DD151D3967D18663A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// farbarray[1] = "Gr?n";
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteralC6C98BEC5ECA7393E1C715DD151D3967D18663A3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC6C98BEC5ECA7393E1C715DD151D3967D18663A3);
		// wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___wurf_Text_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_15);
		int32_t L_16 = 2;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		String_t* L_18;
		L_18 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_14, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_18);
		// }
		return;
	}
}
// System.Void Level5ButtonScript::Orange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript_Orange_mDE5C1B9977FD2FC18DED2DCDAAC0BCDE3B89EBF2 (Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// farbarray[2] = "Orange";
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		// wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___wurf_Text_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_15);
		int32_t L_16 = 2;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		String_t* L_18;
		L_18 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_14, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_18);
		// }
		return;
	}
}
// System.Void Level5ButtonScript::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript_Enter_m92F8CD7A092E8AEB354D1C17F82F384DFA0FB473 (Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04EC32C6FF6BEEAA16F1E43255257E0CFA7BB1A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77E0F33C432D39299909E3A61634FB4A0288FA45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB015ABE8F4E5796CABB2090C95B134793CCA2FA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1EDAF2D6881BB251F1D599487E4623C7457658E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6C98BEC5ECA7393E1C715DD151D3967D18663A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF6D78714F1F32375CE6B88F3A8863A25695929D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF57A4697175C4DE0BEB410448FBEEB337BB6A69C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// runden++;
		int32_t L_0 = __this->___runden_9;
		__this->___runden_9 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (farbarray[0] == "Blau")
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_1);
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralF57A4697175C4DE0BEB410448FBEEB337BB6A69C, NULL);
		if (!L_4)
		{
			goto IL_00cf;
		}
	}
	{
		// if (randomFeld1 <= 20)
		int32_t L_5 = __this->___randomFeld1_11;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)20))))
		{
			goto IL_0041;
		}
	}
	{
		// score = score + 1;
		int32_t L_6 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		goto IL_00cf;
	}

IL_0041:
	{
		// else if (randomFeld1 > 20 && randomFeld1 <= 40)
		int32_t L_7 = __this->___randomFeld1_11;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)20))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_8 = __this->___randomFeld1_11;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)40))))
		{
			goto IL_0065;
		}
	}
	{
		// score = score + 2;
		int32_t L_9 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		goto IL_00cf;
	}

IL_0065:
	{
		// else if (randomFeld1 > 40 && randomFeld1 <= 60)
		int32_t L_10 = __this->___randomFeld1_11;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)40))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_11 = __this->___randomFeld1_11;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)60))))
		{
			goto IL_0089;
		}
	}
	{
		// score = score + 3;
		int32_t L_12 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_12, 3));
		goto IL_00cf;
	}

IL_0089:
	{
		// else if (randomFeld1 > 60 && randomFeld1 <= 80)
		int32_t L_13 = __this->___randomFeld1_11;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)60))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_14 = __this->___randomFeld1_11;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)80))))
		{
			goto IL_00ad;
		}
	}
	{
		// score = score + 4;
		int32_t L_15 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_15, 4));
		goto IL_00cf;
	}

IL_00ad:
	{
		// else if (randomFeld1 == 81 || randomFeld1 == 82)
		int32_t L_16 = __this->___randomFeld1_11;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)81))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_17 = __this->___randomFeld1_11;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_00cf;
		}
	}

IL_00c1:
	{
		// score = score + 5;
		int32_t L_18 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_18, 5));
	}

IL_00cf:
	{
		// if (farbarray[1] == "Gr?n")
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_19);
		int32_t L_20 = 1;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralC6C98BEC5ECA7393E1C715DD151D3967D18663A3, NULL);
		if (!L_22)
		{
			goto IL_0190;
		}
	}
	{
		// if (randomFeld2 <= 20)
		int32_t L_23 = __this->___randomFeld2_12;
		if ((((int32_t)L_23) > ((int32_t)((int32_t)20))))
		{
			goto IL_0102;
		}
	}
	{
		// score = score + 1;
		int32_t L_24 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		goto IL_0190;
	}

IL_0102:
	{
		// else if (randomFeld2 > 20 && randomFeld2 <= 40)
		int32_t L_25 = __this->___randomFeld2_12;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)20))))
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_26 = __this->___randomFeld2_12;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)40))))
		{
			goto IL_0126;
		}
	}
	{
		// score = score + 2;
		int32_t L_27 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_27, 2));
		goto IL_0190;
	}

IL_0126:
	{
		// else if (randomFeld2> 40 && randomFeld2 <= 60)
		int32_t L_28 = __this->___randomFeld2_12;
		if ((((int32_t)L_28) <= ((int32_t)((int32_t)40))))
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_29 = __this->___randomFeld2_12;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)60))))
		{
			goto IL_014a;
		}
	}
	{
		// score = score + 3;
		int32_t L_30 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_30, 3));
		goto IL_0190;
	}

IL_014a:
	{
		// else if (randomFeld2 > 60 && randomFeld2 <= 80)
		int32_t L_31 = __this->___randomFeld2_12;
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)60))))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_32 = __this->___randomFeld2_12;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)80))))
		{
			goto IL_016e;
		}
	}
	{
		// score = score + 4;
		int32_t L_33 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_33, 4));
		goto IL_0190;
	}

IL_016e:
	{
		// else if (randomFeld2 == 81 || randomFeld2 == 82)
		int32_t L_34 = __this->___randomFeld2_12;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)81))))
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_35 = __this->___randomFeld2_12;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0190;
		}
	}

IL_0182:
	{
		// score = score + 5;
		int32_t L_36 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_36, 5));
	}

IL_0190:
	{
		// if (farbarray[2] == "Orange")
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_37);
		int32_t L_38 = 2;
		String_t* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		bool L_40;
		L_40 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_39, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, NULL);
		if (!L_40)
		{
			goto IL_0251;
		}
	}
	{
		// if (randomFeld1 <= 20)
		int32_t L_41 = __this->___randomFeld1_11;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)20))))
		{
			goto IL_01c3;
		}
	}
	{
		// score = score + 1;
		int32_t L_42 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		goto IL_0251;
	}

IL_01c3:
	{
		// else if (randomFeld1 > 20 && randomFeld1 <= 40)
		int32_t L_43 = __this->___randomFeld1_11;
		if ((((int32_t)L_43) <= ((int32_t)((int32_t)20))))
		{
			goto IL_01e7;
		}
	}
	{
		int32_t L_44 = __this->___randomFeld1_11;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)40))))
		{
			goto IL_01e7;
		}
	}
	{
		// score = score + 2;
		int32_t L_45 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_45, 2));
		goto IL_0251;
	}

IL_01e7:
	{
		// else if (randomFeld1 > 40 && randomFeld1 <= 60)
		int32_t L_46 = __this->___randomFeld1_11;
		if ((((int32_t)L_46) <= ((int32_t)((int32_t)40))))
		{
			goto IL_020b;
		}
	}
	{
		int32_t L_47 = __this->___randomFeld1_11;
		if ((((int32_t)L_47) > ((int32_t)((int32_t)60))))
		{
			goto IL_020b;
		}
	}
	{
		// score = score + 3;
		int32_t L_48 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_48, 3));
		goto IL_0251;
	}

IL_020b:
	{
		// else if (randomFeld1 > 60 && randomFeld1 <= 80)
		int32_t L_49 = __this->___randomFeld1_11;
		if ((((int32_t)L_49) <= ((int32_t)((int32_t)60))))
		{
			goto IL_022f;
		}
	}
	{
		int32_t L_50 = __this->___randomFeld1_11;
		if ((((int32_t)L_50) > ((int32_t)((int32_t)80))))
		{
			goto IL_022f;
		}
	}
	{
		// score = score + 4;
		int32_t L_51 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_51, 4));
		goto IL_0251;
	}

IL_022f:
	{
		// else if (randomFeld1 == 81 || randomFeld1 == 82)
		int32_t L_52 = __this->___randomFeld1_11;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)81))))
		{
			goto IL_0243;
		}
	}
	{
		int32_t L_53 = __this->___randomFeld1_11;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0251;
		}
	}

IL_0243:
	{
		// score = score + 5;
		int32_t L_54 = __this->___score_14;
		__this->___score_14 = ((int32_t)il2cpp_codegen_add(L_54, 5));
	}

IL_0251:
	{
		// if (counter < 10)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_55 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((((int32_t)L_55) >= ((int32_t)((int32_t)10))))
		{
			goto IL_057d;
		}
	}
	{
		// if (counter == 1)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_56 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_02a5;
		}
	}
	{
		// randomFeld1 = rnd.Next(1, 21);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_57 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_57, 1, ((int32_t)21));
		__this->___randomFeld1_11 = L_58;
		// randomFeld2 = rnd.Next(21, 41);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_59 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_59, ((int32_t)21), ((int32_t)41));
		__this->___randomFeld2_12 = L_60;
		// randomFeld3 = rnd.Next(21, 41);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_61 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_61, ((int32_t)21), ((int32_t)41));
		__this->___randomFeld3_13 = L_62;
		goto IL_04e3;
	}

IL_02a5:
	{
		// else if (counter == 2)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_63 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_02ee;
		}
	}
	{
		// randomFeld1 = rnd.Next(21, 41);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_64 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_64, ((int32_t)21), ((int32_t)41));
		__this->___randomFeld1_11 = L_65;
		// randomFeld2 = rnd.Next(21, 41);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_66 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_66, ((int32_t)21), ((int32_t)41));
		__this->___randomFeld2_12 = L_67;
		// randomFeld3 = rnd.Next(21, 41);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_68 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_68, ((int32_t)21), ((int32_t)41));
		__this->___randomFeld3_13 = L_69;
		goto IL_04e3;
	}

IL_02ee:
	{
		// else if (counter == 3)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_70 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_70) == ((uint32_t)3))))
		{
			goto IL_0336;
		}
	}
	{
		// randomFeld1 = rnd.Next(1, 21);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_71 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_71, 1, ((int32_t)21));
		__this->___randomFeld1_11 = L_72;
		// randomFeld2 = rnd.Next(21, 41);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_73 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_73, ((int32_t)21), ((int32_t)41));
		__this->___randomFeld2_12 = L_74;
		// randomFeld3 = rnd.Next(41, 61);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_75 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_75, ((int32_t)41), ((int32_t)61));
		__this->___randomFeld3_13 = L_76;
		goto IL_04e3;
	}

IL_0336:
	{
		// else if (counter == 4)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_77 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_77) == ((uint32_t)4))))
		{
			goto IL_037e;
		}
	}
	{
		// randomFeld1 = rnd.Next(1, 21);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_78 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_78, 1, ((int32_t)21));
		__this->___randomFeld1_11 = L_79;
		// randomFeld2 = rnd.Next(41, 61);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_80 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_80, ((int32_t)41), ((int32_t)61));
		__this->___randomFeld2_12 = L_81;
		// randomFeld3 = rnd.Next(61, 81);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_82 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_82, ((int32_t)61), ((int32_t)81));
		__this->___randomFeld3_13 = L_83;
		goto IL_04e3;
	}

IL_037e:
	{
		// else if (counter == 5)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_84 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_84) == ((uint32_t)5))))
		{
			goto IL_03c6;
		}
	}
	{
		// randomFeld1 = rnd.Next(1, 21);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_85 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_85, 1, ((int32_t)21));
		__this->___randomFeld1_11 = L_86;
		// randomFeld2 = rnd.Next(61, 81);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_87 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_87, ((int32_t)61), ((int32_t)81));
		__this->___randomFeld2_12 = L_88;
		// randomFeld3 = rnd.Next(81, 83);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_89 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_89, ((int32_t)81), ((int32_t)83));
		__this->___randomFeld3_13 = L_90;
		goto IL_04e3;
	}

IL_03c6:
	{
		// else if (counter == 6)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_91 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_91) == ((uint32_t)6))))
		{
			goto IL_040f;
		}
	}
	{
		// randomFeld1 = rnd.Next(41, 61);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_92 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_92, ((int32_t)41), ((int32_t)61));
		__this->___randomFeld1_11 = L_93;
		// randomFeld2 = rnd.Next(61, 81);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_94 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_94);
		int32_t L_95;
		L_95 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_94, ((int32_t)61), ((int32_t)81));
		__this->___randomFeld2_12 = L_95;
		// randomFeld3 = rnd.Next(61, 81);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_96 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_96);
		int32_t L_97;
		L_97 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_96, ((int32_t)61), ((int32_t)81));
		__this->___randomFeld3_13 = L_97;
		goto IL_04e3;
	}

IL_040f:
	{
		// else if (counter == 7)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_98 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_98) == ((uint32_t)7))))
		{
			goto IL_0458;
		}
	}
	{
		// randomFeld1 = rnd.Next(41, 61);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_99 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_99);
		int32_t L_100;
		L_100 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_99, ((int32_t)41), ((int32_t)61));
		__this->___randomFeld1_11 = L_100;
		// randomFeld2 = rnd.Next(41, 61);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_101 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_101, ((int32_t)41), ((int32_t)61));
		__this->___randomFeld2_12 = L_102;
		// randomFeld3 = rnd.Next(81, 83);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_103 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_103, ((int32_t)81), ((int32_t)83));
		__this->___randomFeld3_13 = L_104;
		goto IL_04e3;
	}

IL_0458:
	{
		// else if (counter == 8)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_105 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_105) == ((uint32_t)8))))
		{
			goto IL_049e;
		}
	}
	{
		// randomFeld1 = rnd.Next(41, 61);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_106 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_106, ((int32_t)41), ((int32_t)61));
		__this->___randomFeld1_11 = L_107;
		// randomFeld2 = rnd.Next(61, 81);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_108 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_108);
		int32_t L_109;
		L_109 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_108, ((int32_t)61), ((int32_t)81));
		__this->___randomFeld2_12 = L_109;
		// randomFeld3 = rnd.Next(81, 83);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_110 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_110);
		int32_t L_111;
		L_111 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_110, ((int32_t)81), ((int32_t)83));
		__this->___randomFeld3_13 = L_111;
		goto IL_04e3;
	}

IL_049e:
	{
		// else if (counter == 9)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_112 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_112) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_04e3;
		}
	}
	{
		// randomFeld1 = rnd.Next(61, 81);
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_113 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_113);
		int32_t L_114;
		L_114 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_113, ((int32_t)61), ((int32_t)81));
		__this->___randomFeld1_11 = L_114;
		// randomFeld2 = rnd.Next(61, 81);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_115 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_115, ((int32_t)61), ((int32_t)81));
		__this->___randomFeld2_12 = L_116;
		// randomFeld3 = rnd.Next(81, 83);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_117 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15;
		NullCheck(L_117);
		int32_t L_118;
		L_118 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_117, ((int32_t)81), ((int32_t)83));
		__this->___randomFeld3_13 = L_118;
	}

IL_04e3:
	{
		// farbarray[0] = "-";
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		// farbarray[1] = "-";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_120 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_120);
		ArrayElementTypeCheck (L_120, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		// farbarray[2] = "-";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_121 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_121);
		ArrayElementTypeCheck (L_121, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		// runde.text = "Runde:\n" + runden.ToString() + "/10";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_122 = __this->___runde_7;
		int32_t* L_123 = (&__this->___runden_9);
		String_t* L_124;
		L_124 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_123, NULL);
		String_t* L_125;
		L_125 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralDF6D78714F1F32375CE6B88F3A8863A25695929D, L_124, _stringLiteralB1EDAF2D6881BB251F1D599487E4623C7457658E, NULL);
		NullCheck(L_122);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_122, L_125);
		// wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_126 = __this->___wurf_Text_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_127 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_128 = L_127;
		NullCheck(L_128);
		ArrayElementTypeCheck (L_128, _stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = L_128;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_130 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_130);
		int32_t L_131 = 0;
		String_t* L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, L_132);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_132);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_133 = L_129;
		NullCheck(L_133);
		ArrayElementTypeCheck (L_133, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_134 = L_133;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_135 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_135);
		int32_t L_136 = 1;
		String_t* L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		NullCheck(L_134);
		ArrayElementTypeCheck (L_134, L_137);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_137);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_138 = L_134;
		NullCheck(L_138);
		ArrayElementTypeCheck (L_138, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_139 = L_138;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_140 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_140);
		int32_t L_141 = 2;
		String_t* L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_139);
		ArrayElementTypeCheck (L_139, L_142);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_142);
		String_t* L_143;
		L_143 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_139, NULL);
		NullCheck(L_126);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_126, L_143);
		goto IL_062e;
	}

IL_057d:
	{
		// else if (counter == 10)
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_144 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		if ((!(((uint32_t)L_144) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_062e;
		}
	}
	{
		// farbarray[0] = "-";
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_145 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_145);
		ArrayElementTypeCheck (L_145, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		// farbarray[1] = "-";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_146 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_146);
		ArrayElementTypeCheck (L_146, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		// farbarray[2] = "-";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_147 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_147);
		ArrayElementTypeCheck (L_147, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		// wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_148 = __this->___wurf_Text_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_149 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_150 = L_149;
		NullCheck(L_150);
		ArrayElementTypeCheck (L_150, _stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_151 = L_150;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_152 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_152);
		int32_t L_153 = 0;
		String_t* L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_151);
		ArrayElementTypeCheck (L_151, L_154);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_154);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_155 = L_151;
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_156 = L_155;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_157 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_157);
		int32_t L_158 = 1;
		String_t* L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		NullCheck(L_156);
		ArrayElementTypeCheck (L_156, L_159);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_159);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_160 = L_156;
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_161 = L_160;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_162 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_162);
		int32_t L_163 = 2;
		String_t* L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		NullCheck(L_161);
		ArrayElementTypeCheck (L_161, L_164);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_164);
		String_t* L_165;
		L_165 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_161, NULL);
		NullCheck(L_148);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_148, L_165);
		// runde.text = "Runde:\n" + "10" + "/10";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_166 = __this->___runde_7;
		NullCheck(L_166);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_166, _stringLiteral77E0F33C432D39299909E3A61634FB4A0288FA45);
		// finished.text = "FINISHED!\n\n" + score + "/85";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_167 = __this->___finished_6;
		int32_t* L_168 = (&__this->___score_14);
		String_t* L_169;
		L_169 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_168, NULL);
		String_t* L_170;
		L_170 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral04EC32C6FF6BEEAA16F1E43255257E0CFA7BB1A2, L_169, _stringLiteralB015ABE8F4E5796CABB2090C95B134793CCA2FA5, NULL);
		NullCheck(L_167);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_167, L_170);
	}

IL_062e:
	{
		// counter++;
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		int32_t L_171 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8;
		((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8 = ((int32_t)il2cpp_codegen_add(L_171, 1));
		// }
		return;
	}
}
// System.Void Level5ButtonScript::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript_Delete_m8CD1902A7195E75C2806C73200E775F3E556D0F4 (Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (farbarray[2] != "-")
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_0);
		int32_t L_1 = 2;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_2, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// farbarray[2] = "-";
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		goto IL_0061;
	}

IL_0021:
	{
		// else if (farbarray[1] != "-")
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_5);
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_7, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// farbarray[1] = "-";
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		goto IL_0061;
	}

IL_0042:
	{
		// else if (farbarray[0] != "-")
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_10);
		int32_t L_11 = 0;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_12, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// farbarray[0] = "-";
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
	}

IL_0061:
	{
		// wurf_Text.text = "Getroffene Felder:\n\n" + farbarray[0] + " | " + farbarray[1] + " | " + farbarray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___wurf_Text_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC2D03688215789C6A85327A58C1C71E35F663DF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_19);
		int32_t L_20 = 0;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_18;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_24);
		int32_t L_25 = 1;
		String_t* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_23;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10;
		NullCheck(L_29);
		int32_t L_30 = 2;
		String_t* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_31);
		String_t* L_32;
		L_32 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_28, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_32);
		// }
		return;
	}
}
// System.Void Level5ButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript__ctor_m80FBBF7B575484922CFEDEF6EE1633D776DC91B1 (Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* __this, const RuntimeMethod* method) 
{
	{
		// int runden = 1;
		__this->___runden_9 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Level5ButtonScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5ButtonScript__cctor_mCE053EAAF97B980CD314A64CA77E5848EBAD78B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int counter = 1;
		((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___counter_8 = 1;
		// public static string[] farbarray = new string[3] { "-", "-", "-" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___farbarray_10), (void*)L_3);
		// public static System.Random rnd = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_4, NULL);
		((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___rnd_15), (void*)L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Level5Materials::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5Materials_Awake_m973B20597BA74FC6C7F706F69F32C3EF27C1E07F (Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062_StaticFields*)il2cpp_codegen_static_fields_for(Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062_StaticFields*)il2cpp_codegen_static_fields_for(Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Level5Materials::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5Materials_Start_m758851A0375FCE5D4CA7FB280877CAC3CF6A618D (Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_6), (void*)L_0);
		// rend.enabled = true;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___rend_6;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// rend.sharedMaterial = material[0];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->___rend_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = __this->___material_5;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_2);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_2, L_5, NULL);
		// }
		return;
	}
}
// System.Void Level5Materials::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5Materials_Update_m6652FDF482A771A0F0280010F2BFDB950224693F (Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Level5ButtonScript.instance.randomFeld1.Equals(feld))
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* L_0 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		int32_t* L_1 = (&L_0->___randomFeld1_11);
		int32_t L_2 = __this->___feld_7;
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// rend.sharedMaterial = material[1];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->___rend_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_5 = __this->___material_5;
		NullCheck(L_5);
		int32_t L_6 = 1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_4, L_7, NULL);
		return;
	}

IL_002b:
	{
		// else if (Level5ButtonScript.instance.randomFeld2.Equals(feld))
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* L_8 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		int32_t* L_9 = (&L_8->___randomFeld2_12);
		int32_t L_10 = __this->___feld_7;
		bool L_11;
		L_11 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// rend.sharedMaterial = material[2];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = __this->___rend_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_13 = __this->___material_5;
		NullCheck(L_13);
		int32_t L_14 = 2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_15, NULL);
		return;
	}

IL_0056:
	{
		// else if (Level5ButtonScript.instance.randomFeld3.Equals(feld))
		il2cpp_codegen_runtime_class_init_inline(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var);
		Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684* L_16 = ((Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_StaticFields*)il2cpp_codegen_static_fields_for(Level5ButtonScript_t891B247CA7787FD8EC27252BB1F3D56FC0FA2684_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->___randomFeld3_13);
		int32_t L_18 = __this->___feld_7;
		bool L_19;
		L_19 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_0081;
		}
	}
	{
		// rend.sharedMaterial = material[3];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_20 = __this->___rend_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_21 = __this->___material_5;
		NullCheck(L_21);
		int32_t L_22 = 3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_20, L_23, NULL);
		return;
	}

IL_0081:
	{
		// rend.sharedMaterial = material[0];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_24 = __this->___rend_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_25 = __this->___material_5;
		NullCheck(L_25);
		int32_t L_26 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_27, NULL);
		// }
		return;
	}
}
// System.Void Level5Materials::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level5Materials__ctor_mCF70B7288B733D57334786E689251861A64D374A (Level5Materials_tB727BF77BAAF5AD90E1E95352880CDFA4B4C9062* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_Awake_m237748B3CD408272A89FA6040C4B1894D38DCDBF (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		// this.menu = menu;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___menu_4;
		__this->___menu_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menu_4), (void*)L_0);
		// this.toggleOff = toggleOff;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___toggleOff_5;
		__this->___toggleOff_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggleOff_5), (void*)L_1);
		// this.toggleOn = toggleOn;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___toggleOn_6;
		__this->___toggleOn_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggleOn_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void MenuScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_Start_m8C843F2A54A5C8116CC175C71C202BACBE173A0C (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_Update_m7F6F2AA220CF46BAB2F638E8A37BC9E23E88C7FF (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuScript::ClickToRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_ClickToRestart_mAEB315B55091B06456DE7E69C5F500DAF98A3E09 (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Scene currentScene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		// SceneManager.LoadScene(currentScene.name, LoadSceneMode.Single);
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void MenuScript::CloseMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_CloseMenu_m8245BB415D7A23D5F8702EFA24F5DB234AC6D946 (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		// toggleOn.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___toggleOn_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// toggleOff.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___toggleOff_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___menu_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuScript::ToogleMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_ToogleMenu_mC536E197E304CD3F8358D5B8F805EF7FE10680E8 (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		// if (toggleOff.activeSelf == true)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___toggleOff_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// menu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___menu_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
	}

IL_0019:
	{
		// if(toggleOn.activeSelf == true)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___toggleOn_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_3, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___menu_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void MenuScript::BackToMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_BackToMainMenu_m46AB80B66D48312D97B259B3CE48CD9DCBA34FD6 (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MenuScene", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED, 0, NULL);
		// }
		return;
	}
}
// System.Void MenuScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript__ctor_mCDAA51C5C929C62E7082872DA581F913C3E66EDC (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Random3FelderScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random3FelderScript_Awake_mB095D33B87CA18F0886F33BD6E4D8A579E66F72A (Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10E1A4B42B609B4C63B23FEBC0D0F2D51074E2AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17CF05962AC1AC77CD4B5247CC6311690D8DAFE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B1B4910097B6EA900B79DD17583005FEAE67B0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6E95EAAA386E912C97249D7DB44E03239C01A44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75FC888505267E8E9CB24F34E721E84934FFAD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// instance = this;
		il2cpp_codegen_runtime_class_init_inline(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var);
		((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// for (int i = 1; i <= 20; i++)
		V_3 = 1;
		goto IL_007a;
	}

IL_000a:
	{
		// range.Add("Inner " + i.ToString());
		il2cpp_codegen_runtime_class_init_inline(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB6E95EAAA386E912C97249D7DB44E03239C01A44, L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_0, L_2, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// range.Add("Outer " + i.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD75FC888505267E8E9CB24F34E721E84934FFAD2, L_4, NULL);
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// range.Add("Double " + i.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral10E1A4B42B609B4C63B23FEBC0D0F2D51074E2AE, L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// range.Add("Triple " + i.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8B1B4910097B6EA900B79DD17583005FEAE67B0F, L_10, NULL);
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, L_11, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 1; i <= 20; i++)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_007a:
	{
		// for (int i = 1; i <= 20; i++)
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)20))))
		{
			goto IL_000a;
		}
	}
	{
		// range.Add("25");
		il2cpp_codegen_runtime_class_init_inline(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, _stringLiteral17CF05962AC1AC77CD4B5247CC6311690D8DAFE5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// range.Add("50");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// int index1 = rnd.Next(range.Count);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_16 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___rnd_10;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_17, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		NullCheck(L_16);
		int32_t L_19;
		L_19 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_16, L_18);
		V_0 = L_19;
		// int index2 = rnd.Next(range.Count);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_20 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___rnd_10;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_21, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		NullCheck(L_20);
		int32_t L_23;
		L_23 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_20, L_22);
		V_1 = L_23;
		// int index3 = rnd.Next(range.Count);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_24 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___rnd_10;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_25, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		NullCheck(L_24);
		int32_t L_27;
		L_27 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_24, L_26);
		V_2 = L_27;
		// randomFeld1 = range[index1];             //aus Liste random Feld
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_28, L_29, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		__this->___randomFeld1_6 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___randomFeld1_6), (void*)L_30);
		// randomFeld2 = range[index2];             //aus Liste random Feld
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		String_t* L_33;
		L_33 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_31, L_32, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		__this->___randomFeld2_7 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___randomFeld2_7), (void*)L_33);
		// randomFeld3 = range[index3];             //aus Liste random Feld
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = ((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		String_t* L_36;
		L_36 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_34, L_35, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		__this->___randomFeld3_8 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___randomFeld3_8), (void*)L_36);
		// }
		return;
	}
}
// System.Void Random3FelderScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random3FelderScript_Start_mDAA38789817FD8DCCEBF93889497A3660BAA3829 (Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BFCA97A87115C38B3D3DD61045F058C81A792D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		s_Il2CppMethodInitialized = true;
	}
	{
		// randomFelderText.text = "Zu werfende Felder:\n\n" + randomFeld1 + " | " + randomFeld2 + " | " + randomFeld3;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___randomFelderText_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral6BFCA97A87115C38B3D3DD61045F058C81A792D3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6BFCA97A87115C38B3D3DD61045F058C81A792D3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		String_t* L_4 = __this->___randomFeld1_6;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = __this->___randomFeld2_7;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = __this->___randomFeld3_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_9, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_11);
		// }
		return;
	}
}
// System.Void Random3FelderScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random3FelderScript_Update_m9F83F39FCF0136B4E313438D8A3F3B07077E37D4 (Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Random3FelderScript::NeueFelder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random3FelderScript_NeueFelder_m0E7BCD3B2DEB85D30BA4E54EEE3FA26FEF2B821E (Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Scene currentScene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		// SceneManager.LoadScene(currentScene.name, LoadSceneMode.Single);
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void Random3FelderScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random3FelderScript__ctor_mFA9754C01C1A8D4E8F4A0A7F74359BA53AEE156F (Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Random3FelderScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random3FelderScript__cctor_m12CE837B64836B4B1F7F86FFCE9D5EA784D3F258 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<string> range = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___range_9), (void*)L_0);
		// public static System.Random rnd = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_1, NULL);
		((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___rnd_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_StaticFields*)il2cpp_codegen_static_fields_for(Random3FelderScript_t26D60D1CDBD17CEA29DB2B44660DA8CB2BD95D19_il2cpp_TypeInfo_var))->___rnd_10), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RandomZahlScoreAnzeigeScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomZahlScoreAnzeigeScript_Awake_mF0D996FC3929D3308BB7D151EDB801D941DA7345 (RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// instance = this;
		il2cpp_codegen_runtime_class_init_inline(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var);
		((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// for (int i = 2; i <= 158; i++)
		V_1 = 2;
		goto IL_0019;
	}

IL_000a:
	{
		// range.Add(i);
		il2cpp_codegen_runtime_class_init_inline(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_0, L_1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int i = 2; i <= 158; i++)
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0019:
	{
		// for (int i = 2; i <= 158; i++)
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)158))))
		{
			goto IL_000a;
		}
	}
	{
		// range.Add(160);
		il2cpp_codegen_runtime_class_init_inline(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = ((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13;
		NullCheck(L_4);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_4, ((int32_t)160), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// range.Add(161);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = ((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13;
		NullCheck(L_5);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_5, ((int32_t)161), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// range.Add(164);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = ((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13;
		NullCheck(L_6);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_6, ((int32_t)164), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// range.Add(167);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = ((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13;
		NullCheck(L_7);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_7, ((int32_t)167), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// range.Add(170);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = ((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13;
		NullCheck(L_8);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_8, ((int32_t)170), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// int index = rnd.Next(range.Count);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_9 = ((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___rnd_14;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = ((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_10, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_9, L_11);
		V_0 = L_12;
		// randomScore = range[index];             //aus Liste random Zahl
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = ((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_13, L_14, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		__this->___randomScore_11 = L_15;
		// score = randomScore;
		int32_t L_16 = __this->___randomScore_11;
		__this->___score_10 = L_16;
		// }
		return;
	}
}
// System.Void RandomZahlScoreAnzeigeScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomZahlScoreAnzeigeScript_Start_m4F8AFE952494219E05205C98EF0E53BDDAFA6BED (RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___scoreText_5;
		int32_t* L_1 = (&__this->___score_10);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		int32_t* L_3 = (&__this->___randomScore_11);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_2, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		// }
		return;
	}
}
// System.Void RandomZahlScoreAnzeigeScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomZahlScoreAnzeigeScript_Update_mCBCB4474CD230D38D66DCE802E73C1F8CC1AEB93 (RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ScoreEingabeScript.scorearray[0] == "2x" || ScoreEingabeScript.scorearray[0] == "50")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372, NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}

IL_0026:
	{
		// finishopt1 = true;
		__this->___finishopt1_7 = (bool)1;
	}

IL_002d:
	{
		// if (ScoreEingabeScript.scorearray[1] == "2x" || ScoreEingabeScript.scorearray[1] == "50")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372, NULL);
		if (!L_15)
		{
			goto IL_005a;
		}
	}

IL_0053:
	{
		// finishopt2 = true;
		__this->___finishopt2_8 = (bool)1;
	}

IL_005a:
	{
		// if (ScoreEingabeScript.scorearray[2] == "2x" || ScoreEingabeScript.scorearray[2] == "50")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_16);
		int32_t L_17 = 2;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (L_19)
		{
			goto IL_0080;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 2;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372, NULL);
		if (!L_23)
		{
			goto IL_0087;
		}
	}

IL_0080:
	{
		// finishopt3 = true;
		__this->___finishopt3_9 = (bool)1;
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void RandomZahlScoreAnzeigeScript::changeScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomZahlScoreAnzeigeScript_changeScore_m8DC71953191346EEC683C8B940C5BF2E870E3D84 (RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01257C073AB8CA3C108848F31015E99ACBFEB8AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabesumme = int.Parse(ScoreEingabeScript.scorearray[0]) + int.Parse(ScoreEingabeScript.scorearray[1]) + int.Parse(ScoreEingabeScript.scorearray[2]);
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3;
		L_3 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_2, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_4);
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7;
		L_7 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_6, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_8);
		int32_t L_9 = 2;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11;
		L_11 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_10, NULL);
		__this->___eingabesumme_12 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_3, L_7)), L_11));
		// if (eingabesumme < score - 1)
		int32_t L_12 = __this->___eingabesumme_12;
		int32_t L_13 = __this->___score_10;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1)))))
		{
			goto IL_00b9;
		}
	}
	{
		// score -= eingabesumme;
		int32_t L_14 = __this->___score_10;
		int32_t L_15 = __this->___eingabesumme_12;
		__this->___score_10 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = __this->___scoreText_5;
		int32_t* L_17 = (&__this->___score_10);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
		int32_t* L_19 = (&__this->___randomScore_11);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_18, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_20, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_21);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		return;
	}

IL_00b9:
	{
		// else if (eingabesumme > score)
		int32_t L_25 = __this->___eingabesumme_12;
		int32_t L_26 = __this->___score_10;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_0131;
		}
	}
	{
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_27 = __this->___scoreText_5;
		int32_t* L_28 = (&__this->___score_10);
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_28, NULL);
		int32_t* L_30 = (&__this->___randomScore_11);
		String_t* L_31;
		L_31 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_30, NULL);
		String_t* L_32;
		L_32 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_29, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_31, NULL);
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_27, L_32);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		return;
	}

IL_0131:
	{
		// else if (eingabesumme == score && finishopt3)
		int32_t L_36 = __this->___eingabesumme_12;
		int32_t L_37 = __this->___score_10;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_01da;
		}
	}
	{
		bool L_38 = __this->___finishopt3_9;
		if (!L_38)
		{
			goto IL_01da;
		}
	}
	{
		// score -= eingabesumme;
		int32_t L_39 = __this->___score_10;
		int32_t L_40 = __this->___eingabesumme_12;
		__this->___score_10 = ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = __this->___scoreText_5;
		int32_t* L_42 = (&__this->___score_10);
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_42, NULL);
		int32_t* L_44 = (&__this->___randomScore_11);
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_44, NULL);
		String_t* L_46;
		L_46 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_43, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_45, NULL);
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_41, L_46);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		// finishText.text = "FINISHED!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_50 = __this->___finishText_6;
		NullCheck(L_50);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_50, _stringLiteral01257C073AB8CA3C108848F31015E99ACBFEB8AC);
		return;
	}

IL_01da:
	{
		// else if (eingabesumme == score && finishopt2 && ScoreEingabeScript.scorearray[2] == "0")
		int32_t L_51 = __this->___eingabesumme_12;
		int32_t L_52 = __this->___score_10;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0299;
		}
	}
	{
		bool L_53 = __this->___finishopt2_8;
		if (!L_53)
		{
			goto IL_0299;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_54);
		int32_t L_55 = 2;
		String_t* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		if (!L_57)
		{
			goto IL_0299;
		}
	}
	{
		// score -= eingabesumme;
		int32_t L_58 = __this->___score_10;
		int32_t L_59 = __this->___eingabesumme_12;
		__this->___score_10 = ((int32_t)il2cpp_codegen_subtract(L_58, L_59));
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___scoreText_5;
		int32_t* L_61 = (&__this->___score_10);
		String_t* L_62;
		L_62 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_61, NULL);
		int32_t* L_63 = (&__this->___randomScore_11);
		String_t* L_64;
		L_64 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_63, NULL);
		String_t* L_65;
		L_65 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_62, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_64, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_65);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		// finishText.text = "FINISHED!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_69 = __this->___finishText_6;
		NullCheck(L_69);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_69, _stringLiteral01257C073AB8CA3C108848F31015E99ACBFEB8AC);
		return;
	}

IL_0299:
	{
		// else if (eingabesumme == score && finishopt1 && ScoreEingabeScript.scorearray[2] == "0" && ScoreEingabeScript.scorearray[1] == "0")
		int32_t L_70 = __this->___eingabesumme_12;
		int32_t L_71 = __this->___score_10;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_036d;
		}
	}
	{
		bool L_72 = __this->___finishopt1_7;
		if (!L_72)
		{
			goto IL_036d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		bool L_76;
		L_76 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_75, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		if (!L_76)
		{
			goto IL_036d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_77);
		int32_t L_78 = 1;
		String_t* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		bool L_80;
		L_80 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_79, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		if (!L_80)
		{
			goto IL_036d;
		}
	}
	{
		// score -= eingabesumme;
		int32_t L_81 = __this->___score_10;
		int32_t L_82 = __this->___eingabesumme_12;
		__this->___score_10 = ((int32_t)il2cpp_codegen_subtract(L_81, L_82));
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / " + randomScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_83 = __this->___scoreText_5;
		int32_t* L_84 = (&__this->___score_10);
		String_t* L_85;
		L_85 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_84, NULL);
		int32_t* L_86 = (&__this->___randomScore_11);
		String_t* L_87;
		L_87 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_86, NULL);
		String_t* L_88;
		L_88 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_85, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_87, NULL);
		NullCheck(L_83);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_83, L_88);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		// finishText.text = "FINISHED!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_92 = __this->___finishText_6;
		NullCheck(L_92);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_92, _stringLiteral01257C073AB8CA3C108848F31015E99ACBFEB8AC);
	}

IL_036d:
	{
		// }
		return;
	}
}
// System.Void RandomZahlScoreAnzeigeScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomZahlScoreAnzeigeScript__ctor_m22DC48A3C222BC30E998FC3D3F35B0FAB7FB320E (RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void RandomZahlScoreAnzeigeScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomZahlScoreAnzeigeScript__cctor_m4228BB50806ABFD2E1C502EC5B2F78D1F538FE41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<int> range = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___range_13), (void*)L_0);
		// public static System.Random rnd = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_1, NULL);
		((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___rnd_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_StaticFields*)il2cpp_codegen_static_fields_for(RandomZahlScoreAnzeigeScript_tDC31134753E768164D519D78F6E2BB2057BC454F_il2cpp_TypeInfo_var))->___rnd_14), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreAnzeigeScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAnzeigeScript_Awake_mB58EFCA582D61916BCAE7E4CAA1406A52AFF105E (ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ScoreAnzeigeScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAnzeigeScript_Start_mB6EC210F804140162BA9972FD0A28D3941E22127 (ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CC380261DBD65758E5E14BED09836B346408C08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___scoreText_5;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_1, _stringLiteral8CC380261DBD65758E5E14BED09836B346408C08, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		// }
		return;
	}
}
// System.Void ScoreAnzeigeScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAnzeigeScript_Update_m8C64975F3A00507F27B86C934006942BC1E6B09C (ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ScoreEingabeScript.scorearray[0] == "2x" || ScoreEingabeScript.scorearray[0] == "50")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372, NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}

IL_0026:
	{
		// finishopt1 = true;
		__this->___finishopt1_7 = (bool)1;
	}

IL_002d:
	{
		// if (ScoreEingabeScript.scorearray[1] == "2x" || ScoreEingabeScript.scorearray[1] == "50")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372, NULL);
		if (!L_15)
		{
			goto IL_005a;
		}
	}

IL_0053:
	{
		// finishopt2 = true;
		__this->___finishopt2_8 = (bool)1;
	}

IL_005a:
	{
		// if (ScoreEingabeScript.scorearray[2] == "2x" || ScoreEingabeScript.scorearray[2] == "50")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_16);
		int32_t L_17 = 2;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (L_19)
		{
			goto IL_0080;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 2;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372, NULL);
		if (!L_23)
		{
			goto IL_0087;
		}
	}

IL_0080:
	{
		// finishopt3 = true;
		__this->___finishopt3_9 = (bool)1;
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void ScoreAnzeigeScript::changeScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAnzeigeScript_changeScore_mCC61C7B102A4E997C064D609075A13878450D910 (ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01257C073AB8CA3C108848F31015E99ACBFEB8AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CC380261DBD65758E5E14BED09836B346408C08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabesumme = int.Parse(ScoreEingabeScript.scorearray[0]) + int.Parse(ScoreEingabeScript.scorearray[1]) + int.Parse(ScoreEingabeScript.scorearray[2]);
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3;
		L_3 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_2, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_4);
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7;
		L_7 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_6, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_8);
		int32_t L_9 = 2;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11;
		L_11 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_10, NULL);
		__this->___eingabesumme_11 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_3, L_7)), L_11));
		// if (eingabesumme < score - 1)
		int32_t L_12 = __this->___eingabesumme_11;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_13 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1)))))
		{
			goto IL_00aa;
		}
	}
	{
		// score -= eingabesumme;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_14 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		int32_t L_15 = __this->___eingabesumme_11;
		((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = __this->___scoreText_5;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_18;
		L_18 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_17, _stringLiteral8CC380261DBD65758E5E14BED09836B346408C08, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_18);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		return;
	}

IL_00aa:
	{
		// else if (eingabesumme > score)
		int32_t L_22 = __this->___eingabesumme_11;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_23 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_0115;
		}
	}
	{
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->___scoreText_5;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_26;
		L_26 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_25, _stringLiteral8CC380261DBD65758E5E14BED09836B346408C08, NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_26);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		return;
	}

IL_0115:
	{
		// else if (eingabesumme == score && finishopt3)
		int32_t L_30 = __this->___eingabesumme_11;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_31 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_01ac;
		}
	}
	{
		bool L_32 = __this->___finishopt3_9;
		if (!L_32)
		{
			goto IL_01ac;
		}
	}
	{
		// score -= eingabesumme;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_33 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		int32_t L_34 = __this->___eingabesumme_11;
		((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10 = ((int32_t)il2cpp_codegen_subtract(L_33, L_34));
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_35 = __this->___scoreText_5;
		String_t* L_36;
		L_36 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_37;
		L_37 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_36, _stringLiteral8CC380261DBD65758E5E14BED09836B346408C08, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_35, L_37);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		// finishText.text = "FINISHED!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = __this->___finishText_6;
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_41, _stringLiteral01257C073AB8CA3C108848F31015E99ACBFEB8AC);
		return;
	}

IL_01ac:
	{
		// else if (eingabesumme == score && finishopt2 && ScoreEingabeScript.scorearray[2] == "0")
		int32_t L_42 = __this->___eingabesumme_11;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_43 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_0259;
		}
	}
	{
		bool L_44 = __this->___finishopt2_8;
		if (!L_44)
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_45);
		int32_t L_46 = 2;
		String_t* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		bool L_48;
		L_48 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_47, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		if (!L_48)
		{
			goto IL_0259;
		}
	}
	{
		// score -= eingabesumme;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_49 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		int32_t L_50 = __this->___eingabesumme_11;
		((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10 = ((int32_t)il2cpp_codegen_subtract(L_49, L_50));
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_51 = __this->___scoreText_5;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_53;
		L_53 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_52, _stringLiteral8CC380261DBD65758E5E14BED09836B346408C08, NULL);
		NullCheck(L_51);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_51, L_53);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		// finishText.text = "FINISHED!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_57 = __this->___finishText_6;
		NullCheck(L_57);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_57, _stringLiteral01257C073AB8CA3C108848F31015E99ACBFEB8AC);
		return;
	}

IL_0259:
	{
		// else if (eingabesumme == score && finishopt1 && ScoreEingabeScript.scorearray[2] == "0" && ScoreEingabeScript.scorearray[1] == "0")
		int32_t L_58 = __this->___eingabesumme_11;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_59 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_031b;
		}
	}
	{
		bool L_60 = __this->___finishopt1_7;
		if (!L_60)
		{
			goto IL_031b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_61);
		int32_t L_62 = 2;
		String_t* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		bool L_64;
		L_64 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_63, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		if (!L_64)
		{
			goto IL_031b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_65);
		int32_t L_66 = 1;
		String_t* L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		bool L_68;
		L_68 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_67, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		if (!L_68)
		{
			goto IL_031b;
		}
	}
	{
		// score -= eingabesumme;
		il2cpp_codegen_runtime_class_init_inline(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		int32_t L_69 = ((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10;
		int32_t L_70 = __this->___eingabesumme_11;
		((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10 = ((int32_t)il2cpp_codegen_subtract(L_69, L_70));
		// scoreText.text = "Dein Score:\n" + score.ToString() + " / 301";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_71 = __this->___scoreText_5;
		String_t* L_72;
		L_72 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10), NULL);
		String_t* L_73;
		L_73 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB41779EB2020C2E403D62ACF997DCC329D9C8978, L_72, _stringLiteral8CC380261DBD65758E5E14BED09836B346408C08, NULL);
		NullCheck(L_71);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_71, L_73);
		// ScoreEingabeScript.scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// ScoreEingabeScript.scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// ScoreEingabeScript.scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// finishopt1 = false;
		__this->___finishopt1_7 = (bool)0;
		// finishopt2 = false;
		__this->___finishopt2_8 = (bool)0;
		// finishopt3 = false;
		__this->___finishopt3_9 = (bool)0;
		// finishText.text = "FINISHED!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_77 = __this->___finishText_6;
		NullCheck(L_77);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_77, _stringLiteral01257C073AB8CA3C108848F31015E99ACBFEB8AC);
	}

IL_031b:
	{
		// }
		return;
	}
}
// System.Void ScoreAnzeigeScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAnzeigeScript__ctor_m1FB69B3173F6D070B3E1DE289238ECCEE94AC6F4 (ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ScoreAnzeigeScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAnzeigeScript__cctor_m0099BD319F435C14AE1585847DE8FB83EFAB30FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int score = 301;
		((ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_StaticFields*)il2cpp_codegen_static_fields_for(ScoreAnzeigeScript_t85535F628A48416A1894F1EDDA34EDE05A458FC6_il2cpp_TypeInfo_var))->___score_10 = ((int32_t)301);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreEingabeScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_Start_m53C8DC11B7112FD6036B941F1CF33A2A611EF7EA (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 2;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_15);
		String_t* L_16;
		L_16 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_12, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_16);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_Update_mF2F49D9294DF115A3286B8A6379F60DDCED416D4 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonDouble_m47BDF2564DE4191F22E01C171E26A6404D445427 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scorearray[0] == "Wurf 1")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// scorearray[0] = "2x";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		goto IL_0061;
	}

IL_0021:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_5);
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// scorearray[1] = "2x";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		goto IL_0061;
	}

IL_0042:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_10);
		int32_t L_11 = 2;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// scorearray[2] = "2x";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
	}

IL_0061:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_30);
		String_t* L_31;
		L_31 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_27, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_31);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonTriple()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonTriple_mDD45947FE4FDCE16C447FFE208339B6C11BC2AE1 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scorearray[0] == "Wurf 1")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// scorearray[0] = "3x";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		goto IL_0061;
	}

IL_0021:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_5);
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// scorearray[1] = "3x";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		goto IL_0061;
	}

IL_0042:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_10);
		int32_t L_11 = 2;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// scorearray[2] = "3x";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
	}

IL_0061:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_30);
		String_t* L_31;
		L_31 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_27, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_31);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonOne_m366DD06B2CD5651A69107E401D296D0010129794 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 1;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 1;
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b4;
	}

IL_002f:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b4;
	}

IL_0064:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b4;
	}

IL_0099:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c2;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b4;
	}

IL_00c2:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b4;
	}

IL_00f7:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b4;
	}

IL_012c:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b4;
	}

IL_0152:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0184;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b4;
	}

IL_0184:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b4:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonTwo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonTwo_m4273C3629C84134BC4FC0070B3E8E92BB82D7DB5 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 2;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 2;
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b4;
	}

IL_002f:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b4;
	}

IL_0064:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b4;
	}

IL_0099:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c2;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b4;
	}

IL_00c2:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b4;
	}

IL_00f7:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b4;
	}

IL_012c:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b4;
	}

IL_0152:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0184;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b4;
	}

IL_0184:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b4:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonThree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonThree_mA7BB0D425CFF351F912C6FA707021ED2B9B819F2 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 3;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 3;
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b4;
	}

IL_002f:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b4;
	}

IL_0064:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b4;
	}

IL_0099:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c2;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b4;
	}

IL_00c2:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b4;
	}

IL_00f7:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b4;
	}

IL_012c:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b4;
	}

IL_0152:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0184;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b4;
	}

IL_0184:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b4:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonFour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonFour_mC17F4585E63867D65C8DC02C0E52F81C31065DBD (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 4;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 4;
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b4;
	}

IL_002f:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b4;
	}

IL_0064:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b4;
	}

IL_0099:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c2;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b4;
	}

IL_00c2:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b4;
	}

IL_00f7:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b4;
	}

IL_012c:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b4;
	}

IL_0152:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0184;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b4;
	}

IL_0184:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b4:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonFive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonFive_m49737B1451996D01BB1B6392448EAF4CA4DCE937 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 5;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 5;
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b4;
	}

IL_002f:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b4;
	}

IL_0064:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b4;
	}

IL_0099:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c2;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b4;
	}

IL_00c2:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b4;
	}

IL_00f7:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b4;
	}

IL_012c:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b4;
	}

IL_0152:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0184;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b4;
	}

IL_0184:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b4:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonSix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonSix_mC92DEE52DE92488F5BF54494F73C4F6A1D230888 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 6;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 6;
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b4;
	}

IL_002f:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b4;
	}

IL_0064:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b4;
	}

IL_0099:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c2;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b4;
	}

IL_00c2:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b4;
	}

IL_00f7:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b4;
	}

IL_012c:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b4;
	}

IL_0152:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0184;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b4;
	}

IL_0184:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b4:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonSeven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonSeven_m8C3CF716698182EB73D3209D6B927C8A6ACBF3CD (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 7;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 7;
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b4;
	}

IL_002f:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b4;
	}

IL_0064:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b4;
	}

IL_0099:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c2;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b4;
	}

IL_00c2:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b4;
	}

IL_00f7:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b4;
	}

IL_012c:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b4;
	}

IL_0152:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0184;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b4;
	}

IL_0184:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b4:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonEight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonEight_mF29223CCB371FCEDCC4ED5B59271FF4DA8384643 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 8;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 8;
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b4;
	}

IL_002f:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b4;
	}

IL_0064:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b4;
	}

IL_0099:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c2;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b4;
	}

IL_00c2:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b4;
	}

IL_00f7:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b4;
	}

IL_012c:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b4;
	}

IL_0152:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0184;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b4;
	}

IL_0184:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b4:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonNine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonNine_mB2E88D53772ADD5CE538E160C52DEE7C749A42B4 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 9;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)9);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonTen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonTen_m727DD46D821B6FCDBE958EDE65A95EF4A0887E65 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 10;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)10);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonEleven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonEleven_m98D61AD545F9E5F8F3598D4A1AFAECC0DBCBD122 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 11;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)11);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonTwelve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonTwelve_m238541A317D1421F39172F54E27CAD2148AA40CE (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 12;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)12);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonThirteen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonThirteen_m966CB04D8B712D30244C74C6578AC5DDEE42FA30 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 13;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)13);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonFourteen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonFourteen_mBEA88E59F30856A2337ED289462BB64CDC25E383 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 14;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)14);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonFifteen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonFifteen_mE59371C4A0CCF6C095A719DA08718AAADDC82FFD (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 15;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)15);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonSixteen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonSixteen_mF43FC6E57E64F2A793AED0FEBA681308AA8A685A (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 16;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)16);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonSeventeen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonSeventeen_m9D4B84B951F91BC5B97DBBBA5B048D3F66059388 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 17;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)17);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonEighteen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonEighteen_mF8227F490FF8B8913EF20631DA16E169362162CF (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 18;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)18);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonNineteen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonNineteen_mFD45DA116E64029BA8DAFE3D1C1EAFF7F58D8EA6 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 19;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)19);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonTwenty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonTwenty_m55C88C126384F9C02547CDAEFA1F3388E6828641 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 20;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)20);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b5;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b5;
	}

IL_0065:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b5;
	}

IL_009a:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b5;
	}

IL_00c3:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f8;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b5;
	}

IL_00f8:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b5;
	}

IL_012d:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0153;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b5;
	}

IL_0153:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b5;
	}

IL_0185:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b5:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonBull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonBull_m7F23E54A3E0CCA9405695898A6376117ED2142CD (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 25;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)25);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_016a;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		goto IL_016a;
	}

IL_0059:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_12);
		int32_t L_13 = 0;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_15)
		{
			goto IL_0082;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_17);
		goto IL_016a;
	}

IL_0082:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_21)
		{
			goto IL_00ab;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		goto IL_016a;
	}

IL_00ab:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_24);
		int32_t L_25 = 1;
		String_t* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_29);
		goto IL_016a;
	}

IL_00d4:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_30);
		int32_t L_31 = 1;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_35);
		goto IL_016a;
	}

IL_00fa:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_36);
		int32_t L_37 = 2;
		String_t* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_39)
		{
			goto IL_0120;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_41);
		goto IL_016a;
	}

IL_0120:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_42);
		int32_t L_43 = 2;
		String_t* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_45)
		{
			goto IL_0146;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_47);
		goto IL_016a;
	}

IL_0146:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_48);
		int32_t L_49 = 2;
		String_t* L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_51)
		{
			goto IL_016a;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_53;
		L_53 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_53);
	}

IL_016a:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_54 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_55;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_57);
		int32_t L_58 = 0;
		String_t* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_56;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_60;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_62);
		int32_t L_63 = 1;
		String_t* L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_61;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_67);
		int32_t L_68 = 2;
		String_t* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_69);
		String_t* L_70;
		L_70 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_66, NULL);
		NullCheck(L_54);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_54, L_70);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonBullseye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonBullseye_m792E24C770FA8FF3C6BB7E0B91A043D9DA3C7059 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 50;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)50);
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_016a;
	}

IL_0030:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		goto IL_016a;
	}

IL_0059:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_12);
		int32_t L_13 = 0;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_15)
		{
			goto IL_0082;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_17);
		goto IL_016a;
	}

IL_0082:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_21)
		{
			goto IL_00ab;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		goto IL_016a;
	}

IL_00ab:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_24);
		int32_t L_25 = 1;
		String_t* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_29);
		goto IL_016a;
	}

IL_00d4:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_30);
		int32_t L_31 = 1;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_35);
		goto IL_016a;
	}

IL_00fa:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_36);
		int32_t L_37 = 2;
		String_t* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_39)
		{
			goto IL_0120;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_41);
		goto IL_016a;
	}

IL_0120:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_42);
		int32_t L_43 = 2;
		String_t* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_45)
		{
			goto IL_0146;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_47);
		goto IL_016a;
	}

IL_0146:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_48);
		int32_t L_49 = 2;
		String_t* L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_51)
		{
			goto IL_016a;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_53;
		L_53 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_53);
	}

IL_016a:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_54 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_55;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_57);
		int32_t L_58 = 0;
		String_t* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_56;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_60;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_62);
		int32_t L_63 = 1;
		String_t* L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_61;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_67);
		int32_t L_68 = 2;
		String_t* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_69);
		String_t* L_70;
		L_70 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_66, NULL);
		NullCheck(L_54);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_54, L_70);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonZero_mF1CA2C0AD64746943AF9D95FEF8BDF2D7448B445 (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eingabe = 0;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 0;
		// if (scorearray[0] == "Wurf 1")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// scorearray[0] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		goto IL_01b4;
	}

IL_002f:
	{
		// else if (scorearray[0] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		goto IL_01b4;
	}

IL_0064:
	{
		// else if (scorearray[0] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_17 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_17));
		// scorearray[0] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		goto IL_01b4;
	}

IL_0099:
	{
		// else if (scorearray[1] == "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_23)
		{
			goto IL_00c2;
		}
	}
	{
		// scorearray[1] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		goto IL_01b4;
	}

IL_00c2:
	{
		// else if (scorearray[1] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_30));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		goto IL_01b4;
	}

IL_00f7:
	{
		// else if (scorearray[1] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_37));
		// scorearray[1] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		goto IL_01b4;
	}

IL_012c:
	{
		// else if (scorearray[2] == "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_40);
		int32_t L_41 = 2;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		// scorearray[2] = eingabe.ToString();
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		goto IL_01b4;
	}

IL_0152:
	{
		// else if (scorearray[2] == "2x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_46);
		int32_t L_47 = 2;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865, NULL);
		if (!L_49)
		{
			goto IL_0184;
		}
	}
	{
		// eingabe = 2 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_50 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(2, L_50));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_52);
		goto IL_01b4;
	}

IL_0184:
	{
		// else if (scorearray[2] == "3x")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C, NULL);
		if (!L_56)
		{
			goto IL_01b4;
		}
	}
	{
		// eingabe = 3 * eingabe;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		int32_t L_57 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = ((int32_t)il2cpp_codegen_multiply(3, L_57));
		// scorearray[2] = eingabe.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5), NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_59);
	}

IL_01b4:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_63);
		int32_t L_64 = 0;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_62;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_68);
		int32_t L_69 = 1;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_67;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_73);
		int32_t L_74 = 2;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_76);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonDelete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonDelete_m84B61B91CDCCDFD180D831457D65AACDCB9844EF (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scorearray[2] != "Wurf 3")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		int32_t L_1 = 2;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		bool L_3;
		L_3 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_2, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// scorearray[2] = "Wurf 3";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		goto IL_0061;
	}

IL_0021:
	{
		// else if (scorearray[1] != "Wurf 2")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_5);
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_7, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// scorearray[1] = "Wurf 2";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		goto IL_0061;
	}

IL_0042:
	{
		// else if (scorearray[0] != "Wurf 1")
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_10);
		int32_t L_11 = 0;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_12, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE, NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
	}

IL_0061:
	{
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_30);
		String_t* L_31;
		L_31 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_27, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_31);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::ButtonEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript_ButtonEnter_mFEB8286F683B416028508172FB70A20E41C96A5C (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scorearray[0] = "Wurf 1";
		il2cpp_codegen_runtime_class_init_inline(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		// scorearray[1] = "Wurf 2";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		// scorearray[2] = "Wurf 3";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		// wurf_Text.text = scorearray[0] + " | " + scorearray[1] + " | " + scorearray[2];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___wurf_Text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_11);
		int32_t L_12 = 1;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6;
		NullCheck(L_16);
		int32_t L_17 = 2;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_15, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_19);
		// }
		return;
	}
}
// System.Void ScoreEingabeScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript__ctor_mEC3A16B14EB71F1768E26E19D23F8C43033331CE (ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ScoreEingabeScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreEingabeScript__cctor_m94499F822028B77A39E9A2E665AFD191A7C2A940 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int eingabe = 0;
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___eingabe_5 = 0;
		// public static string[] scorearray = new string[3] { "Wurf 1", "Wurf 2", "Wurf 3" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BD5E5FA680BBFE6AB87DDEDEB957498A68224BE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE9F2DD6740B26DB573631C1803B09BCCE704008F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A47674458A631FBE5D36C43BA1B43B0B3EFD55A);
		((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_StaticFields*)il2cpp_codegen_static_fields_for(ScoreEingabeScript_tA1210F33FF818EE5DAACECD742735B8534413666_il2cpp_TypeInfo_var))->___scorearray_6), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartMenuScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript_Start_m8C900DC0893E9E1E49C917E7E7B8EAD6C73B0FA7 (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StartMenuScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript_Update_m5617193A8EA04F32CC7EFAEDF9503E2948FCCAFD (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StartMenuScript::ClickOnSinglePlayerButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript_ClickOnSinglePlayerButton_m6BC44249E71CC9B984163944F0AB829EB2F34D2F (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45F24F6A02100417A1201BB891EA7337C98C217B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("DartScene", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral45F24F6A02100417A1201BB891EA7337C98C217B, 0, NULL);
		// }
		return;
	}
}
// System.Void StartMenuScript::ClickOnTrainingButton1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript_ClickOnTrainingButton1_m091EBDCDCB3FB4A11F7D9F9A15E106B3C4F64303 (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C52A30645908E34422B1D5E4393D189ECE60D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Level1FinishWegeScene", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteralA1C52A30645908E34422B1D5E4393D189ECE60D6, 0, NULL);
		// }
		return;
	}
}
// System.Void StartMenuScript::ClickOnTrainingButton2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript_ClickOnTrainingButton2_mF8B715426368A70FAC93C3555390BA13B57C9A30 (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EEAA3F2713CBB1D6F78CD2162A7F6F55DAD57E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Level2Scene", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral64EEAA3F2713CBB1D6F78CD2162A7F6F55DAD57E, 0, NULL);
		// }
		return;
	}
}
// System.Void StartMenuScript::ClickOnTrainingButton3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript_ClickOnTrainingButton3_m209D2BF61903D92B2BAF0A8FBBD644BAF7720BD7 (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE288C76D2C90FADE65AE09D79433508E526D3E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Level3RandomFelderScene", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteralDE288C76D2C90FADE65AE09D79433508E526D3E2, 0, NULL);
		// }
		return;
	}
}
// System.Void StartMenuScript::ClickOnTrainingButton4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript_ClickOnTrainingButton4_m2B2EE87405939D4CF2D92E7FDDF2F18747571572 (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C629CCC32B4B2EA14FC5885D1DCB402AE003A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Level4AtCAlternativeScene", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral95C629CCC32B4B2EA14FC5885D1DCB402AE003A8, 0, NULL);
		// }
		return;
	}
}
// System.Void StartMenuScript::ClickOnTrainingButton5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript_ClickOnTrainingButton5_m2218BEAD6C2E317C7E37579708B99BF91ED04F2F (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1BA1388EFEA747EA23F8D7C9B33143ABED9005);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Level5RandomFelderPunkteScene", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral6A1BA1388EFEA747EA23F8D7C9B33143ABED9005, 0, NULL);
		// }
		return;
	}
}
// System.Void StartMenuScript::ClickOnKIButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript_ClickOnKIButton_mE08A5672D2253884319BEF8FEB6B7266B94ABAD0 (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3627341AC0438C7F6FA5AEBCDC8438E90C20337);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("KIDartScene", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteralA3627341AC0438C7F6FA5AEBCDC8438E90C20337, 0, NULL);
		// }
		return;
	}
}
// System.Void StartMenuScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMenuScript__ctor_mB6F3477CA7BC1C9799DB734E012B23282DDC4ADA (StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String VuforiaLicense::GetLicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VuforiaLicense_GetLicenseKey_m8E6E03709CDB6968425A93FB9D016DA6AFC6C91B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38BEECAE4FE29AFCDD566ADED0435F58F7842321);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return license;
		return _stringLiteral38BEECAE4FE29AFCDD566ADED0435F58F7842321;
	}
}
// System.Void VuforiaLicense::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaLicense__ctor_m094B92B3323DFFD79ADB696474D5D158C95E291B (VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
