#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<System.Object,System.Object>
struct MRTKSubsystemDescriptor_2_tBC706B42C8C51F1A64760E564597DA98160BCDFE;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>
struct MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>
struct MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>
struct MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo
struct KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2;
// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor
struct KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo
struct MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem
struct TextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B;
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo
struct TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8;
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor
struct TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider
struct Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral33B1E25D03A60D4D52E409FD3171FF658C3AB9F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5542C2C12376B62727BB20CE9C9B84E76ACD561B;
IL2CPP_EXTERN_C const RuntimeMethod* KeywordRecognitionSubsystemDescriptor_Create_m6440B466088D30C23077FA669EDF5511BBB7C881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeechSubsystemDescriptor_Create_mC8401835148413454D6DFC07940748FA8EA64539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m36E57093B59370B6A6FC0E78BEBC15DD6CD287EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m4E6D6C072A58C8B63AD6A195E6EC5B5DB4E8D1B1_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo
struct MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_2;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<ProviderType>k__BackingField
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<SubsystemTypeOverride>k__BackingField
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
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

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t615BE4C5CA8D837A7E3A4DBA6F0370F519A4CF75  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tA21FF952E452FC1131351569716B195E1450613F  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>
struct SubsystemProvider_1_tE85E89C71C60B78D4090F8A38E8ED05C8FAD0C74  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* ___U3CproviderU3Ek__BackingField_3;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
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

// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo
struct KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2  : public MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::<IsCloudBased>k__BackingField
	bool ___U3CIsCloudBasedU3Ek__BackingField_6;
};

// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo
struct TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8  : public MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3
{
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t294A8BA6F189309AA206709F6E0AA0ED9D654B7D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t294A8BA6F189309AA206709F6E0AA0ED9D654B7D__padding[96];
	};
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A  : public SubsystemDescriptorWithProvider_2_t615BE4C5CA8D837A7E3A4DBA6F0370F519A4CF75
{
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282  : public SubsystemDescriptorWithProvider_2_tA21FF952E452FC1131351569716B195E1450613F
{
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>
struct MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D  : public SubsystemProvider_1_tE85E89C71C60B78D4090F8A38E8ED05C8FAD0C74
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2ACAE790C79584FAEA6F0C1E03E30CC83A8BE01D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t2ACAE790C79584FAEA6F0C1E03E30CC83A8BE01D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B
	__StaticArrayInitTypeSizeU3D96_t294A8BA6F189309AA206709F6E0AA0ED9D654B7D ___577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17  : public SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73
{
};

struct MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17_StaticFields
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

// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor
struct KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A  : public MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::<IsCloudBased>k__BackingField
	bool ___U3CIsCloudBasedU3Ek__BackingField_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor
struct TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508  : public MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282
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

// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider
struct Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175  : public MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem
struct TextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B  : public MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<System.Object,System.Object>::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemDescriptor_2__ctor_m8CBBE11F6D722DAD6A3647CAE791757405349BA0_gshared (MRTKSubsystemDescriptor_2_tBC706B42C8C51F1A64760E564597DA98160BCDFE* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___MRTKSubsystemCinfo0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<System.Object,System.Object>(System.String,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m2706E5AA1DF10A4EA82992124656400817D8861D_gshared (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared (MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared (MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28* __this, const RuntimeMethod* method) ;

// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
inline void MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7 (MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___MRTKSubsystemCinfo0, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A*, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3*, const RuntimeMethod*))MRTKSubsystemDescriptor_2__ctor_m8CBBE11F6D722DAD6A3647CAE791757405349BA0_gshared)(__this, ___MRTKSubsystemCinfo0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::get_IsCloudBased()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mE9994954E7AF49F138631A2F9FA1EC0162989EAF_inline (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::set_IsCloudBased(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mB4E255EEB2AF1728860B80D6EF1312E69054A359_inline (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MRTKSubsystemCinfo_get_Name_m16ABFCFB5920A666B7F322F15C5C1AA5197F481A_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_SubsystemTypeOverride_mEA66595FC7C1ED69D33F84557D17897FD017F76E_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::get_ProviderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_ProviderType_m4C8A14C25568D8C5E921C9686739E1A0E5F10276_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m36E57093B59370B6A6FC0E78BEBC15DD6CD287EA (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m2706E5AA1DF10A4EA82992124656400817D8861D_gshared)(___name0, ___subsystemTypeOverride1, ___providerType2, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor__ctor_m2F810A3A0DC899924B7A7CB5C5AC924865F6BB38 (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* ___cinfo0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>::.ctor()
inline void MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5 (MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17*, const RuntimeMethod*))MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>::get_provider()
inline Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_inline (SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73* __this, const RuntimeMethod* method)
{
	return ((  Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* (*) (SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* TextToSpeechSubsystemDescriptor_Create_mC8401835148413454D6DFC07940748FA8EA64539 (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___cinfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C (MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRTKSubsystemCinfo_Equals_m3111B01E6191DC1AAED8CBD2B6EB665FBC2A0B98 (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___other0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemCinfo__ctor_m50B9CACB0C4603A8F87EE5277BE47E62846E0BA4 (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
inline void MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE (MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___MRTKSubsystemCinfo0, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282*, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3*, const RuntimeMethod*))MRTKSubsystemDescriptor_2__ctor_m8CBBE11F6D722DAD6A3647CAE791757405349BA0_gshared)(__this, ___MRTKSubsystemCinfo0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m4E6D6C072A58C8B63AD6A195E6EC5B5DB4E8D1B1 (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m2706E5AA1DF10A4EA82992124656400817D8861D_gshared)(___name0, ___subsystemTypeOverride1, ___providerType2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystemDescriptor__ctor_mA047A84F98373061E4E8520509E93A921904C95E (TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* __this, TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___cinfo0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor__ctor_m2F810A3A0DC899924B7A7CB5C5AC924865F6BB38 (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// KeywordRecognitionSubsystemDescriptor(KeywordRecognitionSubsystemCinfo cinfo) : base(cinfo)
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_0 = ___cinfo0;
		MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7(__this, L_0, MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7_RuntimeMethod_var);
		// IsCloudBased = cinfo.IsCloudBased;
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_1 = ___cinfo0;
		NullCheck(L_1);
		bool L_2;
		L_2 = KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mE9994954E7AF49F138631A2F9FA1EC0162989EAF_inline(L_1, NULL);
		KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mB4E255EEB2AF1728860B80D6EF1312E69054A359_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::get_IsCloudBased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemDescriptor_get_IsCloudBased_m0CAECD9EBA46CC2CFEBA8BDBA2AB36AEFA71E3B0 (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::set_IsCloudBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mB4E255EEB2AF1728860B80D6EF1312E69054A359 (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* KeywordRecognitionSubsystemDescriptor_Create_m6440B466088D30C23077FA669EDF5511BBB7C881 (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m36E57093B59370B6A6FC0E78BEBC15DD6CD287EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!XRSubsystemHelpers.CheckTypes<KeywordRecognitionSubsystem, KeywordRecognitionSubsystem.Provider>(cinfo.Name,
		//                                                                                                     cinfo.SubsystemTypeOverride,
		//                                                                                                     cinfo.ProviderType))
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_0 = ___cinfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MRTKSubsystemCinfo_get_Name_m16ABFCFB5920A666B7F322F15C5C1AA5197F481A_inline(L_0, NULL);
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_2 = ___cinfo0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = MRTKSubsystemCinfo_get_SubsystemTypeOverride_mEA66595FC7C1ED69D33F84557D17897FD017F76E_inline(L_2, NULL);
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_4 = ___cinfo0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = MRTKSubsystemCinfo_get_ProviderType_m4C8A14C25568D8C5E921C9686739E1A0E5F10276_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m36E57093B59370B6A6FC0E78BEBC15DD6CD287EA(L_1, L_3, L_5, XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m36E57093B59370B6A6FC0E78BEBC15DD6CD287EA_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentException("Could not create KeywordRecognitionSubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33B1E25D03A60D4D52E409FD3171FF658C3AB9F9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeywordRecognitionSubsystemDescriptor_Create_m6440B466088D30C23077FA669EDF5511BBB7C881_RuntimeMethod_var)));
	}

IL_0024:
	{
		// return new KeywordRecognitionSubsystemDescriptor(cinfo);
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_8 = ___cinfo0;
		KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* L_9 = (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A*)il2cpp_codegen_object_new(KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		KeywordRecognitionSubsystemDescriptor__ctor_m2F810A3A0DC899924B7A7CB5C5AC924865F6BB38(L_9, L_8, NULL);
		return L_9;
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystem__ctor_m02654ABFE0C86BFD7565428DB2058732033FD356 (TextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextToSpeechSubsystem()
		il2cpp_codegen_runtime_class_init_inline(MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5(__this, MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5_RuntimeMethod_var);
		// { }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem::TrySpeak(System.String,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TextToSpeechSubsystem_TrySpeak_m670F46C11B73EAD63E6FBD3A436DFD46B4F002EB (TextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B* __this, String_t* ___phrase0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Task<bool> TrySpeak(string phrase, AudioSource audioSource) => provider.TrySpeak(phrase, audioSource);
		Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_inline(__this, SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_RuntimeMethod_var);
		String_t* L_1 = ___phrase0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___audioSource1;
		NullCheck(L_0);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_3;
		L_3 = VirtualFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t*, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* >::Invoke(18 /* System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider::TrySpeak(System.String,UnityEngine.AudioSource) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem::Register(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechSubsystem_Register_mE2FECF10C8545A0B97B43F86C2A6CBBFE10FFF95 (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___subsystemParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextToSpeechSubsystemDescriptor Descriptor = TextToSpeechSubsystemDescriptor.Create(subsystemParams);
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_0 = ___subsystemParams0;
		TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* L_1;
		L_1 = TextToSpeechSubsystemDescriptor_Create_mC8401835148413454D6DFC07940748FA8EA64539(L_0, NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(Descriptor);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F(L_1, NULL);
		// return true;
		return (bool)1;
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m39939D5F249CA106064237867889A775A5A638D7 (Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C(__this, MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C_RuntimeMethod_var);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechSubsystemCinfo_Equals_mD8D3AE549451BA207AB02D3D8E6C62647FE1FD7E (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___other0, const RuntimeMethod* method) 
{
	{
		// return base.Equals(other);
		MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* L_0 = ___other0;
		bool L_1;
		L_1 = MRTKSubsystemCinfo_Equals_m3111B01E6191DC1AAED8CBD2B6EB665FBC2A0B98(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystemCinfo__ctor_m89368C58F9C324DC83DFB5465B329F4EE406F802 (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* __this, const RuntimeMethod* method) 
{
	{
		MRTKSubsystemCinfo__ctor_m50B9CACB0C4603A8F87EE5277BE47E62846E0BA4(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystemDescriptor__ctor_mA047A84F98373061E4E8520509E93A921904C95E (TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* __this, TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextToSpeechSubsystemDescriptor(TextToSpeechSubsystemCinfo cinfo) : base(cinfo)
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_0 = ___cinfo0;
		MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE(__this, L_0, MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE_RuntimeMethod_var);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* TextToSpeechSubsystemDescriptor_Create_mC8401835148413454D6DFC07940748FA8EA64539 (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m4E6D6C072A58C8B63AD6A195E6EC5B5DB4E8D1B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!XRSubsystemHelpers.CheckTypes<TextToSpeechSubsystem, TextToSpeechSubsystem.Provider>(
		//         cinfo.Name,
		//         cinfo.SubsystemTypeOverride,
		//         cinfo.ProviderType))
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_0 = ___cinfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MRTKSubsystemCinfo_get_Name_m16ABFCFB5920A666B7F322F15C5C1AA5197F481A_inline(L_0, NULL);
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_2 = ___cinfo0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = MRTKSubsystemCinfo_get_SubsystemTypeOverride_mEA66595FC7C1ED69D33F84557D17897FD017F76E_inline(L_2, NULL);
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_4 = ___cinfo0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = MRTKSubsystemCinfo_get_ProviderType_m4C8A14C25568D8C5E921C9686739E1A0E5F10276_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m4E6D6C072A58C8B63AD6A195E6EC5B5DB4E8D1B1(L_1, L_3, L_5, XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m4E6D6C072A58C8B63AD6A195E6EC5B5DB4E8D1B1_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentException("Could not create TextToSpeechSubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5542C2C12376B62727BB20CE9C9B84E76ACD561B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextToSpeechSubsystemDescriptor_Create_mC8401835148413454D6DFC07940748FA8EA64539_RuntimeMethod_var)));
	}

IL_0024:
	{
		// return new TextToSpeechSubsystemDescriptor(cinfo);
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_8 = ___cinfo0;
		TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* L_9 = (TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508*)il2cpp_codegen_object_new(TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		TextToSpeechSubsystemDescriptor__ctor_mA047A84F98373061E4E8520509E93A921904C95E(L_9, L_8, NULL);
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mE9994954E7AF49F138631A2F9FA1EC0162989EAF_inline (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mB4E255EEB2AF1728860B80D6EF1312E69054A359_inline (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MRTKSubsystemCinfo_get_Name_m16ABFCFB5920A666B7F322F15C5C1AA5197F481A_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_SubsystemTypeOverride_mEA66595FC7C1ED69D33F84557D17897FD017F76E_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_ProviderType_m4C8A14C25568D8C5E921C9686739E1A0E5F10276_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
