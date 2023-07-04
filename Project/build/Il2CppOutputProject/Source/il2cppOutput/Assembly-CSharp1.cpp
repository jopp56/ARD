#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// StartMenuScript
struct StartMenuScript_t78D819D1DEC7599700D4790BEFE923EA37E35546;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VuforiaLicense
struct VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC;

IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral38BEECAE4FE29AFCDD566ADED0435F58F7842321;
IL2CPP_EXTERN_C String_t* _stringLiteral45F24F6A02100417A1201BB891EA7337C98C217B;
IL2CPP_EXTERN_C String_t* _stringLiteral64EEAA3F2713CBB1D6F78CD2162A7F6F55DAD57E;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C52A30645908E34422B1D5E4393D189ECE60D6;
IL2CPP_EXTERN_C String_t* _stringLiteralA3627341AC0438C7F6FA5AEBCDC8438E90C20337;
IL2CPP_EXTERN_C String_t* _stringLiteralDE288C76D2C90FADE65AE09D79433508E526D3E2;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
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
	// UnityEngine.GameObject StartMenuScript::kiButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___kiButton_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
