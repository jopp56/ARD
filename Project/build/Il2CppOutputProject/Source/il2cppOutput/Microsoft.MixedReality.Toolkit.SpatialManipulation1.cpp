#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.IComparer`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>
struct IComparer_1_t883E053B7E216146B6D78681C88CC12D19F186E4;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct IEnumerable_1_t93A09989A63F2A38252F43C12F27F50C4B1C21C7;
// System.Collections.Generic.IList`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct IList_1_tCACBC76B21264D50BF8A701FBB6375A82F91C824;
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct IReadOnlyCollection_1_t58CBED8DAA678A84F16E208BA66C8D691DF04367;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazeInteractor>
struct List_1_t3BD82DFA2A7C42E958EE9CB088369BFCB22A6E25;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazePinchInteractor>
struct List_1_tE7B847B836B04679F1AB45FE50BC87BA9E1E0B8F;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGrabInteractor>
struct List_1_t486F44B8F8DEC0D6DD8FAAB2055A694DF14C42ED;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IPokeInteractor>
struct List_1_t0D5428B680059E0653253B7A0242576F7FBB21D5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IRayInteractor>
struct List_1_t04539604F7488E9BC60BCEEE70457DEC90AADC46;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemInterfaceType>
struct List_1_tA4BE3928029F872A8BCB60CE138A1DF1E3F3F152;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>
struct List_1_t26BB8D627002705669D38989D0CF224062ED60F4;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_tA724625D8F8FDEAD6E21CF6324861D7B49061700;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct ReadOnlyCollection_1_tF30F4467CDD892D2BE3A1415FE6113604C3FD23A;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver[]
struct SolverU5BU5D_tDEB584B522BA6F3072F832051ACCB462B9669AB6;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint[]
struct TransformConstraintU5BU5D_tC6BD79603BDF8440DB5C8FE4BF06BE54C851349C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer
struct ConstraintExecOrderComparer_t2BD73906862F371D4BB906482B806AE7CB117D51;
// Microsoft.MixedReality.Toolkit.ControllerLookup
struct ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem
struct HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView
struct RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver
struct Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler
struct SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239;
// Microsoft.MixedReality.Toolkit.StatefulInteractable
struct StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism
struct SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace
struct TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297;
// Microsoft.MixedReality.Toolkit.TimedFlag
struct TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint
struct TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider
struct Provider_t07AF49010029C2A008240F38CC51924C28BA321A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityRaycaster_t9CB5AF2F8E1691C2DBE53619E1BB603BBA4E1630_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02AA96707E7A8BC913E2055F3E956D4373F24EB4;
IL2CPP_EXTERN_C String_t* _stringLiteral06620C4FFB77E4D531D0907F2C25F88CC2060A8D;
IL2CPP_EXTERN_C String_t* _stringLiteral0C5F77CBC6B48EEFA86CFC18E2E3A9CDF9071345;
IL2CPP_EXTERN_C String_t* _stringLiteral180B3BC56463B1A52304374A2002E6BC71CD0AAF;
IL2CPP_EXTERN_C String_t* _stringLiteral32E2B8232B2A08F835DCBBADA5F6DD4AC8F950D6;
IL2CPP_EXTERN_C String_t* _stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA576B330FF38E27262658AB85457F8F686E381;
IL2CPP_EXTERN_C String_t* _stringLiteral4069BFE2C10C7C96B347AFEE648D6F737B8E03B2;
IL2CPP_EXTERN_C String_t* _stringLiteral40725C381EA894578A0B93C4649F8531D3F9A7B5;
IL2CPP_EXTERN_C String_t* _stringLiteral4A465FF80F4FBEF13B6C41DD4A6D70DA1B682CCF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FD09F0A748FACEE89654EC33115778AC9B649C5;
IL2CPP_EXTERN_C String_t* _stringLiteral5529465409870544CE39603F0D2335F17AE8D433;
IL2CPP_EXTERN_C String_t* _stringLiteral5A606777C153E52CD196973F9D3198AE0E519976;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF9D8A6905692F27A4D66D976675934A990305D;
IL2CPP_EXTERN_C String_t* _stringLiteral61DB809903C95AF153BB9D39E15FCAC1EFD46716;
IL2CPP_EXTERN_C String_t* _stringLiteral8C740521F660B7C87495E9139EB63C242FFE0761;
IL2CPP_EXTERN_C String_t* _stringLiteral8D9A3150D511F8DF59375E91329512B8873BD713;
IL2CPP_EXTERN_C String_t* _stringLiteral8FA3F28B53C7E9082B3B8BB1B12A811B39EDF209;
IL2CPP_EXTERN_C String_t* _stringLiteral9FEEB188C926E0D8DEBF50B93373E1DCADD88966;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D8D154E5D9B4EACA86B890F2045DDCA6D915C5;
IL2CPP_EXTERN_C String_t* _stringLiteralA793674FE1A4DECA2EFF7B41370826A428A83277;
IL2CPP_EXTERN_C String_t* _stringLiteralBB3F58F6D433220E3E20DF2E05F769EC017BC0DC;
IL2CPP_EXTERN_C String_t* _stringLiteralD4688CA92F8ABA1648F41FC47174A407BAEC8C93;
IL2CPP_EXTERN_C String_t* _stringLiteralD68B6932B839E25BF967C1D8E8D31E1CF6BF1CFB;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_m4C445FC468BA844E1BFDBD72BB8F12E749A93DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mE4B78BE198453817AA475D68C5FEC3B1111AA22D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Intersect_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mA5608FFFCCDF14422CF8E42837B78534DAB64AD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_m707C5CAAAF47570E34FE4D9BA14FC8588560B1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisStatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D_mF3F16AFBC7B86585D2185BB6612F4037D6818112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m0FCD9AEA7268A8B4A783461FCEFA804842945891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m254C83E440DD2E4853D4FC97C7C061D9D5124E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDDD8A894B6B7A2ADA72A50C7C0784C5BCC4FBFD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_m48242EBF2599EB7AE5522F18EFFA8A81B060FBD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_BinarySearch_mF907D4CD1F194D3968BC1CDBA12967AA2DA28274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4CB4F61784103BF990D63084B30BFCB136852CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m1FAD76711F3F7ED6ADAEB2F99686025A0AB55404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m955FC6FB2446E314F0A46FF31A94EB9DF4712672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m4B5D1B495C2E505006FA85313F1FD174B5C1C21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m08276D0FE07AA9A2F9E2B1ECCDD4ECE36E69D56B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m895644AC4469104C2CAFCED11536D09EF95C7F11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m22744B2842AF816B4132934751B867140883F1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5CDDC54D500645844BA3046778EC8898115D8151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9CB5DED6A5E5903D1C7D2768AC25EFB8D0E75E6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB43A96090C8AEFC2371C1229E3570944C8204284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapToPlace_StartPlacement_m7DCA7D6737643AACBE246959AAC34A8775A9B5E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapToPlace_StopPlacement_m7F45CEE90385EFA8B01F7E1AC30D81B099657653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66;
struct LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SolverU5BU5D_tDEB584B522BA6F3072F832051ACCB462B9669AB6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SolverU5BU5D_tDEB584B522BA6F3072F832051ACCB462B9669AB6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>
struct List_1_t26BB8D627002705669D38989D0CF224062ED60F4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformConstraintU5BU5D_tC6BD79603BDF8440DB5C8FE4BF06BE54C851349C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t26BB8D627002705669D38989D0CF224062ED60F4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformConstraintU5BU5D_tC6BD79603BDF8440DB5C8FE4BF06BE54C851349C* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct ReadOnlyCollection_1_tF30F4467CDD892D2BE3A1415FE6113604C3FD23A  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};
struct Il2CppArrayBounds;

// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer
struct ConstraintExecOrderComparer_t2BD73906862F371D4BB906482B806AE7CB117D51  : public RuntimeObject
{
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintUtils
struct ConstraintUtils_t19C09376AB06F26F68643A158C3E5A7C397423D2  : public RuntimeObject
{
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.InteractionFlagsExtensions
struct InteractionFlagsExtensions_t5B3A5053256BAC1ACC56D3AB34DF3EE9E268002E  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<UnityEngine.XR.XRNode>
struct Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>
struct SubsystemWithProvider_3_t17ECEE0E56EB2C0C3D4D05033DE65779A1F06B3F  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	MRTKSubsystemDescriptor_2_tA724625D8F8FDEAD6E21CF6324861D7B49061700* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t07AF49010029C2A008240F38CC51924C28BA321A* ___U3CproviderU3Ek__BackingField_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tA7DC99291E713C1B884DEF3B515AAC5CDA819E60 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tA7DC99291E713C1B884DEF3B515AAC5CDA819E60__padding[16];
	};
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t82930B61FBC91072983F4F58E5EDE6C0169858F6  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t82930B61FBC91072983F4F58E5EDE6C0169858F6_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E
	__StaticArrayInitTypeSizeU3D16_tA7DC99291E713C1B884DEF3B515AAC5CDA819E60 ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// Microsoft.MixedReality.Toolkit.RayStep
struct RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::<Origin>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::<Terminus>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::<Direction>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.RayStep::epsilon
	float ___epsilon_7;
};

struct RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94_StaticFields
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::dist
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::dir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_2;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed
struct Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::<Current>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::<Goal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;
};

// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>
struct MRTKSubsystem_3_tE5D6315B2049939F23F481321DB14C33E8731070  : public SubsystemWithProvider_3_t17ECEE0E56EB2C0C3D4D05033DE65779A1F06B3F
{
};

struct MRTKSubsystem_3_tE5D6315B2049939F23F481321DB14C33E8731070_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.HandJointPose
struct HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3 
{
	// UnityEngine.Pose Microsoft.MixedReality.Toolkit.HandJointPose::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	// System.Single Microsoft.MixedReality.Toolkit.HandJointPose::radius
	float ___radius_1;
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// Microsoft.MixedReality.Toolkit.MixedRealityTransform
struct MixedRealityTransform_t003E4016F170473B39BC7D7337275A0F8BC84DBA 
{
	// UnityEngine.Pose Microsoft.MixedReality.Toolkit.MixedRealityTransform::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityTransform::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_2;
};

struct MixedRealityTransform_t003E4016F170473B39BC7D7337275A0F8BC84DBA_StaticFields
{
	// Microsoft.MixedReality.Toolkit.MixedRealityTransform Microsoft.MixedReality.Toolkit.MixedRealityTransform::<Identity>k__BackingField
	MixedRealityTransform_t003E4016F170473B39BC7D7337275A0F8BC84DBA ___U3CIdentityU3Ek__BackingField_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem
struct HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD  : public MRTKSubsystem_3_tE5D6315B2049939F23F481321DB14C33E8731070
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.ControllerLookup
struct ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController Microsoft.MixedReality.Toolkit.ControllerLookup::gazeController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___gazeController_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController Microsoft.MixedReality.Toolkit.ControllerLookup::leftHandController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftHandController_5;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController Microsoft.MixedReality.Toolkit.ControllerLookup::rightHandController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightHandController_6;
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver
struct Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_5;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::moveLerpTime
	float ___moveLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::rotateLerpTime
	float ___rotateLerpTime_7;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::scaleLerpTime
	float ___scaleLerpTime_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::maintainScaleOnInitialization
	bool ___maintainScaleOnInitialization_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::smoothing
	bool ___smoothing_10;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::lifetime
	float ___lifetime_11;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::currentLifetime
	float ___currentLifetime_12;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SolverHandler
	SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* ___SolverHandler_13;
};

struct Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_StaticFields
{
	// Microsoft.MixedReality.Toolkit.ControllerLookup Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::controllerLookup
	ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593* ___controllerLookup_4;
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler
struct SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::leftInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___leftInteractor_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::rightInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___rightInteractor_5;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_6;
	// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackedHandedness
	int32_t ___trackedHandedness_7;
	// Microsoft.MixedReality.Toolkit.TrackedHandJoint Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_8;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::transformOverride
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformOverride_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::additionalOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___additionalOffset_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::additionalRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___additionalRotation_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::updateSolvers
	bool ___updateSolvers_12;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver> Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::solvers
	List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* ___solvers_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<GoalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGoalPositionU3Ek__BackingField_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CGoalRotationU3Ek__BackingField_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<GoalScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGoalScaleU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 ___U3CAltScaleU3Ek__BackingField_17;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::currentTrackedHandedness
	int32_t ___currentTrackedHandedness_19;
	// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::preferredTrackedHandedness
	int32_t ___preferredTrackedHandedness_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackingTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trackingTarget_21;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::controllerInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___controllerInteractor_22;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_23;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver> Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::inspectorOrderedSolvers
	List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* ___inspectorOrderedSolvers_25;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::cachedHandJointTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cachedHandJointTransform_26;
};

struct SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::AttachToNewTrackedObjectPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___AttachToNewTrackedObjectPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::UpdateCachedHandJointTransformPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateCachedHandJointTransformPerfMarker_28;
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint
struct TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationHandFlags Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::handType
	int32_t ___handType_4;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationProximityFlags Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::proximityType
	int32_t ___proximityType_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::executionOrder
	int32_t ___executionOrder_6;
	// Microsoft.MixedReality.Toolkit.MixedRealityTransform Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::WorldPoseOnManipulationStart
	MixedRealityTransform_t003E4016F170473B39BC7D7337275A0F8BC84DBA ___WorldPoseOnManipulationStart_7;
	// Microsoft.MixedReality.Toolkit.MixedRealityTransform Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::InitialWorldPose
	MixedRealityTransform_t003E4016F170473B39BC7D7337275A0F8BC84DBA ___InitialWorldPose_8;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_5;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF* ___U3CgetDistanceOverrideU3Ek__BackingField_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_7;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_8;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_12;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_15;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_17;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_20;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_21;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_22;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsHovering>k__BackingField
	List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1* ___U3CinteractorsHoveringU3Ek__BackingField_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsSelecting>k__BackingField
	List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102* ___U3CinteractorsSelectingU3Ek__BackingField_25;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_26;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_27;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_31;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_32;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_40;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_41;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_42;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_43;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_44;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_45;
};

struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_35;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_16;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___U3CinteractablesHoveredU3Ek__BackingField_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CinteractablesSelectedU3Ek__BackingField_22;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_23;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_25;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_26;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_27;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_28;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_29;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88* ___m_UnorderedInteractablesHovered_30;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF* ___m_UnorderedInteractablesSelected_31;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_33;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_35;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_40;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_41;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_34;
};

// Microsoft.MixedReality.Toolkit.MRTKBaseInteractable
struct MRTKBaseInteractable_t0845E4244EC2AE44C34C65C54D9831E07EE645F4  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazeInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringGazeInteractors
	List_1_t3BD82DFA2A7C42E958EE9CB088369BFCB22A6E25* ___hoveringGazeInteractors_46;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazePinchInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringGazePinchInteractors
	List_1_tE7B847B836B04679F1AB45FE50BC87BA9E1E0B8F* ___hoveringGazePinchInteractors_47;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazePinchInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::selectingGazePinchInteractors
	List_1_tE7B847B836B04679F1AB45FE50BC87BA9E1E0B8F* ___selectingGazePinchInteractors_48;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IPokeInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringPokeInteractors
	List_1_t0D5428B680059E0653253B7A0242576F7FBB21D5* ___hoveringPokeInteractors_49;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGrabInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringGrabInteractors
	List_1_t486F44B8F8DEC0D6DD8FAAB2055A694DF14C42ED* ___hoveringGrabInteractors_50;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGrabInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::selectingGrabInteractors
	List_1_t486F44B8F8DEC0D6DD8FAAB2055A694DF14C42ED* ___selectingGrabInteractors_51;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IRayInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringRayInteractors
	List_1_t04539604F7488E9BC60BCEEE70457DEC90AADC46* ___hoveringRayInteractors_52;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGazePinchSelected
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isGazePinchSelected_53;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isRaySelected
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isRaySelected_54;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isPokeSelected
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isPokeSelected_55;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGrabSelected
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isGrabSelected_56;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGazeHovered
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isGazeHovered_57;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGazePinchHovered
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isGazePinchHovered_58;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isRayHovered
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isRayHovered_59;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGrabHovered
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isGrabHovered_60;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isPokeHovered
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isPokeHovered_61;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isActiveHovered
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___isActiveHovered_62;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemInterfaceType> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::disabledInteractorTypes
	List_1_tA4BE3928029F872A8BCB60CE138A1DF1E3F3F152* ___disabledInteractorTypes_63;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::raySelectCount
	int32_t ___raySelectCount_64;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::gazePinchSelectCount
	int32_t ___gazePinchSelectCount_65;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::grabSelectCount
	int32_t ___grabSelectCount_66;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::pokeSelectCount
	int32_t ___pokeSelectCount_67;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::activeHoverCount
	int32_t ___activeHoverCount_68;
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView
struct RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C  : public Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B
{
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::referenceDirection
	int32_t ___referenceDirection_14;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::minDistance
	float ___minDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::maxDistance
	float ___maxDistance_16;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::minViewDegrees
	float ___minViewDegrees_17;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::maxViewDegrees
	float ___maxViewDegrees_18;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::aspectV
	float ___aspectV_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::ignoreAngleClamp
	bool ___ignoreAngleClamp_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::ignoreDistanceClamp
	bool ___ignoreDistanceClamp_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::useFixedVerticalPosition
	bool ___useFixedVerticalPosition_22;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::fixedVerticalPosition
	float ___fixedVerticalPosition_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::orientToReferenceDirection
	bool ___orientToReferenceDirection_24;
};

struct RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::SolverUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SolverUpdatePerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientationDistanceOnlyPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetDesiredOrientationDistanceOnlyPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientationPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetDesiredOrientationPerfMarker_27;
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism
struct SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE  : public Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B
{
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___magneticSurfaces_14;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::maxRaycastDistance
	float ___maxRaycastDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::closestDistance
	float ___closestDistance_16;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_17;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_18;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_21;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_22;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::sphereSize
	float ___sphereSize_23;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_25;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::currentRaycastDirectionMode
	int32_t ___currentRaycastDirectionMode_26;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_27;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::keepOrientationVertical
	bool ___keepOrientationVertical_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_31;
	// Microsoft.MixedReality.Toolkit.RayStep Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::currentRayStep
	RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 ___currentRayStep_33;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::boxCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___boxCollider_34;
};

struct SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SolverUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SolverUpdatePerfMarker_35;
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace
struct TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297  : public Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B
{
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::placementActionReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___placementActionReference_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::autoStart
	bool ___autoStart_15;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::defaultPlacementDistance
	float ___defaultPlacementDistance_16;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::maxRaycastDistance
	float ___maxRaycastDistance_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::<IsBeingPlaced>k__BackingField
	bool ___U3CIsBeingPlacedU3Ek__BackingField_18;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::surfaceNormalOffset
	float ___surfaceNormalOffset_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::useDefaultSurfaceNormalOffset
	bool ___useDefaultSurfaceNormalOffset_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::keepOrientationVertical
	bool ___keepOrientationVertical_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::rotateAccordingToSurface
	bool ___rotateAccordingToSurface_22;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::magneticSurfaces
	LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___magneticSurfaces_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::debugEnabled
	bool ___debugEnabled_24;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::onPlacingStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPlacingStarted_25;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::onPlacingStopped
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPlacingStopped_26;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::<GameObjectLayer>k__BackingField
	int32_t ___U3CGameObjectLayerU3Ek__BackingField_27;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::ignoreRaycastLayer
	int32_t ___ignoreRaycastLayer_28;
	// Microsoft.MixedReality.Toolkit.RayStep Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::CurrentRay
	RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 ___CurrentRay_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::DidHitSurface
	bool ___DidHitSurface_30;
	// UnityEngine.RaycastHit Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::CurrentHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___CurrentHit_31;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::LastTimeClicked
	float ___LastTimeClicked_32;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::DoubleClickTimeout
	float ___DoubleClickTimeout_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::startCalled
	bool ___startCalled_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::placementRequested
	bool ___placementRequested_35;
	// Microsoft.MixedReality.Toolkit.StatefulInteractable Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::interactable
	StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* ___interactable_36;
};

struct TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StartPlacementPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___StartPlacementPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacementPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___StopPlacementPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SolverUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SolverUpdatePerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::PerformRaycastPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___PerformRaycastPerfMarker_40;
};

// Microsoft.MixedReality.Toolkit.StatefulInteractable
struct StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D  : public MRTKBaseInteractable_t0845E4244EC2AE44C34C65C54D9831E07EE645F4
{
	// Microsoft.MixedReality.Toolkit.StatefulInteractable/ToggleType Microsoft.MixedReality.Toolkit.StatefulInteractable::<ToggleMode>k__BackingField
	int32_t ___U3CToggleModeU3Ek__BackingField_69;
	// System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::<SelectThreshold>k__BackingField
	float ___U3CSelectThresholdU3Ek__BackingField_70;
	// System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::<DeselectThreshold>k__BackingField
	float ___U3CDeselectThresholdU3Ek__BackingField_71;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::<TriggerOnRelease>k__BackingField
	bool ___U3CTriggerOnReleaseU3Ek__BackingField_72;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::<UseGazeDwell>k__BackingField
	bool ___U3CUseGazeDwellU3Ek__BackingField_73;
	// System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::<GazeDwellTime>k__BackingField
	float ___U3CGazeDwellTimeU3Ek__BackingField_74;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::<UseFarDwell>k__BackingField
	bool ___U3CUseFarDwellU3Ek__BackingField_75;
	// System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::<FarDwellTime>k__BackingField
	float ___U3CFarDwellTimeU3Ek__BackingField_76;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::allowSelectByVoice
	bool ___allowSelectByVoice_77;
	// System.String Microsoft.MixedReality.Toolkit.StatefulInteractable::speechRecognitionKeyword
	String_t* ___speechRecognitionKeyword_78;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::<VoiceRequiresFocus>k__BackingField
	bool ___U3CVoiceRequiresFocusU3Ek__BackingField_79;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::<SelectRequiresHover>k__BackingField
	bool ___U3CSelectRequiresHoverU3Ek__BackingField_80;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.StatefulInteractable::<IsToggled>k__BackingField
	TimedFlag_t336A71F262E7575DE5045D597E770E07E3FF8125* ___U3CIsToggledU3Ek__BackingField_81;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.StatefulInteractable::<OnClicked>k__BackingField
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___U3COnClickedU3Ek__BackingField_82;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.StatefulInteractable::<OnEnabled>k__BackingField
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___U3COnEnabledU3Ek__BackingField_83;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.StatefulInteractable::<OnDisabled>k__BackingField
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___U3COnDisabledU3Ek__BackingField_84;
};

struct StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.StatefulInteractable::StatefulInteractableSelectednessMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___StatefulInteractableSelectednessMarker_85;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.StatefulInteractable::OnFirstSelectEnteredPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnFirstSelectEnteredPerfMarker_86;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.StatefulInteractable::OnLastSelectExitedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnLastSelectExitedPerfMarker_87;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.ControllerLookup[]
struct ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66  : public RuntimeArray
{
	ALIGN_FIELD (8) ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593* m_Items[1];

	inline ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99  : public RuntimeArray
{
	ALIGN_FIELD (8) LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB m_Items[1];

	inline LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* List_1_AsReadOnly_m69D18D2353099DC61F87AD42FF87F25B1A4D299B_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponents_TisRuntimeObject_m2CD12FB45EFC625510F7E12FE2EB7D0EC2BA4421_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Intersect_TisRuntimeObject_m1BBFC72D824A816DD9CC476A932F84BEC0EA2BA9_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m4F1B6B4A07B00B2E604D0A793600C10835E40513_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;

// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_WorkingPosition_mCBB4E13014E3E32F3E63F4D9837B81AAB555302A (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_mB918A86C636C11E8784FEB42FBD970D0A4634DCA (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___desiredPos0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_mD3647E90E788FDF9957444DA5EF9515D0951CAA6 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___desiredPos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_UpReference_mA7BFAA91EA20C40594AE053E317EA6EBA253447B (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_SolverReferenceDirection_m5785C96A55EF0D94F4075642CFD8BEBB8D62AC4F (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_ReferencePoint_m3AD823739EF1F397CB0892820A49774E13075C57 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_UseFixedVerticalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mFD863E747996EB64E03BC122E16FD6CCF56771A7_inline (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_FixedVerticalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m02A0671D2C316A1620AF079CD29BD46A198B6DEB_inline (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_m95074BC47A9C11E650246DD9D37C1A22252D4DB5 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalPosition_mAC6D9D9E114BBFE15908F8D0B9B5291A5CB3A296_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_mFCD625E99CA6BB298B70DE24E2B197E632D995C8_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SolverHandler_get_GoalRotation_m19C33213AC5284A50013A8BFC4E742EC360C78F2_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_mA9CC4E2C0D5B4D25DBF191890CAED3AFE7B2612D_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalScale_m83A141C40088AE96427E2645766A403A58A5BA8A_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m8CFEB8908C4B3A739A1C5E6F10CF753EC94557C9_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_GoalPosition_m1FDDE043FB37EB5109B01B47F26BB7E1F56CFF90 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_get_GoalRotation_m551AE1F7F749A26D5DDE6E7C1F980D7DB9D58A22 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_GoalScale_mBFA9B6C2E546F163C916ED733C2F5518D1BC1028 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_m9688366EA56AAF04BF09384BBE1F7419E8FCB8F9 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler>()
inline SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* Component_GetComponent_TisSolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_m4C445FC468BA844E1BFDBD72BB8F12E749A93DF1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m30319F91FCDFAEC2AD2E455B762C7EA95538EC62 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* ___solver0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_mF59C26231EFF3A3B67CD10EDF037FEC9887FF264 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* ___solver0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m26A7F8711A45112BF7D30F5273B79DE1F3A7C13F (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_DeltaTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m1F707F7F755EB1323CF4CF337124CC130D84EA1A (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m82EC5994A72D66DDF518C6579579BCDB02B61AAB (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m4F0C8440CD2EB40788C382510B207B82512C4C21 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m1BD27FC8CD77483198F31A2E6931F86E3EC6DEBE (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_SmoothTo_mF6C72B9F2B4F42FBCE14814855A5143B731D596E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___source0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_SmoothTo_m300B097AFA3706B7494FBD995EC0E3C7E89AB29C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___source0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m9F147197F0FC44EB62BC211A1DF7BCE5B0987631 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m9F816C99A3373103FFF3AB5B6473FBA0B38B5347 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m4E8BB5A11F46265C542FD6B9940FE5F26FE56908 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_get_WorkingRotation_m95CE718D44B75E2621778C585AC721E21BAAE368 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_WorkingScale_m666957250DAEA6DB86A8D921401CCCAFE7B51D46 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_mA5AD936FDC98A99D51FEE36B4F336DCD261C97DD (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mE7ABCEF219F6927F10B7093A7DFED8DAB1169747 (int32_t ___hand0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>::AsReadOnly()
inline ReadOnlyCollection_1_tF30F4467CDD892D2BE3A1415FE6113604C3FD23A* List_1_AsReadOnly_m48242EBF2599EB7AE5522F18EFFA8A81B060FBD1 (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tF30F4467CDD892D2BE3A1415FE6113604C3FD23A* (*) (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, const RuntimeMethod*))List_1_AsReadOnly_m69D18D2353099DC61F87AD42FF87F25B1A4D299B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>::Clear()
inline void List_1_Clear_m4CB4F61784103BF990D63084B30BFCB136852CAD_inline (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m0FCD9AEA7268A8B4A783461FCEFA804842945891 (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m4B4B7559D56768F7610DEA25E715406244D9881B (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_mF2591CC331BC947C1EDD65EA86587A8D02C90EAF (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, float ___smoothingTime1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m9F8E73C6F21CBB825778CFFE4CEC1E6A34E97571_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mC82F84EBFFCE621FCDCE52EA41AA3932304DC4A2_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedHandedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandedness_m354937A0721E2CFCA4AF8DA58C5D6BE7654931A9 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_mB9A85F5D0A7E47AD5515A964A4AC5A55FEB79CF2 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedTargetType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::UpdateCachedHandJointTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UpdateCachedHandJointTransform_mD36258B3C0A0CB8D901F63D8053634DA618BFBFC (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_UpdateSolvers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m1559EBD961E17A372EBA2261FEC5CE8A5061296B_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>::get_Item(System.Int32)
inline Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* List_1_get_Item_m9CB5DED6A5E5903D1C7D2768AC25EFB8D0E75E6B (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* (*) (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m2D83AF28E028D3B71AA1DA1B8C98B3345312F138 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>::get_Count()
inline int32_t List_1_get_Count_m22744B2842AF816B4132934751B867140883F1EC_inline (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>::Contains(T)
inline bool List_1_Contains_m1FAD76711F3F7ED6ADAEB2F99686025A0AB55404 (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* __this, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Component::GetComponents<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>(System.Collections.Generic.List`1<T>)
inline void Component_GetComponents_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mE4B78BE198453817AA475D68C5FEC3B1111AA22D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* ___results0, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m2CD12FB45EFC625510F7E12FE2EB7D0EC2BA4421_gshared)(__this, ___results0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>::Add(T)
inline void List_1_Add_mDDD8A894B6B7A2ADA72A50C7C0784C5BCC4FBFD5_inline (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* __this, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Intersect_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mA5608FFFCCDF14422CF8E42837B78534DAB64AD5 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Intersect_TisRuntimeObject_m1BBFC72D824A816DD9CC476A932F84BEC0EA2BA9_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* Enumerable_ToList_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_m707C5CAAAF47570E34FE4D9BA14FC8588560B1DF (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>::Remove(T)
inline bool List_1_Remove_m08276D0FE07AA9A2F9E2B1ECCDD4ECE36E69D56B (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* __this, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandedness_mB9D0E75243A7D1B4E48B5F8EF238121539698429_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_PreferredTrackedHandedness_m7F0FF943AAB123419EA26D2D7512F2908885A519_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::GetControllerInteractor(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_GetControllerInteractor_m518A3322F1B378721D7AB887AC64E0F410987022 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.HandednessExtensions::GetOppositeHandedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandednessExtensions_GetOppositeHandedness_mAB34CBE50B79AF80381D9E7B845C58B25CA29E04 (int32_t ___current0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::get_HandsAggregator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* XRSubsystemHelpers_get_HandsAggregator_m57B9CCC9BD226E130D3A7A9053040D5EC258A00F (const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsHandTracked(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsHandTracked_m77DDA91FF044D8190170A6D30506751B55479FDB (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___hand0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m3913EDCDC7A4939DC345F9F318928D4574403AE5 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.XR.XRNode> Microsoft.MixedReality.Toolkit.HandednessExtensions::ToXRNode(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 HandednessExtensions_ToXRNode_m30AFACB24E4DAC09672D1545AE3624C47E9B294E (int32_t ___hand0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.XRNode>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_inline (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.TrackedHandJoint Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedHandJoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_mF109C911E7F39A4487E88B11C9DEBF1F7FCB16BC_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.XRNode>::get_Value()
inline int32_t Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66 (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandsAggregatorSubsystem_TryGetJoint_m024003ECA9B870E18BABAE9EBBD43A96752715B0 (HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* __this, int32_t ___joint0, int32_t ___hand1, HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3* ___jointPose2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.HandJointPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandJointPose_get_Position_mACE7763C8A869495C9D27EC0C7E09EFE56A371A6 (HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.HandJointPose::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointPose_get_Rotation_mD52AC7980DB80766FB081EFB106A2131B4D06B54 (HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AdditionalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalOffset_mBDF933A5F0A08A04D13C0A020D9E9BCA380AA8A2_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AdditionalRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalRotation_mBBB8B9B1D4297CCD99E4A88E07F67CE36B9647D1_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_RightInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_RightInteractor_mD9E0CA0FBF0E8AE8854885BA9E7C26E5EDC9E196_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_LeftInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_LeftInteractor_mD83CF66D79A50EB3D7533AA54AC1C20947F12DAE_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>::.ctor()
inline void List_1__ctor_m895644AC4469104C2CAFCED11536D09EF95C7F11 (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastOrigin_m60F1AEC2D8719A999B4B14D8E66F1C7844FE9CB1 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mC7B1F47D3007F223CDB981C1B9D0832382A52151_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastEndPoint_mB07661115CA5DBA45960061BC41BD24992C12ED2 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AltScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 SolverHandler_get_AltScale_m5585214D664D0D49549B97AD7E11FCE3FAC0235D_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m8D4FE3D378BB06AA3FFBFB06541499E9B8735924_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m68E1C29717F51085E522722EB4F3E6F159CE8B8D_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m6B5E72108852C0A2C6649F8A692072F7B6FE5609_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_m390190E2A74CE4BFC1EE908921C6A428E0884979 (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___terminus1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m6A658D220D3DD464FA1205C0806BA64926145252_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Origin_m55D28125AEBF276219807124A78D34F95F009BA8_inline (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::get_Terminus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Terminus_mDF1E2E159EE60609174D488A6B617F0E277A9251_inline (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mF552F660CB0E42F18558AD59D516EBAC923F57E2_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m779395806A8620C335ABD1BEAF99C9451B07C8A9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mFDAAD284EC0853BE6EB37AB0D550F90C5DAA45A3_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_mC88C8BE45C17FE05C813896A5A9ECBF7E14F1441 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* ___rayStep0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_mFF6EB4F88E2C379C51003D96F12C305E69F11F42 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* ___rayStep0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mB5EE7A52A4BD0579F707D1ABC8ADC056BE14D48C (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* ___rayStep0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityRaycaster::RaycastSimplePhysicsStep(Microsoft.MixedReality.Toolkit.RayStep,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_m6E5D30FC04C75246EAD64F28D49CFAAE3590371F (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 ___step0, float ___maxDistance1, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___prioritizedLayerMasks2, bool ___focusIndividualCompoundCollider3, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___physicsHit4, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mC00F6AEC77FA65C6B46020999D3E8FB7FA07DC34_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHit_set_point_m3B63BEB25A82BFCF9FBB300022D0362BC2CF9E11 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OnSurface()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_mCE4408F81276956894333550A4CEF137B927B916_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SurfaceMagnetism_CalculateMagnetismOrientation_mA3B1D4D2F8AA5AF35319D133CEAFDA7CBA48CCA0 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___surfaceNormal1, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m9C7B044FD12281D26A7C4592CFDF43BF67946497 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityRaycaster::RaycastSpherePhysicsStep(Microsoft.MixedReality.Toolkit.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_m1C8A0A8316F2E0A250DCE3E9F2BAB4405813F932 (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 ___step0, float ___radius1, float ___maxDistance2, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___prioritizedLayerMasks3, bool ___focusIndividualCompoundCollider4, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___physicsHit5, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityRaycaster::RaycastBoxPhysicsStep(Microsoft.MixedReality.Toolkit.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_m02BEC27E0D06263E3396BDD784E3EF7031FA2361 (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 ___step0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___extents1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix3, float ___maxDistance4, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___prioritizedLayerMasks5, int32_t ___raysPerEdge6, bool ___isOrthographic7, bool ___focusIndividualCompoundCollider8, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___points9, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___normals10, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4** ___hits11, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m2EC0AB9EF2A750496137B54DFB30E53559351465 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions2, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals3, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___plane9, float* ___closestDistance10, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mC310C0A7ABC2519799A946D632BBCC9C4AB556CC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float* ___enter1, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_mB2B965CCEF08B5C076CD02588A5D6B64727BDB53 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics::SyncTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SyncTransforms_mEA78292E299EA0E2B0E79D59149E21144881AD9B (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B (String_t* ___layerName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.StatefulInteractable>()
inline StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* GameObject_GetComponent_TisStatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D_mF3F16AFBC7B86585D2185BB6612F4037D6818112 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::RegisterPickupAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RegisterPickupAction_m8BB4089DE4A5277A08FBA0CD3BB904E349A96B78 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_AutoStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_m4B269F8FC267F7BA6CD1FCFADC8FF0B14FC427AD_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_m7DCA7D6737643AACBE246959AAC34A8775A9B5E5 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m9BE98B23DC5255CADD937E1A879AC13522D58C2B_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::UnregisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_UnregisterPlacementAction_m76AE8B912477E5290FFD11CC7DE19600C76EFC50 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::UnregisterPickupAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_UnregisterPickupAction_m2657B6584E231BD980A60164BD7593395C8A1239 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnDisable_m6B5548898325FB42BFD352EB082771DAB627D84A (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_IsBeingPlaced()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m6EBDAFEC12FFB2198E64B85A5B8D208D64B96004_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_m656FA1E4E510FEAE9A74CB33B39D05F3DE019AA1_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m3C617CED50041934C345269F1A7959E32FF078FF_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStarted_mC2E41A84DAAC4FF2FFF90A3B28747FAF3726FB11_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::RegisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RegisterPlacementAction_mD425A618E360CA340A78C61A3CE7EA20EE72867E (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_GameObjectLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_m29DF74238D25A632CA030D6EAF57110C700ADB99_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStopped()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStopped_mF2BF6BBAE920D5334A3F0C1CF94E66FF2FCD8A86_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MaxRaycastDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_mE4A34CC315921C737F34D8F3F484F190B84FBD03_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MagneticSurfaces()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* TapToPlace_get_MagneticSurfaces_mB64FCE855D045C7769CF3AC0071EA54F0CCACD31_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m8E398065F960379F99085DEA0FB96EF203D1AF7A_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m1BAAF7061AAA24EBD9C4B6E740C23033D7E4552D_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultSurfaceNormalOffset_m6383AC79D98FC9FB04FF8BCC63261CE92E91218F (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m2B03EB5660FEFAED9484EF0FA46B2A6F24BD842B_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_KeepOrientationVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_m55BB0507DCD90B0E7CE855D1D33DE69D6E799636_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::GetInputActionFromReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TapToPlace_GetInputActionFromReference_mAFEE8185271C35B533D90846093DF334C2194890 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.StatefulInteractable::get_OnClicked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* StatefulInteractable_get_OnClicked_m5566457B25C3DA39801C17C0FAB7917B3DEE7DCF_inline (StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::get_ExecutionPriority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformConstraint_get_ExecutionPriority_mDC3AA44C77FF8439C871B572ABA6D28B4CA53ABA_inline (TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::Contains(T)
inline bool List_1_Contains_m955FC6FB2446E314F0A46FF31A94EB9DF4712672 (List_1_t26BB8D627002705669D38989D0CF224062ED60F4* __this, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t26BB8D627002705669D38989D0CF224062ED60F4*, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::get_Count()
inline int32_t List_1_get_Count_m5CDDC54D500645844BA3046778EC8898115D8151_inline (List_1_t26BB8D627002705669D38989D0CF224062ED60F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t26BB8D627002705669D38989D0CF224062ED60F4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::get_Item(System.Int32)
inline TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* List_1_get_Item_mB43A96090C8AEFC2371C1229E3570944C8204284 (List_1_t26BB8D627002705669D38989D0CF224062ED60F4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* (*) (List_1_t26BB8D627002705669D38989D0CF224062ED60F4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::Add(T)
inline void List_1_Add_m254C83E440DD2E4853D4FC97C7C061D9D5124E6E_inline (List_1_t26BB8D627002705669D38989D0CF224062ED60F4* __this, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t26BB8D627002705669D38989D0CF224062ED60F4*, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::Insert(System.Int32,T)
inline void List_1_Insert_m4B5D1B495C2E505006FA85313F1FD174B5C1C21C (List_1_t26BB8D627002705669D38989D0CF224062ED60F4* __this, int32_t ___index0, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t26BB8D627002705669D38989D0CF224062ED60F4*, int32_t, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
inline int32_t List_1_BinarySearch_mF907D4CD1F194D3968BC1CDBA12967AA2DA28274 (List_1_t26BB8D627002705669D38989D0CF224062ED60F4* __this, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* ___item0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t26BB8D627002705669D38989D0CF224062ED60F4*, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8*, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m4F1B6B4A07B00B2E604D0A793600C10835E40513_gshared)(__this, ___item0, ___comparer1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Current(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m2BCA23B0632DEF723B47DAB85DA9AF1B8ED5796F_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Goal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_m549ED891CC9145A620AC4899F17EF90669432B3E_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Goal(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_mC06A7587782665D7C74CDC386F9A7B23B87E27BB_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_SmoothTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_m9D03F99B2BE8AB3FF5F72BAE713195A5797CF24C_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_SmoothTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_m44EDEC6D811B0CF187D790645E75FDE094FEFA16_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::SetGoal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_SetGoal_mD3B5B783C107ED68440C80434D3236C97A5C7F29 (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goal0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_Update_m5464BD48BB4A8E748E4AD7A486686F9F5CF0FFFF (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, float ___deltaTime0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1C6D6ED1C8E0CB2FD0934EB6EA333276F67C14F6 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_ReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RadialView_get_ReferenceDirection_mE75460234F1D94963C68EE99C9CC3449D1EDC391 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => referenceDirection;
		int32_t L_0 = __this->___referenceDirection_14;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_ReferenceDirection(Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialViewReferenceDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_ReferenceDirection_m82CF966653E7D75CBCC15994033712B9FE63AEAF (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => referenceDirection = value;
		int32_t L_0 = ___value0;
		__this->___referenceDirection_14 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_MinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinDistance_m9D91A8EC82F535A095AF3C8F4E7C41BA5D306DB3 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => minDistance;
		float L_0 = __this->___minDistance_15;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_MinDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinDistance_m3284BCC6C4DE0A11E6D01E8484616E4DC9FCB64A (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => minDistance = value;
		float L_0 = ___value0;
		__this->___minDistance_15 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxDistance_mB16A50BFE141E8C66303B6D210F601BECAB078A5 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => maxDistance;
		float L_0 = __this->___maxDistance_16;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxDistance_m05CED6DFAAAE90ECB343C0F6EB0D101428C813D8 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => maxDistance = value;
		float L_0 = ___value0;
		__this->___maxDistance_16 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_MinViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinViewDegrees_mBA84DDD8B430D08A3CA699103988FFC466692118 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => minViewDegrees;
		float L_0 = __this->___minViewDegrees_17;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_MinViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinViewDegrees_m1EEBC796ACF45BAC4BBAB32D00220D0BB6B78C8E (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => minViewDegrees = value;
		float L_0 = ___value0;
		__this->___minViewDegrees_17 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_MaxViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxViewDegrees_m01731A959C9323C55CBBD2611FA0B34D6E07908F (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => maxViewDegrees;
		float L_0 = __this->___maxViewDegrees_18;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_MaxViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxViewDegrees_mF8213B5248453E19692A663828B828D5357813E3 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => maxViewDegrees = value;
		float L_0 = ___value0;
		__this->___maxViewDegrees_18 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_AspectV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_AspectV_mA81C7683E148FA38D00832ED79B3BB13DECC0944 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => aspectV;
		float L_0 = __this->___aspectV_19;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_AspectV(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_AspectV_m03FDDEC8B614C7CD4A8D6F5C138AEFB14267AC50 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => aspectV = value;
		float L_0 = ___value0;
		__this->___aspectV_19 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_IgnoreAngleClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreAngleClamp_m4EFF56F7DBB6514B41F9C52089C3854493B4BDA8 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => ignoreAngleClamp;
		bool L_0 = __this->___ignoreAngleClamp_20;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_IgnoreAngleClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreAngleClamp_mB935BD8D57650A5BCF43F1DC5EBF5951EAD883F1 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => ignoreAngleClamp = value;
		bool L_0 = ___value0;
		__this->___ignoreAngleClamp_20 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_IgnoreDistanceClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreDistanceClamp_mDFACC001B2D0AC9F76170CBD8E1FE05047A25813 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => ignoreDistanceClamp;
		bool L_0 = __this->___ignoreDistanceClamp_21;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_IgnoreDistanceClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreDistanceClamp_m1EAAF02CCC9693D2BF3856C8F7A47D3B1EC0731F (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => ignoreDistanceClamp = value;
		bool L_0 = ___value0;
		__this->___ignoreDistanceClamp_21 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mFD863E747996EB64E03BC122E16FD6CCF56771A7 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->___useFixedVerticalPosition_22;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_UseFixedVerticalPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_UseFixedVerticalPosition_m84E673CD83D37489568DD17764569191655D8A3F (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useFixedVerticalPosition = value;
		bool L_0 = ___value0;
		__this->___useFixedVerticalPosition_22 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m02A0671D2C316A1620AF079CD29BD46A198B6DEB (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->___fixedVerticalPosition_23;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_FixedVerticalPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_FixedVerticalPosition_m726F7272E858252F0184CB5DB23F900522D1B5B7 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => fixedVerticalPosition = value;
		float L_0 = ___value0;
		__this->___fixedVerticalPosition_23 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_OrientToReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_OrientToReferenceDirection_m97C14FBB94C89F958D542EF77D06F84AD83DFD4E (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => orientToReferenceDirection;
		bool L_0 = __this->___orientToReferenceDirection_24;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::set_OrientToReferenceDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_OrientToReferenceDirection_mE17FBD53E3A5F31F509BD8AED1EBCCFE3881553C (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => orientToReferenceDirection = value;
		bool L_0 = ___value0;
		__this->___orientToReferenceDirection_24 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_SolverReferenceDirection_m5785C96A55EF0D94F4075642CFD8BEBB8D62AC4F (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 SolverReferenceDirection => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.forward : Vector3.forward;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_4 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_UpReference_mA7BFAA91EA20C40594AE053E317EA6EBA253447B (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// Vector3 upReference = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		V_0 = L_0;
		// if (referenceDirection == RadialViewReferenceDirection.ObjectOriented)
		int32_t L_1 = __this->___referenceDirection_14;
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// upReference = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.up : Vector3.up;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_2 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		G_B4_0 = L_5;
		goto IL_0038;
	}

IL_0028:
	{
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_6 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_7, NULL);
		G_B4_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B4_0;
	}

IL_0039:
	{
		// return upReference;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_ReferencePoint_m3AD823739EF1F397CB0892820A49774E13075C57 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 ReferencePoint => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_4 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_SolverUpdate_m218B342C71BD45DA8202665E50F666F2104514C3 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	{
		// using (SolverUpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_25;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cb:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3 goalPosition = WorkingPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = Solver_get_WorkingPosition_mCBB4E13014E3E32F3E63F4D9837B81AAB555302A(__this, NULL);
				V_2 = L_2;
				// if (ignoreAngleClamp)
				bool L_3 = __this->___ignoreAngleClamp_20;
				if (!L_3)
				{
					goto IL_003d_1;
				}
			}
			{
				// if (ignoreDistanceClamp)
				bool L_4 = __this->___ignoreDistanceClamp_21;
				if (!L_4)
				{
					goto IL_0033_1;
				}
			}
			{
				// goalPosition = transform.position;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				NullCheck(L_5);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
				V_2 = L_6;
				goto IL_0045_1;
			}

IL_0033_1:
			{
				// GetDesiredOrientation_DistanceOnly(ref goalPosition);
				RadialView_GetDesiredOrientation_DistanceOnly_mB918A86C636C11E8784FEB42FBD970D0A4634DCA(__this, (&V_2), NULL);
				goto IL_0045_1;
			}

IL_003d_1:
			{
				// GetDesiredOrientation(ref goalPosition);
				RadialView_GetDesiredOrientation_mD3647E90E788FDF9957444DA5EF9515D0951CAA6(__this, (&V_2), NULL);
			}

IL_0045_1:
			{
				// Vector3 refDirUp = UpReference;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
				L_7 = RadialView_get_UpReference_mA7BFAA91EA20C40594AE053E317EA6EBA253447B(__this, NULL);
				V_3 = L_7;
				// if (orientToReferenceDirection)
				bool L_8 = __this->___orientToReferenceDirection_24;
				if (!L_8)
				{
					goto IL_0064_1;
				}
			}
			{
				// goalRotation = Quaternion.LookRotation(SolverReferenceDirection, refDirUp);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = RadialView_get_SolverReferenceDirection_m5785C96A55EF0D94F4075642CFD8BEBB8D62AC4F(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_3;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
				L_11 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_9, L_10, NULL);
				V_4 = L_11;
				goto IL_0078_1;
			}

IL_0064_1:
			{
				// goalRotation = Quaternion.LookRotation(goalPosition - ReferencePoint, refDirUp);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = RadialView_get_ReferencePoint_m3AD823739EF1F397CB0892820A49774E13075C57(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_13, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_3;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_14, L_15, NULL);
				V_4 = L_16;
			}

IL_0078_1:
			{
				// if (referenceDirection == RadialViewReferenceDirection.GravityAligned)
				int32_t L_17 = __this->___referenceDirection_14;
				if ((!(((uint32_t)L_17) == ((uint32_t)2))))
				{
					goto IL_0099_1;
				}
			}
			{
				// goalRotation.x = goalRotation.z = 0f;
				float L_18 = (0.0f);
				V_5 = L_18;
				(&V_4)->___z_2 = L_18;
				float L_19 = V_5;
				(&V_4)->___x_0 = L_19;
			}

IL_0099_1:
			{
				// if (UseFixedVerticalPosition)
				bool L_20;
				L_20 = RadialView_get_UseFixedVerticalPosition_mFD863E747996EB64E03BC122E16FD6CCF56771A7_inline(__this, NULL);
				if (!L_20)
				{
					goto IL_00ba_1;
				}
			}
			{
				// goalPosition.y = ReferencePoint.y + FixedVerticalPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
				L_21 = RadialView_get_ReferencePoint_m3AD823739EF1F397CB0892820A49774E13075C57(__this, NULL);
				float L_22 = L_21.___y_3;
				float L_23;
				L_23 = RadialView_get_FixedVerticalPosition_m02A0671D2C316A1620AF079CD29BD46A198B6DEB_inline(__this, NULL);
				(&V_2)->___y_3 = ((float)il2cpp_codegen_add(L_22, L_23));
			}

IL_00ba_1:
			{
				// GoalPosition = goalPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
				Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_24, NULL);
				// GoalRotation = goalRotation;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_4;
				Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD(__this, L_25, NULL);
				// }
				goto IL_00d9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_mB918A86C636C11E8784FEB42FBD970D0A4634DCA (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___desiredPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// using (GetDesiredOrientationDistanceOnlyPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var))->___GetDesiredOrientationDistanceOnlyPerfMarker_26;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3 refPoint = ReferencePoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = RadialView_get_ReferencePoint_m3AD823739EF1F397CB0892820A49774E13075C57(__this, NULL);
				V_2 = L_2;
				// Vector3 elementPoint = transform.position;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
				L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				NullCheck(L_3);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
				L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
				// Vector3 elementDelta = elementPoint - refPoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_4, L_5, NULL);
				V_3 = L_6;
				// float elementDist = elementDelta.magnitude;
				float L_7;
				L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
				V_4 = L_7;
				// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
				float L_8 = V_4;
				if ((((float)L_8) > ((float)(0.0f))))
				{
					goto IL_0040_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
				G_B4_0 = L_9;
				goto IL_0048_1;
			}

IL_0040_1:
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_3;
				float L_11 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_10, L_11, NULL);
				G_B4_0 = L_12;
			}

IL_0048_1:
			{
				V_5 = G_B4_0;
				// float clampedDistance = Mathf.Clamp(elementDist, minDistance, maxDistance);
				float L_13 = V_4;
				float L_14 = __this->___minDistance_15;
				float L_15 = __this->___maxDistance_16;
				float L_16;
				L_16 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_13, L_14, L_15, NULL);
				V_6 = L_16;
				// if (!clampedDistance.Equals(elementDist))
				float L_17 = V_4;
				bool L_18;
				L_18 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_6), L_17, NULL);
				if (L_18)
				{
					goto IL_007f_1;
				}
			}
			{
				// desiredPos = refPoint + clampedDistance * elementDir;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = ___desiredPos0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
				float L_21 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_21, L_22, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_23, NULL);
				*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_19 = L_24;
			}

IL_007f_1:
			{
				// }
				goto IL_008f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_mD3647E90E788FDF9957444DA5EF9515D0951CAA6 (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___desiredPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	float G_B6_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	{
		// using (GetDesiredOrientationPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var))->___GetDesiredOrientationPerfMarker_27;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_015c:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3 direction = SolverReferenceDirection;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = RadialView_get_SolverReferenceDirection_m5785C96A55EF0D94F4075642CFD8BEBB8D62AC4F(__this, NULL);
				V_2 = L_2;
				// Vector3 upDirection = UpReference;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
				L_3 = RadialView_get_UpReference_mA7BFAA91EA20C40594AE053E317EA6EBA253447B(__this, NULL);
				V_3 = L_3;
				// Vector3 referencePoint = ReferencePoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
				L_4 = RadialView_get_ReferencePoint_m3AD823739EF1F397CB0892820A49774E13075C57(__this, NULL);
				V_4 = L_4;
				// Vector3 elementPoint = transform.position;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				NullCheck(L_5);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
				// Vector3 elementDelta = elementPoint - referencePoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
				L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_7, NULL);
				V_5 = L_8;
				// float elementDist = elementDelta.magnitude;
				float L_9;
				L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_5), NULL);
				V_6 = L_9;
				// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
				float L_10 = V_6;
				if ((((float)L_10) > ((float)(0.0f))))
				{
					goto IL_0051_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
				G_B4_0 = L_11;
				goto IL_005a_1;
			}

IL_0051_1:
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_5;
				float L_13 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_12, L_13, NULL);
				G_B4_0 = L_14;
			}

IL_005a_1:
			{
				V_7 = G_B4_0;
				// Vector3 perpendicularDirection = (elementDir - direction);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_15, L_16, NULL);
				V_8 = L_17;
				// perpendicularDirection -= direction * Vector3.Dot(perpendicularDirection, direction);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
				float L_22;
				L_22 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_20, L_21, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_19, L_22, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_18, L_23, NULL);
				V_8 = L_24;
				// perpendicularDirection.Normalize();
				Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_8), NULL);
				// float heightToViewAngle = Vector3.Angle(perpendicularDirection, upDirection);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
				float L_27;
				L_27 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_25, L_26, NULL);
				V_9 = L_27;
				// float verticalAspectScale = Mathf.Lerp(aspectV, 1f, Mathf.Abs(Mathf.Sin(heightToViewAngle * Mathf.Deg2Rad)));
				float L_28 = __this->___aspectV_19;
				float L_29 = V_9;
				float L_30;
				L_30 = sinf(((float)il2cpp_codegen_multiply(L_29, (0.0174532924f))));
				float L_31;
				L_31 = fabsf(L_30);
				float L_32;
				L_32 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_28, (1.0f), L_31, NULL);
				V_10 = L_32;
				// float currentAngle = Vector3.Angle(elementDir, direction);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
				float L_35;
				L_35 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_33, L_34, NULL);
				// float currentAngleClamped = Mathf.Clamp(currentAngle, minViewDegrees * verticalAspectScale, maxViewDegrees * verticalAspectScale);
				float L_36 = L_35;
				float L_37 = __this->___minViewDegrees_17;
				float L_38 = V_10;
				float L_39 = __this->___maxViewDegrees_18;
				float L_40 = V_10;
				float L_41;
				L_41 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_36, ((float)il2cpp_codegen_multiply(L_37, L_38)), ((float)il2cpp_codegen_multiply(L_39, L_40)), NULL);
				V_11 = L_41;
				// float clampedDistance = ignoreDistanceClamp ? elementDist : Mathf.Clamp(elementDist, minDistance, maxDistance);
				bool L_42 = __this->___ignoreDistanceClamp_21;
				G_B5_0 = L_36;
				if (L_42)
				{
					G_B6_0 = L_36;
					goto IL_00f1_1;
				}
			}
			{
				float L_43 = V_6;
				float L_44 = __this->___minDistance_15;
				float L_45 = __this->___maxDistance_16;
				float L_46;
				L_46 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_43, L_44, L_45, NULL);
				G_B7_0 = L_46;
				G_B7_1 = G_B5_0;
				goto IL_00f3_1;
			}

IL_00f1_1:
			{
				float L_47 = V_6;
				G_B7_0 = L_47;
				G_B7_1 = G_B6_0;
			}

IL_00f3_1:
			{
				V_12 = G_B7_0;
				// if (currentAngle != currentAngleClamped)
				float L_48 = V_11;
				if ((((float)G_B7_1) == ((float)L_48)))
				{
					goto IL_0139_1;
				}
			}
			{
				// float angRad = currentAngleClamped * Mathf.Deg2Rad;
				float L_49 = V_11;
				V_13 = ((float)il2cpp_codegen_multiply(L_49, (0.0174532924f)));
				// desiredPos = referencePoint + clampedDistance * (direction * Mathf.Cos(angRad) + perpendicularDirection * Mathf.Sin(angRad));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = ___desiredPos0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_4;
				float L_52 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_2;
				float L_54 = V_13;
				float L_55;
				L_55 = cosf(L_54);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
				L_56 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_53, L_55, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_8;
				float L_58 = V_13;
				float L_59;
				L_59 = sinf(L_58);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
				L_60 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_57, L_59, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
				L_61 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_56, L_60, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
				L_62 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_52, L_61, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
				L_63 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_51, L_62, NULL);
				*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_50 = L_63;
				goto IL_016a;
			}

IL_0139_1:
			{
				// else if (!clampedDistance.Equals(elementDist))
				float L_64 = V_6;
				bool L_65;
				L_65 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_12), L_64, NULL);
				if (L_65)
				{
					goto IL_015a_1;
				}
			}
			{
				// desiredPos = referencePoint + clampedDistance * elementDir;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_66 = ___desiredPos0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_4;
				float L_68 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
				L_70 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_68, L_69, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
				L_71 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_67, L_70, NULL);
				*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_66 = L_71;
			}

IL_015a_1:
			{
				// }
				goto IL_016a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_016a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView__ctor_mFB98D55D2A63101B940D19B4B75588413B4C40BF (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// private RadialViewReferenceDirection referenceDirection = RadialViewReferenceDirection.FacingWorldUp;
		__this->___referenceDirection_14 = 1;
		// private float minDistance = 1f;
		__this->___minDistance_15 = (1.0f);
		// private float maxDistance = 2f;
		__this->___maxDistance_16 = (2.0f);
		// private float maxViewDegrees = 30f;
		__this->___maxViewDegrees_18 = (30.0f);
		// private float aspectV = 1f;
		__this->___aspectV_19 = (1.0f);
		// private float fixedVerticalPosition = -0.4f;
		__this->___fixedVerticalPosition_23 = (-0.400000006f);
		Solver__ctor_m95074BC47A9C11E650246DD9D37C1A22252D4DB5(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.RadialView::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView__cctor_mF6A17A950EAEED554E6EE608AACF9E981662551A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral180B3BC56463B1A52304374A2002E6BC71CD0AAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AF9D8A6905692F27A4D66D976675934A990305D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4688CA92F8ABA1648F41FC47174A407BAEC8C93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] RadialView.SolverUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralD4688CA92F8ABA1648F41FC47174A407BAEC8C93, /*hidden argument*/NULL);
		((RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_25 = L_0;
		// private static readonly ProfilerMarker GetDesiredOrientationDistanceOnlyPerfMarker =
		//     new ProfilerMarker("[MRTK] Orbital.GetDesiredOrientation_DistanceOnly");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral5AF9D8A6905692F27A4D66D976675934A990305D, /*hidden argument*/NULL);
		((RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var))->___GetDesiredOrientationDistanceOnlyPerfMarker_26 = L_1;
		// private static readonly ProfilerMarker GetDesiredOrientationPerfMarker =
		//     new ProfilerMarker("[MRTK] Orbital.GetDesiredOrientation");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteral180B3BC56463B1A52304374A2002E6BC71CD0AAF, /*hidden argument*/NULL);
		((RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C_il2cpp_TypeInfo_var))->___GetDesiredOrientationPerfMarker_27 = L_2;
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
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_UpdateLinkedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_UpdateLinkedTransform_m714C96250F1AB93423BB2083E3B3AADD9E61AFD5 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// get => updateLinkedTransform;
		bool L_0 = __this->___updateLinkedTransform_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_UpdateLinkedTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_UpdateLinkedTransform_mB17BCFEFAA945266BE0D73A1317D06155D543BAC (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => updateLinkedTransform = value;
		bool L_0 = ___value0;
		__this->___updateLinkedTransform_5 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_MoveLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_MoveLerpTime_mDB73761601FDD70CBB57898999BE7CEF2B39223F (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// get => moveLerpTime;
		float L_0 = __this->___moveLerpTime_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_MoveLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_MoveLerpTime_m1BD0043F918248AC3A130C3E980EB95114164564 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => moveLerpTime = value;
		float L_0 = ___value0;
		__this->___moveLerpTime_6 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_RotateLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_RotateLerpTime_m6B3A9E28D57A8EFB9FF2CEB457A724F7F31CF8D4 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// get => rotateLerpTime;
		float L_0 = __this->___rotateLerpTime_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_RotateLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_RotateLerpTime_mAB8088EE528C55C3E6261F532C2F2742C39BAF6A (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => rotateLerpTime = value;
		float L_0 = ___value0;
		__this->___rotateLerpTime_7 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_ScaleLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_ScaleLerpTime_mCFCE8B95CF50928EDD5F2627CB2D214025432E27 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// get => scaleLerpTime;
		float L_0 = __this->___scaleLerpTime_8;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_ScaleLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_ScaleLerpTime_m916328F427830A9B9CBFC61160905F2E4245C1EE (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => scaleLerpTime = value;
		float L_0 = ___value0;
		__this->___scaleLerpTime_8 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_Smoothing_mBC729B26FBC8A012C2F83C4202E236737F86FA8F (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// get => smoothing;
		bool L_0 = __this->___smoothing_10;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_Smoothing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_Smoothing_m8EA646AF9FFB82E449F5D3089DD25A7E9384E24D (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => smoothing = value;
		bool L_0 = ___value0;
		__this->___smoothing_10 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_GoalPosition_m1FDDE043FB37EB5109B01B47F26BB7E1F56CFF90 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// get { return SolverHandler.GoalPosition; }
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = __this->___SolverHandler_13;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SolverHandler_get_GoalPosition_mAC6D9D9E114BBFE15908F8D0B9B5291A5CB3A296_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set { SolverHandler.GoalPosition = value; }
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = __this->___SolverHandler_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalPosition_mFCD625E99CA6BB298B70DE24E2B197E632D995C8_inline(L_0, L_1, NULL);
		// set { SolverHandler.GoalPosition = value; }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_get_GoalRotation_m551AE1F7F749A26D5DDE6E7C1F980D7DB9D58A22 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// get { return SolverHandler.GoalRotation; }
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = __this->___SolverHandler_13;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = SolverHandler_get_GoalRotation_m19C33213AC5284A50013A8BFC4E742EC360C78F2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// set { SolverHandler.GoalRotation = value; }
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = __this->___SolverHandler_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalRotation_mA9CC4E2C0D5B4D25DBF191890CAED3AFE7B2612D_inline(L_0, L_1, NULL);
		// set { SolverHandler.GoalRotation = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_GoalScale_mBFA9B6C2E546F163C916ED733C2F5518D1BC1028 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// get { return SolverHandler.GoalScale; }
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = __this->___SolverHandler_13;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SolverHandler_get_GoalScale_m83A141C40088AE96427E2645766A403A58A5BA8A_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_m9688366EA56AAF04BF09384BBE1F7419E8FCB8F9 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set { SolverHandler.GoalScale = value; }
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = __this->___SolverHandler_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalScale_m8CFEB8908C4B3A739A1C5E6F10CF753EC94557C9_inline(L_0, L_1, NULL);
		// set { SolverHandler.GoalScale = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_WorkingPosition_mCBB4E13014E3E32F3E63F4D9837B81AAB555302A (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// return updateLinkedTransform ? GoalPosition : transform.position;
		bool L_0 = __this->___updateLinkedTransform_5;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Solver_get_GoalPosition_m1FDDE043FB37EB5109B01B47F26BB7E1F56CFF90(__this, NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m82EC5994A72D66DDF518C6579579BCDB02B61AAB (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->___updateLinkedTransform_5;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		// transform.position = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value0;
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_get_WorkingRotation_m95CE718D44B75E2621778C585AC721E21BAAE368 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// return updateLinkedTransform ? GoalRotation : transform.rotation;
		bool L_0 = __this->___updateLinkedTransform_5;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Solver_get_GoalRotation_m551AE1F7F749A26D5DDE6E7C1F980D7DB9D58A22(__this, NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m4F0C8440CD2EB40788C382510B207B82512C4C21 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->___updateLinkedTransform_5;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalRotation = value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___value0;
		Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		// transform.rotation = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___value0;
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_WorkingScale_m666957250DAEA6DB86A8D921401CCCAFE7B51D46 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// return updateLinkedTransform ? GoalScale : transform.localScale;
		bool L_0 = __this->___updateLinkedTransform_5;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Solver_get_GoalScale_mBFA9B6C2E546F163C916ED733C2F5518D1BC1028(__this, NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m1BD27FC8CD77483198F31A2E6931F86E3EC6DEBE (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->___updateLinkedTransform_5;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalScale = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		Solver_set_GoalScale_m9688366EA56AAF04BF09384BBE1F7419E8FCB8F9(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		// transform.localScale = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value0;
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Awake_m0E122C38539923BEE420C8DC4713FF5468FE4D2F (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_m4C445FC468BA844E1BFDBD72BB8F12E749A93DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40725C381EA894578A0B93C4649F8531D3F9A7B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FD09F0A748FACEE89654EC33115778AC9B649C5);
		s_Il2CppMethodInitialized = true;
	}
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B7_0 = NULL;
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B6_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B8_1 = NULL;
	{
		// if (SolverHandler == null)
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler = GetComponent<SolverHandler>();
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_2;
		L_2 = Component_GetComponent_TisSolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_m4C445FC468BA844E1BFDBD72BB8F12E749A93DF1(__this, Component_GetComponent_TisSolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_m4C445FC468BA844E1BFDBD72BB8F12E749A93DF1_RuntimeMethod_var);
		__this->___SolverHandler_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SolverHandler_13), (void*)L_2);
	}

IL_001a:
	{
		// if (updateLinkedTransform && SolverHandler == null)
		bool L_3 = __this->___updateLinkedTransform_5;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_4 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("No SolverHandler component found on " + name + " when UpdateLinkedTransform was set to true! Disabling UpdateLinkedTransform.");
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral4FD09F0A748FACEE89654EC33115778AC9B649C5, L_6, _stringLiteral40725C381EA894578A0B93C4649F8531D3F9A7B5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_7, NULL);
		// updateLinkedTransform = false;
		__this->___updateLinkedTransform_5 = (bool)0;
	}

IL_0051:
	{
		// GoalScale = maintainScaleOnInitialization ? transform.localScale : Vector3.one;
		bool L_8 = __this->___maintainScaleOnInitialization_9;
		G_B6_0 = __this;
		if (L_8)
		{
			G_B7_0 = __this;
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B6_0;
		goto IL_006c;
	}

IL_0061:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_0;
	}

IL_006c:
	{
		NullCheck(G_B8_1);
		Solver_set_GoalScale_m9688366EA56AAF04BF09384BBE1F7419E8FCB8F9(G_B8_1, G_B8_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnEnable_m9EBBF522DC696E7CA34FF656E4BCA61A157F6E10 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// SnapGoalTo(GoalPosition, GoalRotation, GoalScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Solver_get_GoalPosition_m1FDDE043FB37EB5109B01B47F26BB7E1F56CFF90(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Solver_get_GoalRotation_m551AE1F7F749A26D5DDE6E7C1F980D7DB9D58A22(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Solver_get_GoalScale_mBFA9B6C2E546F163C916ED733C2F5518D1BC1028(__this, NULL);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_2, L_3, L_4);
	}

IL_0026:
	{
		// currentLifetime = 0;
		__this->___currentLifetime_12 = (0.0f);
		// if (SolverHandler != null)
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_5 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// SolverHandler.RegisterSolver(this);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_7 = __this->___SolverHandler_13;
		NullCheck(L_7);
		SolverHandler_RegisterSolver_m30319F91FCDFAEC2AD2E455B762C7EA95538EC62(L_7, __this, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnDisable_m6B5548898325FB42BFD352EB082771DAB627D84A (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler.UnregisterSolver(this);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_2 = __this->___SolverHandler_13;
		NullCheck(L_2);
		SolverHandler_UnregisterSolver_mF59C26231EFF3A3B67CD10EDF037FEC9887FF264(L_2, __this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_mB2B965CCEF08B5C076CD02588A5D6B64727BDB53 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FA3F28B53C7E9082B3B8BB1B12A811B39EDF209);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB3F58F6D433220E3E20DF2E05F769EC017BC0DC);
		s_Il2CppMethodInitialized = true;
	}
	ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66* V_0 = NULL;
	{
		// if (controllerLookup == null)
		ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593* L_0 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_StaticFields*)il2cpp_codegen_static_fields_for(Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_il2cpp_TypeInfo_var))->___controllerLookup_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		// ControllerLookup[] lookups = GameObject.FindObjectsOfType(typeof(ControllerLookup)) as ControllerLookup[];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_4;
		L_4 = Object_FindObjectsOfType_m26A7F8711A45112BF7D30F5273B79DE1F3A7C13F(L_3, NULL);
		V_0 = ((ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66*)IsInst((RuntimeObject*)L_4, ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66_il2cpp_TypeInfo_var));
		// if (lookups.Length == 0)
		ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66* L_5 = V_0;
		NullCheck(L_5);
		if ((((RuntimeArray*)L_5)->max_length))
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogError("Could not locate an instance of the ControllerLookup class in the hierarchy. It is recommended to add ControllerLookup to your camera rig.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralBB3F58F6D433220E3E20DF2E05F769EC017BC0DC, NULL);
		return;
	}

IL_0031:
	{
		// else if (lookups.Length > 1)
		ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) <= ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		// Debug.LogWarning("Found more than one instance of the ControllerLookup class in the hierarchy. Defaulting to the first instance.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral8FA3F28B53C7E9082B3B8BB1B12A811B39EDF209, NULL);
		// controllerLookup = lookups[0];
		ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_StaticFields*)il2cpp_codegen_static_fields_for(Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_il2cpp_TypeInfo_var))->___controllerLookup_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_StaticFields*)il2cpp_codegen_static_fields_for(Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_il2cpp_TypeInfo_var))->___controllerLookup_4), (void*)L_9);
		return;
	}

IL_004a:
	{
		// controllerLookup = lookups[0];
		ControllerLookupU5BU5D_t24B6DCF765F588394BBE8E9CB3A9A4B287EC7E66* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		ControllerLookup_t09B157D5A8BA6CE2F92F66B2CF25FADD4AF5F593* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_StaticFields*)il2cpp_codegen_static_fields_for(Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_il2cpp_TypeInfo_var))->___controllerLookup_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_StaticFields*)il2cpp_codegen_static_fields_for(Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_il2cpp_TypeInfo_var))->___controllerLookup_4), (void*)L_12);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m2D83AF28E028D3B71AA1DA1B8C98B3345312F138 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// currentLifetime += SolverHandler.DeltaTime;
		float L_0 = __this->___currentLifetime_12;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_1 = __this->___SolverHandler_13;
		NullCheck(L_1);
		float L_2;
		L_2 = SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47_inline(L_1, NULL);
		__this->___currentLifetime_12 = ((float)il2cpp_codegen_add(L_0, L_2));
		// if (lifetime > 0 && currentLifetime >= lifetime)
		float L_3 = __this->___lifetime_11;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		float L_4 = __this->___currentLifetime_12;
		float L_5 = __this->___lifetime_11;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_003b:
	{
		// SolverUpdate();
		VirtualActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SolverUpdate() */, __this);
		// UpdateWorkingToGoal();
		Solver_UpdateWorkingToGoal_m1F707F7F755EB1323CF4CF337124CC130D84EA1A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_m2755E25A1DDDF49343F051481B6C1131AB2DBA39 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, const RuntimeMethod* method) 
{
	{
		// SnapGoalTo(position, rotation, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___scale2;
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_0, L_1, L_2);
		// WorkingPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		Solver_set_WorkingPosition_m82EC5994A72D66DDF518C6579579BCDB02B61AAB(__this, L_3, NULL);
		// WorkingRotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___rotation1;
		Solver_set_WorkingRotation_m4F0C8440CD2EB40788C382510B207B82512C4C21(__this, L_4, NULL);
		// WorkingScale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___scale2;
		Solver_set_WorkingScale_m1BD27FC8CD77483198F31A2E6931F86E3EC6DEBE(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_mF1730EA5E8B86CFD0FD45ABB4914A76FAD9317D5 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, const RuntimeMethod* method) 
{
	{
		// GoalPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_0, NULL);
		// GoalRotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD(__this, L_1, NULL);
		// GoalScale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___scale2;
		Solver_set_GoalScale_m9688366EA56AAF04BF09384BBE1F7419E8FCB8F9(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::AddOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_AddOffset_m5A6BF45F5C93954E0B603F2FC3EF8EA4B5639940 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, const RuntimeMethod* method) 
{
	{
		// GoalPosition += offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Solver_get_GoalPosition_m1FDDE043FB37EB5109B01B47F26BB7E1F56CFF90(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___offset0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_0, L_1, NULL);
		Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_SmoothTo_mF6C72B9F2B4F42FBCE14814855A5143B731D596E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___source0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Vector3.Lerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___source0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___goal1;
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&___lerpTime3), (0.0f), NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)(L_3/L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_SmoothTo_m300B097AFA3706B7494FBD995EC0E3C7E89AB29C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___source0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Quaternion.Slerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___source0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___goal1;
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&___lerpTime3), (0.0f), NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)(L_3/L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::UpdateTransformToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateTransformToGoal_mDE098CFF8F7BF731836B7BD41A8926CE36321747 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (smoothing)
		bool L_0 = __this->___smoothing_10;
		if (!L_0)
		{
			goto IL_00a3;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// Quaternion rot = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		V_1 = L_4;
		// Vector3 scale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		V_2 = L_6;
		// pos = SmoothTo(pos, GoalPosition, SolverHandler.DeltaTime, moveLerpTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Solver_get_GoalPosition_m1FDDE043FB37EB5109B01B47F26BB7E1F56CFF90(__this, NULL);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_9 = __this->___SolverHandler_13;
		NullCheck(L_9);
		float L_10;
		L_10 = SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47_inline(L_9, NULL);
		float L_11 = __this->___moveLerpTime_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Solver_SmoothTo_mF6C72B9F2B4F42FBCE14814855A5143B731D596E(L_7, L_8, L_10, L_11, NULL);
		V_0 = L_12;
		// rot = SmoothTo(rot, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Solver_get_GoalRotation_m551AE1F7F749A26D5DDE6E7C1F980D7DB9D58A22(__this, NULL);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_15 = __this->___SolverHandler_13;
		NullCheck(L_15);
		float L_16;
		L_16 = SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47_inline(L_15, NULL);
		float L_17 = __this->___rotateLerpTime_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Solver_SmoothTo_m300B097AFA3706B7494FBD995EC0E3C7E89AB29C(L_13, L_14, L_16, L_17, NULL);
		V_1 = L_18;
		// scale = SmoothTo(scale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Solver_get_GoalScale_mBFA9B6C2E546F163C916ED733C2F5518D1BC1028(__this, NULL);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_21 = __this->___SolverHandler_13;
		NullCheck(L_21);
		float L_22;
		L_22 = SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47_inline(L_21, NULL);
		float L_23 = __this->___scaleLerpTime_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Solver_SmoothTo_mF6C72B9F2B4F42FBCE14814855A5143B731D596E(L_19, L_20, L_22, L_23, NULL);
		V_2 = L_24;
		// transform.SetPositionAndRotation(pos, rot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = V_1;
		NullCheck(L_25);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_25, L_26, L_27, NULL);
		// transform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		NullCheck(L_28);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_28, L_29, NULL);
		return;
	}

IL_00a3:
	{
		// transform.SetPositionAndRotation(GoalPosition, GoalRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Solver_get_GoalPosition_m1FDDE043FB37EB5109B01B47F26BB7E1F56CFF90(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Solver_get_GoalRotation_m551AE1F7F749A26D5DDE6E7C1F980D7DB9D58A22(__this, NULL);
		NullCheck(L_30);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_30, L_31, L_32, NULL);
		// transform.localScale = GoalScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Solver_get_GoalScale_mBFA9B6C2E546F163C916ED733C2F5518D1BC1028(__this, NULL);
		NullCheck(L_33);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m1F707F7F755EB1323CF4CF337124CC130D84EA1A (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m9F147197F0FC44EB62BC211A1DF7BCE5B0987631(__this, NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m9F816C99A3373103FFF3AB5B6473FBA0B38B5347(__this, NULL);
		// UpdateWorkingScaleToGoal();
		Solver_UpdateWorkingScaleToGoal_m4E8BB5A11F46265C542FD6B9940FE5F26FE56908(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m9F147197F0FC44EB62BC211A1DF7BCE5B0987631 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B2_0 = NULL;
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B3_1 = NULL;
	{
		// WorkingPosition = smoothing ? SmoothTo(WorkingPosition, GoalPosition, SolverHandler.DeltaTime, moveLerpTime) : GoalPosition;
		bool L_0 = __this->___smoothing_10;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Solver_get_GoalPosition_m1FDDE043FB37EB5109B01B47F26BB7E1F56CFF90(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Solver_get_WorkingPosition_mCBB4E13014E3E32F3E63F4D9837B81AAB555302A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Solver_get_GoalPosition_m1FDDE043FB37EB5109B01B47F26BB7E1F56CFF90(__this, NULL);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_4 = __this->___SolverHandler_13;
		NullCheck(L_4);
		float L_5;
		L_5 = SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47_inline(L_4, NULL);
		float L_6 = __this->___moveLerpTime_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Solver_SmoothTo_mF6C72B9F2B4F42FBCE14814855A5143B731D596E(L_2, L_3, L_5, L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingPosition_m82EC5994A72D66DDF518C6579579BCDB02B61AAB(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m9F816C99A3373103FFF3AB5B6473FBA0B38B5347 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B2_0 = NULL;
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B1_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B3_1 = NULL;
	{
		// WorkingRotation = smoothing ? SmoothTo(WorkingRotation, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime) : GoalRotation;
		bool L_0 = __this->___smoothing_10;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Solver_get_GoalRotation_m551AE1F7F749A26D5DDE6E7C1F980D7DB9D58A22(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Solver_get_WorkingRotation_m95CE718D44B75E2621778C585AC721E21BAAE368(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Solver_get_GoalRotation_m551AE1F7F749A26D5DDE6E7C1F980D7DB9D58A22(__this, NULL);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_4 = __this->___SolverHandler_13;
		NullCheck(L_4);
		float L_5;
		L_5 = SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47_inline(L_4, NULL);
		float L_6 = __this->___rotateLerpTime_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Solver_SmoothTo_m300B097AFA3706B7494FBD995EC0E3C7E89AB29C(L_2, L_3, L_5, L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingRotation_m4F0C8440CD2EB40788C382510B207B82512C4C21(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m4E8BB5A11F46265C542FD6B9940FE5F26FE56908 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B2_0 = NULL;
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* G_B3_1 = NULL;
	{
		// WorkingScale = smoothing ? SmoothTo(WorkingScale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime) : GoalScale;
		bool L_0 = __this->___smoothing_10;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Solver_get_GoalScale_mBFA9B6C2E546F163C916ED733C2F5518D1BC1028(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Solver_get_WorkingScale_m666957250DAEA6DB86A8D921401CCCAFE7B51D46(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Solver_get_GoalScale_mBFA9B6C2E546F163C916ED733C2F5518D1BC1028(__this, NULL);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_4 = __this->___SolverHandler_13;
		NullCheck(L_4);
		float L_5;
		L_5 = SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47_inline(L_4, NULL);
		float L_6 = __this->___scaleLerpTime_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Solver_SmoothTo_mF6C72B9F2B4F42FBCE14814855A5143B731D596E(L_2, L_3, L_5, L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingScale_m1BD27FC8CD77483198F31A2E6931F86E3EC6DEBE(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_m95074BC47A9C11E650246DD9D37C1A22252D4DB5 (Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* __this, const RuntimeMethod* method) 
{
	{
		// private float moveLerpTime = 0.1f;
		__this->___moveLerpTime_6 = (0.100000001f);
		// private float rotateLerpTime = 0.1f;
		__this->___rotateLerpTime_7 = (0.100000001f);
		// private bool maintainScaleOnInitialization = true;
		__this->___maintainScaleOnInitialization_9 = (bool)1;
		// private bool smoothing = true;
		__this->___smoothing_10 = (bool)1;
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
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_LeftInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_LeftInteractor_mD83CF66D79A50EB3D7533AA54AC1C20947F12DAE (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => leftInteractor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___leftInteractor_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_LeftInteractor(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_LeftInteractor_m9A5052CF510AB5FDED2F1B370AA482E6334F90ED (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___value0, const RuntimeMethod* method) 
{
	{
		// set => leftInteractor = value;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = ___value0;
		__this->___leftInteractor_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftInteractor_4), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_RightInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_RightInteractor_mD9E0CA0FBF0E8AE8854885BA9E7C26E5EDC9E196 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => rightInteractor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___rightInteractor_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_RightInteractor(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_RightInteractor_m2AD4DE1B38CF18C8648E56B6DA460C6C1827389D (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___value0, const RuntimeMethod* method) 
{
	{
		// set => rightInteractor = value;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = ___value0;
		__this->___rightInteractor_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightInteractor_5), (void*)L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->___trackedTargetType_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_mB9A85F5D0A7E47AD5515A964A4AC5A55FEB79CF2 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackedTargetType != value && IsValidTrackedObjectType(value))
		int32_t L_0 = __this->___trackedTargetType_6;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SolverHandler_IsValidTrackedObjectType_mA5AD936FDC98A99D51FEE36B4F336DCD261C97DD(L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_4 = ___value0;
		__this->___trackedTargetType_6 = L_4;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandedness_mB9D0E75243A7D1B4E48B5F8EF238121539698429 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedHandedness;
		int32_t L_0 = __this->___trackedHandedness_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedHandedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandedness_m354937A0721E2CFCA4AF8DA58C5D6BE7654931A9 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackedHandedness != value && IsValidHandedness(value))
		int32_t L_0 = __this->___trackedHandedness_7;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SolverHandler_IsValidHandedness_mE7ABCEF219F6927F10B7093A7DFED8DAB1169747(L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// trackedHandedness = value;
		int32_t L_4 = ___value0;
		__this->___trackedHandedness_7 = L_4;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.TrackedHandJoint Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_mF109C911E7F39A4487E88B11C9DEBF1F7FCB16BC (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->___trackedHandJoint_8;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedHandJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandJoint_mE3C1E3774266256888C810F4B04D89840EE2CDB9 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if (trackedHandJoint != value)
		int32_t L_0 = __this->___trackedHandJoint_8;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// trackedHandJoint = value;
		int32_t L_2 = ___value0;
		__this->___trackedHandJoint_8 = L_2;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_mF3F2D2D25FC367AFBF41739E37781C11B2838BBB (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null && transformOverride != value)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transformOverride_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// transformOverride = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___value0;
		__this->___transformOverride_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transformOverride_9), (void*)L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalOffset_mBDF933A5F0A08A04D13C0A020D9E9BCA380AA8A2 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => additionalOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalOffset_10;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_AdditionalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalOffset_m0D5562A3E1DB0938356D094235B92C9719118FF8 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// if (additionalOffset != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalOffset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		bool L_2;
		L_2 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// additionalOffset = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value0;
		__this->___additionalOffset_10 = L_3;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalRotation_mBBB8B9B1D4297CCD99E4A88E07F67CE36B9647D1 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => additionalRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalRotation_11;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_AdditionalRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalRotation_mF6F876060C9DD95340DB6AA0AEA0EB72C349D584 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// if (additionalRotation != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalRotation_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		bool L_2;
		L_2 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// additionalRotation = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value0;
		__this->___additionalRotation_11 = L_3;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m1559EBD961E17A372EBA2261FEC5CE8A5061296B (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => updateSolvers;
		bool L_0 = __this->___updateSolvers_12;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m9BE98B23DC5255CADD937E1A879AC13522D58C2B (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->___updateSolvers_12 = L_0;
		return;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver> Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_m565F6106EABD88826BE386F911E07188B99E81D9 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AsReadOnly_m48242EBF2599EB7AE5522F18EFFA8A81B060FBD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => solvers.AsReadOnly();
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_0 = __this->___solvers_13;
		NullCheck(L_0);
		ReadOnlyCollection_1_tF30F4467CDD892D2BE3A1415FE6113604C3FD23A* L_1;
		L_1 = List_1_AsReadOnly_m48242EBF2599EB7AE5522F18EFFA8A81B060FBD1(L_0, List_1_AsReadOnly_m48242EBF2599EB7AE5522F18EFFA8A81B060FBD1_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_mC37E44122918354D891D6DB8458693462D3536D3 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m0FCD9AEA7268A8B4A783461FCEFA804842945891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4CB4F61784103BF990D63084B30BFCB136852CAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// solvers.Clear();
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_1 = __this->___solvers_13;
		NullCheck(L_1);
		List_1_Clear_m4CB4F61784103BF990D63084B30BFCB136852CAD_inline(L_1, List_1_Clear_m4CB4F61784103BF990D63084B30BFCB136852CAD_RuntimeMethod_var);
		// solvers.AddRange(value);
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_2 = __this->___solvers_13;
		RuntimeObject* L_3 = ___value0;
		NullCheck(L_2);
		List_1_AddRange_m0FCD9AEA7268A8B4A783461FCEFA804842945891(L_2, L_3, List_1_AddRange_m0FCD9AEA7268A8B4A783461FCEFA804842945891_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalPosition_mAC6D9D9E114BBFE15908F8D0B9B5291A5CB3A296 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalPositionU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_mFCD625E99CA6BB298B70DE24E2B197E632D995C8 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CGoalPositionU3Ek__BackingField_14 = L_0;
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SolverHandler_get_GoalRotation_m19C33213AC5284A50013A8BFC4E742EC360C78F2 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CGoalRotationU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_mA9CC4E2C0D5B4D25DBF191890CAED3AFE7B2612D (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CGoalRotationU3Ek__BackingField_15 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalScale_m83A141C40088AE96427E2645766A403A58A5BA8A (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalScaleU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m8CFEB8908C4B3A739A1C5E6F10CF753EC94557C9 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CGoalScaleU3Ek__BackingField_16 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 SolverHandler_get_AltScale_m5585214D664D0D49549B97AD7E11FCE3FAC0235D (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 L_0 = __this->___U3CAltScaleU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m9F8E73C6F21CBB825778CFFE4CEC1E6A34E97571 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 L_0 = ___value0;
		__this->___U3CAltScaleU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->___U3CDeltaTimeU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mC82F84EBFFCE621FCDCE52EA41AA3932304DC4A2 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->___U3CDeltaTimeU3Ek__BackingField_18 = L_0;
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInvalidTracking())
		bool L_0;
		L_0 = SolverHandler_IsInvalidTracking_m4B4B7559D56768F7610DEA25E715406244D9881B(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135(__this, NULL);
	}

IL_000e:
	{
		// return trackingTarget != null ? trackingTarget.transform : null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_001e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___trackingTarget_21;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_CurrentTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_CurrentTrackedHandedness_m747CCCEB841D2284237C0E355F7E56574834337D (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness CurrentTrackedHandedness => currentTrackedHandedness;
		int32_t L_0 = __this->___currentTrackedHandedness_19;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_PreferredTrackedHandedness_m7F0FF943AAB123419EA26D2D7512F2908885A519 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => preferredTrackedHandedness;
		int32_t L_0 = __this->___preferredTrackedHandedness_20;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_PreferredTrackedHandedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_mD37CB4631305C43F060A30D2EAF90816F2DA445C (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if ((value == Handedness.Left || value == Handedness.Right)
		//     && preferredTrackedHandedness != value)
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___value0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		int32_t L_2 = __this->___preferredTrackedHandedness_20;
		int32_t L_3 = ___value0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}
	{
		// preferredTrackedHandedness = value;
		int32_t L_4 = ___value0;
		__this->___preferredTrackedHandedness_20 = L_4;
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Awake_m908ED1E7B6D3CEFC5F817B40F212791FA4F567CC (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4069BFE2C10C7C96B347AFEE648D6F737B8E03B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA793674FE1A4DECA2EFF7B41370826A428A83277);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		SolverHandler_set_GoalScale_m8CFEB8908C4B3A739A1C5E6F10CF753EC94557C9_inline(__this, L_0, NULL);
		// AltScale = new Vector3Smoothed(Vector3.one, 0.1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3Smoothed__ctor_mF2591CC331BC947C1EDD65EA86587A8D02C90EAF((&L_2), L_1, (0.100000001f), /*hidden argument*/NULL);
		SolverHandler_set_AltScale_m9F8E73C6F21CBB825778CFFE4CEC1E6A34E97571_inline(__this, L_2, NULL);
		// DeltaTime = Time.deltaTime;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		SolverHandler_set_DeltaTime_mC82F84EBFFCE621FCDCE52EA41AA3932304DC4A2_inline(__this, L_3, NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___lastUpdateTime_23 = L_4;
		// if (!IsValidHandedness(trackedHandedness))
		int32_t L_5 = __this->___trackedHandedness_7;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = SolverHandler_IsValidHandedness_mE7ABCEF219F6927F10B7093A7DFED8DAB1169747(L_5, NULL);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError("Using invalid SolverHandler.TrackedHandness value. Defaulting to Handedness.Both");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA793674FE1A4DECA2EFF7B41370826A428A83277, NULL);
		// TrackedHandedness = Handedness.Both;
		SolverHandler_set_TrackedHandedness_m354937A0721E2CFCA4AF8DA58C5D6BE7654931A9(__this, 3, NULL);
	}

IL_0054:
	{
		// if (!IsValidTrackedObjectType(trackedTargetType))
		int32_t L_7 = __this->___trackedTargetType_6;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SolverHandler_IsValidTrackedObjectType_mA5AD936FDC98A99D51FEE36B4F336DCD261C97DD(L_7, NULL);
		if (L_8)
		{
			goto IL_0072;
		}
	}
	{
		// Debug.LogError("Using an unsupported SolverHandler.TrackedTargetType. Defaulting to type Head");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral4069BFE2C10C7C96B347AFEE648D6F737B8E03B2, NULL);
		// TrackedTargetType = TrackedObjectType.Head;
		SolverHandler_set_TrackedTargetType_mB9A85F5D0A7E47AD5515A964A4AC5A55FEB79CF2(__this, 0, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Start_m19A297583E770061650705F5CB79B6D971C7522D (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Update_m73F616D69F1E1D014219AF38D3859F09E3182914 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// if (IsInvalidTracking())
		bool L_0;
		L_0 = SolverHandler_IsInvalidTracking_m4B4B7559D56768F7610DEA25E715406244D9881B(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135(__this, NULL);
	}

IL_000e:
	{
		// if (TrackedTargetType == TrackedObjectType.HandJoint)
		int32_t L_1;
		L_1 = SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D_inline(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		// UpdateCachedHandJointTransform();
		SolverHandler_UpdateCachedHandJointTransform_mD36258B3C0A0CB8D901F63D8053634DA618BFBFC(__this, NULL);
	}

IL_001d:
	{
		// DeltaTime = Time.realtimeSinceStartup - lastUpdateTime;
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		float L_3 = __this->___lastUpdateTime_23;
		SolverHandler_set_DeltaTime_mC82F84EBFFCE621FCDCE52EA41AA3932304DC4A2_inline(__this, ((float)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___lastUpdateTime_23 = L_4;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_LateUpdate_mD3DF044012E49E346B33E1915F1FD15ADD87B53A (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m22744B2842AF816B4132934751B867140883F1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9CB5DED6A5E5903D1C7D2768AC25EFB8D0E75E6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* V_1 = NULL;
	{
		// if (UpdateSolvers)
		bool L_0;
		L_0 = SolverHandler_get_UpdateSolvers_m1559EBD961E17A372EBA2261FEC5CE8A5061296B_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0075;
		}
	}
	{
		// GoalPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		SolverHandler_set_GoalPosition_mFCD625E99CA6BB298B70DE24E2B197E632D995C8_inline(__this, L_2, NULL);
		// GoalRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		SolverHandler_set_GoalRotation_mA9CC4E2C0D5B4D25DBF191890CAED3AFE7B2612D_inline(__this, L_4, NULL);
		// GoalScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		SolverHandler_set_GoalScale_m8CFEB8908C4B3A739A1C5E6F10CF753EC94557C9_inline(__this, L_6, NULL);
		// for (int i = 0; i < solvers.Count; ++i)
		V_0 = 0;
		goto IL_0067;
	}

IL_003f:
	{
		// Solver solver = solvers[i];
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_7 = __this->___solvers_13;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* L_9;
		L_9 = List_1_get_Item_m9CB5DED6A5E5903D1C7D2768AC25EFB8D0E75E6B(L_7, L_8, List_1_get_Item_m9CB5DED6A5E5903D1C7D2768AC25EFB8D0E75E6B_RuntimeMethod_var);
		V_1 = L_9;
		// if (solver != null && solver.enabled)
		Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_12, NULL);
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		// solver.SolverUpdateEntry();
		Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* L_14 = V_1;
		NullCheck(L_14);
		Solver_SolverUpdateEntry_m2D83AF28E028D3B71AA1DA1B8C98B3345312F138(L_14, NULL);
	}

IL_0063:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0067:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_16 = V_0;
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_17 = __this->___solvers_13;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m22744B2842AF816B4132934751B867140883F1EC_inline(L_17, List_1_get_Count_m22744B2842AF816B4132934751B867140883F1EC_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_003f;
		}
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_OnDestroy_mDF13AB58341B7310A5F6D0F18CD3D3E545F6D51B (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(trackingTarget);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_m8BA9C712FF77F1CFD99F2F48F56BDD811453F135 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// DetachFromCurrentTrackedObject();
		VirtualActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// AttachToNewTrackedObject();
		VirtualActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::AttachToNewTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m30319F91FCDFAEC2AD2E455B762C7EA95538EC62 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mE4B78BE198453817AA475D68C5FEC3B1111AA22D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Intersect_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mA5608FFFCCDF14422CF8E42837B78534DAB64AD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_m707C5CAAAF47570E34FE4D9BA14FC8588560B1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDDD8A894B6B7A2ADA72A50C7C0784C5BCC4FBFD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m1FAD76711F3F7ED6ADAEB2F99686025A0AB55404_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!solvers.Contains(solver))
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_0 = __this->___solvers_13;
		Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m1FAD76711F3F7ED6ADAEB2F99686025A0AB55404(L_0, L_1, List_1_Contains_m1FAD76711F3F7ED6ADAEB2F99686025A0AB55404_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0050;
		}
	}
	{
		// GetComponents(inspectorOrderedSolvers);
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_3 = __this->___inspectorOrderedSolvers_25;
		Component_GetComponents_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mE4B78BE198453817AA475D68C5FEC3B1111AA22D(__this, L_3, Component_GetComponents_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mE4B78BE198453817AA475D68C5FEC3B1111AA22D_RuntimeMethod_var);
		// if (inspectorOrderedSolvers.Contains(solver))
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_4 = __this->___inspectorOrderedSolvers_25;
		Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* L_5 = ___solver0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Contains_m1FAD76711F3F7ED6ADAEB2F99686025A0AB55404(L_4, L_5, List_1_Contains_m1FAD76711F3F7ED6ADAEB2F99686025A0AB55404_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// solvers.Add(solver);
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_7 = __this->___solvers_13;
		Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* L_8 = ___solver0;
		NullCheck(L_7);
		List_1_Add_mDDD8A894B6B7A2ADA72A50C7C0784C5BCC4FBFD5_inline(L_7, L_8, List_1_Add_mDDD8A894B6B7A2ADA72A50C7C0784C5BCC4FBFD5_RuntimeMethod_var);
		// solvers = inspectorOrderedSolvers.Intersect(solvers).ToList();
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_9 = __this->___inspectorOrderedSolvers_25;
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_10 = __this->___solvers_13;
		RuntimeObject* L_11;
		L_11 = Enumerable_Intersect_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mA5608FFFCCDF14422CF8E42837B78534DAB64AD5(L_9, L_10, Enumerable_Intersect_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_mA5608FFFCCDF14422CF8E42837B78534DAB64AD5_RuntimeMethod_var);
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_12;
		L_12 = Enumerable_ToList_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_m707C5CAAAF47570E34FE4D9BA14FC8588560B1DF(L_11, Enumerable_ToList_TisSolver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B_m707C5CAAAF47570E34FE4D9BA14FC8588560B1DF_RuntimeMethod_var);
		__this->___solvers_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___solvers_13), (void*)L_12);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_mF59C26231EFF3A3B67CD10EDF037FEC9887FF264 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m08276D0FE07AA9A2F9E2B1ECCDD4ECE36E69D56B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// solvers.Remove(solver);
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_0 = __this->___solvers_13;
		Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B* L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m08276D0FE07AA9A2F9E2B1ECCDD4ECE36E69D56B(L_0, L_1, List_1_Remove_m08276D0FE07AA9A2F9E2B1ECCDD4ECE36E69D56B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::DetachFromCurrentTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_DetachFromCurrentTrackedObject_m1F6DABB540A757C787F5DD8E9F532E7BDA181F27 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// trackingTarget.transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___trackingTarget_21;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::AttachToNewTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_AttachToNewTrackedObject_mF9CE09C5679CACE363EBDC70386CF9C0971D7BEA (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// using (AttachToNewTrackedObjectPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_StaticFields*)il2cpp_codegen_static_fields_for(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var))->___AttachToNewTrackedObjectPerfMarker_27;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_018f:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// currentTrackedHandedness = Handedness.None;
				__this->___currentTrackedHandedness_19 = 0;
				// controllerInteractor = null;
				__this->___controllerInteractor_22 = (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerInteractor_22), (void*)(XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL);
				// Transform target = null;
				V_2 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
				// if (TrackedTargetType == TrackedObjectType.Head)
				int32_t L_2;
				L_2 = SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D_inline(__this, NULL);
				if (L_2)
				{
					goto IL_0036_1;
				}
			}
			{
				// target = Camera.main.transform;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
				L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
				NullCheck(L_3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
				L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
				V_2 = L_4;
				goto IL_0186_1;
			}

IL_0036_1:
			{
				// else if (TrackedTargetType == TrackedObjectType.ControllerRay)
				int32_t L_5;
				L_5 = SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D_inline(__this, NULL);
				if ((!(((uint32_t)L_5) == ((uint32_t)1))))
				{
					goto IL_00f2_1;
				}
			}
			{
				// if (TrackedHandedness == (Handedness.Both))
				int32_t L_6;
				L_6 = SolverHandler_get_TrackedHandedness_mB9D0E75243A7D1B4E48B5F8EF238121539698429_inline(__this, NULL);
				if ((!(((uint32_t)L_6) == ((uint32_t)3))))
				{
					goto IL_00a9_1;
				}
			}
			{
				// currentTrackedHandedness = PreferredTrackedHandedness;
				int32_t L_7;
				L_7 = SolverHandler_get_PreferredTrackedHandedness_m7F0FF943AAB123419EA26D2D7512F2908885A519_inline(__this, NULL);
				__this->___currentTrackedHandedness_19 = L_7;
				// controllerInteractor = GetControllerInteractor(currentTrackedHandedness);
				int32_t L_8 = __this->___currentTrackedHandedness_19;
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_9;
				L_9 = SolverHandler_GetControllerInteractor_m518A3322F1B378721D7AB887AC64E0F410987022(__this, L_8, NULL);
				__this->___controllerInteractor_22 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerInteractor_22), (void*)L_9);
				// if (controllerInteractor == null || !controllerInteractor.isHoverActive)
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_10 = __this->___controllerInteractor_22;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_11)
				{
					goto IL_0084_1;
				}
			}
			{
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_12 = __this->___controllerInteractor_22;
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(52 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_isHoverActive() */, L_12);
				if (L_13)
				{
					goto IL_00c7_1;
				}
			}

IL_0084_1:
			{
				// currentTrackedHandedness = currentTrackedHandedness.GetOppositeHandedness();
				int32_t L_14 = __this->___currentTrackedHandedness_19;
				int32_t L_15;
				L_15 = HandednessExtensions_GetOppositeHandedness_mAB34CBE50B79AF80381D9E7B845C58B25CA29E04(L_14, NULL);
				__this->___currentTrackedHandedness_19 = L_15;
				// controllerInteractor = GetControllerInteractor(currentTrackedHandedness);
				int32_t L_16 = __this->___currentTrackedHandedness_19;
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_17;
				L_17 = SolverHandler_GetControllerInteractor_m518A3322F1B378721D7AB887AC64E0F410987022(__this, L_16, NULL);
				__this->___controllerInteractor_22 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerInteractor_22), (void*)L_17);
				goto IL_00c7_1;
			}

IL_00a9_1:
			{
				// currentTrackedHandedness = TrackedHandedness;
				int32_t L_18;
				L_18 = SolverHandler_get_TrackedHandedness_mB9D0E75243A7D1B4E48B5F8EF238121539698429_inline(__this, NULL);
				__this->___currentTrackedHandedness_19 = L_18;
				// controllerInteractor = GetControllerInteractor(currentTrackedHandedness);
				int32_t L_19 = __this->___currentTrackedHandedness_19;
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_20;
				L_20 = SolverHandler_GetControllerInteractor_m518A3322F1B378721D7AB887AC64E0F410987022(__this, L_19, NULL);
				__this->___controllerInteractor_22 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerInteractor_22), (void*)L_20);
			}

IL_00c7_1:
			{
				// if (controllerInteractor != null)
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_21 = __this->___controllerInteractor_22;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_22;
				L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_22)
				{
					goto IL_00e6_1;
				}
			}
			{
				// target = controllerInteractor.transform;
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_23 = __this->___controllerInteractor_22;
				NullCheck(L_23);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
				L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
				V_2 = L_24;
				goto IL_0186_1;
			}

IL_00e6_1:
			{
				// currentTrackedHandedness = Handedness.None;
				__this->___currentTrackedHandedness_19 = 0;
				goto IL_0186_1;
			}

IL_00f2_1:
			{
				// else if (TrackedTargetType == TrackedObjectType.HandJoint)
				int32_t L_25;
				L_25 = SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D_inline(__this, NULL);
				if ((!(((uint32_t)L_25) == ((uint32_t)2))))
				{
					goto IL_0172_1;
				}
			}
			{
				// if (XRSubsystemHelpers.HandsAggregator != null)
				il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
				HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_26;
				L_26 = XRSubsystemHelpers_get_HandsAggregator_m57B9CCC9BD226E130D3A7A9053040D5EC258A00F(NULL);
				if (!L_26)
				{
					goto IL_0186_1;
				}
			}
			{
				// currentTrackedHandedness = TrackedHandedness;
				int32_t L_27;
				L_27 = SolverHandler_get_TrackedHandedness_mB9D0E75243A7D1B4E48B5F8EF238121539698429_inline(__this, NULL);
				__this->___currentTrackedHandedness_19 = L_27;
				// if (currentTrackedHandedness == (Handedness.Both))
				int32_t L_28 = __this->___currentTrackedHandedness_19;
				if ((!(((uint32_t)L_28) == ((uint32_t)3))))
				{
					goto IL_0163_1;
				}
			}
			{
				// if (IsHandTracked(PreferredTrackedHandedness))
				int32_t L_29;
				L_29 = SolverHandler_get_PreferredTrackedHandedness_m7F0FF943AAB123419EA26D2D7512F2908885A519_inline(__this, NULL);
				bool L_30;
				L_30 = SolverHandler_IsHandTracked_m77DDA91FF044D8190170A6D30506751B55479FDB(__this, L_29, NULL);
				if (!L_30)
				{
					goto IL_0136_1;
				}
			}
			{
				// currentTrackedHandedness = PreferredTrackedHandedness;
				int32_t L_31;
				L_31 = SolverHandler_get_PreferredTrackedHandedness_m7F0FF943AAB123419EA26D2D7512F2908885A519_inline(__this, NULL);
				__this->___currentTrackedHandedness_19 = L_31;
				goto IL_0163_1;
			}

IL_0136_1:
			{
				// else if (IsHandTracked(PreferredTrackedHandedness.GetOppositeHandedness()))
				int32_t L_32;
				L_32 = SolverHandler_get_PreferredTrackedHandedness_m7F0FF943AAB123419EA26D2D7512F2908885A519_inline(__this, NULL);
				int32_t L_33;
				L_33 = HandednessExtensions_GetOppositeHandedness_mAB34CBE50B79AF80381D9E7B845C58B25CA29E04(L_32, NULL);
				bool L_34;
				L_34 = SolverHandler_IsHandTracked_m77DDA91FF044D8190170A6D30506751B55479FDB(__this, L_33, NULL);
				if (!L_34)
				{
					goto IL_015c_1;
				}
			}
			{
				// currentTrackedHandedness = PreferredTrackedHandedness.GetOppositeHandedness();
				int32_t L_35;
				L_35 = SolverHandler_get_PreferredTrackedHandedness_m7F0FF943AAB123419EA26D2D7512F2908885A519_inline(__this, NULL);
				int32_t L_36;
				L_36 = HandednessExtensions_GetOppositeHandedness_mAB34CBE50B79AF80381D9E7B845C58B25CA29E04(L_35, NULL);
				__this->___currentTrackedHandedness_19 = L_36;
				goto IL_0163_1;
			}

IL_015c_1:
			{
				// currentTrackedHandedness = Handedness.None;
				__this->___currentTrackedHandedness_19 = 0;
			}

IL_0163_1:
			{
				// UpdateCachedHandJointTransform();
				SolverHandler_UpdateCachedHandJointTransform_mD36258B3C0A0CB8D901F63D8053634DA618BFBFC(__this, NULL);
				// target = cachedHandJointTransform;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___cachedHandJointTransform_26;
				V_2 = L_37;
				goto IL_0186_1;
			}

IL_0172_1:
			{
				// else if (TrackedTargetType == TrackedObjectType.CustomOverride)
				int32_t L_38;
				L_38 = SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D_inline(__this, NULL);
				if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_0186_1;
				}
			}
			{
				// target = this.transformOverride;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___transformOverride_9;
				V_2 = L_39;
			}

IL_0186_1:
			{
				// TrackTransform(target);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = V_2;
				SolverHandler_TrackTransform_m3913EDCDC7A4939DC345F9F318928D4574403AE5(__this, L_40, NULL);
				// }
				goto IL_019d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_019d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::UpdateCachedHandJointTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UpdateCachedHandJointTransform_mD36258B3C0A0CB8D901F63D8053634DA618BFBFC (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA576B330FF38E27262658AB85457F8F686E381);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 V_2;
	memset((&V_2), 0, sizeof(V_2));
	HandJointPose_t82E47711F81612C8E37DC59CAC62E6557CC512A3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// using (UpdateCachedHandJointTransformPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_StaticFields*)il2cpp_codegen_static_fields_for(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var))->___UpdateCachedHandJointTransformPerfMarker_28;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// XRNode? handNode = currentTrackedHandedness.ToXRNode();
				int32_t L_2 = __this->___currentTrackedHandedness_19;
				Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 L_3;
				L_3 = HandednessExtensions_ToXRNode_m30AFACB24E4DAC09672D1545AE3624C47E9B294E(L_2, NULL);
				V_2 = L_3;
				// if (handNode.HasValue &&
				//     XRSubsystemHelpers.HandsAggregator != null &&
				//     XRSubsystemHelpers.HandsAggregator.TryGetJoint(TrackedHandJoint, handNode.Value, out HandJointPose jointPos))
				bool L_4;
				L_4 = Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_inline((&V_2), Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
				if (!L_4)
				{
					goto IL_0081_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
				HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_5;
				L_5 = XRSubsystemHelpers_get_HandsAggregator_m57B9CCC9BD226E130D3A7A9053040D5EC258A00F(NULL);
				if (!L_5)
				{
					goto IL_0081_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
				HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_6;
				L_6 = XRSubsystemHelpers_get_HandsAggregator_m57B9CCC9BD226E130D3A7A9053040D5EC258A00F(NULL);
				int32_t L_7;
				L_7 = SolverHandler_get_TrackedHandJoint_mF109C911E7F39A4487E88B11C9DEBF1F7FCB16BC_inline(__this, NULL);
				int32_t L_8;
				L_8 = Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66((&V_2), Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
				NullCheck(L_6);
				bool L_9;
				L_9 = HandsAggregatorSubsystem_TryGetJoint_m024003ECA9B870E18BABAE9EBBD43A96752715B0(L_6, L_7, L_8, (&V_3), NULL);
				if (!L_9)
				{
					goto IL_0081_1;
				}
			}
			{
				// if (cachedHandJointTransform == null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___cachedHandJointTransform_26;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_11)
				{
					goto IL_0068_1;
				}
			}
			{
				// cachedHandJointTransform = new GameObject("SolverHandler HandJoint Tracker").transform;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_12, _stringLiteral3DA576B330FF38E27262658AB85457F8F686E381, NULL);
				NullCheck(L_12);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
				L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
				__this->___cachedHandJointTransform_26 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedHandJointTransform_26), (void*)L_13);
			}

IL_0068_1:
			{
				// cachedHandJointTransform.SetPositionAndRotation(jointPos.Position, jointPos.Rotation);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___cachedHandJointTransform_26;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = HandJointPose_get_Position_mACE7763C8A869495C9D27EC0C7E09EFE56A371A6((&V_3), NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = HandJointPose_get_Rotation_mD52AC7980DB80766FB081EFB106A2131B4D06B54((&V_3), NULL);
				NullCheck(L_14);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_14, L_15, L_16, NULL);
			}

IL_0081_1:
			{
				// }
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m3913EDCDC7A4939DC345F9F318928D4574403AE5 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD68B6932B839E25BF967C1D8E8D31E1CF6BF1CFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// trackingTarget = new GameObject(TrackingTargetName);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralD68B6932B839E25BF967C1D8E8D31E1CF6BF1CFB, NULL);
		__this->___trackingTarget_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackingTarget_21), (void*)L_2);
		// trackingTarget.hideFlags = HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___trackingTarget_21;
		NullCheck(L_3);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_3, 1, NULL);
	}

IL_002a:
	{
		// if (target != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		// trackingTarget.transform.parent = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___trackingTarget_21;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___target0;
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_8, NULL);
		// trackingTarget.transform.localPosition = Vector3.Scale(AdditionalOffset, trackingTarget.transform.localScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___trackingTarget_21;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = SolverHandler_get_AdditionalOffset_mBDF933A5F0A08A04D13C0A020D9E9BCA380AA8A2_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___trackingTarget_21;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline(L_11, L_14, NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_15, NULL);
		// trackingTarget.transform.localRotation = Quaternion.Euler(AdditionalRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___trackingTarget_21;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = SolverHandler_get_AdditionalRotation_mBBB8B9B1D4297CCD99E4A88E07F67CE36B9647D1_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_18, NULL);
		NullCheck(L_17);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_17, L_19, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::GetControllerInteractor(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_GetControllerInteractor_m518A3322F1B378721D7AB887AC64E0F410987022 (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsValidHandedness(handedness)) { return null; }
		int32_t L_0 = ___handedness0;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SolverHandler_IsValidHandedness_mE7ABCEF219F6927F10B7093A7DFED8DAB1169747(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (!IsValidHandedness(handedness)) { return null; }
		return (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
	}

IL_000a:
	{
		// return (handedness == Handedness.Left) ? LeftInteractor : RightInteractor;
		int32_t L_2 = ___handedness0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_3;
		L_3 = SolverHandler_get_RightInteractor_mD9E0CA0FBF0E8AE8854885BA9E7C26E5EDC9E196_inline(__this, NULL);
		return L_3;
	}

IL_0015:
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_4;
		L_4 = SolverHandler_get_LeftInteractor_mD83CF66D79A50EB3D7533AA54AC1C20947F12DAE_inline(__this, NULL);
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m4B4B7559D56768F7610DEA25E715406244D9881B (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (trackingTarget == null || trackingTarget.transform.parent == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___trackingTarget_21;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// if (TrackedTargetType == TrackedObjectType.ControllerRay &&
		//     (controllerInteractor == null || !controllerInteractor.isHoverActive))
		int32_t L_6;
		L_6 = SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D_inline(__this, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_7 = __this->___controllerInteractor_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_9 = __this->___controllerInteractor_22;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(52 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_isHoverActive() */, L_9);
		if (L_10)
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		// return true;
		return (bool)1;
	}

IL_004e:
	{
		// if (TrackedTargetType == TrackedObjectType.HandJoint && currentTrackedHandedness != Handedness.None)
		int32_t L_11;
		L_11 = SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D_inline(__this, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_12 = __this->___currentTrackedHandedness_19;
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		// bool trackingLeft = IsHandTracked(Handedness.Left);
		bool L_13;
		L_13 = SolverHandler_IsHandTracked_m77DDA91FF044D8190170A6D30506751B55479FDB(__this, 1, NULL);
		V_0 = L_13;
		// bool trackingRight = IsHandTracked(Handedness.Right);
		bool L_14;
		L_14 = SolverHandler_IsHandTracked_m77DDA91FF044D8190170A6D30506751B55479FDB(__this, 2, NULL);
		V_1 = L_14;
		// return (currentTrackedHandedness == Handedness.Left && !trackingLeft) ||
		//        (currentTrackedHandedness == Handedness.Right && !trackingRight);
		int32_t L_15 = __this->___currentTrackedHandedness_19;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_008b;
		}
	}

IL_007b:
	{
		int32_t L_17 = __this->___currentTrackedHandedness_19;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_0089;
		}
	}
	{
		bool L_18 = V_1;
		return (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
	}

IL_0089:
	{
		return (bool)0;
	}

IL_008b:
	{
		return (bool)1;
	}

IL_008d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsHandTracked(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsHandTracked_m77DDA91FF044D8190170A6D30506751B55479FDB (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, int32_t ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRNode? node = hand.ToXRNode();
		int32_t L_0 = ___hand0;
		Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 L_1;
		L_1 = HandednessExtensions_ToXRNode_m30AFACB24E4DAC09672D1545AE3624C47E9B294E(L_0, NULL);
		V_0 = L_1;
		// if (!node.HasValue) { return false; }
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_inline((&V_0), Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (!node.HasValue) { return false; }
		return (bool)0;
	}

IL_0012:
	{
		// return XRSubsystemHelpers.HandsAggregator != null;
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD* L_3;
		L_3 = XRSubsystemHelpers_get_HandsAggregator_m57B9CCC9BD226E130D3A7A9053040D5EC258A00F(NULL);
		return (bool)((!(((RuntimeObject*)(HandsAggregatorSubsystem_t2294604ECCC3071CADA69D1B9F999DC6936948CD*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mE7ABCEF219F6927F10B7093A7DFED8DAB1169747 (int32_t ___hand0, const RuntimeMethod* method) 
{
	{
		// return hand <= Handedness.Both;
		int32_t L_0 = ___hand0;
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_mA5AD936FDC98A99D51FEE36B4F336DCD261C97DD (int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// return type == TrackedObjectType.Head || type >= TrackedObjectType.ControllerRay;
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___type0;
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_000b:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler__ctor_m50B0344592599F156BDF70FBA2FEEBDDFF8F3A1B (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m895644AC4469104C2CAFCED11536D09EF95C7F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Handedness trackedHandedness = Handedness.Both;
		__this->___trackedHandedness_7 = 3;
		// private bool updateSolvers = true;
		__this->___updateSolvers_12 = (bool)1;
		// protected List<Solver> solvers = new List<Solver>();
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_0 = (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*)il2cpp_codegen_object_new(List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m895644AC4469104C2CAFCED11536D09EF95C7F11(L_0, List_1__ctor_m895644AC4469104C2CAFCED11536D09EF95C7F11_RuntimeMethod_var);
		__this->___solvers_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___solvers_13), (void*)L_0);
		// protected Handedness preferredTrackedHandedness = Handedness.Left;
		__this->___preferredTrackedHandedness_20 = 1;
		// private List<Solver> inspectorOrderedSolvers = new List<Solver>();
		List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8* L_1 = (List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8*)il2cpp_codegen_object_new(List_1_t0E4DB856A34E4504B39833E0EBB4D622C63023D8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m895644AC4469104C2CAFCED11536D09EF95C7F11(L_1, List_1__ctor_m895644AC4469104C2CAFCED11536D09EF95C7F11_RuntimeMethod_var);
		__this->___inspectorOrderedSolvers_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inspectorOrderedSolvers_25), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler__cctor_m2BA607A17E83535E0B36EB720EB3DBF74640B70A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06620C4FFB77E4D531D0907F2C25F88CC2060A8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A465FF80F4FBEF13B6C41DD4A6D70DA1B682CCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker AttachToNewTrackedObjectPerfMarker =
		//     new ProfilerMarker("[MRTK] SolverHandler.AttachToNewTrackedObject");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral06620C4FFB77E4D531D0907F2C25F88CC2060A8D, /*hidden argument*/NULL);
		((SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_StaticFields*)il2cpp_codegen_static_fields_for(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var))->___AttachToNewTrackedObjectPerfMarker_27 = L_0;
		// private static readonly ProfilerMarker UpdateCachedHandJointTransformPerfMarker =
		//     new ProfilerMarker("[MRTK] SolverHandler.UpdateCachedHandJointTransform");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral4A465FF80F4FBEF13B6C41DD4A6D70DA1B682CCF, /*hidden argument*/NULL);
		((SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_StaticFields*)il2cpp_codegen_static_fields_for(SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239_il2cpp_TypeInfo_var))->___UpdateCachedHandJointTransformPerfMarker_28 = L_1;
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
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* SurfaceMagnetism_get_MagneticSurfaces_mC7E03D73127B7915660AE6F26231C2D04DD32D9C (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = __this->___magneticSurfaces_14;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MagneticSurfaces_m5E9944E49EBD5F056974306F8202D0B6EA4887BF (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___value0, const RuntimeMethod* method) 
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = ___value0;
		__this->___magneticSurfaces_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___magneticSurfaces_14), (void*)L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxRaycastDistance_mD1FE48BE4F8ACCC8CA5008E81ADE2CE8FFBC6C2B (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->___maxRaycastDistance_15;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxRaycastDistance_m29B74F812F8D3BB5867AED4ABE6378896E09CDD4 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->___maxRaycastDistance_15 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_ClosestDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ClosestDistance_mDFE523D3DD41FDE796FE1333C640C98280F2732A (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => closestDistance;
		float L_0 = __this->___closestDistance_16;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_ClosestDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_ClosestDistance_m624AD40EC1D89A5AC80C102931AC3D4376F71066 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => closestDistance = value;
		float L_0 = ___value0;
		__this->___closestDistance_16 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceNormalOffset_m6A8EDE5024DADC1E9A561D209ADDCF2AE5EF1E2C (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->___surfaceNormalOffset_17;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceNormalOffset_m2EF9086FC46596C806A18C8BE78B7A2BC2B1D4E4 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->___surfaceNormalOffset_17 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_SurfaceRayOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceRayOffset_m6DBDCFC848114814075407A414E0490C15972E23 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => surfaceRayOffset;
		float L_0 = __this->___surfaceRayOffset_18;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_SurfaceRayOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceRayOffset_m2F8603928455EA1F8C188D385FD0FDE50483F214 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => surfaceRayOffset = value;
		float L_0 = ___value0;
		__this->___surfaceRayOffset_18 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mFDAAD284EC0853BE6EB37AB0D550F90C5DAA45A3 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->___raycastMode_19;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_RaycastMode(Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_RaycastMode_m763B412DFE5C4572C54EBCC8B3A78890063CF954 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => raycastMode = value;
		int32_t L_0 = ___value0;
		__this->___raycastMode_19 = L_0;
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_BoxRaysPerEdge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_BoxRaysPerEdge_mE81955E8833AE56B4AB82A831A9C216E920019AB (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => boxRaysPerEdge;
		int32_t L_0 = __this->___boxRaysPerEdge_20;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_BoxRaysPerEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_BoxRaysPerEdge_m15C6307B8702FCC1AE2D048D4479C92BA4E36C8E (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => boxRaysPerEdge = value;
		int32_t L_0 = ___value0;
		__this->___boxRaysPerEdge_20 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OrthographicBoxCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OrthographicBoxCast_mBCE550C6A2B467901B0B6B1D5E5D7BF733C0979F (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => orthographicBoxCast;
		bool L_0 = __this->___orthographicBoxCast_21;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OrthographicBoxCast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrthographicBoxCast_mAD2ED24A42013BBA6F5A80003B6507EDE8EB7657 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => orthographicBoxCast = value;
		bool L_0 = ___value0;
		__this->___orthographicBoxCast_21 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_MaximumNormalVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaximumNormalVariance_m1D6223D27766598948722065E3C3055C82641E90 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => maximumNormalVariance;
		float L_0 = __this->___maximumNormalVariance_22;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_MaximumNormalVariance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaximumNormalVariance_m77DF746217892D55B137E8681611778B9B7FA550 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => maximumNormalVariance = value;
		float L_0 = ___value0;
		__this->___maximumNormalVariance_22 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_SphereSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SphereSize_mC380E857BE262BB8C614807CD2D3EDCD74FA412A (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => sphereSize;
		float L_0 = __this->___sphereSize_23;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_SphereSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SphereSize_mAC7774D8F868857A9B9AB4333C625E0137CBE122 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => sphereSize = value;
		float L_0 = ___value0;
		__this->___sphereSize_23 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_VolumeCastSizeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_VolumeCastSizeOverride_m84F875927037DA853AE946962890AA21E7EC5DE8 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => volumeCastSizeOverride;
		float L_0 = __this->___volumeCastSizeOverride_24;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_VolumeCastSizeOverride(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_VolumeCastSizeOverride_m1DC404CFDF0372C43D87C1F94EE8ADBA8EAFCAE5 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => volumeCastSizeOverride = value;
		float L_0 = ___value0;
		__this->___volumeCastSizeOverride_24 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_UseLinkedAltScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_UseLinkedAltScaleOverride_m73790385C79C3A0919AD83C646FC09C5F4B56359 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => useLinkedAltScaleOverride;
		bool L_0 = __this->___useLinkedAltScaleOverride_25;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_UseLinkedAltScaleOverride(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_UseLinkedAltScaleOverride_m3FB3AD638049409CD045EFBB23059EACD556983C (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useLinkedAltScaleOverride = value;
		bool L_0 = ___value0;
		__this->___useLinkedAltScaleOverride_25 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mC7B1F47D3007F223CDB981C1B9D0832382A52151 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->___currentRaycastDirectionMode_26;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_CurrentRaycastDirectionMode(Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentRaycastDirectionMode_mC8E15E3FB942B6D4B168FBE12B64BC57C8EC4BDF (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => currentRaycastDirectionMode = value;
		int32_t L_0 = ___value0;
		__this->___currentRaycastDirectionMode_26 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m6B5E72108852C0A2C6649F8A692072F7B6FE5609 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->___orientationMode_27;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_CurrentOrientationMode(Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentOrientationMode_m9A88C0631F53E6A085C6BA5659BFEDBB249F55B4 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => orientationMode = value;
		int32_t L_0 = ___value0;
		__this->___orientationMode_27 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OrientationBlend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_OrientationBlend_mD9DD852E33415303E5B9B55AF6FB88AC8DA4C6C4 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => orientationBlend;
		float L_0 = __this->___orientationBlend_28;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OrientationBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrientationBlend_m1F0B7E3F0B96F9E29A52E880A5AEE2750273C269 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => orientationBlend = value;
		float L_0 = ___value0;
		__this->___orientationBlend_28 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m68E1C29717F51085E522722EB4F3E6F159CE8B8D (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->___keepOrientationVertical_29;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_KeepOrientationVertical_m69B808A0CEC7A2149BF47074B1FE40420F9D609A (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->___keepOrientationVertical_29 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m6A658D220D3DD464FA1205C0806BA64926145252 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => debugEnabled;
		bool L_0 = __this->___debugEnabled_30;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_DebugEnabled_mC8D2C879563848AACF2500AE6DBE717398F0302C (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->___debugEnabled_30 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OnSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_mCE4408F81276956894333550A4CEF137B927B916 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->___U3COnSurfaceU3Ek__BackingField_31;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mC00F6AEC77FA65C6B46020999D3E8FB7FA07DC34 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->___U3COnSurfaceU3Ek__BackingField_31 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastOrigin_m60F1AEC2D8719A999B4B14D8E66F1C7844FE9CB1 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 RaycastOrigin => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_0 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_3 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		return L_5;
	}

IL_0024:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastEndPoint_mB07661115CA5DBA45960061BC41BD24992C12ED2 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 origin = RaycastOrigin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = SurfaceMagnetism_get_RaycastOrigin_m60F1AEC2D8719A999B4B14D8E66F1C7844FE9CB1(__this, NULL);
		// Vector3 endPoint = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		V_0 = L_1;
		// switch (CurrentRaycastDirectionMode)
		int32_t L_2;
		L_2 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_mC7B1F47D3007F223CDB981C1B9D0832382A52151_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0028:
	{
		// if (SolverHandler != null && SolverHandler.TransformTarget != null)
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_4 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_008b;
		}
	}
	{
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_6 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_008b;
		}
	}
	{
		// endPoint = SolverHandler.TransformTarget.position + SolverHandler.TransformTarget.forward;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_9 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_12 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_11, L_14, NULL);
		V_0 = L_15;
		// break;
		goto IL_008b;
	}

IL_0071:
	{
		// endPoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		V_0 = L_17;
		// break;
		goto IL_008b;
	}

IL_007f:
	{
		// endPoint = SolverHandler.GoalPosition;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_18 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = SolverHandler_get_GoalPosition_mAC6D9D9E114BBFE15908F8D0B9B5291A5CB3A296_inline(L_18, NULL);
		V_0 = L_19;
	}

IL_008b:
	{
		// return endPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		return L_20;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastDirection_m0391E99A238B9F463346B64635C886517EE5E426 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		V_0 = L_0;
		// if (CurrentRaycastDirectionMode == RaycastDirectionMode.TrackedTargetForward)
		int32_t L_1;
		L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_mC7B1F47D3007F223CDB981C1B9D0832382A52151_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_2 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// direction = SolverHandler.TransformTarget.forward;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_5 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		V_0 = L_7;
		goto IL_004e;
	}

IL_0034:
	{
		// direction = (RaycastEndPoint - RaycastOrigin).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = SurfaceMagnetism_get_RaycastEndPoint_mB07661115CA5DBA45960061BC41BD24992C12ED2(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = SurfaceMagnetism_get_RaycastOrigin_m60F1AEC2D8719A999B4B14D8E66F1C7844FE9CB1(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_9, NULL);
		V_1 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_11;
	}

IL_004e:
	{
		// return direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m9C7B044FD12281D26A7C4592CFDF43BF67946497 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// private float ScaleOverride => useLinkedAltScaleOverride ? SolverHandler.AltScale.Current.magnitude : volumeCastSizeOverride;
		bool L_0 = __this->___useLinkedAltScaleOverride_25;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->___volumeCastSizeOverride_24;
		return L_1;
	}

IL_000f:
	{
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_2 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_2);
		Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 L_3;
		L_3 = SolverHandler_get_AltScale_m5585214D664D0D49549B97AD7E11FCE3FAC0235D_inline(L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3Smoothed_get_Current_m8D4FE3D378BB06AA3FFBFB06541499E9B8735924_inline((&V_0), NULL);
		V_1 = L_4;
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SurfaceMagnetism_CalculateMagnetismOrientation_mA3B1D4D2F8AA5AF35319D133CEAFDA7CBA48CCA0 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___surfaceNormal1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// Vector3 currentUpVector = WorkingRotation * Vector3.up;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Solver_get_WorkingRotation_m95CE718D44B75E2621778C585AC721E21BAAE368(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_0, L_1, NULL);
		V_0 = L_2;
		// Quaternion trackedReferenceRotation = Quaternion.LookRotation(-direction, currentUpVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___direction0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_4, L_5, NULL);
		V_1 = L_6;
		// Quaternion surfaceReferenceRotation = Quaternion.LookRotation(-surfaceNormal, currentUpVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___surfaceNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_8, L_9, NULL);
		V_2 = L_10;
		// if (KeepOrientationVertical)
		bool L_11;
		L_11 = SurfaceMagnetism_get_KeepOrientationVertical_m68E1C29717F51085E522722EB4F3E6F159CE8B8D_inline(__this, NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// Vector3 trackedReferenceUp = trackedReferenceRotation * Vector3.up;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_12, L_13, NULL);
		// trackedReferenceRotation = Quaternion.FromToRotation(trackedReferenceUp, Vector3.up) * trackedReferenceRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_14, L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_16, L_17, NULL);
		V_1 = L_18;
		// Vector3 surfaceReferenceUp = surfaceReferenceRotation * Vector3.up;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_19, L_20, NULL);
		// surfaceReferenceRotation = Quaternion.FromToRotation(surfaceReferenceUp, Vector3.up) * surfaceReferenceRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_21, L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_23, L_24, NULL);
		V_2 = L_25;
	}

IL_006b:
	{
		// switch (CurrentOrientationMode)
		int32_t L_26;
		L_26 = SurfaceMagnetism_get_CurrentOrientationMode_m6B5E72108852C0A2C6649F8A692072F7B6FE5609_inline(__this, NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		switch (L_27)
		{
			case 0:
			{
				goto IL_008e;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_009e;
			}
			case 4:
			{
				goto IL_00ac;
			}
		}
	}
	{
		goto IL_00b8;
	}

IL_008e:
	{
		// return SolverHandler.GoalRotation;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_28 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_28);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = SolverHandler_get_GoalRotation_m19C33213AC5284A50013A8BFC4E742EC360C78F2_inline(L_28, NULL);
		return L_29;
	}

IL_009a:
	{
		// return trackedReferenceRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_1;
		return L_30;
	}

IL_009c:
	{
		// return surfaceReferenceRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_2;
		return L_31;
	}

IL_009e:
	{
		// return Quaternion.Slerp(trackedReferenceRotation, surfaceReferenceRotation, orientationBlend);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_2;
		float L_34 = __this->___orientationBlend_28;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_32, L_33, L_34, NULL);
		return L_35;
	}

IL_00ac:
	{
		// return Quaternion.LookRotation(direction, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___direction0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_36, L_37, NULL);
		return L_38;
	}

IL_00b8:
	{
		// return Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		return L_39;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_m24626BC637536CF096D362D68FDFDC8AEB180F25 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// using (SolverUpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_StaticFields*)il2cpp_codegen_static_fields_for(SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_35;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cb:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// GoalPosition = WorkingPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = Solver_get_WorkingPosition_mCBB4E13014E3E32F3E63F4D9837B81AAB555302A(__this, NULL);
				Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_2, NULL);
				// GoalRotation = WorkingRotation;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
				L_3 = Solver_get_WorkingRotation_m95CE718D44B75E2621778C585AC721E21BAAE368(__this, NULL);
				Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD(__this, L_3, NULL);
				// Vector3 origin = RaycastOrigin;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
				L_4 = SurfaceMagnetism_get_RaycastOrigin_m60F1AEC2D8719A999B4B14D8E66F1C7844FE9CB1(__this, NULL);
				V_2 = L_4;
				// Vector3 endpoint = RaycastEndPoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
				L_5 = SurfaceMagnetism_get_RaycastEndPoint_mB07661115CA5DBA45960061BC41BD24992C12ED2(__this, NULL);
				V_3 = L_5;
				// currentRayStep.UpdateRayStep(ref origin, ref endpoint);
				RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_6 = (&__this->___currentRayStep_33);
				RayStep_UpdateRayStep_m390190E2A74CE4BFC1EE908921C6A428E0884979(L_6, (&V_2), (&V_3), NULL);
				// if (currentRayStep.Direction == Vector3.zero)
				RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_7 = (&__this->___currentRayStep_33);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
				L_8 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_7, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
				bool L_10;
				L_10 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_8, L_9, NULL);
				if (!L_10)
				{
					goto IL_005c_1;
				}
			}
			{
				// return;
				goto IL_00d9;
			}

IL_005c_1:
			{
				// if (DebugEnabled)
				bool L_11;
				L_11 = SurfaceMagnetism_get_DebugEnabled_m6A658D220D3DD464FA1205C0806BA64926145252_inline(__this, NULL);
				if (!L_11)
				{
					goto IL_0084_1;
				}
			}
			{
				// Debug.DrawLine(currentRayStep.Origin, currentRayStep.Terminus, Color.magenta);
				RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_12 = (&__this->___currentRayStep_33);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = RayStep_get_Origin_m55D28125AEBF276219807124A78D34F95F009BA8_inline(L_12, NULL);
				RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_14 = (&__this->___currentRayStep_33);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = RayStep_get_Terminus_mDF1E2E159EE60609174D488A6B617F0E277A9251_inline(L_14, NULL);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
				L_16 = Color_get_magenta_mF552F660CB0E42F18558AD59D516EBAC923F57E2_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_DrawLine_m779395806A8620C335ABD1BEAF99C9451B07C8A9(L_13, L_15, L_16, NULL);
			}

IL_0084_1:
			{
				// switch (RaycastMode)
				int32_t L_17;
				L_17 = SurfaceMagnetism_get_RaycastMode_mFDAAD284EC0853BE6EB37AB0D550F90C5DAA45A3_inline(__this, NULL);
				V_4 = L_17;
				int32_t L_18 = V_4;
				switch (L_18)
				{
					case 0:
					{
						goto IL_00a1_1;
					}
					case 1:
					{
						goto IL_00af_1;
					}
					case 2:
					{
						goto IL_00bd_1;
					}
				}
			}
			{
				goto IL_00d9;
			}

IL_00a1_1:
			{
				// SimpleRaycastStepUpdate(ref this.currentRayStep);
				RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_19 = (&__this->___currentRayStep_33);
				SurfaceMagnetism_SimpleRaycastStepUpdate_mC88C8BE45C17FE05C813896A5A9ECBF7E14F1441(__this, L_19, NULL);
				// break;
				goto IL_00d9;
			}

IL_00af_1:
			{
				// BoxRaycastStepUpdate(ref this.currentRayStep);
				RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_20 = (&__this->___currentRayStep_33);
				SurfaceMagnetism_BoxRaycastStepUpdate_mFF6EB4F88E2C379C51003D96F12C305E69F11F42(__this, L_20, NULL);
				// break;
				goto IL_00d9;
			}

IL_00bd_1:
			{
				// SphereRaycastStepUpdate(ref this.currentRayStep);
				RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_21 = (&__this->___currentRayStep_33);
				SurfaceMagnetism_SphereRaycastStepUpdate_mB5EE7A52A4BD0579F707D1ABC8ADC056BE14D48C(__this, L_21, NULL);
				// break;
				goto IL_00d9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_mC88C8BE45C17FE05C813896A5A9ECBF7E14F1441 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* ___rayStep0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t9CB5AF2F8E1691C2DBE53619E1BB603BBA4E1630_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// OnSurface = MixedRealityRaycaster.RaycastSimplePhysicsStep(
		//     rayStep,
		//     maxRaycastDistance,
		//     magneticSurfaces,
		//     false,
		//     out RaycastHit result);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_0 = ___rayStep0;
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 L_1 = (*(RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94*)L_0);
		float L_2 = __this->___maxRaycastDistance_15;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_3 = __this->___magneticSurfaces_14;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityRaycaster_t9CB5AF2F8E1691C2DBE53619E1BB603BBA4E1630_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = MixedRealityRaycaster_RaycastSimplePhysicsStep_m6E5D30FC04C75246EAD64F28D49CFAAE3590371F(L_1, L_2, L_3, (bool)0, (&V_0), NULL);
		SurfaceMagnetism_set_OnSurface_mC00F6AEC77FA65C6B46020999D3E8FB7FA07DC34_inline(__this, L_4, NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_6 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RayStep_get_Origin_m55D28125AEBF276219807124A78D34F95F009BA8_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_5, L_7, NULL);
		V_1 = L_8;
		// float length = hitDelta.magnitude;
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		// if (length < closestDistance)
		float L_10 = __this->___closestDistance_16;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0065;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_11 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RayStep_get_Origin_m55D28125AEBF276219807124A78D34F95F009BA8_inline(L_11, NULL);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_13 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_13, NULL);
		float L_15 = __this->___closestDistance_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_16, NULL);
		RaycastHit_set_point_m3B63BEB25A82BFCF9FBB300022D0362BC2CF9E11((&V_0), L_17, NULL);
	}

IL_0065:
	{
		// if (OnSurface)
		bool L_18;
		L_18 = SurfaceMagnetism_get_OnSurface_mCE4408F81276956894333550A4CEF137B927B916_inline(__this, NULL);
		if (!L_18)
		{
			goto IL_00c0;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		float L_20 = __this->___surfaceNormalOffset_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_22, NULL);
		float L_24 = __this->___surfaceRayOffset_18;
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_25 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_24, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_27, NULL);
		Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_28, NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_29 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = SurfaceMagnetism_CalculateMagnetismOrientation_mA3B1D4D2F8AA5AF35319D133CEAFDA7CBA48CCA0(__this, L_30, L_31, NULL);
		Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD(__this, L_32, NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mB5EE7A52A4BD0579F707D1ABC8ADC056BE14D48C (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* ___rayStep0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t9CB5AF2F8E1691C2DBE53619E1BB603BBA4E1630_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float G_B3_0 = 0.0f;
	{
		// float size = ScaleOverride > 0 ? ScaleOverride : transform.lossyScale.x * sphereSize;
		float L_0;
		L_0 = SurfaceMagnetism_get_ScaleOverride_m9C7B044FD12281D26A7C4592CFDF43BF67946497(__this, NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0026;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = __this->___sphereSize_23;
		G_B3_0 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		goto IL_002c;
	}

IL_0026:
	{
		float L_5;
		L_5 = SurfaceMagnetism_get_ScaleOverride_m9C7B044FD12281D26A7C4592CFDF43BF67946497(__this, NULL);
		G_B3_0 = L_5;
	}

IL_002c:
	{
		V_0 = G_B3_0;
		// OnSurface = MixedRealityRaycaster.RaycastSpherePhysicsStep(rayStep, size, maxRaycastDistance, magneticSurfaces, false, out RaycastHit result);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_6 = ___rayStep0;
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 L_7 = (*(RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94*)L_6);
		float L_8 = V_0;
		float L_9 = __this->___maxRaycastDistance_15;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_10 = __this->___magneticSurfaces_14;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityRaycaster_t9CB5AF2F8E1691C2DBE53619E1BB603BBA4E1630_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_m1C8A0A8316F2E0A250DCE3E9F2BAB4405813F932(L_7, L_8, L_9, L_10, (bool)0, (&V_1), NULL);
		SurfaceMagnetism_set_OnSurface_mC00F6AEC77FA65C6B46020999D3E8FB7FA07DC34_inline(__this, L_11, NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_13 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RayStep_get_Origin_m55D28125AEBF276219807124A78D34F95F009BA8_inline(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_14, NULL);
		V_2 = L_15;
		// float length = hitDelta.magnitude;
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		// if (length < closestDistance)
		float L_17 = __this->___closestDistance_16;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_0093;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_18 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = RayStep_get_Origin_m55D28125AEBF276219807124A78D34F95F009BA8_inline(L_18, NULL);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_20 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_20, NULL);
		float L_22 = __this->___closestDistance_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_23, NULL);
		RaycastHit_set_point_m3B63BEB25A82BFCF9FBB300022D0362BC2CF9E11((&V_1), L_24, NULL);
	}

IL_0093:
	{
		// if (OnSurface)
		bool L_25;
		L_25 = SurfaceMagnetism_get_OnSurface_mCE4408F81276956894333550A4CEF137B927B916_inline(__this, NULL);
		if (!L_25)
		{
			goto IL_00ee;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		float L_27 = __this->___surfaceNormalOffset_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_26, L_29, NULL);
		float L_31 = __this->___surfaceRayOffset_18;
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_32 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_31, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_30, L_34, NULL);
		Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_35, NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_36 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = SurfaceMagnetism_CalculateMagnetismOrientation_mA3B1D4D2F8AA5AF35319D133CEAFDA7CBA48CCA0(__this, L_37, L_38, NULL);
		Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD(__this, L_39, NULL);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_mFF6EB4F88E2C379C51003D96F12C305E69F11F42 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* ___rayStep0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t9CB5AF2F8E1691C2DBE53619E1BB603BBA4E1630_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_5 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector3 scale = ScaleOverride > 0 ? transform.lossyScale.normalized * ScaleOverride : transform.lossyScale;
		float L_0;
		L_0 = SurfaceMagnetism_get_ScaleOverride_m9C7B044FD12281D26A7C4592CFDF43BF67946497(__this, NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0039;
	}

IL_001a:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_3, NULL);
		V_7 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		float L_6;
		L_6 = SurfaceMagnetism_get_ScaleOverride_m9C7B044FD12281D26A7C4592CFDF43BF67946497(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		G_B3_0 = L_7;
	}

IL_0039:
	{
		V_0 = G_B3_0;
		// Quaternion orientation = orientationMode == OrientationMode.None ?
		//     Quaternion.LookRotation(rayStep.Direction, Vector3.up) :
		//     CalculateMagnetismOrientation(rayStep.Direction, Vector3.up);
		int32_t L_8 = __this->___orientationMode_27;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_9 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = SurfaceMagnetism_CalculateMagnetismOrientation_mA3B1D4D2F8AA5AF35319D133CEAFDA7CBA48CCA0(__this, L_10, L_11, NULL);
		G_B6_0 = L_12;
		goto IL_0065;
	}

IL_0055:
	{
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_13 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_14, L_15, NULL);
		G_B6_0 = L_16;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		// Matrix4x4 targetMatrix = Matrix4x4.TRS(Vector3.zero, orientation, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20;
		L_20 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_17, L_18, L_19, NULL);
		V_2 = L_20;
		// if (this.boxCollider == null)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_21 = __this->___boxCollider_34;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_008d;
		}
	}
	{
		// this.boxCollider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_23;
		L_23 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->___boxCollider_34 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boxCollider_34), (void*)L_23);
	}

IL_008d:
	{
		// Vector3 extents = boxCollider.size;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_24 = __this->___boxCollider_34;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_24, NULL);
		V_3 = L_25;
		// if (MixedRealityRaycaster.RaycastBoxPhysicsStep(rayStep, extents, transform.position, targetMatrix, maxRaycastDistance, magneticSurfaces, boxRaysPerEdge, orthographicBoxCast, false, out Vector3[] positions, out Vector3[] normals, out bool[] hits))
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_26 = ___rayStep0;
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 L_27 = (*(RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94*)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31 = V_2;
		float L_32 = __this->___maxRaycastDistance_15;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_33 = __this->___magneticSurfaces_14;
		int32_t L_34 = __this->___boxRaysPerEdge_20;
		bool L_35 = __this->___orthographicBoxCast_21;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityRaycaster_t9CB5AF2F8E1691C2DBE53619E1BB603BBA4E1630_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = MixedRealityRaycaster_RaycastBoxPhysicsStep_m02BEC27E0D06263E3396BDD784E3EF7031FA2361(L_27, L_28, L_30, L_31, L_32, L_33, L_34, L_35, (bool)0, (&V_4), (&V_5), (&V_6), NULL);
		if (!L_36)
		{
			goto IL_0233;
		}
	}
	{
		// FindPlacementPlane(rayStep.Origin, rayStep.Direction, positions,
		//     normals, hits, boxCollider.size.x, maximumNormalVariance, false,
		//     orientationMode == OrientationMode.None, out Plane plane, out float distance);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_37 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RayStep_get_Origin_m55D28125AEBF276219807124A78D34F95F009BA8_inline(L_37, NULL);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_39 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_39, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_41 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = V_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_43 = V_6;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_44 = __this->___boxCollider_34;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_44, NULL);
		float L_46 = L_45.___x_2;
		float L_47 = __this->___maximumNormalVariance_22;
		int32_t L_48 = __this->___orientationMode_27;
		SurfaceMagnetism_FindPlacementPlane_m2EC0AB9EF2A750496137B54DFB30E53559351465(__this, L_38, L_40, L_41, L_42, L_43, L_46, L_47, (bool)0, (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0), (&V_8), (&V_9), NULL);
		// float verticalCorrectionOffset = 0;
		V_10 = (0.0f);
		// if (IsNormalVertical(plane.normal) && !Mathf.Approximately(rayStep.Direction.y, 0))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_8), NULL);
		il2cpp_codegen_runtime_class_init_inline(SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = SurfaceMagnetism_IsNormalVertical_mC310C0A7ABC2519799A946D632BBCC9C4AB556CC(L_49, NULL);
		if (!L_50)
		{
			goto IL_018f;
		}
	}
	{
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_51 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_51, NULL);
		float L_53 = L_52.___y_3;
		bool L_54;
		L_54 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_53, (0.0f), NULL);
		if (L_54)
		{
			goto IL_018f;
		}
	}
	{
		// float boxSurfaceVerticalOffset = targetMatrix.MultiplyVector(new Vector3(0, extents.y * 0.5f, 0)).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_3;
		float L_56 = L_55.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_57), (0.0f), ((float)il2cpp_codegen_multiply(L_56, (0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_57, NULL);
		V_7 = L_58;
		float L_59;
		L_59 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_7), NULL);
		// Vector3 correctionVector = boxSurfaceVerticalOffset * (rayStep.Direction / rayStep.Direction.y);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_60 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_60, NULL);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_62 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_62, NULL);
		float L_64 = L_63.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_61, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_59, L_65, NULL);
		V_12 = L_66;
		// verticalCorrectionOffset = -correctionVector.magnitude;
		float L_67;
		L_67 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_12), NULL);
		V_10 = ((-L_67));
	}

IL_018f:
	{
		// float boxSurfaceOffset = targetMatrix.MultiplyVector(new Vector3(0, 0, extents.z * 0.5f)).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_3;
		float L_69 = L_68.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_69, (0.5f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_70, NULL);
		V_7 = L_71;
		float L_72;
		L_72 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_7), NULL);
		V_11 = L_72;
		// GoalPosition = rayStep.Origin + rayStep.Direction * Mathf.Max(closestDistance, distance + surfaceRayOffset + boxSurfaceOffset + verticalCorrectionOffset) + plane.normal * (0 * boxSurfaceOffset + surfaceNormalOffset);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_73 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = RayStep_get_Origin_m55D28125AEBF276219807124A78D34F95F009BA8_inline(L_73, NULL);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_75 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_75, NULL);
		float L_77 = __this->___closestDistance_16;
		float L_78 = V_9;
		float L_79 = __this->___surfaceRayOffset_18;
		float L_80 = V_11;
		float L_81 = V_10;
		float L_82;
		L_82 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_77, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_78, L_79)), L_80)), L_81)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_76, L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_74, L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_8), NULL);
		float L_86 = V_11;
		float L_87 = __this->___surfaceNormalOffset_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_85, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((0.0f), L_86)), L_87)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_84, L_88, NULL);
		Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_89, NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, plane.normal);
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_90 = ___rayStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_8), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = SurfaceMagnetism_CalculateMagnetismOrientation_mA3B1D4D2F8AA5AF35319D133CEAFDA7CBA48CCA0(__this, L_91, L_92, NULL);
		Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD(__this, L_93, NULL);
		// OnSurface = true;
		SurfaceMagnetism_set_OnSurface_mC00F6AEC77FA65C6B46020999D3E8FB7FA07DC34_inline(__this, (bool)1, NULL);
		return;
	}

IL_0233:
	{
		// OnSurface = false;
		SurfaceMagnetism_set_OnSurface_mC00F6AEC77FA65C6B46020999D3E8FB7FA07DC34_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m2EC0AB9EF2A750496137B54DFB30E53559351465 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions2, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals3, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___plane9, float* ___closestDistance10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C5F77CBC6B48EEFA86CFC18E2E3A9CDF9071345);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_22;
	memset((&V_22), 0, sizeof(V_22));
	float V_23 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B48_0;
	memset((&G_B48_0), 0, sizeof(G_B48_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B47_0;
	memset((&G_B47_0), 0, sizeof(G_B47_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B49_0;
	memset((&G_B49_0), 0, sizeof(G_B49_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B49_1;
	memset((&G_B49_1), 0, sizeof(G_B49_1));
	{
		// int rayCount = positions.Length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___positions2;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// Vector3 originalDirection = direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___direction1;
		V_1 = L_1;
		// if (constrainVertical)
		bool L_2 = ___constrainVertical7;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// direction.y = 0.0f;
		(&___direction1)->___y_3 = (0.0f);
		// direction = direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___direction1), NULL);
		___direction1 = L_3;
	}

IL_001f:
	{
		// closestDistance = float.PositiveInfinity;
		float* L_4 = ___closestDistance10;
		*((float*)L_4) = (float)(std::numeric_limits<float>::infinity());
		// int numHits = 0;
		V_2 = 0;
		// int closestPointIdx = -1;
		V_3 = (-1);
		// float farthestDistance = 0f;
		V_4 = (0.0f);
		// var averageNormal = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_5 = L_5;
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_13 = 0;
		goto IL_0090;
	}

IL_003e:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___hits4;
		int32_t L_7 = V_13;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		// float distance = Vector3.Dot(direction, positions[hitIndex] - origin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___direction1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = ___positions2;
		int32_t L_12 = V_13;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_10, L_16, NULL);
		V_14 = L_17;
		// if (distance < closestDistance)
		float L_18 = V_14;
		float* L_19 = ___closestDistance10;
		float L_20 = *((float*)L_19);
		if ((!(((float)L_18) < ((float)L_20))))
		{
			goto IL_006a;
		}
	}
	{
		// closestPointIdx = hitIndex;
		int32_t L_21 = V_13;
		V_3 = L_21;
		// closestDistance = distance;
		float* L_22 = ___closestDistance10;
		float L_23 = V_14;
		*((float*)L_22) = (float)L_23;
	}

IL_006a:
	{
		// if (distance > farthestDistance)
		float L_24 = V_14;
		float L_25 = V_4;
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_0074;
		}
	}
	{
		// farthestDistance = distance;
		float L_26 = V_14;
		V_4 = L_26;
	}

IL_0074:
	{
		// averageNormal += normals[hitIndex];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = ___normals3;
		int32_t L_29 = V_13;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_27, L_31, NULL);
		V_5 = L_32;
		// ++numHits;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_008a:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_34 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0090:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_35 = V_13;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_003e;
		}
	}
	{
		// Vector3 closestPoint = positions[closestPointIdx];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = ___positions2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_6 = L_40;
		// averageNormal /= numHits;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_5;
		int32_t L_42 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_41, ((float)L_42), NULL);
		V_5 = L_43;
		// float variance = 0;
		V_7 = (0.0f);
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		V_15 = 0;
		goto IL_00e0;
	}

IL_00b5:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_44 = ___hits4;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint8_t L_47 = (uint8_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if (!L_47)
		{
			goto IL_00da;
		}
	}
	{
		// variance += (normals[hitIndex] - averageNormal).magnitude;
		float L_48 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_49 = ___normals3;
		int32_t L_50 = V_15;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_52, L_53, NULL);
		V_16 = L_54;
		float L_55;
		L_55 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_16), NULL);
		V_7 = ((float)il2cpp_codegen_add(L_48, L_55));
	}

IL_00da:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_56 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00e0:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_57 = V_15;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00b5;
		}
	}
	{
		// variance /= numHits;
		float L_59 = V_7;
		int32_t L_60 = V_2;
		V_7 = ((float)(L_59/((float)L_60)));
		// if (variance > maxNormalVariance || numHits < rayCount * 0.25f)
		float L_61 = V_7;
		float L_62 = ___maxNormalVariance6;
		if ((((float)L_61) > ((float)L_62)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_63 = V_2;
		int32_t L_64 = V_0;
		if ((!(((float)((float)L_63)) < ((float)((float)il2cpp_codegen_multiply(((float)L_64), (0.25f)))))))
		{
			goto IL_0113;
		}
	}

IL_00fe:
	{
		// plane = new Plane(-direction, closestPoint);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_65 = ___plane9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = ___direction1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_6;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_69;
		memset((&L_69), 0, sizeof(L_69));
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&L_69), L_67, L_68, /*hidden argument*/NULL);
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)L_65 = L_69;
		// return;
		return;
	}

IL_0113:
	{
		// var lowAngle = float.PositiveInfinity;
		V_8 = (std::numeric_limits<float>::infinity());
		// var highAngle = float.NegativeInfinity;
		V_9 = (-std::numeric_limits<float>::infinity());
		// int lowIndex = -1;
		V_10 = (-1);
		// int highIndex = -1;
		V_11 = (-1);
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_17 = 0;
		goto IL_0193;
	}

IL_012c:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx)
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_70 = ___hits4;
		int32_t L_71 = V_17;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint8_t L_73 = (uint8_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if (!L_73)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_74 = V_17;
		int32_t L_75 = V_3;
		if ((((int32_t)L_74) == ((int32_t)L_75)))
		{
			goto IL_018d;
		}
	}
	{
		// Vector3 difference = positions[hitIndex] - closestPoint;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = ___positions2;
		int32_t L_77 = V_17;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_79, L_80, NULL);
		V_18 = L_81;
		// if (constrainVertical)
		bool L_82 = ___constrainVertical7;
		if (!L_82)
		{
			goto IL_016e;
		}
	}
	{
		// difference.y = 0.0f;
		(&V_18)->___y_3 = (0.0f);
		// difference.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_18), NULL);
		// if (difference == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_85;
		L_85 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_83, L_84, NULL);
		if (L_85)
		{
			goto IL_018d;
		}
	}

IL_016e:
	{
		// difference.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_18), NULL);
		// float angle = Vector3.Dot(direction, difference);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = ___direction1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_18;
		float L_88;
		L_88 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_86, L_87, NULL);
		V_19 = L_88;
		// if (angle < lowAngle)
		float L_89 = V_19;
		float L_90 = V_8;
		if ((!(((float)L_89) < ((float)L_90))))
		{
			goto IL_018d;
		}
	}
	{
		// lowAngle = angle;
		float L_91 = V_19;
		V_8 = L_91;
		// lowIndex = hitIndex;
		int32_t L_92 = V_17;
		V_10 = L_92;
	}

IL_018d:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_93 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_0193:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_94 = V_17;
		int32_t L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_012c;
		}
	}
	{
		// if (!constrainVertical && lowIndex != -1)
		bool L_96 = ___constrainVertical7;
		if (L_96)
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_97 = V_10;
		if ((((int32_t)L_97) == ((int32_t)(-1))))
		{
			goto IL_0260;
		}
	}
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_20 = 0;
		goto IL_0258;
	}

IL_01af:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx || hitIndex == lowIndex)
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_98 = ___hits4;
		int32_t L_99 = V_20;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		uint8_t L_101 = (uint8_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		if (!L_101)
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_102 = V_20;
		int32_t L_103 = V_3;
		if ((((int32_t)L_102) == ((int32_t)L_103)))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_104 = V_20;
		int32_t L_105 = V_10;
		if ((((int32_t)L_104) == ((int32_t)L_105)))
		{
			goto IL_0252;
		}
	}
	{
		// float dot = Mathf.Abs(Vector3.Dot((positions[hitIndex] - closestPoint).normalized, (positions[lowIndex] - closestPoint).normalized));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = ___positions2;
		int32_t L_107 = V_20;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_109, L_110, NULL);
		V_16 = L_111;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113 = ___positions2;
		int32_t L_114 = V_10;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_116, L_117, NULL);
		V_16 = L_118;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		float L_120;
		L_120 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_112, L_119, NULL);
		float L_121;
		L_121 = fabsf(L_120);
		// if (dot > MaxDot)
		if ((((float)L_121) > ((float)(0.970000029f))))
		{
			goto IL_0252;
		}
	}
	{
		// float nextAngle = Mathf.Abs(Vector3.Dot(direction, Vector3.Cross(positions[lowIndex] - closestPoint, positions[hitIndex] - closestPoint).normalized));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = ___direction1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_123 = ___positions2;
		int32_t L_124 = V_10;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_126, L_127, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_129 = ___positions2;
		int32_t L_130 = V_20;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_132, L_133, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_128, L_134, NULL);
		V_16 = L_135;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		float L_137;
		L_137 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_122, L_136, NULL);
		float L_138;
		L_138 = fabsf(L_137);
		V_21 = L_138;
		// if (nextAngle > highAngle)
		float L_139 = V_21;
		float L_140 = V_9;
		if ((!(((float)L_139) > ((float)L_140))))
		{
			goto IL_0252;
		}
	}
	{
		// highAngle = nextAngle;
		float L_141 = V_21;
		V_9 = L_141;
		// highIndex = hitIndex;
		int32_t L_142 = V_20;
		V_11 = L_142;
	}

IL_0252:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_143 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_0258:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_144 = V_20;
		int32_t L_145 = V_0;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_01af;
		}
	}

IL_0260:
	{
		// if (lowIndex != -1)
		int32_t L_146 = V_10;
		if ((((int32_t)L_146) == ((int32_t)(-1))))
		{
			goto IL_0337;
		}
	}
	{
		// if (debugEnabled)
		bool L_147 = __this->___debugEnabled_30;
		if (!L_147)
		{
			goto IL_0284;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[lowIndex], Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_149 = ___positions2;
		int32_t L_150 = V_10;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_153;
		L_153 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m779395806A8620C335ABD1BEAF99C9451B07C8A9(L_148, L_152, L_153, NULL);
	}

IL_0284:
	{
		// if (highIndex != -1)
		int32_t L_154 = V_11;
		if ((((int32_t)L_154) == ((int32_t)(-1))))
		{
			goto IL_02d5;
		}
	}
	{
		// if (debugEnabled)
		bool L_155 = __this->___debugEnabled_30;
		if (!L_155)
		{
			goto IL_02a5;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[highIndex], Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_157 = ___positions2;
		int32_t L_158 = V_11;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_161;
		L_161 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m779395806A8620C335ABD1BEAF99C9451B07C8A9(L_156, L_160, L_161, NULL);
	}

IL_02a5:
	{
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, positions[highIndex] - closestPoint).normalized;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_162 = ___positions2;
		int32_t L_163 = V_10;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_165, L_166, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_168 = ___positions2;
		int32_t L_169 = V_11;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
		L_173 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_171, L_172, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		L_174 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_167, L_173, NULL);
		V_16 = L_174;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175;
		L_175 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		V_12 = L_175;
		goto IL_0318;
	}

IL_02d5:
	{
		// Vector3 planeUp = Vector3.Cross(positions[lowIndex] - closestPoint, direction);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_176 = ___positions2;
		int32_t L_177 = V_10;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181;
		L_181 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_179, L_180, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182 = ___direction1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_181, L_182, NULL);
		V_22 = L_183;
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, constrainVertical ? Vector3.up : planeUp).normalized;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_184 = ___positions2;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189;
		L_189 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_187, L_188, NULL);
		bool L_190 = ___constrainVertical7;
		G_B47_0 = L_189;
		if (L_190)
		{
			G_B48_0 = L_189;
			goto IL_0303;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_191 = V_22;
		G_B49_0 = L_191;
		G_B49_1 = G_B47_0;
		goto IL_0308;
	}

IL_0303:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192;
		L_192 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		G_B49_0 = L_192;
		G_B49_1 = G_B48_0;
	}

IL_0308:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
		L_193 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(G_B49_1, G_B49_0, NULL);
		V_16 = L_193;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		V_12 = L_194;
	}

IL_0318:
	{
		// if (debugEnabled)
		bool L_195 = __this->___debugEnabled_30;
		if (!L_195)
		{
			goto IL_0344;
		}
	}
	{
		// Debug.DrawLine(closestPoint, closestPoint + placementNormal, Color.blue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_196 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199;
		L_199 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_197, L_198, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_200;
		L_200 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m779395806A8620C335ABD1BEAF99C9451B07C8A9(L_196, L_199, L_200, NULL);
		goto IL_0344;
	}

IL_0337:
	{
		// placementNormal = direction * -1.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201 = ___direction1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202;
		L_202 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_201, (-1.0f), NULL);
		V_12 = L_202;
	}

IL_0344:
	{
		// if (Vector3.Dot(placementNormal, direction) > 0.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204 = ___direction1;
		float L_205;
		L_205 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_203, L_204, NULL);
		if ((!(((float)L_205) > ((float)(0.0f)))))
		{
			goto IL_0361;
		}
	}
	{
		// placementNormal *= -1.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_206 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207;
		L_207 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_206, (-1.0f), NULL);
		V_12 = L_207;
	}

IL_0361:
	{
		// plane = new Plane(placementNormal, closestPoint);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_208 = ___plane9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_210 = V_6;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_211;
		memset((&L_211), 0, sizeof(L_211));
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&L_211), L_209, L_210, /*hidden argument*/NULL);
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)L_208 = L_211;
		// if (debugEnabled)
		bool L_212 = __this->___debugEnabled_30;
		if (!L_212)
		{
			goto IL_0387;
		}
	}
	{
		// Debug.DrawRay(closestPoint, placementNormal, Color.cyan);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_214 = V_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_215;
		L_215 = Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_213, L_214, L_215, NULL);
	}

IL_0387:
	{
		// if (!useClosestDistance && closestPointIdx >= 0)
		bool L_216 = ___useClosestDistance8;
		if (L_216)
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_217 = V_3;
		if ((((int32_t)L_217) < ((int32_t)0)))
		{
			goto IL_03d2;
		}
	}
	{
		// if (plane.Raycast(new Ray(origin, originalDirection), out float centerPlaneDistance) || !centerPlaneDistance.Equals(0.0f))
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_218 = ___plane9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_219 = ___origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_221;
		memset((&L_221), 0, sizeof(L_221));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_221), L_219, L_220, /*hidden argument*/NULL);
		bool L_222;
		L_222 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0(L_218, L_221, (&V_23), NULL);
		if (L_222)
		{
			goto IL_03af;
		}
	}
	{
		bool L_223;
		L_223 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_23), (0.0f), NULL);
		if (L_223)
		{
			goto IL_03c8;
		}
	}

IL_03af:
	{
		// closestDistance = Mathf.Clamp(centerPlaneDistance, closestDistance, farthestDistance + assetWidth * 0.5f);
		float* L_224 = ___closestDistance10;
		float L_225 = V_23;
		float* L_226 = ___closestDistance10;
		float L_227 = *((float*)L_226);
		float L_228 = V_4;
		float L_229 = ___assetWidth5;
		float L_230;
		L_230 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_225, L_227, ((float)il2cpp_codegen_add(L_228, ((float)il2cpp_codegen_multiply(L_229, (0.5f))))), NULL);
		*((float*)L_224) = (float)L_230;
		return;
	}

IL_03c8:
	{
		// Debug.LogError("FindPlacementPlane: Not expected to have the center point not intersect the plane.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral0C5F77CBC6B48EEFA86CFC18E2E3A9CDF9071345, NULL);
	}

IL_03d2:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mC310C0A7ABC2519799A946D632BBCC9C4AB556CC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal0, const RuntimeMethod* method) 
{
	{
		// private static bool IsNormalVertical(Vector3 normal) => 1f - Mathf.Abs(normal.y) < 0.01f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___normal0;
		float L_1 = L_0.___y_3;
		float L_2;
		L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((1.0f), L_2))) < ((float)(0.00999999978f)))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_m11B41BE2C2CC7B2097D64925057F6F379CB53F79 (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = (LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99*)(LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99*)SZArrayNew(LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_1 = L_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2;
		L_2 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922(((int32_t)-5), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB)L_2);
		__this->___magneticSurfaces_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___magneticSurfaces_14), (void*)L_1);
		// private float maxRaycastDistance = 50.0f;
		__this->___maxRaycastDistance_15 = (50.0f);
		// private float closestDistance = 0.5f;
		__this->___closestDistance_16 = (0.5f);
		// private float surfaceNormalOffset = 0.5f;
		__this->___surfaceNormalOffset_17 = (0.5f);
		// private int boxRaysPerEdge = 3;
		__this->___boxRaysPerEdge_20 = 3;
		// private float maximumNormalVariance = 0.5f;
		__this->___maximumNormalVariance_22 = (0.5f);
		// private float sphereSize = 1.0f;
		__this->___sphereSize_23 = (1.0f);
		// private OrientationMode orientationMode = OrientationMode.TrackedTarget;
		__this->___orientationMode_27 = 1;
		// private float orientationBlend = 0.65f;
		__this->___orientationBlend_28 = (0.649999976f);
		// private bool keepOrientationVertical = true;
		__this->___keepOrientationVertical_29 = (bool)1;
		Solver__ctor_m95074BC47A9C11E650246DD9D37C1A22252D4DB5(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__cctor_mA1B671C6F3D4CDA6CAFE4661187B3A621EE974DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DB809903C95AF153BB9D39E15FCAC1EFD46716);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] SurfaceMagnetism.SolverUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral61DB809903C95AF153BB9D39E15FCAC1EFD46716, /*hidden argument*/NULL);
		((SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_StaticFields*)il2cpp_codegen_static_fields_for(SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_35 = L_0;
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
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_PlacementActionReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* TapToPlace_get_PlacementActionReference_mCC0186CAAA43B761F9627A0B024B309C22CB8C5B (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => placementActionReference;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___placementActionReference_14;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_PlacementActionReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_PlacementActionReference_mEA34E384CE6D2BFA3F6B675EA2973CA239809650 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => placementActionReference = value;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___value0;
		__this->___placementActionReference_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placementActionReference_14), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_AutoStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_m4B269F8FC267F7BA6CD1FCFADC8FF0B14FC427AD (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => autoStart;
		bool L_0 = __this->___autoStart_15;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_AutoStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_AutoStart_m52119D26D90C24C6C411DEFDB8D92F187BC7BAF0 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => autoStart = value;
		bool L_0 = ___value0;
		__this->___autoStart_15 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m2B03EB5660FEFAED9484EF0FA46B2A6F24BD842B (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->___defaultPlacementDistance_16;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_DefaultPlacementDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DefaultPlacementDistance_m649012A939049C1CEEAA1199CE13CF6566C620F6 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => defaultPlacementDistance = value;
		float L_0 = ___value0;
		__this->___defaultPlacementDistance_16 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_mE4A34CC315921C737F34D8F3F484F190B84FBD03 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->___maxRaycastDistance_17;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MaxRaycastDistance_mA7C2AEEC09E3FED13EF1B79BF82956A2873F01DD (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->___maxRaycastDistance_17 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_IsBeingPlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m6EBDAFEC12FFB2198E64B85A5B8D208D64B96004 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->___U3CIsBeingPlacedU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m3C617CED50041934C345269F1A7959E32FF078FF (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsBeingPlacedU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m1BAAF7061AAA24EBD9C4B6E740C23033D7E4552D (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->___surfaceNormalOffset_19;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_SurfaceNormalOffset_m3D4D01BD99FE30177103DC43FEDE46E34B3D0D82 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->___surfaceNormalOffset_19 = L_0;
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m8E398065F960379F99085DEA0FB96EF203D1AF7A (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->___useDefaultSurfaceNormalOffset_20;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_UseDefaultSurfaceNormalOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_UseDefaultSurfaceNormalOffset_mFC388A8851B060E02397EEA402E8364120E013F1 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useDefaultSurfaceNormalOffset = value;
		bool L_0 = ___value0;
		__this->___useDefaultSurfaceNormalOffset_20 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_m55BB0507DCD90B0E7CE855D1D33DE69D6E799636 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->___keepOrientationVertical_21;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_KeepOrientationVertical_mB15F5223951D0121C5B3D1BB5C96BA9D156DF99E (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->___keepOrientationVertical_21 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_RotateAccordingToSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_RotateAccordingToSurface_mE7B60EE83EB41B85E3B9E1826C6647FC2F5A5876 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => rotateAccordingToSurface;
		bool L_0 = __this->___rotateAccordingToSurface_22;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_RotateAccordingToSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_RotateAccordingToSurface_mEEB12BA4F94AF2CBBB307A8C69E57D8A4C61F70B (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => rotateAccordingToSurface = value;
		bool L_0 = ___value0;
		__this->___rotateAccordingToSurface_22 = L_0;
		return;
	}
}
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* TapToPlace_get_MagneticSurfaces_mB64FCE855D045C7769CF3AC0071EA54F0CCACD31 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = __this->___magneticSurfaces_23;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MagneticSurfaces_m8F23D2831DE5BF3383C9C0E67956195855900F88 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___value0, const RuntimeMethod* method) 
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = ___value0;
		__this->___magneticSurfaces_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___magneticSurfaces_23), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_DebugEnabled_mE4D0532DCD59B7199FADAF81AD491E8270257235 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => debugEnabled;
		bool L_0 = __this->___debugEnabled_24;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DebugEnabled_m1A2D282116141B6068E98D8BCBB32246FDDAC1F4 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->___debugEnabled_24 = L_0;
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStarted_mC2E41A84DAAC4FF2FFF90A3B28747FAF3726FB11 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => onPlacingStarted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onPlacingStarted_25;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_OnPlacingStarted(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStarted_m661E64E616B641C3575AA024AAFAA8A044900FF2 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value0, const RuntimeMethod* method) 
{
	{
		// set => onPlacingStarted = value;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___value0;
		__this->___onPlacingStarted_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlacingStarted_25), (void*)L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStopped_mF2BF6BBAE920D5334A3F0C1CF94E66FF2FCD8A86 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => onPlacingStopped;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onPlacingStopped_26;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_OnPlacingStopped(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStopped_mB55B7C89E8E789598D5A61B6E67C1294A21D2C4D (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value0, const RuntimeMethod* method) 
{
	{
		// set => onPlacingStopped = value;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___value0;
		__this->___onPlacingStopped_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlacingStopped_26), (void*)L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_GameObjectLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_m29DF74238D25A632CA030D6EAF57110C700ADB99 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->___U3CGameObjectLayerU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_m656FA1E4E510FEAE9A74CB33B39D05F3DE019AA1 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->___U3CGameObjectLayerU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_IsColliderPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsColliderPresent_mAFA5090A167ED32D2C83AADF5C944E4C121AA433 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected internal bool IsColliderPresent => gameObject != null && gameObject.GetComponent<Collider>() != null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_2, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_4;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultSurfaceNormalOffset_m6383AC79D98FC9FB04FF8BCC63261CE92E91218F (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private float DefaultSurfaceNormalOffset => gameObject.GetComponent<Collider>().bounds.extents.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_0, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_1);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2;
		L_2 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_4 = L_3.___z_4;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_Start_m92CD0B16EF1EC007AC6DC71A82DB7BBB2CBD8526 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D_mF3F16AFBC7B86585D2185BB6612F4037D6818112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Solver_Start_mB2B965CCEF08B5C076CD02588A5D6B64727BDB53(__this, NULL);
		// UnityPhysics.SyncTransforms();
		Physics_SyncTransforms_mEA78292E299EA0E2B0E79D59149E21144881AD9B(NULL);
		// ignoreRaycastLayer = LayerMask.NameToLayer("Ignore Raycast");
		int32_t L_0;
		L_0 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6, NULL);
		__this->___ignoreRaycastLayer_28 = L_0;
		// startCalled = true;
		__this->___startCalled_34 = (bool)1;
		// interactable = gameObject.GetComponent<StatefulInteractable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* L_2;
		L_2 = GameObject_GetComponent_TisStatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D_mF3F16AFBC7B86585D2185BB6612F4037D6818112(L_1, GameObject_GetComponent_TisStatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D_mF3F16AFBC7B86585D2185BB6612F4037D6818112_RuntimeMethod_var);
		__this->___interactable_36 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactable_36), (void*)L_2);
		// RegisterPickupAction();
		TapToPlace_RegisterPickupAction_m8BB4089DE4A5277A08FBA0CD3BB904E349A96B78(__this, NULL);
		// if (AutoStart || placementRequested)
		bool L_3;
		L_3 = TapToPlace_get_AutoStart_m4B269F8FC267F7BA6CD1FCFADC8FF0B14FC427AD_inline(__this, NULL);
		if (L_3)
		{
			goto IL_0049;
		}
	}
	{
		bool L_4 = __this->___placementRequested_35;
		if (!L_4)
		{
			goto IL_0050;
		}
	}

IL_0049:
	{
		// StartPlacement();
		TapToPlace_StartPlacement_m7DCA7D6737643AACBE246959AAC34A8775A9B5E5(__this, NULL);
		return;
	}

IL_0050:
	{
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_5 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_5);
		SolverHandler_set_UpdateSolvers_m9BE98B23DC5255CADD937E1A879AC13522D58C2B_inline(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnDisable_m1079F2B78895507F2B10C31BAFF025E5FC8A38A6 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// UnregisterPlacementAction();
		TapToPlace_UnregisterPlacementAction_m76AE8B912477E5290FFD11CC7DE19600C76EFC50(__this, NULL);
		// UnregisterPickupAction();
		TapToPlace_UnregisterPickupAction_m2657B6584E231BD980A60164BD7593395C8A1239(__this, NULL);
		// base.OnDisable();
		Solver_OnDisable_m6B5548898325FB42BFD352EB082771DAB627D84A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_m7DCA7D6737643AACBE246959AAC34A8775A9B5E5 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B9_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B8_0 = NULL;
	{
		// if (Time.time != 0 && (Time.time - LastTimeClicked) < DoubleClickTimeout)
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0021;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_2 = __this->___LastTimeClicked_32;
		float L_3 = __this->___DoubleClickTimeout_33;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_1, L_2))) < ((float)L_3))))
		{
			goto IL_0021;
		}
	}
	{
		// return;
		return;
	}

IL_0021:
	{
		// LastTimeClicked = Time.time;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___LastTimeClicked_32 = L_4;
		// using (StartPlacementPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_5 = ((TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var))->___StartPlacementPerfMarker_37;
		V_1 = L_5;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_6;
		L_6 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!startCalled)
				bool L_7 = __this->___startCalled_34;
				if (L_7)
				{
					goto IL_004b_1;
				}
			}
			{
				// placementRequested = true;
				__this->___placementRequested_35 = (bool)1;
				// return;
				goto IL_00af;
			}

IL_004b_1:
			{
				// if (!IsBeingPlaced)
				bool L_8;
				L_8 = TapToPlace_get_IsBeingPlaced_m6EBDAFEC12FFB2198E64B85A5B8D208D64B96004_inline(__this, NULL);
				if (L_8)
				{
					goto IL_009f_1;
				}
			}
			{
				// GameObjectLayer = gameObject.layer;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				NullCheck(L_9);
				int32_t L_10;
				L_10 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_9, NULL);
				TapToPlace_set_GameObjectLayer_m656FA1E4E510FEAE9A74CB33B39D05F3DE019AA1_inline(__this, L_10, NULL);
				// gameObject.layer = ignoreRaycastLayer;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				int32_t L_12 = __this->___ignoreRaycastLayer_28;
				NullCheck(L_11);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_11, L_12, NULL);
				// SolverHandler.UpdateSolvers = true;
				SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_13 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
				NullCheck(L_13);
				SolverHandler_set_UpdateSolvers_m9BE98B23DC5255CADD937E1A879AC13522D58C2B_inline(L_13, (bool)1, NULL);
				// IsBeingPlaced = true;
				TapToPlace_set_IsBeingPlaced_m3C617CED50041934C345269F1A7959E32FF078FF_inline(__this, (bool)1, NULL);
				// OnPlacingStarted?.Invoke();
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14;
				L_14 = TapToPlace_get_OnPlacingStarted_mC2E41A84DAAC4FF2FFF90A3B28747FAF3726FB11_inline(__this, NULL);
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = L_14;
				G_B8_0 = L_15;
				if (L_15)
				{
					G_B9_0 = L_15;
					goto IL_0094_1;
				}
			}
			{
				goto IL_0099_1;
			}

IL_0094_1:
			{
				NullCheck(G_B9_0);
				UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B9_0, NULL);
			}

IL_0099_1:
			{
				// RegisterPlacementAction();
				TapToPlace_RegisterPlacementAction_mD425A618E360CA340A78C61A3CE7EA20EE72867E(__this, NULL);
			}

IL_009f_1:
			{
				// }
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacement(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_m7F45CEE90385EFA8B01F7E1AC30D81B099657653 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B6_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	{
		// if ((Time.time - LastTimeClicked) < DoubleClickTimeout)
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1 = __this->___LastTimeClicked_32;
		float L_2 = __this->___DoubleClickTimeout_33;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) < ((float)L_2))))
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// LastTimeClicked = Time.time;
		float L_3;
		L_3 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___LastTimeClicked_32 = L_3;
		// using (StopPlacementPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_4 = ((TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var))->___StopPlacementPerfMarker_38;
		V_1 = L_4;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_5;
		L_5 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (IsBeingPlaced)
				bool L_6;
				L_6 = TapToPlace_get_IsBeingPlaced_m6EBDAFEC12FFB2198E64B85A5B8D208D64B96004_inline(__this, NULL);
				if (!L_6)
				{
					goto IL_0071_1;
				}
			}
			{
				// gameObject.layer = GameObjectLayer;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				int32_t L_8;
				L_8 = TapToPlace_get_GameObjectLayer_m29DF74238D25A632CA030D6EAF57110C700ADB99_inline(__this, NULL);
				NullCheck(L_7);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_7, L_8, NULL);
				// SolverHandler.UpdateSolvers = false;
				SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_9 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
				NullCheck(L_9);
				SolverHandler_set_UpdateSolvers_m9BE98B23DC5255CADD937E1A879AC13522D58C2B_inline(L_9, (bool)0, NULL);
				// IsBeingPlaced = false;
				TapToPlace_set_IsBeingPlaced_m3C617CED50041934C345269F1A7959E32FF078FF_inline(__this, (bool)0, NULL);
				// OnPlacingStopped?.Invoke();
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10;
				L_10 = TapToPlace_get_OnPlacingStopped_mF2BF6BBAE920D5334A3F0C1CF94E66FF2FCD8A86_inline(__this, NULL);
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = L_10;
				G_B5_0 = L_11;
				if (L_11)
				{
					G_B6_0 = L_11;
					goto IL_0066_1;
				}
			}
			{
				goto IL_006b_1;
			}

IL_0066_1:
			{
				NullCheck(G_B6_0);
				UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B6_0, NULL);
			}

IL_006b_1:
			{
				// UnregisterPlacementAction();
				TapToPlace_UnregisterPlacementAction_m76AE8B912477E5290FFD11CC7DE19600C76EFC50(__this, NULL);
			}

IL_0071_1:
			{
				// }
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SolverUpdate_mAE11124D47AC9D6F1B79D1DDDC8D1A80A0FD974D (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (SolverUpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_39;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (SolverHandler.TransformTarget != null)
				SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_2 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
				NullCheck(L_2);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
				L_3 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_4)
				{
					goto IL_0033_1;
				}
			}
			{
				// PerformRaycast();
				VirtualActionInvoker0::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::PerformRaycast() */, __this);
				// SetPosition();
				VirtualActionInvoker0::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetPosition() */, __this);
				// SetRotation();
				VirtualActionInvoker0::Invoke(14 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetRotation() */, __this);
			}

IL_0033_1:
			{
				// }
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::PerformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_PerformRaycast_mD570B97E32AFC50416A50F412E8C03195F9A1406 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t9CB5AF2F8E1691C2DBE53619E1BB603BBA4E1630_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// using (PerformRaycastPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var))->___PerformRaycastPerfMarker_40;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Transform transform = SolverHandler.TransformTarget;
			SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_2 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
			NullCheck(L_2);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
			L_3 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_2, NULL);
			V_2 = L_3;
			// Vector3 origin = transform.position;
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_2;
			NullCheck(L_4);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
			L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
			V_3 = L_5;
			// Vector3 endpoint = transform.position + transform.forward;
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_2;
			NullCheck(L_6);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
			L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_2;
			NullCheck(L_8);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
			L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
			L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_9, NULL);
			V_4 = L_10;
			// CurrentRay.UpdateRayStep(ref origin, ref endpoint);
			RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_11 = (&__this->___CurrentRay_29);
			RayStep_UpdateRayStep_m390190E2A74CE4BFC1EE908921C6A428E0884979(L_11, (&V_3), (&V_4), NULL);
			// DidHitSurface = MixedRealityRaycaster.RaycastSimplePhysicsStep(CurrentRay, MaxRaycastDistance, MagneticSurfaces, false, out CurrentHit);
			RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94 L_12 = __this->___CurrentRay_29;
			float L_13;
			L_13 = TapToPlace_get_MaxRaycastDistance_mE4A34CC315921C737F34D8F3F484F190B84FBD03_inline(__this, NULL);
			LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_14;
			L_14 = TapToPlace_get_MagneticSurfaces_mB64FCE855D045C7769CF3AC0071EA54F0CCACD31_inline(__this, NULL);
			RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_15 = (&__this->___CurrentHit_31);
			il2cpp_codegen_runtime_class_init_inline(MixedRealityRaycaster_t9CB5AF2F8E1691C2DBE53619E1BB603BBA4E1630_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = MixedRealityRaycaster_RaycastSimplePhysicsStep_m6E5D30FC04C75246EAD64F28D49CFAAE3590371F(L_12, L_13, L_14, (bool)0, L_15, NULL);
			__this->___DidHitSurface_30 = L_16;
			// }
			goto IL_0077;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetPosition_m64D251EB2F0EA38757E3428BCA5980FC51210923 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (DidHitSurface)
		bool L_0 = __this->___DidHitSurface_30;
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// GoalPosition = CurrentHit.point;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_1 = (&__this->___CurrentHit_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_1, NULL);
		Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_2, NULL);
		// float currentSurfaceNormalOffset = UseDefaultSurfaceNormalOffset ? DefaultSurfaceNormalOffset : SurfaceNormalOffset;
		bool L_3;
		L_3 = TapToPlace_get_UseDefaultSurfaceNormalOffset_m8E398065F960379F99085DEA0FB96EF203D1AF7A_inline(__this, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		float L_4;
		L_4 = TapToPlace_get_SurfaceNormalOffset_m1BAAF7061AAA24EBD9C4B6E740C23033D7E4552D_inline(__this, NULL);
		G_B4_0 = L_4;
		goto IL_002f;
	}

IL_0029:
	{
		float L_5;
		L_5 = TapToPlace_get_DefaultSurfaceNormalOffset_m6383AC79D98FC9FB04FF8BCC63261CE92E91218F(__this, NULL);
		G_B4_0 = L_5;
	}

IL_002f:
	{
		V_0 = G_B4_0;
		// AddOffset(CurrentHit.normal * currentSurfaceNormalOffset);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->___CurrentHit_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(L_6, NULL);
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_8, NULL);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::AddOffset(UnityEngine.Vector3) */, __this, L_9);
		return;
	}

IL_0048:
	{
		// GoalPosition = SolverHandler.TransformTarget.position + (SolverHandler.TransformTarget.forward * DefaultPlacementDistance);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_10 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* L_13 = ((Solver_t78E853A1D1DCEE7097495D39E1F00C2E41F9BE3B*)__this)->___SolverHandler_13;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = SolverHandler_get_TransformTarget_m044EC878C50929FC7ACBE713079B4D262ED4F5CA(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		float L_16;
		L_16 = TapToPlace_get_DefaultPlacementDistance_m2B03EB5660FEFAED9484EF0FA46B2A6F24BD842B_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_17, NULL);
		Solver_set_GoalPosition_mD99C1FDBEE6886F636F314E9DA28925AE534B0DA(__this, L_18, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetRotation_m54184D2C59FC30CAD2F0CEECE0145424C8C82CD5 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = CurrentRay.Direction;
		RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* L_0 = (&__this->___CurrentRay_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline(L_0, NULL);
		V_0 = L_1;
		// Vector3 surfaceNormal = CurrentHit.normal;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_2 = (&__this->___CurrentHit_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(L_2, NULL);
		V_1 = L_3;
		// if (KeepOrientationVertical)
		bool L_4;
		L_4 = TapToPlace_get_KeepOrientationVertical_m55BB0507DCD90B0E7CE855D1D33DE69D6E799636_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// direction.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// surfaceNormal.y = 0;
		(&V_1)->___y_3 = (0.0f);
	}

IL_0038:
	{
		// if (DidHitSurface && rotateAccordingToSurface)
		bool L_5 = __this->___DidHitSurface_30;
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		bool L_6 = __this->___rotateAccordingToSurface_22;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// GoalRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_8, L_9, NULL);
		Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD(__this, L_10, NULL);
		return;
	}

IL_005f:
	{
		// GoalRotation = Quaternion.LookRotation(direction, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_11, L_12, NULL);
		Solver_set_GoalRotation_m7CE2A7B4510DB6BF5B8030C3D18CBDBA9011F3AD(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::RegisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RegisterPlacementAction_mD425A618E360CA340A78C61A3CE7EA20EE72867E (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_StopPlacement_m7F45CEE90385EFA8B01F7E1AC30D81B099657653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02AA96707E7A8BC913E2055F3E956D4373F24EB4);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// InputAction placementAction = GetInputActionFromReference(placementActionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___placementActionReference_14;
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = TapToPlace_GetInputActionFromReference_mAFEE8185271C35B533D90846093DF334C2194890(L_0, NULL);
		V_0 = L_1;
		// if (placementAction == null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.Log("Failed to register the placement action, the action reference was null or contained no action.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral02AA96707E7A8BC913E2055F3E956D4373F24EB4, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// placementAction.performed += StopPlacement;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_4 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_4, __this, (intptr_t)((void*)TapToPlace_StopPlacement_m7F45CEE90385EFA8B01F7E1AC30D81B099657653_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::RegisterPickupAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RegisterPickupAction_m8BB4089DE4A5277A08FBA0CD3BB904E349A96B78 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_StartPlacement_m7DCA7D6737643AACBE246959AAC34A8775A9B5E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A606777C153E52CD196973F9D3198AE0E519976);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interactable == null)
		StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* L_0 = __this->___interactable_36;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.Log("Failed to register the pick up event. There is no StatefulInteractable set.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5A606777C153E52CD196973F9D3198AE0E519976, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// interactable.OnClicked.AddListener(StartPlacement);
		StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* L_2 = __this->___interactable_36;
		NullCheck(L_2);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3;
		L_3 = StatefulInteractable_get_OnClicked_m5566457B25C3DA39801C17C0FAB7917B3DEE7DCF_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)TapToPlace_StartPlacement_m7DCA7D6737643AACBE246959AAC34A8775A9B5E5_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::UnregisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_UnregisterPlacementAction_m76AE8B912477E5290FFD11CC7DE19600C76EFC50 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_StopPlacement_m7F45CEE90385EFA8B01F7E1AC30D81B099657653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FEEB188C926E0D8DEBF50B93373E1DCADD88966);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// InputAction placementAction = GetInputActionFromReference(placementActionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___placementActionReference_14;
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = TapToPlace_GetInputActionFromReference_mAFEE8185271C35B533D90846093DF334C2194890(L_0, NULL);
		V_0 = L_1;
		// if (placementAction == null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.Log("Failed to unregister the placement action, the action reference was null or contained no action.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9FEEB188C926E0D8DEBF50B93373E1DCADD88966, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// placementAction.performed -= StopPlacement;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_4 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_4, __this, (intptr_t)((void*)TapToPlace_StopPlacement_m7F45CEE90385EFA8B01F7E1AC30D81B099657653_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::UnregisterPickupAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_UnregisterPickupAction_m2657B6584E231BD980A60164BD7593395C8A1239 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_StartPlacement_m7DCA7D6737643AACBE246959AAC34A8775A9B5E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D9A3150D511F8DF59375E91329512B8873BD713);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interactable == null)
		StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* L_0 = __this->___interactable_36;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.Log("Failed to unregister the pick up event. There is no StatefulInteractable set.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8D9A3150D511F8DF59375E91329512B8873BD713, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// interactable.OnClicked.RemoveListener(StartPlacement);
		StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* L_2 = __this->___interactable_36;
		NullCheck(L_2);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3;
		L_3 = StatefulInteractable_get_OnClicked_m5566457B25C3DA39801C17C0FAB7917B3DEE7DCF_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)TapToPlace_StartPlacement_m7DCA7D6737643AACBE246959AAC34A8775A9B5E5_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_3, L_4, NULL);
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputAction Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::GetInputActionFromReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TapToPlace_GetInputActionFromReference_mAFEE8185271C35B533D90846093DF334C2194890 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (actionReference == null) { return null; }
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (actionReference == null) { return null; }
		return (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)NULL;
	}

IL_000b:
	{
		// return actionReference.action;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___actionReference0;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__ctor_m848A5AD2F7CCF3A6C14F70DE31C54C4A17BA0080 (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float defaultPlacementDistance = 1.5f;
		__this->___defaultPlacementDistance_16 = (1.5f);
		// private float maxRaycastDistance = 20.0f;
		__this->___maxRaycastDistance_17 = (20.0f);
		// private bool useDefaultSurfaceNormalOffset = true;
		__this->___useDefaultSurfaceNormalOffset_20 = (bool)1;
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = (LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99*)(LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99*)SZArrayNew(LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_1 = L_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2;
		L_2 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922(((int32_t)-5), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB)L_2);
		__this->___magneticSurfaces_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___magneticSurfaces_23), (void*)L_1);
		// private bool debugEnabled = true;
		__this->___debugEnabled_24 = (bool)1;
		// private UnityEvent onPlacingStarted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_3, NULL);
		__this->___onPlacingStarted_25 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlacingStarted_25), (void*)L_3);
		// private UnityEvent onPlacingStopped = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_4, NULL);
		__this->___onPlacingStopped_26 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlacingStopped_26), (void*)L_4);
		// protected float DoubleClickTimeout = 0.5f;
		__this->___DoubleClickTimeout_33 = (0.5f);
		Solver__ctor_m95074BC47A9C11E650246DD9D37C1A22252D4DB5(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__cctor_m8BA82D125447DD003D32A88670F781707CF0818E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32E2B8232B2A08F835DCBBADA5F6DD4AC8F950D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5529465409870544CE39603F0D2335F17AE8D433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C740521F660B7C87495E9139EB63C242FFE0761);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5D8D154E5D9B4EACA86B890F2045DDCA6D915C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker StartPlacementPerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.StartPlacement");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralA5D8D154E5D9B4EACA86B890F2045DDCA6D915C5, /*hidden argument*/NULL);
		((TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var))->___StartPlacementPerfMarker_37 = L_0;
		// private static readonly ProfilerMarker StopPlacementPerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.StopPlacement");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral8C740521F660B7C87495E9139EB63C242FFE0761, /*hidden argument*/NULL);
		((TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var))->___StopPlacementPerfMarker_38 = L_1;
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.SolverUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteral5529465409870544CE39603F0D2335F17AE8D433, /*hidden argument*/NULL);
		((TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_39 = L_2;
		// private static readonly ProfilerMarker PerformRaycastPerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.PerformRaycast");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteral32E2B8232B2A08F835DCBBADA5F6DD4AC8F950D6, /*hidden argument*/NULL);
		((TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297_il2cpp_TypeInfo_var))->___PerformRaycastPerfMarker_40 = L_3;
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
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer::Compare(Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint,Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConstraintExecOrderComparer_Compare_m06B71BDEF9C431DD86EC1832C6FBFE380667E37E (ConstraintExecOrderComparer_t2BD73906862F371D4BB906482B806AE7CB117D51* __this, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* ___x0, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* ___y1, const RuntimeMethod* method) 
{
	{
		// return x.ExecutionPriority - y.ExecutionPriority;
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TransformConstraint_get_ExecutionPriority_mDC3AA44C77FF8439C871B572ABA6D28B4CA53ABA_inline(L_0, NULL);
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_2 = ___y1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TransformConstraint_get_ExecutionPriority_mDC3AA44C77FF8439C871B572ABA6D28B4CA53ABA_inline(L_2, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintExecOrderComparer__ctor_mB44819F888DC72003A5B4CAC8B5562EBC3908102 (ConstraintExecOrderComparer_t2BD73906862F371D4BB906482B806AE7CB117D51* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintUtils::AddWithPriority(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>&,Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint,Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintUtils_AddWithPriority_m43ED2832DAB39D40C48188A345F73BA1D0DC6469 (List_1_t26BB8D627002705669D38989D0CF224062ED60F4** ___constraintList0, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* ___constraint1, ConstraintExecOrderComparer_t2BD73906862F371D4BB906482B806AE7CB117D51* ___comparer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m254C83E440DD2E4853D4FC97C7C061D9D5124E6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_BinarySearch_mF907D4CD1F194D3968BC1CDBA12967AA2DA28274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m955FC6FB2446E314F0A46FF31A94EB9DF4712672_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m4B5D1B495C2E505006FA85313F1FD174B5C1C21C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5CDDC54D500645844BA3046778EC8898115D8151_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB43A96090C8AEFC2371C1229E3570944C8204284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (constraintList.Contains(constraint))
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4** L_0 = ___constraintList0;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4* L_1 = *((List_1_t26BB8D627002705669D38989D0CF224062ED60F4**)L_0);
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_2 = ___constraint1;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_m955FC6FB2446E314F0A46FF31A94EB9DF4712672(L_1, L_2, List_1_Contains_m955FC6FB2446E314F0A46FF31A94EB9DF4712672_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// if (constraintList.Count == 0 || comparer.Compare(constraintList[constraintList.Count - 1], constraint) < 0)
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4** L_4 = ___constraintList0;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4* L_5 = *((List_1_t26BB8D627002705669D38989D0CF224062ED60F4**)L_4);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m5CDDC54D500645844BA3046778EC8898115D8151_inline(L_5, List_1_get_Count_m5CDDC54D500645844BA3046778EC8898115D8151_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		ConstraintExecOrderComparer_t2BD73906862F371D4BB906482B806AE7CB117D51* L_7 = ___comparer2;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4** L_8 = ___constraintList0;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4* L_9 = *((List_1_t26BB8D627002705669D38989D0CF224062ED60F4**)L_8);
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4** L_10 = ___constraintList0;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4* L_11 = *((List_1_t26BB8D627002705669D38989D0CF224062ED60F4**)L_10);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m5CDDC54D500645844BA3046778EC8898115D8151_inline(L_11, List_1_get_Count_m5CDDC54D500645844BA3046778EC8898115D8151_RuntimeMethod_var);
		NullCheck(L_9);
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_13;
		L_13 = List_1_get_Item_mB43A96090C8AEFC2371C1229E3570944C8204284(L_9, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_mB43A96090C8AEFC2371C1229E3570944C8204284_RuntimeMethod_var);
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_14 = ___constraint1;
		NullCheck(L_7);
		int32_t L_15;
		L_15 = VirtualFuncInvoker2< int32_t, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8*, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* >::Invoke(5 /* System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer::Compare(Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint,Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint) */, L_7, L_13, L_14);
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_002e:
	{
		// constraintList.Add(constraint);
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4** L_16 = ___constraintList0;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4* L_17 = *((List_1_t26BB8D627002705669D38989D0CF224062ED60F4**)L_16);
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_18 = ___constraint1;
		NullCheck(L_17);
		List_1_Add_m254C83E440DD2E4853D4FC97C7C061D9D5124E6E_inline(L_17, L_18, List_1_Add_m254C83E440DD2E4853D4FC97C7C061D9D5124E6E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0037:
	{
		// else if (comparer.Compare(constraintList[0], constraint) > 0)
		ConstraintExecOrderComparer_t2BD73906862F371D4BB906482B806AE7CB117D51* L_19 = ___comparer2;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4** L_20 = ___constraintList0;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4* L_21 = *((List_1_t26BB8D627002705669D38989D0CF224062ED60F4**)L_20);
		NullCheck(L_21);
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_22;
		L_22 = List_1_get_Item_mB43A96090C8AEFC2371C1229E3570944C8204284(L_21, 0, List_1_get_Item_mB43A96090C8AEFC2371C1229E3570944C8204284_RuntimeMethod_var);
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_23 = ___constraint1;
		NullCheck(L_19);
		int32_t L_24;
		L_24 = VirtualFuncInvoker2< int32_t, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8*, TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* >::Invoke(5 /* System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer::Compare(Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint,Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint) */, L_19, L_22, L_23);
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// constraintList.Insert(0, constraint);
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4** L_25 = ___constraintList0;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4* L_26 = *((List_1_t26BB8D627002705669D38989D0CF224062ED60F4**)L_25);
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_27 = ___constraint1;
		NullCheck(L_26);
		List_1_Insert_m4B5D1B495C2E505006FA85313F1FD174B5C1C21C(L_26, 0, L_27, List_1_Insert_m4B5D1B495C2E505006FA85313F1FD174B5C1C21C_RuntimeMethod_var);
		// return;
		return;
	}

IL_0053:
	{
		// int idx = constraintList.BinarySearch(constraint, comparer);
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4** L_28 = ___constraintList0;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4* L_29 = *((List_1_t26BB8D627002705669D38989D0CF224062ED60F4**)L_28);
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_30 = ___constraint1;
		ConstraintExecOrderComparer_t2BD73906862F371D4BB906482B806AE7CB117D51* L_31 = ___comparer2;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = List_1_BinarySearch_mF907D4CD1F194D3968BC1CDBA12967AA2DA28274(L_29, L_30, L_31, List_1_BinarySearch_mF907D4CD1F194D3968BC1CDBA12967AA2DA28274_RuntimeMethod_var);
		V_0 = L_32;
		// if (idx < 0)
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		// idx = ~idx;
		int32_t L_34 = V_0;
		V_0 = ((~L_34));
	}

IL_0064:
	{
		// constraintList.Insert(idx, constraint);
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4** L_35 = ___constraintList0;
		List_1_t26BB8D627002705669D38989D0CF224062ED60F4* L_36 = *((List_1_t26BB8D627002705669D38989D0CF224062ED60F4**)L_35);
		int32_t L_37 = V_0;
		TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* L_38 = ___constraint1;
		NullCheck(L_36);
		List_1_Insert_m4B5D1B495C2E505006FA85313F1FD174B5C1C21C(L_36, L_37, L_38, List_1_Insert_m4B5D1B495C2E505006FA85313F1FD174B5C1C21C_RuntimeMethod_var);
		// }
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
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.InteractionFlagsExtensions::IsMaskSet(Microsoft.MixedReality.Toolkit.SpatialManipulation.InteractionFlags,Microsoft.MixedReality.Toolkit.SpatialManipulation.InteractionFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionFlagsExtensions_IsMaskSet_m016D889CD686B7DFD4971813C52F70547217D5C6 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	{
		// return ((a & b) == b);
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___b1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0);
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
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m8D4FE3D378BB06AA3FFBFB06541499E9B8735924 (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m8D4FE3D378BB06AA3FFBFB06541499E9B8735924_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Vector3Smoothed_get_Current_m8D4FE3D378BB06AA3FFBFB06541499E9B8735924_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Current(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m2BCA23B0632DEF723B47DAB85DA9AF1B8ED5796F (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_Current_m2BCA23B0632DEF723B47DAB85DA9AF1B8ED5796F_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4*>(__this + _offset);
	Vector3Smoothed_set_Current_m2BCA23B0632DEF723B47DAB85DA9AF1B8ED5796F_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Goal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_m549ED891CC9145A620AC4899F17EF90669432B3E (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_m549ED891CC9145A620AC4899F17EF90669432B3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Vector3Smoothed_get_Goal_m549ED891CC9145A620AC4899F17EF90669432B3E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Goal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_mC06A7587782665D7C74CDC386F9A7B23B87E27BB (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CGoalU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_Goal_mC06A7587782665D7C74CDC386F9A7B23B87E27BB_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4*>(__this + _offset);
	Vector3Smoothed_set_Goal_mC06A7587782665D7C74CDC386F9A7B23B87E27BB_inline(_thisAdjusted, ___value0, method);
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_SmoothTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_m9D03F99B2BE8AB3FF5F72BAE713195A5797CF24C (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = __this->___U3CSmoothTimeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Vector3Smoothed_get_SmoothTime_m9D03F99B2BE8AB3FF5F72BAE713195A5797CF24C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4*>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3Smoothed_get_SmoothTime_m9D03F99B2BE8AB3FF5F72BAE713195A5797CF24C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_SmoothTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_m44EDEC6D811B0CF187D790645E75FDE094FEFA16 (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = ___value0;
		__this->___U3CSmoothTimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_SmoothTime_m44EDEC6D811B0CF187D790645E75FDE094FEFA16_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4*>(__this + _offset);
	Vector3Smoothed_set_SmoothTime_m44EDEC6D811B0CF187D790645E75FDE094FEFA16_inline(_thisAdjusted, ___value0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_mF2591CC331BC947C1EDD65EA86587A8D02C90EAF (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, float ___smoothingTime1, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed(Vector3 value, float smoothingTime) : this()
		il2cpp_codegen_initobj(__this, sizeof(Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4));
		// Current = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Vector3Smoothed_set_Current_m2BCA23B0632DEF723B47DAB85DA9AF1B8ED5796F_inline(__this, L_0, NULL);
		// Goal = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		Vector3Smoothed_set_Goal_mC06A7587782665D7C74CDC386F9A7B23B87E27BB_inline(__this, L_1, NULL);
		// SmoothTime = smoothingTime;
		float L_2 = ___smoothingTime1;
		Vector3Smoothed_set_SmoothTime_m44EDEC6D811B0CF187D790645E75FDE094FEFA16_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed__ctor_mF2591CC331BC947C1EDD65EA86587A8D02C90EAF_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, float ___smoothingTime1, const RuntimeMethod* method)
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4*>(__this + _offset);
	Vector3Smoothed__ctor_mF2591CC331BC947C1EDD65EA86587A8D02C90EAF(_thisAdjusted, ___value0, ___smoothingTime1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::SetGoal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_SetGoal_mD3B5B783C107ED68440C80434D3236C97A5C7F29 (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goal0, const RuntimeMethod* method) 
{
	{
		// Goal = goal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___goal0;
		Vector3Smoothed_set_Goal_mC06A7587782665D7C74CDC386F9A7B23B87E27BB_inline(__this, L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_SetGoal_mD3B5B783C107ED68440C80434D3236C97A5C7F29_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goal0, const RuntimeMethod* method)
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4*>(__this + _offset);
	Vector3Smoothed_SetGoal_mD3B5B783C107ED68440C80434D3236C97A5C7F29(_thisAdjusted, ___goal0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_Update_m5464BD48BB4A8E748E4AD7A486686F9F5CF0FFFF (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* G_B2_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* G_B1_2 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* G_B3_3 = NULL;
	{
		// Current = Vector3.Lerp(Current, Goal, (Math.Abs(SmoothTime) < Mathf.Epsilon) ? 1.0f : deltaTime / SmoothTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3Smoothed_get_Current_m8D4FE3D378BB06AA3FFBFB06541499E9B8735924_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Smoothed_get_Goal_m549ED891CC9145A620AC4899F17EF90669432B3E_inline(__this, NULL);
		float L_2;
		L_2 = Vector3Smoothed_get_SmoothTime_m9D03F99B2BE8AB3FF5F72BAE713195A5797CF24C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if ((((float)L_3) < ((float)L_4)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0029;
		}
	}
	{
		float L_5 = ___deltaTime0;
		float L_6;
		L_6 = Vector3Smoothed_get_SmoothTime_m9D03F99B2BE8AB3FF5F72BAE713195A5797CF24C_inline(__this, NULL);
		G_B3_0 = ((float)(L_5/L_6));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_002e;
	}

IL_0029:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_002e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		Vector3Smoothed_set_Current_m2BCA23B0632DEF723B47DAB85DA9AF1B8ED5796F_inline(G_B3_3, L_7, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_Update_m5464BD48BB4A8E748E4AD7A486686F9F5CF0FFFF_AdjustorThunk (RuntimeObject* __this, float ___deltaTime0, const RuntimeMethod* method)
{
	Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4*>(__this + _offset);
	Vector3Smoothed_Update_m5464BD48BB4A8E748E4AD7A486686F9F5CF0FFFF(_thisAdjusted, ___deltaTime0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mFD863E747996EB64E03BC122E16FD6CCF56771A7_inline (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->___useFixedVerticalPosition_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m02A0671D2C316A1620AF079CD29BD46A198B6DEB_inline (RadialView_t146B0B4CA114E5CBC1FD9415F54B0F900AA61A2C* __this, const RuntimeMethod* method) 
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->___fixedVerticalPosition_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalPosition_mAC6D9D9E114BBFE15908F8D0B9B5291A5CB3A296_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalPositionU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_mFCD625E99CA6BB298B70DE24E2B197E632D995C8_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CGoalPositionU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SolverHandler_get_GoalRotation_m19C33213AC5284A50013A8BFC4E742EC360C78F2_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CGoalRotationU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_mA9CC4E2C0D5B4D25DBF191890CAED3AFE7B2612D_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CGoalRotationU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalScale_m83A141C40088AE96427E2645766A403A58A5BA8A_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalScaleU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m8CFEB8908C4B3A739A1C5E6F10CF753EC94557C9_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CGoalScaleU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mCA20092654CAE691970AA575602284722B9E5C47_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->___U3CDeltaTimeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m9F8E73C6F21CBB825778CFFE4CEC1E6A34E97571_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 L_0 = ___value0;
		__this->___U3CAltScaleU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mC82F84EBFFCE621FCDCE52EA41AA3932304DC4A2_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->___U3CDeltaTimeU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m8631F8B2DA1696A9743A765735F136D1BF98525D_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->___trackedTargetType_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m1559EBD961E17A372EBA2261FEC5CE8A5061296B_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => updateSolvers;
		bool L_0 = __this->___updateSolvers_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandedness_mB9D0E75243A7D1B4E48B5F8EF238121539698429_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedHandedness;
		int32_t L_0 = __this->___trackedHandedness_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_PreferredTrackedHandedness_m7F0FF943AAB123419EA26D2D7512F2908885A519_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => preferredTrackedHandedness;
		int32_t L_0 = __this->___preferredTrackedHandedness_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_mF109C911E7F39A4487E88B11C9DEBF1F7FCB16BC_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->___trackedHandJoint_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalOffset_mBDF933A5F0A08A04D13C0A020D9E9BCA380AA8A2_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => additionalOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalOffset_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalRotation_mBBB8B9B1D4297CCD99E4A88E07F67CE36B9647D1_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => additionalRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalRotation_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_RightInteractor_mD9E0CA0FBF0E8AE8854885BA9E7C26E5EDC9E196_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => rightInteractor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___rightInteractor_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_LeftInteractor_mD83CF66D79A50EB3D7533AA54AC1C20947F12DAE_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// get => leftInteractor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___leftInteractor_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mC7B1F47D3007F223CDB981C1B9D0832382A52151_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->___currentRaycastDirectionMode_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 SolverHandler_get_AltScale_m5585214D664D0D49549B97AD7E11FCE3FAC0235D_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4 L_0 = __this->___U3CAltScaleU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m8D4FE3D378BB06AA3FFBFB06541499E9B8735924_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m68E1C29717F51085E522722EB4F3E6F159CE8B8D_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->___keepOrientationVertical_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m6B5E72108852C0A2C6649F8A692072F7B6FE5609_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->___orientationMode_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Direction_m77D3141EB420AAD076DE2248EABBDA7190A8AAA4_inline (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CDirectionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m6A658D220D3DD464FA1205C0806BA64926145252_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => debugEnabled;
		bool L_0 = __this->___debugEnabled_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Origin_m55D28125AEBF276219807124A78D34F95F009BA8_inline (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3COriginU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Terminus_mDF1E2E159EE60609174D488A6B617F0E277A9251_inline (RayStep_t78D46DAAFBEE44FB2D7BB3F6CCC8B192D76CED94* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTerminusU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mF552F660CB0E42F18558AD59D516EBAC923F57E2_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mFDAAD284EC0853BE6EB37AB0D550F90C5DAA45A3_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->___raycastMode_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mC00F6AEC77FA65C6B46020999D3E8FB7FA07DC34_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->___U3COnSurfaceU3Ek__BackingField_31 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_mCE4408F81276956894333550A4CEF137B927B916_inline (SurfaceMagnetism_tFD7CD2113C8E7C4AA2078F5231690DE6E22034CE* __this, const RuntimeMethod* method) 
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->___U3COnSurfaceU3Ek__BackingField_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m1257FED4776F2A33BD7250357D024B3FA3E592EB_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_m4B269F8FC267F7BA6CD1FCFADC8FF0B14FC427AD_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => autoStart;
		bool L_0 = __this->___autoStart_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m9BE98B23DC5255CADD937E1A879AC13522D58C2B_inline (SolverHandler_t6CFBA63CFD96661AFA98BFE74C5614038C31C239* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->___updateSolvers_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m6EBDAFEC12FFB2198E64B85A5B8D208D64B96004_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->___U3CIsBeingPlacedU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_m656FA1E4E510FEAE9A74CB33B39D05F3DE019AA1_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->___U3CGameObjectLayerU3Ek__BackingField_27 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m3C617CED50041934C345269F1A7959E32FF078FF_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsBeingPlacedU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStarted_mC2E41A84DAAC4FF2FFF90A3B28747FAF3726FB11_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => onPlacingStarted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onPlacingStarted_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_m29DF74238D25A632CA030D6EAF57110C700ADB99_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->___U3CGameObjectLayerU3Ek__BackingField_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStopped_mF2BF6BBAE920D5334A3F0C1CF94E66FF2FCD8A86_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => onPlacingStopped;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onPlacingStopped_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_mE4A34CC315921C737F34D8F3F484F190B84FBD03_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->___maxRaycastDistance_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* TapToPlace_get_MagneticSurfaces_mB64FCE855D045C7769CF3AC0071EA54F0CCACD31_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = __this->___magneticSurfaces_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m8E398065F960379F99085DEA0FB96EF203D1AF7A_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->___useDefaultSurfaceNormalOffset_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m1BAAF7061AAA24EBD9C4B6E740C23033D7E4552D_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->___surfaceNormalOffset_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m2B03EB5660FEFAED9484EF0FA46B2A6F24BD842B_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->___defaultPlacementDistance_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_m55BB0507DCD90B0E7CE855D1D33DE69D6E799636_inline (TapToPlace_t97D18EE923637F59A10BB2507C0CCC1E7BC39297* __this, const RuntimeMethod* method) 
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->___keepOrientationVertical_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* StatefulInteractable_get_OnClicked_m5566457B25C3DA39801C17C0FAB7917B3DEE7DCF_inline (StatefulInteractable_t1B3CECC74B862E5CCFD0B14EC77CFE6ED3E37E7D* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnClicked { get; private set; } = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___U3COnClickedU3Ek__BackingField_82;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformConstraint_get_ExecutionPriority_mDC3AA44C77FF8439C871B572ABA6D28B4CA53ABA_inline (TransformConstraint_tC6CEC4E1B7878D9AB1307BBF99A52BBED538BAD8* __this, const RuntimeMethod* method) 
{
	{
		// get => executionOrder;
		int32_t L_0 = __this->___executionOrder_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m2BCA23B0632DEF723B47DAB85DA9AF1B8ED5796F_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_m549ED891CC9145A620AC4899F17EF90669432B3E_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_mC06A7587782665D7C74CDC386F9A7B23B87E27BB_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CGoalU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_m9D03F99B2BE8AB3FF5F72BAE713195A5797CF24C_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = __this->___U3CSmoothTimeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_m44EDEC6D811B0CF187D790645E75FDE094FEFA16_inline (Vector3Smoothed_tB19C2BEB48DEA6CE1F2EB89C2409C7DDA7E895C4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = ___value0;
		__this->___U3CSmoothTimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->___m_Ptr_0 = L_0;
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1C6D6ED1C8E0CB2FD0934EB6EA333276F67C14F6(L_1, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
