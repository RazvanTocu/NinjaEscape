#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct KeyCollection_tAAF3D9ADA9F56E0535D564F6CC37ED7581B0C6E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct KeyCollection_tBA4EF0A595F5A3B2C12EAAF865760BAB652B4F78;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct ValueCollection_tEB573FD4DCBFCBC6B94A7305067BD656835A22DB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct ValueCollection_tD0258FEEB3190DEDD2F06EC88984861EF67066A7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>[]
struct EntryU5BU5D_t1F40ADE65E98FF488B5372F9007C37B231B685E0;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>[]
struct EntryU5BU5D_t5AEBFC57BC6169C95C2712AD8F8D2DA15B439E13;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t1897ACC9B6EF252577FF4221286F894FD5985570;
// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_tEABCD003AC4F504CBEE5B3331BC2B7E067358F3F;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C;
// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9;
IL2CPP_EXTERN_C String_t* _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralE1921D3070489B1532E810684C2992B44215A052;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrossPlatformInputManager_UnRegisterVirtualAxis_m9D8D39C220DC4F3A2C3CB6B8B70133F8498DE7CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2F63DCF83A40DC2F58E315B4C908E9169F746F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB834F33DF036C6A33012F5C86A058103C3BB6C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m510CC012B1D84B43ECD8CFB5F6EC38F56A1128C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mA1FF1A5B7A322ED270DAD55BEA86CAF88B2042B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDD8DF06BD18D58566BFD18CE01E1F930254EF66C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE826BAFD3D8E4926320A9D319096BA0B2BDD1490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisNegative_mDBAAE498882ECF2E4D33845E261E8A9A5EA6A836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisPositive_m2814A657D734070FEAF4EADBBF007930A31676FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisZero_mBBF4C8C5A663D9A571B893004A53F9EC563B56FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxis_mA1CF1E8111F696EBCF0B0F2DF35240D90F306749_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonDown_mF161FFE68B291B3EA5706B11332CEA18F7607D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonUp_m022730DC553DB6D86C1412728A604CE362C2AE29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1F40ADE65E98FF488B5372F9007C37B231B685E0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tAAF3D9ADA9F56E0535D564F6CC37ED7581B0C6E0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tEB573FD4DCBFCBC6B94A7305067BD656835A22DB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ___entries_1)); }
	inline EntryU5BU5D_t1F40ADE65E98FF488B5372F9007C37B231B685E0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1F40ADE65E98FF488B5372F9007C37B231B685E0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1F40ADE65E98FF488B5372F9007C37B231B685E0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ___keys_7)); }
	inline KeyCollection_tAAF3D9ADA9F56E0535D564F6CC37ED7581B0C6E0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tAAF3D9ADA9F56E0535D564F6CC37ED7581B0C6E0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tAAF3D9ADA9F56E0535D564F6CC37ED7581B0C6E0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ___values_8)); }
	inline ValueCollection_tEB573FD4DCBFCBC6B94A7305067BD656835A22DB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tEB573FD4DCBFCBC6B94A7305067BD656835A22DB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tEB573FD4DCBFCBC6B94A7305067BD656835A22DB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5AEBFC57BC6169C95C2712AD8F8D2DA15B439E13* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBA4EF0A595F5A3B2C12EAAF865760BAB652B4F78 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD0258FEEB3190DEDD2F06EC88984861EF67066A7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ___entries_1)); }
	inline EntryU5BU5D_t5AEBFC57BC6169C95C2712AD8F8D2DA15B439E13* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5AEBFC57BC6169C95C2712AD8F8D2DA15B439E13** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5AEBFC57BC6169C95C2712AD8F8D2DA15B439E13* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ___keys_7)); }
	inline KeyCollection_tBA4EF0A595F5A3B2C12EAAF865760BAB652B4F78 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBA4EF0A595F5A3B2C12EAAF865760BAB652B4F78 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBA4EF0A595F5A3B2C12EAAF865760BAB652B4F78 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ___values_8)); }
	inline ValueCollection_tD0258FEEB3190DEDD2F06EC88984861EF67066A7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD0258FEEB3190DEDD2F06EC88984861EF67066A7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD0258FEEB3190DEDD2F06EC88984861EF67066A7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A  : public RuntimeObject
{
public:

public:
};

struct CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields
{
public:
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * ___s_HardwareInput_2;

public:
	inline static int32_t get_offset_of_activeInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields, ___activeInput_0)); }
	inline VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * get_activeInput_0() const { return ___activeInput_0; }
	inline VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 ** get_address_of_activeInput_0() { return &___activeInput_0; }
	inline void set_activeInput_0(VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * value)
	{
		___activeInput_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeInput_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_TouchInput_1() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields, ___s_TouchInput_1)); }
	inline VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * get_s_TouchInput_1() const { return ___s_TouchInput_1; }
	inline VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 ** get_address_of_s_TouchInput_1() { return &___s_TouchInput_1; }
	inline void set_s_TouchInput_1(VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * value)
	{
		___s_TouchInput_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TouchInput_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_HardwareInput_2() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields, ___s_HardwareInput_2)); }
	inline VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * get_s_HardwareInput_2() const { return ___s_HardwareInput_2; }
	inline VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 ** get_address_of_s_HardwareInput_2() { return &___s_HardwareInput_2; }
	inline void set_s_HardwareInput_2(VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * value)
	{
		___s_HardwareInput_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HardwareInput_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E, ___U3CmatchWithInputManagerU3Ek__BackingField_1)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_1() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return &___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_1(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E, ___m_LastPressedFrame_2)); }
	inline int32_t get_m_LastPressedFrame_2() const { return ___m_LastPressedFrame_2; }
	inline int32_t* get_address_of_m_LastPressedFrame_2() { return &___m_LastPressedFrame_2; }
	inline void set_m_LastPressedFrame_2(int32_t value)
	{
		___m_LastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E, ___m_ReleasedFrame_3)); }
	inline int32_t get_m_ReleasedFrame_3() const { return ___m_ReleasedFrame_3; }
	inline int32_t* get_address_of_m_ReleasedFrame_3() { return &___m_ReleasedFrame_3; }
	inline void set_m_ReleasedFrame_3(int32_t value)
	{
		___m_ReleasedFrame_3 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_4() { return static_cast<int32_t>(offsetof(VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E, ___m_Pressed_4)); }
	inline bool get_m_Pressed_4() const { return ___m_Pressed_4; }
	inline bool* get_address_of_m_Pressed_4() { return &___m_Pressed_4; }
	inline void set_m_Pressed_4(bool value)
	{
		___m_Pressed_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_AlwaysUseVirtual_3;

public:
	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737, ___U3CvirtualMousePositionU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CvirtualMousePositionU3Ek__BackingField_0() const { return ___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return &___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualAxes_1() { return static_cast<int32_t>(offsetof(VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737, ___m_VirtualAxes_1)); }
	inline Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * get_m_VirtualAxes_1() const { return ___m_VirtualAxes_1; }
	inline Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE ** get_address_of_m_VirtualAxes_1() { return &___m_VirtualAxes_1; }
	inline void set_m_VirtualAxes_1(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * value)
	{
		___m_VirtualAxes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualAxes_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_2() { return static_cast<int32_t>(offsetof(VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737, ___m_VirtualButtons_2)); }
	inline Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * get_m_VirtualButtons_2() const { return ___m_VirtualButtons_2; }
	inline Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 ** get_address_of_m_VirtualButtons_2() { return &___m_VirtualButtons_2; }
	inline void set_m_VirtualButtons_2(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * value)
	{
		___m_VirtualButtons_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualButtons_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_3() { return static_cast<int32_t>(offsetof(VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737, ___m_AlwaysUseVirtual_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_AlwaysUseVirtual_3() const { return ___m_AlwaysUseVirtual_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_AlwaysUseVirtual_3() { return &___m_AlwaysUseVirtual_3; }
	inline void set_m_AlwaysUseVirtual_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_AlwaysUseVirtual_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlwaysUseVirtual_3), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
struct ActiveInputMethod_t0107451FFB351D8752482F0561AE314E092E714C 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActiveInputMethod_t0107451FFB351D8752482F0561AE314E092E714C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
struct AxisOption_t937A6B4E0AD29E66214ED0B926DF30A8A57F5375 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_t937A6B4E0AD29E66214ED0B926DF30A8A57F5375, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
struct AxisOptions_t66B09AB9FF661FDDD95885C3D25EE613718E12CE 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOptions_t66B09AB9FF661FDDD95885C3D25EE613718E12CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct AxisOption_t7BECCB919892499CC2E75CF5E44410146DB66307 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOption_t7BECCB919892499CC2E75CF5E44410146DB66307, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct ControlStyle_tCEC24780604CA4C692B89B8717B7C5BCAB70FC28 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlStyle_tCEC24780604CA4C692B89B8717B7C5BCAB70FC28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
struct MappingType_tBFE519F2898E72818B332AA3504774EB1AA7109E 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MappingType_tBFE519F2898E72818B332AA3504774EB1AA7109E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9  : public VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF  : public VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA  : public RuntimeObject
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_axisName_1() { return static_cast<int32_t>(offsetof(AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA, ___axisName_1)); }
	inline String_t* get_axisName_1() const { return ___axisName_1; }
	inline String_t** get_address_of_axisName_1() { return &___axisName_1; }
	inline void set_axisName_1(String_t* value)
	{
		___axisName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisName_1), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_7;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * ___m_PairedWith_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___m_Axis_9;

public:
	inline static int32_t get_offset_of_axisName_4() { return static_cast<int32_t>(offsetof(AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02, ___axisName_4)); }
	inline String_t* get_axisName_4() const { return ___axisName_4; }
	inline String_t** get_address_of_axisName_4() { return &___axisName_4; }
	inline void set_axisName_4(String_t* value)
	{
		___axisName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisName_4), (void*)value);
	}

	inline static int32_t get_offset_of_axisValue_5() { return static_cast<int32_t>(offsetof(AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02, ___axisValue_5)); }
	inline float get_axisValue_5() const { return ___axisValue_5; }
	inline float* get_address_of_axisValue_5() { return &___axisValue_5; }
	inline void set_axisValue_5(float value)
	{
		___axisValue_5 = value;
	}

	inline static int32_t get_offset_of_responseSpeed_6() { return static_cast<int32_t>(offsetof(AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02, ___responseSpeed_6)); }
	inline float get_responseSpeed_6() const { return ___responseSpeed_6; }
	inline float* get_address_of_responseSpeed_6() { return &___responseSpeed_6; }
	inline void set_responseSpeed_6(float value)
	{
		___responseSpeed_6 = value;
	}

	inline static int32_t get_offset_of_returnToCentreSpeed_7() { return static_cast<int32_t>(offsetof(AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02, ___returnToCentreSpeed_7)); }
	inline float get_returnToCentreSpeed_7() const { return ___returnToCentreSpeed_7; }
	inline float* get_address_of_returnToCentreSpeed_7() { return &___returnToCentreSpeed_7; }
	inline void set_returnToCentreSpeed_7(float value)
	{
		___returnToCentreSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_PairedWith_8() { return static_cast<int32_t>(offsetof(AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02, ___m_PairedWith_8)); }
	inline AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * get_m_PairedWith_8() const { return ___m_PairedWith_8; }
	inline AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 ** get_address_of_m_PairedWith_8() { return &___m_PairedWith_8; }
	inline void set_m_PairedWith_8(AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * value)
	{
		___m_PairedWith_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PairedWith_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Axis_9() { return static_cast<int32_t>(offsetof(AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02, ___m_Axis_9)); }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * get_m_Axis_9() const { return ___m_Axis_9; }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 ** get_address_of_m_Axis_9() { return &___m_Axis_9; }
	inline void set_m_Axis_9(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * value)
	{
		___m_Axis_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Axis_9), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_4;

public:
	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t1897ACC9B6EF252577FF4221286F894FD5985570  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_4;

public:
	inline static int32_t get_offset_of_axis_4() { return static_cast<int32_t>(offsetof(InputAxisScrollbar_t1897ACC9B6EF252577FF4221286F894FD5985570, ___axis_4)); }
	inline String_t* get_axis_4() const { return ___axis_4; }
	inline String_t** get_address_of_axis_4() { return &___axis_4; }
	inline void set_axis_4(String_t* value)
	{
		___axis_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axis_4), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_4;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_5;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_StartPos_8;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_9;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_10;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___m_HorizontalVirtualAxis_11;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___m_VerticalVirtualAxis_12;

public:
	inline static int32_t get_offset_of_MovementRange_4() { return static_cast<int32_t>(offsetof(Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8, ___MovementRange_4)); }
	inline int32_t get_MovementRange_4() const { return ___MovementRange_4; }
	inline int32_t* get_address_of_MovementRange_4() { return &___MovementRange_4; }
	inline void set_MovementRange_4(int32_t value)
	{
		___MovementRange_4 = value;
	}

	inline static int32_t get_offset_of_axesToUse_5() { return static_cast<int32_t>(offsetof(Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8, ___axesToUse_5)); }
	inline int32_t get_axesToUse_5() const { return ___axesToUse_5; }
	inline int32_t* get_address_of_axesToUse_5() { return &___axesToUse_5; }
	inline void set_axesToUse_5(int32_t value)
	{
		___axesToUse_5 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_6() { return static_cast<int32_t>(offsetof(Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8, ___horizontalAxisName_6)); }
	inline String_t* get_horizontalAxisName_6() const { return ___horizontalAxisName_6; }
	inline String_t** get_address_of_horizontalAxisName_6() { return &___horizontalAxisName_6; }
	inline void set_horizontalAxisName_6(String_t* value)
	{
		___horizontalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horizontalAxisName_6), (void*)value);
	}

	inline static int32_t get_offset_of_verticalAxisName_7() { return static_cast<int32_t>(offsetof(Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8, ___verticalAxisName_7)); }
	inline String_t* get_verticalAxisName_7() const { return ___verticalAxisName_7; }
	inline String_t** get_address_of_verticalAxisName_7() { return &___verticalAxisName_7; }
	inline void set_verticalAxisName_7(String_t* value)
	{
		___verticalAxisName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticalAxisName_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8, ___m_StartPos_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_UseX_9() { return static_cast<int32_t>(offsetof(Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8, ___m_UseX_9)); }
	inline bool get_m_UseX_9() const { return ___m_UseX_9; }
	inline bool* get_address_of_m_UseX_9() { return &___m_UseX_9; }
	inline void set_m_UseX_9(bool value)
	{
		___m_UseX_9 = value;
	}

	inline static int32_t get_offset_of_m_UseY_10() { return static_cast<int32_t>(offsetof(Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8, ___m_UseY_10)); }
	inline bool get_m_UseY_10() const { return ___m_UseY_10; }
	inline bool* get_address_of_m_UseY_10() { return &___m_UseY_10; }
	inline void set_m_UseY_10(bool value)
	{
		___m_UseY_10 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_11() { return static_cast<int32_t>(offsetof(Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8, ___m_HorizontalVirtualAxis_11)); }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * get_m_HorizontalVirtualAxis_11() const { return ___m_HorizontalVirtualAxis_11; }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 ** get_address_of_m_HorizontalVirtualAxis_11() { return &___m_HorizontalVirtualAxis_11; }
	inline void set_m_HorizontalVirtualAxis_11(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * value)
	{
		___m_HorizontalVirtualAxis_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalVirtualAxis_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_12() { return static_cast<int32_t>(offsetof(Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8, ___m_VerticalVirtualAxis_12)); }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * get_m_VerticalVirtualAxis_12() const { return ___m_VerticalVirtualAxis_12; }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 ** get_address_of_m_VerticalVirtualAxis_12() { return &___m_VerticalVirtualAxis_12; }
	inline void set_m_VerticalVirtualAxis_12(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * value)
	{
		___m_VerticalVirtualAxis_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalVirtualAxis_12), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_tEABCD003AC4F504CBEE5B3331BC2B7E067358F3F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA * ___mapping_4;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_7;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___m_SteerAxis_8;

public:
	inline static int32_t get_offset_of_mapping_4() { return static_cast<int32_t>(offsetof(TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C, ___mapping_4)); }
	inline AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA * get_mapping_4() const { return ___mapping_4; }
	inline AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA ** get_address_of_mapping_4() { return &___mapping_4; }
	inline void set_mapping_4(AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA * value)
	{
		___mapping_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapping_4), (void*)value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_5() { return static_cast<int32_t>(offsetof(TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C, ___tiltAroundAxis_5)); }
	inline int32_t get_tiltAroundAxis_5() const { return ___tiltAroundAxis_5; }
	inline int32_t* get_address_of_tiltAroundAxis_5() { return &___tiltAroundAxis_5; }
	inline void set_tiltAroundAxis_5(int32_t value)
	{
		___tiltAroundAxis_5 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_6() { return static_cast<int32_t>(offsetof(TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C, ___fullTiltAngle_6)); }
	inline float get_fullTiltAngle_6() const { return ___fullTiltAngle_6; }
	inline float* get_address_of_fullTiltAngle_6() { return &___fullTiltAngle_6; }
	inline void set_fullTiltAngle_6(float value)
	{
		___fullTiltAngle_6 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_7() { return static_cast<int32_t>(offsetof(TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C, ___centreAngleOffset_7)); }
	inline float get_centreAngleOffset_7() const { return ___centreAngleOffset_7; }
	inline float* get_address_of_centreAngleOffset_7() { return &___centreAngleOffset_7; }
	inline void set_centreAngleOffset_7(float value)
	{
		___centreAngleOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_SteerAxis_8() { return static_cast<int32_t>(offsetof(TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C, ___m_SteerAxis_8)); }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * get_m_SteerAxis_8() const { return ___m_SteerAxis_8; }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 ** get_address_of_m_SteerAxis_8() { return &___m_SteerAxis_8; }
	inline void set_m_SteerAxis_8(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * value)
	{
		___m_SteerAxis_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SteerAxis_8), (void*)value);
	}
};


// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_4;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_5;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_7;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_8;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_StartPos_10;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousDelta_11;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_JoytickOutput_12;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_13;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_14;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___m_HorizontalVirtualAxis_15;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___m_VerticalVirtualAxis_16;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_17;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_18;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousTouchPos_19;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_20;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_Image_21;

public:
	inline static int32_t get_offset_of_axesToUse_4() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___axesToUse_4)); }
	inline int32_t get_axesToUse_4() const { return ___axesToUse_4; }
	inline int32_t* get_address_of_axesToUse_4() { return &___axesToUse_4; }
	inline void set_axesToUse_4(int32_t value)
	{
		___axesToUse_4 = value;
	}

	inline static int32_t get_offset_of_controlStyle_5() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___controlStyle_5)); }
	inline int32_t get_controlStyle_5() const { return ___controlStyle_5; }
	inline int32_t* get_address_of_controlStyle_5() { return &___controlStyle_5; }
	inline void set_controlStyle_5(int32_t value)
	{
		___controlStyle_5 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_6() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___horizontalAxisName_6)); }
	inline String_t* get_horizontalAxisName_6() const { return ___horizontalAxisName_6; }
	inline String_t** get_address_of_horizontalAxisName_6() { return &___horizontalAxisName_6; }
	inline void set_horizontalAxisName_6(String_t* value)
	{
		___horizontalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horizontalAxisName_6), (void*)value);
	}

	inline static int32_t get_offset_of_verticalAxisName_7() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___verticalAxisName_7)); }
	inline String_t* get_verticalAxisName_7() const { return ___verticalAxisName_7; }
	inline String_t** get_address_of_verticalAxisName_7() { return &___verticalAxisName_7; }
	inline void set_verticalAxisName_7(String_t* value)
	{
		___verticalAxisName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticalAxisName_7), (void*)value);
	}

	inline static int32_t get_offset_of_Xsensitivity_8() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___Xsensitivity_8)); }
	inline float get_Xsensitivity_8() const { return ___Xsensitivity_8; }
	inline float* get_address_of_Xsensitivity_8() { return &___Xsensitivity_8; }
	inline void set_Xsensitivity_8(float value)
	{
		___Xsensitivity_8 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_9() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___Ysensitivity_9)); }
	inline float get_Ysensitivity_9() const { return ___Ysensitivity_9; }
	inline float* get_address_of_Ysensitivity_9() { return &___Ysensitivity_9; }
	inline void set_Ysensitivity_9(float value)
	{
		___Ysensitivity_9 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_10() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_StartPos_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_StartPos_10() const { return ___m_StartPos_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_StartPos_10() { return &___m_StartPos_10; }
	inline void set_m_StartPos_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_StartPos_10 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_11() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_PreviousDelta_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousDelta_11() const { return ___m_PreviousDelta_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousDelta_11() { return &___m_PreviousDelta_11; }
	inline void set_m_PreviousDelta_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousDelta_11 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_12() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_JoytickOutput_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_JoytickOutput_12() const { return ___m_JoytickOutput_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_JoytickOutput_12() { return &___m_JoytickOutput_12; }
	inline void set_m_JoytickOutput_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_JoytickOutput_12 = value;
	}

	inline static int32_t get_offset_of_m_UseX_13() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_UseX_13)); }
	inline bool get_m_UseX_13() const { return ___m_UseX_13; }
	inline bool* get_address_of_m_UseX_13() { return &___m_UseX_13; }
	inline void set_m_UseX_13(bool value)
	{
		___m_UseX_13 = value;
	}

	inline static int32_t get_offset_of_m_UseY_14() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_UseY_14)); }
	inline bool get_m_UseY_14() const { return ___m_UseY_14; }
	inline bool* get_address_of_m_UseY_14() { return &___m_UseY_14; }
	inline void set_m_UseY_14(bool value)
	{
		___m_UseY_14 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_15() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_HorizontalVirtualAxis_15)); }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * get_m_HorizontalVirtualAxis_15() const { return ___m_HorizontalVirtualAxis_15; }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 ** get_address_of_m_HorizontalVirtualAxis_15() { return &___m_HorizontalVirtualAxis_15; }
	inline void set_m_HorizontalVirtualAxis_15(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * value)
	{
		___m_HorizontalVirtualAxis_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalVirtualAxis_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_16() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_VerticalVirtualAxis_16)); }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * get_m_VerticalVirtualAxis_16() const { return ___m_VerticalVirtualAxis_16; }
	inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 ** get_address_of_m_VerticalVirtualAxis_16() { return &___m_VerticalVirtualAxis_16; }
	inline void set_m_VerticalVirtualAxis_16(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * value)
	{
		___m_VerticalVirtualAxis_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalVirtualAxis_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dragging_17() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_Dragging_17)); }
	inline bool get_m_Dragging_17() const { return ___m_Dragging_17; }
	inline bool* get_address_of_m_Dragging_17() { return &___m_Dragging_17; }
	inline void set_m_Dragging_17(bool value)
	{
		___m_Dragging_17 = value;
	}

	inline static int32_t get_offset_of_m_Id_18() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_Id_18)); }
	inline int32_t get_m_Id_18() const { return ___m_Id_18; }
	inline int32_t* get_address_of_m_Id_18() { return &___m_Id_18; }
	inline void set_m_Id_18(int32_t value)
	{
		___m_Id_18 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_19() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_PreviousTouchPos_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousTouchPos_19() const { return ___m_PreviousTouchPos_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousTouchPos_19() { return &___m_PreviousTouchPos_19; }
	inline void set_m_PreviousTouchPos_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousTouchPos_19 = value;
	}

	inline static int32_t get_offset_of_m_Center_20() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_Center_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_20() const { return ___m_Center_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_20() { return &___m_Center_20; }
	inline void set_m_Center_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_20 = value;
	}

	inline static int32_t get_offset_of_m_Image_21() { return static_cast<int32_t>(offsetof(TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB, ___m_Image_21)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_Image_21() const { return ___m_Image_21; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_Image_21() { return &___m_Image_21; }
	inline void set_m_Image_21(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_Image_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_21), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMoveVector_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMousePosition_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_MousePosition_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton[]
struct AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * m_Items[1];

public:
	inline AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m4FEC2F1060469FE049B1EC0F5F2E06308D04F1FB (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m45BDD22C8C4D6C9F7688EBE8A8AA8C359A9739B0 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mDE18EA3CA1850E55CBF3646D2B4B594C3D2E4012 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___axis0, const RuntimeMethod* method);
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * CrossPlatformInputManager_VirtualAxisReference_mDD8FEAFEDB0287745B1306FF74D0E96E43EDDF18 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_m8CF1865FF0BDC9BAFB84EAC744030DC8C580DBBB (AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m87C276626734C743E905DEF5676D7E20A1FE4E84 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_m09D1A8A70EBE99FF08A775E7E4E712DB36FC0074_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321 (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m53B859588FB8E55D8F8870E8D4B22FBD15F10CAA (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_mFD905CB61B3D1FDB9849794A26F1D5692B6A7E1E (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_m0E37ED166507790B844EE1DD6887CC9EDA22A15E (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mB6FF916C93104C57CCAD8192417B585E3970F5FF (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_mA4FB9BC0E67644654C9A4A5E3DD29D874B568854 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_mB949C72B0E7FF5525EC1665C90FDF7711D66553E (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m1FE8E27FACDE12E13BBD48AE2271793A9D14E85A (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_m87A8FAE39791688D06E205D22E93F1A834E3FD34 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m1DF04318EEF668547A7D1BBADC0C29BC1E9E86D6 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m4303DDF81B785BB9360637B4933ACC72375DE169 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___axis0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m87E583FD563D1CA006649C6C20955930BEC6DE17 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * ___button0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_mE24DC66E9590CA2197FCB511A09B1E8C5BA29B67 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_m752A58BA639C5C0279981BB22236624322F5469D (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * VirtualInput_VirtualAxisReference_m3D0A3332EA5D6E20888806B8BBF47D048A24D573 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mF80A7879730C1DACD891370165B3047CBE38FE9F (String_t* ___name0, bool ___raw1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m4E86EF5326CE739ED8C8BF6A4668E6865446D1EE (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m8E8EFEEC448ABB5BF021D6A1FE717DD0DAD54996 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_mA1919BA7A9DFBA2FF21E0ACB961615734D9B0EA9 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_mB08F939B2F8BE7F6735DDCB785E2CC1D1CBBD289 (String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_m2BBF3E6563BF264ECFF1F21A31E1DDE1BE79D484 (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m7AFB3E1E42DC35583F993143683D1C121E91060D (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_m659A01CF56D65C46D5478B65689F8E9121C06548 (MobileControlRig_tEABCD003AC4F504CBEE5B3331BC2B7E067358F3F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801 (const RuntimeMethod* method)
{
	return ((  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD * GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m963EBBECA835E7DA7DDC622D6094C413F6C145E8 (MobileControlRig_tEABCD003AC4F504CBEE5B3331BC2B7E067358F3F * __this, bool ___enabled0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mB74B2E037DE38A528DACF2C84C8A4D31E0529719 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m093B58B2D78513C3E0DE8F1EE400F2E0A0A7A6C5 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * ___button0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2 (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m4082418ADE887EAE4875045778D9A9F7629C7A7B (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0)
inline VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5 (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * (*) (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5 (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mF9E9019F0742B0EDCDE05E0B2A95B6722A4CF05F (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0)
inline VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * (*) (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mB296318405C50D58D04AA5B94A255724C63C3BA4 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_mE56B9C8A01CA84D2D3B08A64A1774864B760545F (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m2C5DD69820AF09ED373AA9DBFFC3EB24B1D61010 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m4B5998BAE5191BADFED62D20B28C972FFC1F04B2 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_m864DD5764E8838F04419A3D7408A5C11E33EF543_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D_inline (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m03F5BD63718F89549B70B078815AF608DB4CE247 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_mA3A2BE4203B083CCAA16CC6EE0F9432E5C64E87B (float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m5E7A32060D6C052520B1E63ACF1DEE91505D15F6 (float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_m729C3CD358ABE275E70AA87DEF0173920AA25C9A (float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_m03A1602F5007472C92BC2939ECC1677E2470BEE4 (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_mA24D1A89604F8EC39D68B986D11855DA2721F9BE (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m9D8D39C220DC4F3A2C3CB6B8B70133F8498DE7CD (String_t* ___name0, const RuntimeMethod* method);
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mF21B7D6E9DC362BB0A39102A685F546D6CC97FC9_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1)
inline void Dictionary_2_Add_m2F63DCF83A40DC2F58E315B4C908E9169F746F2F (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * __this, String_t* ___key0, VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE *, String_t*, VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m4994BFCD6301A67E66B861704F22EB979B1E9FA3_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m25DD35952D230434D30164BB20C10DDF31ACF378_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1)
inline void Dictionary_2_Add_mB834F33DF036C6A33012F5C86A058103C3BB6C7A (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * __this, String_t* ___key0, VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 *, String_t*, VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6189CA3D229A3AA0A14D72E394ED9C9F96C62125_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(!0)
inline bool Dictionary_2_Remove_mA1FF1A5B7A322ED270DAD55BEA86CAF88B2042B5 (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(!0)
inline bool Dictionary_2_Remove_m510CC012B1D84B43ECD8CFB5F6EC38F56A1128C6 (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m5165785E37AF221689AE2CDF26511E18457896CA_inline (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
inline void Dictionary_2__ctor_mDD8DF06BD18D58566BFD18CE01E1F930254EF66C (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
inline void Dictionary_2__ctor_mE826BAFD3D8E4926320A9D319096BA0B2BDD1490 (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mD4CEC1EF78B24F9C8F83947C1287D4EB7D0ADD08 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m68EFC2478DCF96B0A24E38B180C83435FE7CF86F_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m677A5A5839238FDC8C95E5B9C636A24941E92174_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mCD05FB01308E9EC6D64BC735D70415F83A71C4EC (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEC4C392538A5F62CA0CBB1D5C69062F7861DE9D2_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m11F6F506F8BB7F46F7DEEFFA4CA973C4AAFD953F_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m515369D5EC44A5A91C6D1A5C53594C78F17C5A74 (String_t* ___name0, const RuntimeMethod* method);
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
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnEnable_m9E41A0951BB3466FDE47433941EB37D2CD77A44B (AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CrossPlatformInputManager.AxisExists(axisName))
		String_t* L_0 = __this->get_axisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_m4FEC2F1060469FE049B1EC0F5F2E06308D04F1FB(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// m_Axis = new CrossPlatformInputManager.VirtualAxis(axisName);
		String_t* L_2 = __this->get_axisName_4();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_3 = (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 *)il2cpp_codegen_object_new(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m45BDD22C8C4D6C9F7688EBE8A8AA8C359A9739B0(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_Axis_9(L_3);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_Axis);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_4 = __this->get_m_Axis_9();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDE18EA3CA1850E55CBF3646D2B4B594C3D2E4012(L_4, /*hidden argument*/NULL);
		// }
		goto IL_003c;
	}

IL_002b:
	{
		// m_Axis = CrossPlatformInputManager.VirtualAxisReference(axisName);
		String_t* L_5 = __this->get_axisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_6;
		L_6 = CrossPlatformInputManager_VirtualAxisReference_mDD8FEAFEDB0287745B1306FF74D0E96E43EDDF18(L_5, /*hidden argument*/NULL);
		__this->set_m_Axis_9(L_6);
	}

IL_003c:
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_m8CF1865FF0BDC9BAFB84EAC744030DC8C580DBBB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_m8CF1865FF0BDC9BAFB84EAC744030DC8C580DBBB (AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var otherAxisButtons = FindObjectsOfType(typeof(AxisTouchButton)) as AxisTouchButton[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02(L_1, /*hidden argument*/NULL);
		V_0 = ((AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C*)IsInst((RuntimeObject*)L_2, AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C_il2cpp_TypeInfo_var));
		// if (otherAxisButtons != null)
		AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C* L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		V_1 = 0;
		goto IL_0049;
	}

IL_001c:
	{
		// if (otherAxisButtons[i].axisName == axisName && otherAxisButtons[i] != this)
		AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->get_axisName_4();
		String_t* L_9 = __this->get_axisName_4();
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, __this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		// m_PairedWith = otherAxisButtons[i];
		AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->set_m_PairedWith_8(L_19);
	}

IL_0045:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0049:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_21 = V_1;
		AxisTouchButtonU5BU5D_tC71D593E124AE6CBA8F5B22F324E5B03CE9B667C* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_001c;
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnDisable_mC6B0ABBC78FB53C6F223BAAFC7F255198A907CC6 (AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * __this, const RuntimeMethod* method)
{
	{
		// m_Axis.Remove();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_0 = __this->get_m_Axis_9();
		NullCheck(L_0);
		VirtualAxis_Remove_m87C276626734C743E905DEF5676D7E20A1FE4E84(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerDown_m62E08B9DE45E352B62F5E0DC9C5267734FF303F4 (AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PairedWith == null)
		AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * L_0 = __this->get_m_PairedWith_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_m8CF1865FF0BDC9BAFB84EAC744030DC8C580DBBB(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, axisValue, responseSpeed * Time.deltaTime));
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_2 = __this->get_m_Axis_9();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_3 = __this->get_m_Axis_9();
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualAxis_get_GetValue_m09D1A8A70EBE99FF08A775E7E4E712DB36FC0074_inline(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_axisValue_5();
		float L_6 = __this->get_responseSpeed_6();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_8;
		L_8 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321(L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_2, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerUp_mF21C7DB8B9F16BDD304629FDCD8BCB875914FB30 (AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, 0, responseSpeed * Time.deltaTime));
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_0 = __this->get_m_Axis_9();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_1 = __this->get_m_Axis_9();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualAxis_get_GetValue_m09D1A8A70EBE99FF08A775E7E4E712DB36FC0074_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_responseSpeed_6();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_5;
		L_5 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321(L_2, (0.0f), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton__ctor_m5C1AEDB9C6B5173FE48AD57951278B6FF365AA5E (AxisTouchButton_tEB851D6674A7ABE6D380AD3781C4CBD1F8B0CA02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string axisName = "Horizontal"; // The name of the axis
		__this->set_axisName_4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public float axisValue = 1; // The axis that the value has
		__this->set_axisValue_5((1.0f));
		// public float responseSpeed = 3; // The speed at which the axis touch button responds
		__this->set_responseSpeed_6((3.0f));
		// public float returnToCentreSpeed = 3; // The speed at which the button will return to its centre
		__this->set_returnToCentreSpeed_7((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_OnEnable_m2A2A148B3077C592A119C8AF9D7A6930C4BDB0D2 (ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetDownState_mADC9B284C6FFBEEBD26DE4427064D6341BF88B11 (ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonDown(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_m53B859588FB8E55D8F8870E8D4B22FBD15F10CAA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetUpState_m583F8B34991B881E779B812239F0B38798019BEB (ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonUp(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_mFD905CB61B3D1FDB9849794A26F1D5692B6A7E1E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisPositiveState_mC41AB64922102E5006A0F3C8AD840B2DEBB26A43 (ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisPositive(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_m0E37ED166507790B844EE1DD6887CC9EDA22A15E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNeutralState_mF4F635DE61788361F01F2578A153F744DC7FB45D (ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisZero(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_mB6FF916C93104C57CCAD8192417B585E3970F5FF(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNegativeState_m8735F6EF1A48DC94952EE67627BA2E918297098C (ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisNegative(Name);
		String_t* L_0 = __this->get_Name_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_mA4FB9BC0E67644654C9A4A5E3DD29D874B568854(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_Update_mC26ABAE7E00F966AA999491C44EBDCA04522D80D (ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler__ctor_m1B2C3D9ED1ECB6C6D95ADFC45682C1AD223E6B7D (ButtonHandler_tD8AEA3F02C297AD808F1C64C11789ADDE61A0CC9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager__cctor_mF1EB998001AD61337982749DF4F9BF5A4C792E29 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_TouchInput = new MobileInput();
		MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * L_0 = (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 *)il2cpp_codegen_object_new(MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9_il2cpp_TypeInfo_var);
		MobileInput__ctor_mB949C72B0E7FF5525EC1665C90FDF7711D66553E(L_0, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->set_s_TouchInput_1(L_0);
		// s_HardwareInput = new StandaloneInput();
		StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * L_1 = (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF *)il2cpp_codegen_object_new(StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_m1FE8E27FACDE12E13BBD48AE2271793A9D14E85A(L_1, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->set_s_HardwareInput_2(L_1);
		// activeInput = s_TouchInput;
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_2 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SwitchActiveInputMethod_m46C059CA87BBE86AF5869957576030DAC650018A (int32_t ___activeInputMethod0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___activeInputMethod0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___activeInputMethod0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// activeInput = s_HardwareInput;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_2 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_s_HardwareInput_2();
		((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		// break;
		return;
	}

IL_0013:
	{
		// activeInput = s_TouchInput;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_3 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->set_activeInput_0(L_3);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m4FEC2F1060469FE049B1EC0F5F2E06308D04F1FB (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.AxisExists(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualInput_AxisExists_m87A8FAE39791688D06E205D22E93F1A834E3FD34(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_ButtonExists_m550EF03E0CAB5E985660899613F0CC278CC7599C (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.ButtonExists(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualInput_ButtonExists_m1DF04318EEF668547A7D1BBADC0C29BC1E9E86D6(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mDE18EA3CA1850E55CBF3646D2B4B594C3D2E4012 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualAxis(axis);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_1 = ___axis0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m4303DDF81B785BB9360637B4933ACC72375DE169(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m093B58B2D78513C3E0DE8F1EE400F2E0A0A7A6C5 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualButton(button);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_1 = ___button0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m87E583FD563D1CA006649C6C20955930BEC6DE17(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m9D8D39C220DC4F3A2C3CB6B8B70133F8498DE7CD (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name == null)
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("name");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrossPlatformInputManager_UnRegisterVirtualAxis_m9D8D39C220DC4F3A2C3CB6B8B70133F8498DE7CD_RuntimeMethod_var)));
	}

IL_000e:
	{
		// activeInput.UnRegisterVirtualAxis(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_2 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_mE24DC66E9590CA2197FCB511A09B1E8C5BA29B67(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m515369D5EC44A5A91C6D1A5C53594C78F17C5A74 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.UnRegisterVirtualButton(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_m752A58BA639C5C0279981BB22236624322F5469D(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * CrossPlatformInputManager_VirtualAxisReference_mDD8FEAFEDB0287745B1306FF74D0E96E43EDDF18 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.VirtualAxisReference(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_2;
		L_2 = VirtualInput_VirtualAxisReference_m3D0A3332EA5D6E20888806B8BBF47D048A24D573(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mA6C107E25EC40F79CF6F0F9079FF3D8CAC3ECE25 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, false);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_mF80A7879730C1DACD891370165B3047CBE38FE9F(L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxisRaw_m76039601B6DF4D8DCFE28573BDB5033E0804ED63 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, true);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_mF80A7879730C1DACD891370165B3047CBE38FE9F(L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mF80A7879730C1DACD891370165B3047CBE38FE9F (String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetAxis(name, raw);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		NullCheck(L_0);
		float L_3;
		L_3 = VirtFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_m97E68FF5CC9D3DEC17A1C8C88F3DB4B19C74241A (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButton(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m840CB7D27B4DC991BF7B1005186F401384848683 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonDown(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonUp_m8C26CAF767CC341C8AFCB6D9365C0E687CB5E8D1 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonUp(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m53B859588FB8E55D8F8870E8D4B22FBD15F10CAA (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonDown(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_mFD905CB61B3D1FDB9849794A26F1D5692B6A7E1E (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonUp(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_m0E37ED166507790B844EE1DD6887CC9EDA22A15E (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisPositive(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_mA4FB9BC0E67644654C9A4A5E3DD29D874B568854 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisNegative(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mB6FF916C93104C57CCAD8192417B585E3970F5FF (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisZero(name);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_mB08F939B2F8BE7F6735DDCB785E2CC1D1CBBD289 (String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxis(name, value);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CrossPlatformInputManager_get_mousePosition_m826E6653165323C64A5E72DEA8BFC1BB98BC3B75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return activeInput.MousePosition(); }
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_mA3A2BE4203B083CCAA16CC6EE0F9432E5C64E87B (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionX(f);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m4E86EF5326CE739ED8C8BF6A4668E6865446D1EE(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m5E7A32060D6C052520B1E63ACF1DEE91505D15F6 (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionY(f);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m8E8EFEEC448ABB5BF021D6A1FE717DD0DAD54996(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_m729C3CD358ABE275E70AA87DEF0173920AA25C9A (float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionZ(f);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * L_0 = ((CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_mA1919BA7A9DFBA2FF21E0ACB961615734D9B0EA9(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_Update_mDCAE25744AF0A04BAAEAC78717D4C1BD7FA55027 (InputAxisScrollbar_t1897ACC9B6EF252577FF4221286F894FD5985570 * __this, const RuntimeMethod* method)
{
	{
		// void Update() { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_HandleInput_m4E824B65EAFF0579312B848DF8D1D04C6F16F935 (InputAxisScrollbar_t1897ACC9B6EF252577FF4221286F894FD5985570 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxis(axis, (value*2f) - 1f);
		String_t* L_0 = __this->get_axis_4();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_mB08F939B2F8BE7F6735DDCB785E2CC1D1CBBD289(L_0, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f))), (float)(1.0f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar__ctor_m17CEE615C03305A043F6D02844E5EDE437D84E34 (InputAxisScrollbar_t1897ACC9B6EF252577FF4221286F894FD5985570 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnEnable_m29F711AF65E8B271CD86013CCF9700B8E8BE81E7 (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, const RuntimeMethod* method)
{
	{
		// CreateVirtualAxes();
		Joystick_CreateVirtualAxes_m2BBF3E6563BF264ECFF1F21A31E1DDE1BE79D484(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mFC66180C31DCDC3A517AC4DF61D315B465B15135 (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, const RuntimeMethod* method)
{
	{
		// m_StartPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_m_StartPos_8(L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m7AFB3E1E42DC35583F993143683D1C121E91060D (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var delta = m_StartPos - value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_StartPos_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// delta.y = -delta.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4 = L_3.get_y_3();
		(&V_0)->set_y_3(((-L_4)));
		// delta /= MovementRange;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		int32_t L_6 = __this->get_MovementRange_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_5, ((float)((float)L_6)), /*hidden argument*/NULL);
		V_0 = L_7;
		// if (m_UseX)
		bool L_8 = __this->get_m_UseX_9();
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(-delta.x);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_9 = __this->get_m_HorizontalVirtualAxis_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_x_2();
		NullCheck(L_9);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_9, ((-L_11)), /*hidden argument*/NULL);
	}

IL_0043:
	{
		// if (m_UseY)
		bool L_12 = __this->get_m_UseY_10();
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(delta.y);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_13 = __this->get_m_VerticalVirtualAxis_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_y_3();
		NullCheck(L_13);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_13, L_15, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_m2BBF3E6563BF264ECFF1F21A31E1DDE1BE79D484 (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * G_B2_0 = NULL;
	Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * G_B3_1 = NULL;
	Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * G_B5_0 = NULL;
	Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->get_axesToUse_5();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_5();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_9((bool)G_B3_0);
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->get_axesToUse_5();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_5();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_10((bool)G_B6_0);
		// if (m_UseX)
		bool L_4 = __this->get_m_UseX_9();
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->get_horizontalAxisName_6();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_6 = (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 *)il2cpp_codegen_object_new(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m45BDD22C8C4D6C9F7688EBE8A8AA8C359A9739B0(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_11(L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_7 = __this->get_m_HorizontalVirtualAxis_11();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDE18EA3CA1850E55CBF3646D2B4B594C3D2E4012(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->get_m_UseY_10();
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->get_verticalAxisName_7();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_10 = (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 *)il2cpp_codegen_object_new(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m45BDD22C8C4D6C9F7688EBE8A8AA8C359A9739B0(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_12(L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_11 = __this->get_m_VerticalVirtualAxis_12();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDE18EA3CA1850E55CBF3646D2B4B594C3D2E4012(L_11, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m638455B2BB6FC9C1C6B7AD56230B1E51FB75FDA9 (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3 newPos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->get_m_UseX_9();
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// int delta = (int)(data.position.x - m_StartPos.x);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___data0;
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_m_StartPos_8();
		float L_6 = L_5->get_x_2();
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract((float)L_4, (float)L_6)));
		// delta = Mathf.Clamp(delta, - MovementRange, MovementRange);
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_MovementRange_4();
		int32_t L_9 = __this->get_MovementRange_4();
		int32_t L_10;
		L_10 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_7, ((-L_8)), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// newPos.x = delta;
		int32_t L_11 = V_1;
		(&V_0)->set_x_2(((float)((float)L_11)));
	}

IL_0044:
	{
		// if (m_UseY)
		bool L_12 = __this->get_m_UseY_10();
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		// int delta = (int)(data.position.y - m_StartPos.y);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_13 = ___data0;
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_m_StartPos_8();
		float L_17 = L_16->get_y_3();
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract((float)L_15, (float)L_17)));
		// delta = Mathf.Clamp(delta, -MovementRange, MovementRange);
		int32_t L_18 = V_2;
		int32_t L_19 = __this->get_MovementRange_4();
		int32_t L_20 = __this->get_MovementRange_4();
		int32_t L_21;
		L_21 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_18, ((-L_19)), L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// newPos.y = delta;
		int32_t L_22 = V_2;
		(&V_0)->set_y_3(((float)((float)L_22)));
	}

IL_0082:
	{
		// transform.position = new Vector3(m_StartPos.x + newPos.x, m_StartPos.y + newPos.y, m_StartPos.z + newPos.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = __this->get_address_of_m_StartPos_8();
		float L_25 = L_24->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_0;
		float L_27 = L_26.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = __this->get_address_of_m_StartPos_8();
		float L_29 = L_28->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_0;
		float L_31 = L_30.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = __this->get_address_of_m_StartPos_8();
		float L_33 = L_32->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_0;
		float L_35 = L_34.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), ((float)il2cpp_codegen_add((float)L_25, (float)L_27)), ((float)il2cpp_codegen_add((float)L_29, (float)L_31)), ((float)il2cpp_codegen_add((float)L_33, (float)L_35)), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_23, L_36, /*hidden argument*/NULL);
		// UpdateVirtualAxes(transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Joystick_UpdateVirtualAxes_m7AFB3E1E42DC35583F993143683D1C121E91060D(__this, L_38, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m19752866CD539034DB6311714718C155CF37A579 (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// transform.position = m_StartPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_m_StartPos_8();
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// UpdateVirtualAxes(m_StartPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_m_StartPos_8();
		Joystick_UpdateVirtualAxes_m7AFB3E1E42DC35583F993143683D1C121E91060D(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m20CB07E86F815AB2CAE44EFC4120C83B998EEB9C (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDown(PointerEventData data) { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDisable_m42AE40C2FDE5BA8F00A695E8CA996A82A38605FB (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, const RuntimeMethod* method)
{
	{
		// if (m_UseX)
		bool L_0 = __this->get_m_UseX_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_HorizontalVirtualAxis.Remove();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_1 = __this->get_m_HorizontalVirtualAxis_11();
		NullCheck(L_1);
		VirtualAxis_Remove_m87C276626734C743E905DEF5676D7E20A1FE4E84(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if (m_UseY)
		bool L_2 = __this->get_m_UseY_10();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// m_VerticalVirtualAxis.Remove();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_3 = __this->get_m_VerticalVirtualAxis_12();
		NullCheck(L_3);
		VirtualAxis_Remove_m87C276626734C743E905DEF5676D7E20A1FE4E84(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_mFF502FCBCEBF8B958D241CFD8782D6E08C20DAE1 (Joystick_tF6344DA5D2F4D331BA24BD7273C509C83AA737C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MovementRange = 100;
		__this->set_MovementRange_4(((int32_t)100));
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->set_horizontalAxisName_6(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->set_verticalAxisName_7(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_OnEnable_m18E83484956CA4716844F3BF0DF031EC132E6FDF (MobileControlRig_tEABCD003AC4F504CBEE5B3331BC2B7E067358F3F * __this, const RuntimeMethod* method)
{
	{
		// CheckEnableControlRig();
		MobileControlRig_CheckEnableControlRig_m659A01CF56D65C46D5478B65689F8E9121C06548(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_Start_mE387934EABE5896E3E83A00D5246198B3D06A8CD (MobileControlRig_tEABCD003AC4F504CBEE5B3331BC2B7E067358F3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.EventSystems.EventSystem system = GameObject.FindObjectOfType<UnityEngine.EventSystems.EventSystem>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801(/*hidden argument*/Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var);
		// if (system == null)
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// GameObject o = new GameObject("EventSystem");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, /*hidden argument*/NULL);
		// o.AddComponent<UnityEngine.EventSystems.EventSystem>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		NullCheck(L_3);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4;
		L_4 = GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D(L_3, /*hidden argument*/GameObject_AddComponent_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_mB2CBD09AEDFA298DD4A7A34CE5E001ABF4BB160D_RuntimeMethod_var);
		// o.AddComponent<UnityEngine.EventSystems.StandaloneInputModule>();
		NullCheck(L_3);
		StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD * L_5;
		L_5 = GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895(L_3, /*hidden argument*/GameObject_AddComponent_TisStandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD_mFF650C43D58EC5CF52056C7EF73D47B0DBE37895_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_m659A01CF56D65C46D5478B65689F8E9121C06548 (MobileControlRig_tEABCD003AC4F504CBEE5B3331BC2B7E067358F3F * __this, const RuntimeMethod* method)
{
	{
		// EnableControlRig(true);
		MobileControlRig_EnableControlRig_m963EBBECA835E7DA7DDC622D6094C413F6C145E8(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m963EBBECA835E7DA7DDC622D6094C413F6C145E8 (MobileControlRig_tEABCD003AC4F504CBEE5B3331BC2B7E067358F3F * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Transform t in transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_000e:
		{
			// foreach (Transform t in transform)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			// t.gameObject.SetActive(enabled);
			NullCheck(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			bool L_5 = ___enabled0;
			NullCheck(L_4);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
		}

IL_0024:
		{
			// foreach (Transform t in transform)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_9 = V_1;
			if (!L_9)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_003e:
		{
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig__ctor_mEE8A505D7E1C7AA07FEFF94869E1F73616D875D2 (MobileControlRig_tEABCD003AC4F504CBEE5B3331BC2B7E067358F3F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mF9E9019F0742B0EDCDE05E0B2A95B6722A4CF05F (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualButton(new CrossPlatformInputManager.VirtualButton(name));
		String_t* L_0 = ___name0;
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_1 = (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E *)il2cpp_codegen_object_new(VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E_il2cpp_TypeInfo_var);
		VirtualButton__ctor_mB74B2E037DE38A528DACF2C84C8A4D31E0529719(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m093B58B2D78513C3E0DE8F1EE400F2E0A0A7A6C5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m4082418ADE887EAE4875045778D9A9F7629C7A7B (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualAxis(new CrossPlatformInputManager.VirtualAxis(name));
		String_t* L_0 = ___name0;
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_1 = (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 *)il2cpp_codegen_object_new(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m45BDD22C8C4D6C9F7688EBE8A8AA8C359A9739B0(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDE18EA3CA1850E55CBF3646D2B4B594C3D2E4012(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MobileInput_GetAxis_m85286882F3143194698C3D0A8E0254CBE238C60C (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m4082418ADE887EAE4875045778D9A9F7629C7A7B(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// return m_VirtualAxes[name].GetValue;
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_4 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_6;
		L_6 = Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualAxis_get_GetValue_m09D1A8A70EBE99FF08A775E7E4E712DB36FC0074_inline(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonDown_m986C59DB5255A89A0B747F7776F773A4F822C0B1 (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mF9E9019F0742B0EDCDE05E0B2A95B6722A4CF05F(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Pressed();
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_4 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_6;
		L_6 = Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Pressed_mB296318405C50D58D04AA5B94A255724C63C3BA4(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonUp_m92C969BDD3A1798961832FBBEDF61750726CBDFA (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mF9E9019F0742B0EDCDE05E0B2A95B6722A4CF05F(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Released();
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_4 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_6;
		L_6 = Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Released_mE56B9C8A01CA84D2D3B08A64A1774864B760545F(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisPositive_mCEEE0D42390B516D4CCDB6A8BDACF1D63AE79F5F (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m4082418ADE887EAE4875045778D9A9F7629C7A7B(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(1f);
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_4 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_6;
		L_6 = Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_6, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisNegative_mF50FF92CC2F745D28435E67CECB00E506227DAC9 (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m4082418ADE887EAE4875045778D9A9F7629C7A7B(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(-1f);
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_4 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_6;
		L_6 = Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_6, (-1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisZero_m883A161D7D90C176AF8F89645006AE5F26105E0D (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m4082418ADE887EAE4875045778D9A9F7629C7A7B(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(0f);
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_4 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_6;
		L_6 = Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_6, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxis_m1AF02BDAF66944C9610917A2A393F49AE193EBD2 (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m4082418ADE887EAE4875045778D9A9F7629C7A7B(__this, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(value);
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_4 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_6;
		L_6 = Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		float L_7 = ___value1;
		NullCheck(L_6);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonDown_m3A770DA73373F0AC1EAC9FBB4D022A941366F13C (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_3 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_5;
		L_5 = Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonDown_m2C5DD69820AF09ED373AA9DBFFC3EB24B1D61010(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mF9E9019F0742B0EDCDE05E0B2A95B6722A4CF05F(__this, L_7, /*hidden argument*/NULL);
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_8 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_10;
		L_10 = Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonDown_m2C5DD69820AF09ED373AA9DBFFC3EB24B1D61010(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonUp_m092299DF4281CE24A6BEB35E8B250128A36D394E (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_3 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_5;
		L_5 = Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonUp_m4B5998BAE5191BADFED62D20B28C972FFC1F04B2(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mF9E9019F0742B0EDCDE05E0B2A95B6722A4CF05F(__this, L_7, /*hidden argument*/NULL);
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_8 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_10;
		L_10 = Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonUp_m4B5998BAE5191BADFED62D20B28C972FFC1F04B2(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButton_mA42039320E22AB77C6E2D72B581F108DEBAA3D80 (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_0 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_3 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_5;
		L_5 = Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualButton_get_GetButton_m864DD5764E8838F04419A3D7408A5C11E33EF543_inline(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mF9E9019F0742B0EDCDE05E0B2A95B6722A4CF05F(__this, L_7, /*hidden argument*/NULL);
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_8 = ((VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_10;
		L_10 = Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_mD8949F9B822668109B9BCB53D7F5F3FA371981CD_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualButton_get_GetButton_m864DD5764E8838F04419A3D7408A5C11E33EF543_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MobileInput_MousePosition_m120E8CC1FE2C998703104A2BDF8065900252818E (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, const RuntimeMethod* method)
{
	{
		// return virtualMousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_mB949C72B0E7FF5525EC1665C90FDF7711D66553E (MobileInput_t6DB13CE337827AC53153D913BB9A99BF99A703F9 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m03F5BD63718F89549B70B078815AF608DB4CE247(__this, /*hidden argument*/NULL);
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
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StandaloneInput_GetAxis_mD2934CD854AACADDF4A5A597BBF0ACF94E206F99 (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	{
		// return raw ? Input.GetAxisRaw(name) : Input.GetAxis(name);
		bool L_0 = ___raw1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name0;
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___name0;
		float L_4;
		L_4 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButton_m476032190256096D7AE9FB43DC4C882B0644C1E2 (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return Input.GetButton(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonDown_m89D85062BE2F115739B3500855B4A0778DEB9F6D (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return Input.GetButtonDown(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonUp_m3A97B4754157D77090EDA23EEC56B44B2ED09A96 (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return Input.GetButtonUp(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonDown_mF161FFE68B291B3EA5706B11332CEA18F7607D39 (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonDown_mF161FFE68B291B3EA5706B11332CEA18F7607D39_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonUp_m022730DC553DB6D86C1412728A604CE362C2AE29 (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonUp_m022730DC553DB6D86C1412728A604CE362C2AE29_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisPositive_m2814A657D734070FEAF4EADBBF007930A31676FF (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisPositive_m2814A657D734070FEAF4EADBBF007930A31676FF_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisNegative_mDBAAE498882ECF2E4D33845E261E8A9A5EA6A836 (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisNegative_mDBAAE498882ECF2E4D33845E261E8A9A5EA6A836_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisZero_mBBF4C8C5A663D9A571B893004A53F9EC563B56FD (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisZero_mBBF4C8C5A663D9A571B893004A53F9EC563B56FD_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxis_mA1CF1E8111F696EBCF0B0F2DF35240D90F306749 (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxis_mA1CF1E8111F696EBCF0B0F2DF35240D90F306749_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  StandaloneInput_MousePosition_m8A56690ED62B3FAAEDD73BEE3C7B270B8B3491C1 (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, const RuntimeMethod* method)
{
	{
		// return Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m1FE8E27FACDE12E13BBD48AE2271793A9D14E85A (StandaloneInput_t9178313F04730CC2657A748AD6875CD1483665CF * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m03F5BD63718F89549B70B078815AF608DB4CE247(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnEnable_m325BD907CBE416F73181D58C3E5580CFAA7548DC (TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mapping.type == AxisMapping.MappingType.NamedAxis)
		AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA * L_0 = __this->get_mapping_4();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_0();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		// m_SteerAxis = new CrossPlatformInputManager.VirtualAxis(mapping.axisName);
		AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA * L_2 = __this->get_mapping_4();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_axisName_1();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_4 = (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 *)il2cpp_codegen_object_new(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m45BDD22C8C4D6C9F7688EBE8A8AA8C359A9739B0(L_4, L_3, /*hidden argument*/NULL);
		__this->set_m_SteerAxis_8(L_4);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_SteerAxis);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_5 = __this->get_m_SteerAxis_8();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDE18EA3CA1850E55CBF3646D2B4B594C3D2E4012(L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_Update_m94B9903195D515ED2CE3324B03E266C453E937D4 (TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float angle = 0;
		V_0 = (0.0f);
		// if (Input.acceleration != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0079;
		}
	}
	{
		// switch (tiltAroundAxis)
		int32_t L_3 = __this->get_tiltAroundAxis_5();
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0079;
	}

IL_0027:
	{
		// angle = Mathf.Atan2(Input.acceleration.x, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		float L_10;
		L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = __this->get_centreAngleOffset_7();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)(57.2957802f))), (float)L_11));
		// break;
		goto IL_0079;
	}

IL_0051:
	{
		// angle = Mathf.Atan2(Input.acceleration.z, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		float L_16;
		L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = __this->get_centreAngleOffset_7();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)(57.2957802f))), (float)L_17));
	}

IL_0079:
	{
		// float axisValue = Mathf.InverseLerp(-fullTiltAngle, fullTiltAngle, angle)*2 - 1;
		float L_18 = __this->get_fullTiltAngle_6();
		float L_19 = __this->get_fullTiltAngle_6();
		float L_20 = V_0;
		float L_21;
		L_21 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B(((-L_18)), L_19, L_20, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(2.0f))), (float)(1.0f)));
		// switch (mapping.type)
		AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA * L_22 = __this->get_mapping_4();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_type_0();
		V_3 = L_23;
		int32_t L_24 = V_3;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_00e5;
			}
		}
	}
	{
		return;
	}

IL_00bc:
	{
		// m_SteerAxis.Update(axisValue);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_25 = __this->get_m_SteerAxis_8();
		float L_26 = V_1;
		NullCheck(L_25);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_25, L_26, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c9:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionX(axisValue*Screen.width);
		float L_27 = V_1;
		int32_t L_28;
		L_28 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_mA3A2BE4203B083CCAA16CC6EE0F9432E5C64E87B(((float)il2cpp_codegen_multiply((float)L_27, (float)((float)((float)L_28)))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d7:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionY(axisValue*Screen.width);
		float L_29 = V_1;
		int32_t L_30;
		L_30 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_m5E7A32060D6C052520B1E63ACF1DEE91505D15F6(((float)il2cpp_codegen_multiply((float)L_29, (float)((float)((float)L_30)))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00e5:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionZ(axisValue*Screen.width);
		float L_31 = V_1;
		int32_t L_32;
		L_32 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_m729C3CD358ABE275E70AA87DEF0173920AA25C9A(((float)il2cpp_codegen_multiply((float)L_31, (float)((float)((float)L_32)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnDisable_m8E2B87925D9B86E5A386B95E1C5AF651AF8DCE1B (TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C * __this, const RuntimeMethod* method)
{
	{
		// m_SteerAxis.Remove();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_0 = __this->get_m_SteerAxis_8();
		NullCheck(L_0);
		VirtualAxis_Remove_m87C276626734C743E905DEF5676D7E20A1FE4E84(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput__ctor_mA333A909F324B7D58F099434F82A2EB4D9A17D33 (TiltInput_t5505570D73600AD7DE5D64FF7EA44A28C8093A6C * __this, const RuntimeMethod* method)
{
	{
		// public float fullTiltAngle = 25;
		__this->set_fullTiltAngle_6((25.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnEnable_mA81EB9DDCE8B62699AE06F7DCF6D6E62490A3C86 (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, const RuntimeMethod* method)
{
	{
		// CreateVirtualAxes();
		TouchPad_CreateVirtualAxes_m03A1602F5007472C92BC2939ECC1677E2470BEE4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Start_m658837EE56252C96CD9814A10D0A22D3A3324869 (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Image = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_m_Image_21(L_0);
		// m_Center = m_Image.transform.position;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_Image_21();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		__this->set_m_Center_20(L_3);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_m03A1602F5007472C92BC2939ECC1677E2470BEE4 (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * G_B2_0 = NULL;
	TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * G_B3_1 = NULL;
	TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * G_B5_0 = NULL;
	TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->get_axesToUse_4();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_13((bool)G_B3_0);
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->get_axesToUse_4();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_4();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_14((bool)G_B6_0);
		// if (m_UseX)
		bool L_4 = __this->get_m_UseX_13();
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->get_horizontalAxisName_6();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_6 = (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 *)il2cpp_codegen_object_new(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m45BDD22C8C4D6C9F7688EBE8A8AA8C359A9739B0(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_15(L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_7 = __this->get_m_HorizontalVirtualAxis_15();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDE18EA3CA1850E55CBF3646D2B4B594C3D2E4012(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->get_m_UseY_14();
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->get_verticalAxisName_7();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_10 = (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 *)il2cpp_codegen_object_new(VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m45BDD22C8C4D6C9F7688EBE8A8AA8C359A9739B0(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_16(L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_11 = __this->get_m_VerticalVirtualAxis_16();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mDE18EA3CA1850E55CBF3646D2B4B594C3D2E4012(L_11, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_mA24D1A89604F8EC39D68B986D11855DA2721F9BE (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// value = value.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___value0), /*hidden argument*/NULL);
		___value0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->get_m_UseX_13();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(value.x);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_2 = __this->get_m_HorizontalVirtualAxis_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___value0;
		float L_4 = L_3.get_x_2();
		NullCheck(L_2);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (m_UseY)
		bool L_5 = __this->get_m_UseY_14();
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(value.y);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_6 = __this->get_m_VerticalVirtualAxis_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___value0;
		float L_8 = L_7.get_y_3();
		NullCheck(L_6);
		VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline(L_6, L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerDown_mA977EDF43D0C0263775DCB03626AE4EEACA66B21 (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// m_Dragging = true;
		__this->set_m_Dragging_17((bool)1);
		// m_Id = data.pointerId;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline(L_0, /*hidden argument*/NULL);
		__this->set_m_Id_18(L_1);
		// if (controlStyle != ControlStyle.Absolute )
		int32_t L_2 = __this->get_controlStyle_5();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// m_Center = data.position;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___data0;
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		__this->set_m_Center_20(L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Update_m9D7878DC548B2E0F062D2922FE4342E9A5CB4909 (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!m_Dragging)
		bool L_0 = __this->get_m_Dragging_17();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Input.touchCount >= m_Id + 1 && m_Id != -1)
		int32_t L_1;
		L_1 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_Id_18();
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_3 = __this->get_m_Id_18();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_00f4;
		}
	}
	{
		// if (controlStyle == ControlStyle.Swipe)
		int32_t L_4 = __this->get_controlStyle_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		// m_Center = m_PreviousTouchPos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = __this->get_m_PreviousTouchPos_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		__this->set_m_Center_20(L_6);
		// m_PreviousTouchPos = Input.touches[m_Id].position;
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_7;
		L_7 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		int32_t L_8 = __this->get_m_Id_18();
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		__this->set_m_PreviousTouchPos_19(L_9);
	}

IL_005c:
	{
		// Vector2 pointerDelta = new Vector2(Input.touches[m_Id].position.x - m_Center.x , Input.touches[m_Id].position.y - m_Center.y).normalized;
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_10;
		L_10 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		int32_t L_11 = __this->get_m_Id_18();
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_m_Center_20();
		float L_15 = L_14->get_x_2();
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_16;
		L_16 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		int32_t L_17 = __this->get_m_Id_18();
		NullCheck(L_16);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), /*hidden argument*/NULL);
		float L_19 = L_18.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_m_Center_20();
		float L_21 = L_20->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_22), ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), ((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), /*hidden argument*/NULL);
		V_1 = L_22;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_23;
		// pointerDelta.x *= Xsensitivity;
		float* L_24 = (&V_0)->get_address_of_x_0();
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		float L_27 = __this->get_Xsensitivity_8();
		*((float*)L_25) = (float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_27));
		// pointerDelta.y *= Ysensitivity;
		float* L_28 = (&V_0)->get_address_of_y_1();
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = __this->get_Ysensitivity_9();
		*((float*)L_29) = (float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_31));
		// UpdateVirtualAxes(new Vector3(pointerDelta.x, pointerDelta.y, 0));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_0;
		float L_33 = L_32.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = V_0;
		float L_35 = L_34.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), L_33, L_35, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_mA24D1A89604F8EC39D68B986D11855DA2721F9BE(__this, L_36, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerUp_m027CA7C705173428C71E07F982442F22DA178C57 (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	{
		// m_Dragging = false;
		__this->set_m_Dragging_17((bool)0);
		// m_Id = -1;
		__this->set_m_Id_18((-1));
		// UpdateVirtualAxes(Vector3.zero);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_mA24D1A89604F8EC39D68B986D11855DA2721F9BE(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnDisable_m304A8D709A426C7F074B4F417BE1D82EF1F4B205 (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CrossPlatformInputManager.AxisExists(horizontalAxisName))
		String_t* L_0 = __this->get_horizontalAxisName_6();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_m4FEC2F1060469FE049B1EC0F5F2E06308D04F1FB(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(horizontalAxisName);
		String_t* L_2 = __this->get_horizontalAxisName_6();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m9D8D39C220DC4F3A2C3CB6B8B70133F8498DE7CD(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (CrossPlatformInputManager.AxisExists(verticalAxisName))
		String_t* L_3 = __this->get_verticalAxisName_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = CrossPlatformInputManager_AxisExists_m4FEC2F1060469FE049B1EC0F5F2E06308D04F1FB(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(verticalAxisName);
		String_t* L_5 = __this->get_verticalAxisName_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m9D8D39C220DC4F3A2C3CB6B8B70133F8498DE7CD(L_5, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad__ctor_mC172E57941ED884FBB131884CF2F6C6CA66AF1A9 (TouchPad_t18D4D9681EEA67CB917C1223D20A934EF2221AEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->set_horizontalAxisName_6(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->set_verticalAxisName_7(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// public float Xsensitivity = 1f;
		__this->set_Xsensitivity_8((1.0f));
		// public float Ysensitivity = 1f;
		__this->set_Ysensitivity_9((1.0f));
		// int m_Id = -1;
		__this->set_m_Id_18((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m5165785E37AF221689AE2CDF26511E18457896CA (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_m87A8FAE39791688D06E205D22E93F1A834E3FD34 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name);
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m1DF04318EEF668547A7D1BBADC0C29BC1E9E86D6 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualButtons.ContainsKey(name);
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m4303DDF81B785BB9360637B4933ACC72375DE169 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2F63DCF83A40DC2F58E315B4C908E9169F746F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1921D3070489B1532E810684C2992B44215A052);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(axis.name))
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = __this->get_m_VirtualAxes_1();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_1 = ___axis0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualAxis_get_name_mF21B7D6E9DC362BB0A39102A685F546D6CC97FC9_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual axis named " + axis.name + " registered.");
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_4 = ___axis0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualAxis_get_name_mF21B7D6E9DC362BB0A39102A685F546D6CC97FC9_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE1921D3070489B1532E810684C2992B44215A052, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// m_VirtualAxes.Add(axis.name, axis);
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_7 = __this->get_m_VirtualAxes_1();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_8 = ___axis0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualAxis_get_name_mF21B7D6E9DC362BB0A39102A685F546D6CC97FC9_inline(L_8, /*hidden argument*/NULL);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_10 = ___axis0;
		NullCheck(L_7);
		Dictionary_2_Add_m2F63DCF83A40DC2F58E315B4C908E9169F746F2F(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m2F63DCF83A40DC2F58E315B4C908E9169F746F2F_RuntimeMethod_var);
		// if (!axis.matchWithInputManager)
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_11 = ___axis0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualAxis_get_matchWithInputManager_m4994BFCD6301A67E66B861704F22EB979B1E9FA3_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(axis.name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_14 = ___axis0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualAxis_get_name_mF21B7D6E9DC362BB0A39102A685F546D6CC97FC9_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_13, L_15, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m87E583FD563D1CA006649C6C20955930BEC6DE17 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB834F33DF036C6A33012F5C86A058103C3BB6C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(button.name))
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_0 = __this->get_m_VirtualButtons_2();
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_1 = ___button0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualButton_get_name_m25DD35952D230434D30164BB20C10DDF31ACF378_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual button named " + button.name + " registered.");
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_4 = ___button0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualButton_get_name_m25DD35952D230434D30164BB20C10DDF31ACF378_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// m_VirtualButtons.Add(button.name, button);
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_7 = __this->get_m_VirtualButtons_2();
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_8 = ___button0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualButton_get_name_m25DD35952D230434D30164BB20C10DDF31ACF378_inline(L_8, /*hidden argument*/NULL);
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_10 = ___button0;
		NullCheck(L_7);
		Dictionary_2_Add_mB834F33DF036C6A33012F5C86A058103C3BB6C7A(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_mB834F33DF036C6A33012F5C86A058103C3BB6C7A_RuntimeMethod_var);
		// if (!button.matchWithInputManager)
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_11 = ___button0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualButton_get_matchWithInputManager_m6189CA3D229A3AA0A14D72E394ED9C9F96C62125_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(button.name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * L_14 = ___button0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualButton_get_name_m25DD35952D230434D30164BB20C10DDF31ACF378_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_13, L_15, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_mE24DC66E9590CA2197FCB511A09B1E8C5BA29B67 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mA1FF1A5B7A322ED270DAD55BEA86CAF88B2042B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualAxes.Remove(name);
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_mA1FF1A5B7A322ED270DAD55BEA86CAF88B2042B5(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_mA1FF1A5B7A322ED270DAD55BEA86CAF88B2042B5_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_m752A58BA639C5C0279981BB22236624322F5469D (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m510CC012B1D84B43ECD8CFB5F6EC38F56A1128C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m8E1F39CA9589B615C3785118063C3E425A1672E5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualButtons.Remove(name);
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_3 = __this->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m510CC012B1D84B43ECD8CFB5F6EC38F56A1128C6(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m510CC012B1D84B43ECD8CFB5F6EC38F56A1128C6_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * VirtualInput_VirtualAxisReference_m3D0A3332EA5D6E20888806B8BBF47D048A24D573 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name) ? m_VirtualAxes[name] : null;
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFF53AC428169ACA9AC35C1789653D1816008ECB2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 *)NULL;
	}

IL_0010:
	{
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * L_5;
		L_5 = Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mB1664B6F3055CF9A08D74C81348E9740FFF705F5_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m4E86EF5326CE739ED8C8BF6A4668E6865446D1EE (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(f, virtualMousePosition.y, virtualMousePosition.z);
		float L_0 = ___f0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D_inline(__this, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D_inline(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m5165785E37AF221689AE2CDF26511E18457896CA_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m8E8EFEEC448ABB5BF021D6A1FE717DD0DAD54996 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, f, virtualMousePosition.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D_inline(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		float L_2 = ___f0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D_inline(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m5165785E37AF221689AE2CDF26511E18457896CA_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_mA1919BA7A9DFBA2FF21E0ACB961615734D9B0EA9 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, virtualMousePosition.y, f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D_inline(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D_inline(__this, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		float L_4 = ___f0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m5165785E37AF221689AE2CDF26511E18457896CA_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m03F5BD63718F89549B70B078815AF608DB4CE247 (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDD8DF06BD18D58566BFD18CE01E1F930254EF66C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE826BAFD3D8E4926320A9D319096BA0B2BDD1490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, CrossPlatformInputManager.VirtualAxis> m_VirtualAxes =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualAxis>();
		Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE * L_0 = (Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE *)il2cpp_codegen_object_new(Dictionary_2_t7974FA25E4239243A45CA3CFC842C009C7EFF3DE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDD8DF06BD18D58566BFD18CE01E1F930254EF66C(L_0, /*hidden argument*/Dictionary_2__ctor_mDD8DF06BD18D58566BFD18CE01E1F930254EF66C_RuntimeMethod_var);
		__this->set_m_VirtualAxes_1(L_0);
		// protected Dictionary<string, CrossPlatformInputManager.VirtualButton> m_VirtualButtons =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualButton>();
		Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 * L_1 = (Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170 *)il2cpp_codegen_object_new(Dictionary_2_tBCF85D82FE2C80F2BCB3A6903494A01838D89170_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE826BAFD3D8E4926320A9D319096BA0B2BDD1490(L_1, /*hidden argument*/Dictionary_2__ctor_mE826BAFD3D8E4926320A9D319096BA0B2BDD1490_RuntimeMethod_var);
		__this->set_m_VirtualButtons_2(L_1);
		// protected List<string> m_AlwaysUseVirtual = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_m_AlwaysUseVirtual_3(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mF21B7D6E9DC362BB0A39102A685F546D6CC97FC9 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m68EFC2478DCF96B0A24E38B180C83435FE7CF86F (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m4994BFCD6301A67E66B861704F22EB979B1E9FA3 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m677A5A5839238FDC8C95E5B9C636A24941E92174 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m45BDD22C8C4D6C9F7688EBE8A8AA8C359A9739B0 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_mD4CEC1EF78B24F9C8F83947C1287D4EB7D0ADD08(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mD4CEC1EF78B24F9C8F83947C1287D4EB7D0ADD08 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// public VirtualAxis(string name, bool matchToInputSettings)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_m68EFC2478DCF96B0A24E38B180C83435FE7CF86F_inline(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m677A5A5839238FDC8C95E5B9C636A24941E92174_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m87C276626734C743E905DEF5676D7E20A1FE4E84 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualAxis(name);
		String_t* L_0;
		L_0 = VirtualAxis_get_name_mF21B7D6E9DC362BB0A39102A685F546D6CC97FC9_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m9D8D39C220DC4F3A2C3CB6B8B70133F8498DE7CD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_m09D1A8A70EBE99FF08A775E7E4E712DB36FC0074 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_m1790AE8243817591736F3E0401D4896072B80F85 (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
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
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m25DD35952D230434D30164BB20C10DDF31ACF378 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEC4C392538A5F62CA0CBB1D5C69062F7861DE9D2 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6189CA3D229A3AA0A14D72E394ED9C9F96C62125 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m11F6F506F8BB7F46F7DEEFFA4CA973C4AAFD953F (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mB74B2E037DE38A528DACF2C84C8A4D31E0529719 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualButton__ctor_mCD05FB01308E9EC6D64BC735D70415F83A71C4EC(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mCD05FB01308E9EC6D64BC735D70415F83A71C4EC (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		// private int m_LastPressedFrame = -5;
		__this->set_m_LastPressedFrame_2(((int32_t)-5));
		// private int m_ReleasedFrame = -5;
		__this->set_m_ReleasedFrame_3(((int32_t)-5));
		// public VirtualButton(string name, bool matchToInputSettings)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualButton_set_name_mEC4C392538A5F62CA0CBB1D5C69062F7861DE9D2_inline(__this, L_0, /*hidden argument*/NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m11F6F506F8BB7F46F7DEEFFA4CA973C4AAFD953F_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mB296318405C50D58D04AA5B94A255724C63C3BA4 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// if (m_Pressed)
		bool L_0 = __this->get_m_Pressed_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Pressed = true;
		__this->set_m_Pressed_4((bool)1);
		// m_LastPressedFrame = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_m_LastPressedFrame_2(L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_mE56B9C8A01CA84D2D3B08A64A1774864B760545F (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// m_Pressed = false;
		__this->set_m_Pressed_4((bool)0);
		// m_ReleasedFrame = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_m_ReleasedFrame_3(L_0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Remove_mAF61245C2668478D1903CDBFE12388BB35E617A4 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualButton(name);
		String_t* L_0;
		L_0 = VirtualButton_get_name_m25DD35952D230434D30164BB20C10DDF31ACF378_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m515369D5EC44A5A91C6D1A5C53594C78F17C5A74(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_m864DD5764E8838F04419A3D7408A5C11E33EF543 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->get_m_Pressed_4();
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m2C5DD69820AF09ED373AA9DBFFC3EB24B1D61010 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// return m_LastPressedFrame - Time.frameCount == -1;
		int32_t L_0 = __this->get_m_LastPressedFrame_2();
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m4B5998BAE5191BADFED62D20B28C972FFC1F04B2 (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// return (m_ReleasedFrame == Time.frameCount - 1);
		int32_t L_0 = __this->get_m_ReleasedFrame_3();
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))))? 1 : 0);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisMapping__ctor_mB4B48225817687021639E95E732C91CAA402492C (AxisMapping_t80A5EB25808ACF6AA03EAFCDD194253D02ED57FA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_m09D1A8A70EBE99FF08A775E7E4E712DB36FC0074_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Value; }
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m45125D50E830899FFB96176A43229B66707667A0_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_m864DD5764E8838F04419A3D7408A5C11E33EF543_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->get_m_Pressed_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VirtualInput_get_virtualMousePosition_mBE21E9462382056185DFE7914F0DFD072696586D_inline (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = __this->get_U3CpointerIdU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mF21B7D6E9DC362BB0A39102A685F546D6CC97FC9_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m4994BFCD6301A67E66B861704F22EB979B1E9FA3_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m25DD35952D230434D30164BB20C10DDF31ACF378_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6189CA3D229A3AA0A14D72E394ED9C9F96C62125_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m5165785E37AF221689AE2CDF26511E18457896CA_inline (VirtualInput_tDF37559CA0679AB6D41B4CCE3EC29C2D25752737 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m68EFC2478DCF96B0A24E38B180C83435FE7CF86F_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m677A5A5839238FDC8C95E5B9C636A24941E92174_inline (VirtualAxis_t3733BFC5764FBA9E698503A178F9571D484102D5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mEC4C392538A5F62CA0CBB1D5C69062F7861DE9D2_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m11F6F506F8BB7F46F7DEEFFA4CA973C4AAFD953F_inline (VirtualButton_tD0EBCBBAA1854CAAB6188F7F8722C7CC7BB2702E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
