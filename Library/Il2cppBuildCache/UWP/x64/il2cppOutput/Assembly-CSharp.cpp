#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`2<System.Object,UnityEngine.Color>
struct Action_2_tA115706E18DF04DC2FE89DB5AE302F7A84C851CA;
// System.Action`2<System.String,UnityEngine.Color>
struct Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988;
// System.Collections.Generic.Dictionary`2<RollaBall.UserAction,System.Action>
struct Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0;
// System.Func`2<System.Single,System.Single>
struct Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149;
// System.Collections.Generic.IEqualityComparer`1<RollaBall.UserAction>
struct IEqualityComparer_1_t1F4CEEA736C0734E92F8F7B7924547929E9A6811;
// System.Collections.Generic.Dictionary`2/KeyCollection<RollaBall.UserAction,System.Action>
struct KeyCollection_tE3777F3089557F0424DDDEF45D7CB2E229BC27FB;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Predicate`1<UnityEngine.Collision>
struct Predicate_1_t33DF3761BA2FB834D9AD61377A4DAD64284A4418;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<RollaBall.UserAction,System.Action>
struct ValueCollection_t6051E14B4937F45FE0606A29BA061327C10124D7;
// System.Collections.Generic.Dictionary`2/Entry<RollaBall.UserAction,System.Action>[]
struct EntryU5BU5D_t8D47C9CAE094EC1FE5D5252456153CDFCE26C621;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// RollaBall.IExecute[]
struct IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// RollaBall.InteractiveObject[]
struct InteractiveObjectU5BU5D_t346AB261ED075CF1E616FCA070CDFC2C7855AA54;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// RollaBall.ActionDelegateExample
struct ActionDelegateExample_t48D2DAE55761602195580A0C02352797B51035A5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// RollaBall.BadBonus
struct BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// RollaBall.CameraController
struct CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// RollaBall.CaughtPlayerEventArgs
struct CaughtPlayerEventArgs_t3E48E52F9D50AFC86C0958740D19FE6F4218710A;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// RollaBall.DelegatesObserver
struct DelegatesObserver_tED03D34C8427D03F9277E1B1982B4C4FDF0F233F;
// RollaBall.Destroy
struct Destroy_t9744A5FB35725024ADD105271BA98CC5B2DD02B8;
// RollaBall.DisplayBonuses
struct DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38;
// RollaBall.DisplayEndGame
struct DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656;
// RollaBall.DisplayWonGame
struct DisplayWonGame_t9F4DDA514637D0085BBE6712FF73AA85921ECB91;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// RollaBall.ExampleClass
struct ExampleClass_tE5801E8A2EA8C5EE378AD4D667D2A4629D460766;
// ExampleUnityEvent
struct ExampleUnityEvent_t88E6D8760D00C93991F6584206A55860900CCC03;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// RollaBall.GameController
struct GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// RollaBall.GoodBonus
struct GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// RollaBall.IExecute
struct IExecute_t66818815903AD48B13A6595C0FAB79824894DA20;
// RollaBall.InputController
struct InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D;
// RollaBall.InteractiveObject
struct InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// RollaBall.ListExecuteObject
struct ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// RollaBall.PlayerBall
struct PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD;
// RollaBall.PlayerBase
struct PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747;
// RollaBall.PredicateAndFuncDelegatesExample
struct PredicateAndFuncDelegatesExample_t6C8BED6CB14E01AE68464E19109881A52C6BE6B7;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// RollaBall.References
struct References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// RollaBall.SlowingDown
struct SlowingDown_t07D8BB3D25AB02A7CD3D56C28A776B791FA22822;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// RollaBall.BadBonus/<>c
struct U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// RollaBall.DelegatesObserver/MyDelegate
struct MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762;
// RollaBall.DelegatesObserver/Observer1
struct Observer1_tFD2197E3B77ADF161D3D75CB37F8252AAA0E5FD9;
// RollaBall.DelegatesObserver/Observer2
struct Observer2_t9A89E9CF25EB65EA6BFF9A6560A8EA50206CAA5F;
// RollaBall.DelegatesObserver/Source
struct Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9;
// RollaBall.GoodBonus/<>c
struct U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExecute_t66818815903AD48B13A6595C0FAB79824894DA20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0230328A1FDD8B6243F5BDF5CE651CBA85CF538A;
IL2CPP_EXTERN_C String_t* _stringLiteral11CFD6D258A14AED47B45B4056A6B112BF31F0B5;
IL2CPP_EXTERN_C String_t* _stringLiteral23F3A515A5BFCC123480D7F6F176F240E32FDB21;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3357E746F1241457078B20C1A5A4DC680749891D;
IL2CPP_EXTERN_C String_t* _stringLiteral431077C003681F73A9BFC13944008C90F564FD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0EBEDEFB5058B4331B8D8842EE53784CEFCFBF;
IL2CPP_EXTERN_C String_t* _stringLiteral5ABF1CB72EE75612285D28BDC138BB1776651D60;
IL2CPP_EXTERN_C String_t* _stringLiteral68A8D79E1725ADEE88A33DE3B7AF53E43D7A2C32;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral85F17699BAD229335C21279768C0B4A0006E4BE8;
IL2CPP_EXTERN_C String_t* _stringLiteralA5AED1875208F61EA92930E98EC1B0E438D2217C;
IL2CPP_EXTERN_C String_t* _stringLiteralBA3D4F3F631C1E897332BDECB54E9EB7FE7A69FA;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA3C54CD11864D8C0F73B16E508DE9A58A267756;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralF7A61CC3B30F282C45F10C0DEE0C022542888F73;
IL2CPP_EXTERN_C const RuntimeMethod* ActionDelegateExample_DownMethod_m2860CE0A82BF56FCFF414AFE52131A03E981A025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionDelegateExample_UpMethod_m2078DB9AA13DE8624768E84B4C331E258BADCCA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m6AE0B24D85981C6DB69D5E08593FA4F59C09FF05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisIExecute_t66818815903AD48B13A6595C0FAB79824894DA20_mD6A02A1E316212D2020389C1BA28ED500FEC7339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA8236AE6B5D05438B1E6B61080D18C93E21539AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630D40E4FA7B1646CF5D9B57E3169A79B0B2778D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1A655D8306FAC45E7B124290A958EA039990BA1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5B766DB587262E7313769C1978ECB62AB801141C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m6022D31FE4210DB9AA5ACCDF3DCCD99FD44482E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DisplayEndGame_GameOver_m4729B21FC743BCD68675324A0B42A7DC18FBF0F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExampleUnityEvent_Ping_m4FA39FE6CCBE6C80406CBBD1AAD4F8E1232FB49A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mD203EFB0908EAA1D1F0328AA5E34C1E7CA69AB55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameController_AddBonuse_m29B735CC6DE8A78F1729D385A788BF7E0AE074B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameController_CaughtPlayer_mF75B4FC33071BF62280603F71398BBBEA1406EAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameController_RestartGame_m72F32324C292AEB0FD7C6979D8518BD1E4A5595E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m6781AB341DB6A01F9B6CF21AE947D9E2E20BFC97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m32EF8CB2CBFADED22FEF111A3147D99E8AE9FC52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisInteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F_m9FCD78E9E0720F68B4D507FA7094B9DA1241D548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_mEDD848A39C4D335F536D68B6CC5933BB642E8435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1_Invoke_mD189340351175567687595F6C2F728A7B50BE8BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF446C7F8E216868EF6C2527728ACF1C31614554A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_m3FA4913F10993A2BACCAD3D5DB835523944FFBAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__10_0_m68B260E4297BDACC4D6997175F20FEF192436CEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__14_0_mDF0F1A9ED9880FA545DCA7AF0E8C0631FE08DA72_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584;
struct InteractiveObjectU5BU5D_t346AB261ED075CF1E616FCA070CDFC2C7855AA54;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<RollaBall.UserAction,System.Action>
struct  Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8D47C9CAE094EC1FE5D5252456153CDFCE26C621* ___entries_1;
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
	KeyCollection_tE3777F3089557F0424DDDEF45D7CB2E229BC27FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6051E14B4937F45FE0606A29BA061327C10124D7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ___entries_1)); }
	inline EntryU5BU5D_t8D47C9CAE094EC1FE5D5252456153CDFCE26C621* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8D47C9CAE094EC1FE5D5252456153CDFCE26C621** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8D47C9CAE094EC1FE5D5252456153CDFCE26C621* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ___keys_7)); }
	inline KeyCollection_tE3777F3089557F0424DDDEF45D7CB2E229BC27FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE3777F3089557F0424DDDEF45D7CB2E229BC27FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE3777F3089557F0424DDDEF45D7CB2E229BC27FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ___values_8)); }
	inline ValueCollection_t6051E14B4937F45FE0606A29BA061327C10124D7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6051E14B4937F45FE0606A29BA061327C10124D7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6051E14B4937F45FE0606A29BA061327C10124D7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// RollaBall.ActionDelegateExample
struct  ActionDelegateExample_t48D2DAE55761602195580A0C02352797B51035A5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<RollaBall.UserAction,System.Action> RollaBall.ActionDelegateExample::_actions
	Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * ____actions_0;

public:
	inline static int32_t get_offset_of__actions_0() { return static_cast<int32_t>(offsetof(ActionDelegateExample_t48D2DAE55761602195580A0C02352797B51035A5, ____actions_0)); }
	inline Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * get__actions_0() const { return ____actions_0; }
	inline Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 ** get_address_of__actions_0() { return &____actions_0; }
	inline void set__actions_0(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * value)
	{
		____actions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actions_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// RollaBall.DelegatesObserver
struct  DelegatesObserver_tED03D34C8427D03F9277E1B1982B4C4FDF0F233F  : public RuntimeObject
{
public:

public:
};


// RollaBall.DisplayBonuses
struct  DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38  : public RuntimeObject
{
public:
	// UnityEngine.UI.Text RollaBall.DisplayBonuses::_bonuseLable
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____bonuseLable_0;

public:
	inline static int32_t get_offset_of__bonuseLable_0() { return static_cast<int32_t>(offsetof(DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38, ____bonuseLable_0)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__bonuseLable_0() const { return ____bonuseLable_0; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__bonuseLable_0() { return &____bonuseLable_0; }
	inline void set__bonuseLable_0(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____bonuseLable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bonuseLable_0), (void*)value);
	}
};


// RollaBall.DisplayEndGame
struct  DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656  : public RuntimeObject
{
public:
	// UnityEngine.UI.Text RollaBall.DisplayEndGame::_finishGameLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____finishGameLabel_0;

public:
	inline static int32_t get_offset_of__finishGameLabel_0() { return static_cast<int32_t>(offsetof(DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656, ____finishGameLabel_0)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__finishGameLabel_0() const { return ____finishGameLabel_0; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__finishGameLabel_0() { return &____finishGameLabel_0; }
	inline void set__finishGameLabel_0(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____finishGameLabel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____finishGameLabel_0), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// RollaBall.InputController
struct  InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D  : public RuntimeObject
{
public:
	// RollaBall.PlayerBase RollaBall.InputController::_playerBase
	PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * ____playerBase_0;

public:
	inline static int32_t get_offset_of__playerBase_0() { return static_cast<int32_t>(offsetof(InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D, ____playerBase_0)); }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * get__playerBase_0() const { return ____playerBase_0; }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 ** get_address_of__playerBase_0() { return &____playerBase_0; }
	inline void set__playerBase_0(PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * value)
	{
		____playerBase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerBase_0), (void*)value);
	}
};


// RollaBall.ListExecuteObject
struct  ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E  : public RuntimeObject
{
public:
	// RollaBall.IExecute[] RollaBall.ListExecuteObject::_interactiveObjects
	IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* ____interactiveObjects_0;
	// System.Int32 RollaBall.ListExecuteObject::_index
	int32_t ____index_1;
	// RollaBall.InteractiveObject RollaBall.ListExecuteObject::_current
	InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * ____current_2;

public:
	inline static int32_t get_offset_of__interactiveObjects_0() { return static_cast<int32_t>(offsetof(ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E, ____interactiveObjects_0)); }
	inline IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* get__interactiveObjects_0() const { return ____interactiveObjects_0; }
	inline IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584** get_address_of__interactiveObjects_0() { return &____interactiveObjects_0; }
	inline void set__interactiveObjects_0(IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* value)
	{
		____interactiveObjects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactiveObjects_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__current_2() { return static_cast<int32_t>(offsetof(ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E, ____current_2)); }
	inline InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * get__current_2() const { return ____current_2; }
	inline InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F ** get_address_of__current_2() { return &____current_2; }
	inline void set__current_2(InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * value)
	{
		____current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_2), (void*)value);
	}
};


// RollaBall.References
struct  References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084  : public RuntimeObject
{
public:
	// RollaBall.PlayerBall RollaBall.References::_playerBall
	PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * ____playerBall_0;
	// UnityEngine.Camera RollaBall.References::_mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____mainCamera_1;
	// UnityEngine.GameObject RollaBall.References::_bonuse
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____bonuse_2;
	// UnityEngine.GameObject RollaBall.References::_endGame
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____endGame_3;
	// UnityEngine.Canvas RollaBall.References::_canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ____canvas_4;
	// UnityEngine.UI.Button RollaBall.References::_restartButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ____restartButton_5;

public:
	inline static int32_t get_offset_of__playerBall_0() { return static_cast<int32_t>(offsetof(References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084, ____playerBall_0)); }
	inline PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * get__playerBall_0() const { return ____playerBall_0; }
	inline PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD ** get_address_of__playerBall_0() { return &____playerBall_0; }
	inline void set__playerBall_0(PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * value)
	{
		____playerBall_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerBall_0), (void*)value);
	}

	inline static int32_t get_offset_of__mainCamera_1() { return static_cast<int32_t>(offsetof(References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084, ____mainCamera_1)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__mainCamera_1() const { return ____mainCamera_1; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__mainCamera_1() { return &____mainCamera_1; }
	inline void set__mainCamera_1(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____mainCamera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainCamera_1), (void*)value);
	}

	inline static int32_t get_offset_of__bonuse_2() { return static_cast<int32_t>(offsetof(References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084, ____bonuse_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__bonuse_2() const { return ____bonuse_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__bonuse_2() { return &____bonuse_2; }
	inline void set__bonuse_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____bonuse_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bonuse_2), (void*)value);
	}

	inline static int32_t get_offset_of__endGame_3() { return static_cast<int32_t>(offsetof(References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084, ____endGame_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__endGame_3() const { return ____endGame_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__endGame_3() { return &____endGame_3; }
	inline void set__endGame_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____endGame_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____endGame_3), (void*)value);
	}

	inline static int32_t get_offset_of__canvas_4() { return static_cast<int32_t>(offsetof(References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084, ____canvas_4)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get__canvas_4() const { return ____canvas_4; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of__canvas_4() { return &____canvas_4; }
	inline void set__canvas_4(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		____canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____canvas_4), (void*)value);
	}

	inline static int32_t get_offset_of__restartButton_5() { return static_cast<int32_t>(offsetof(References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084, ____restartButton_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get__restartButton_5() const { return ____restartButton_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of__restartButton_5() { return &____restartButton_5; }
	inline void set__restartButton_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		____restartButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____restartButton_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// RollaBall.BadBonus/<>c
struct  U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_StaticFields
{
public:
	// RollaBall.BadBonus/<>c RollaBall.BadBonus/<>c::<>9
	U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 * ___U3CU3E9_0;
	// System.Action`2<System.String,UnityEngine.Color> RollaBall.BadBonus/<>c::<>9__10_0
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}
};


// RollaBall.DelegatesObserver/Observer1
struct  Observer1_tFD2197E3B77ADF161D3D75CB37F8252AAA0E5FD9  : public RuntimeObject
{
public:

public:
};


// RollaBall.DelegatesObserver/Observer2
struct  Observer2_t9A89E9CF25EB65EA6BFF9A6560A8EA50206CAA5F  : public RuntimeObject
{
public:

public:
};


// RollaBall.DelegatesObserver/Source
struct  Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9  : public RuntimeObject
{
public:
	// RollaBall.DelegatesObserver/MyDelegate RollaBall.DelegatesObserver/Source::_functions
	MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * ____functions_0;

public:
	inline static int32_t get_offset_of__functions_0() { return static_cast<int32_t>(offsetof(Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9, ____functions_0)); }
	inline MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * get__functions_0() const { return ____functions_0; }
	inline MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 ** get_address_of__functions_0() { return &____functions_0; }
	inline void set__functions_0(MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * value)
	{
		____functions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____functions_0), (void*)value);
	}
};


// RollaBall.GoodBonus/<>c
struct  U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_StaticFields
{
public:
	// RollaBall.GoodBonus/<>c RollaBall.GoodBonus/<>c::<>9
	U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 * ___U3CU3E9_0;
	// System.Action`1<System.Int32> RollaBall.GoodBonus/<>c::<>9__14_0
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CU3E9__14_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.ByteEnum
struct  ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// RollaBall.CameraController
struct  CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E  : public RuntimeObject
{
public:
	// UnityEngine.Transform RollaBall.CameraController::_player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____player_0;
	// UnityEngine.Transform RollaBall.CameraController::_mainCamera
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____mainCamera_1;
	// UnityEngine.Vector3 RollaBall.CameraController::_offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____offset_2;

public:
	inline static int32_t get_offset_of__player_0() { return static_cast<int32_t>(offsetof(CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E, ____player_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__player_0() const { return ____player_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__player_0() { return &____player_0; }
	inline void set__player_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____player_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____player_0), (void*)value);
	}

	inline static int32_t get_offset_of__mainCamera_1() { return static_cast<int32_t>(offsetof(CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E, ____mainCamera_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__mainCamera_1() const { return ____mainCamera_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__mainCamera_1() { return &____mainCamera_1; }
	inline void set__mainCamera_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____mainCamera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainCamera_1), (void*)value);
	}

	inline static int32_t get_offset_of__offset_2() { return static_cast<int32_t>(offsetof(CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E, ____offset_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__offset_2() const { return ____offset_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__offset_2() { return &____offset_2; }
	inline void set__offset_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____offset_2 = value;
	}
};


// RollaBall.CaughtPlayerEventArgs
struct  CaughtPlayerEventArgs_t3E48E52F9D50AFC86C0958740D19FE6F4218710A  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// UnityEngine.Color RollaBall.CaughtPlayerEventArgs::<Color>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CColorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CColorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CaughtPlayerEventArgs_t3E48E52F9D50AFC86C0958740D19FE6F4218710A, ___U3CColorU3Ek__BackingField_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CColorU3Ek__BackingField_1() const { return ___U3CColorU3Ek__BackingField_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CColorU3Ek__BackingField_1() { return &___U3CColorU3Ek__BackingField_1; }
	inline void set_U3CColorU3Ek__BackingField_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CColorU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.Collision
struct  Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// RollaBall.PlayerType
struct  PlayerType_t18F69CEF5A533F45CF2437564EEC57BC41EC11DD 
{
public:
	// System.Int32 RollaBall.PlayerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerType_t18F69CEF5A533F45CF2437564EEC57BC41EC11DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PrimitiveType
struct  PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct  Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RollaBall.UserAction
struct  UserAction_tED094F02A9DA8143759F388D9E5C031353CC3DF6 
{
public:
	// System.Byte RollaBall.UserAction::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserAction_tED094F02A9DA8143759F388D9E5C031353CC3DF6, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action`1<System.Int32>
struct  Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.String,UnityEngine.Color>
struct  Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Single,System.Single>
struct  Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.Collision>
struct  Predicate_1_t33DF3761BA2FB834D9AD61377A4DAD64284A4418  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// RollaBall.DelegatesObserver/MyDelegate
struct  MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// RollaBall.Destroy
struct  Destroy_t9744A5FB35725024ADD105271BA98CC5B2DD02B8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// RollaBall.PlayerBase RollaBall.Destroy::_player
	PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * ____player_4;

public:
	inline static int32_t get_offset_of__player_4() { return static_cast<int32_t>(offsetof(Destroy_t9744A5FB35725024ADD105271BA98CC5B2DD02B8, ____player_4)); }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * get__player_4() const { return ____player_4; }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 ** get_address_of__player_4() { return &____player_4; }
	inline void set__player_4(PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * value)
	{
		____player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____player_4), (void*)value);
	}
};


// RollaBall.DisplayWonGame
struct  DisplayWonGame_t9F4DDA514637D0085BBE6712FF73AA85921ECB91  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// RollaBall.PlayerBase RollaBall.DisplayWonGame::_player
	PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * ____player_4;
	// UnityEngine.UI.Text RollaBall.DisplayWonGame::_wonGameLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____wonGameLabel_5;

public:
	inline static int32_t get_offset_of__player_4() { return static_cast<int32_t>(offsetof(DisplayWonGame_t9F4DDA514637D0085BBE6712FF73AA85921ECB91, ____player_4)); }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * get__player_4() const { return ____player_4; }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 ** get_address_of__player_4() { return &____player_4; }
	inline void set__player_4(PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * value)
	{
		____player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____player_4), (void*)value);
	}

	inline static int32_t get_offset_of__wonGameLabel_5() { return static_cast<int32_t>(offsetof(DisplayWonGame_t9F4DDA514637D0085BBE6712FF73AA85921ECB91, ____wonGameLabel_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__wonGameLabel_5() const { return ____wonGameLabel_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__wonGameLabel_5() { return &____wonGameLabel_5; }
	inline void set__wonGameLabel_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____wonGameLabel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wonGameLabel_5), (void*)value);
	}
};


// RollaBall.ExampleClass
struct  ExampleClass_tE5801E8A2EA8C5EE378AD4D667D2A4629D460766  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ExampleUnityEvent
struct  ExampleUnityEvent_t88E6D8760D00C93991F6584206A55860900CCC03  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent ExampleUnityEvent::MyEvent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___MyEvent_4;

public:
	inline static int32_t get_offset_of_MyEvent_4() { return static_cast<int32_t>(offsetof(ExampleUnityEvent_t88E6D8760D00C93991F6584206A55860900CCC03, ___MyEvent_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_MyEvent_4() const { return ___MyEvent_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_MyEvent_4() { return &___MyEvent_4; }
	inline void set_MyEvent_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___MyEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MyEvent_4), (void*)value);
	}
};


// RollaBall.GameController
struct  GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// RollaBall.PlayerType RollaBall.GameController::PlayerType
	int32_t ___PlayerType_4;
	// RollaBall.ListExecuteObject RollaBall.GameController::_interactiveObject
	ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * ____interactiveObject_5;
	// RollaBall.DisplayEndGame RollaBall.GameController::_displayEndGame
	DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 * ____displayEndGame_6;
	// RollaBall.DisplayBonuses RollaBall.GameController::_displayBonuses
	DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 * ____displayBonuses_7;
	// RollaBall.CameraController RollaBall.GameController::_cameraController
	CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E * ____cameraController_8;
	// RollaBall.InputController RollaBall.GameController::_inputController
	InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D * ____inputController_9;
	// System.Int32 RollaBall.GameController::_countBonuses
	int32_t ____countBonuses_10;
	// RollaBall.References RollaBall.GameController::_reference
	References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * ____reference_11;

public:
	inline static int32_t get_offset_of_PlayerType_4() { return static_cast<int32_t>(offsetof(GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F, ___PlayerType_4)); }
	inline int32_t get_PlayerType_4() const { return ___PlayerType_4; }
	inline int32_t* get_address_of_PlayerType_4() { return &___PlayerType_4; }
	inline void set_PlayerType_4(int32_t value)
	{
		___PlayerType_4 = value;
	}

	inline static int32_t get_offset_of__interactiveObject_5() { return static_cast<int32_t>(offsetof(GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F, ____interactiveObject_5)); }
	inline ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * get__interactiveObject_5() const { return ____interactiveObject_5; }
	inline ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E ** get_address_of__interactiveObject_5() { return &____interactiveObject_5; }
	inline void set__interactiveObject_5(ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * value)
	{
		____interactiveObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactiveObject_5), (void*)value);
	}

	inline static int32_t get_offset_of__displayEndGame_6() { return static_cast<int32_t>(offsetof(GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F, ____displayEndGame_6)); }
	inline DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 * get__displayEndGame_6() const { return ____displayEndGame_6; }
	inline DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 ** get_address_of__displayEndGame_6() { return &____displayEndGame_6; }
	inline void set__displayEndGame_6(DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 * value)
	{
		____displayEndGame_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayEndGame_6), (void*)value);
	}

	inline static int32_t get_offset_of__displayBonuses_7() { return static_cast<int32_t>(offsetof(GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F, ____displayBonuses_7)); }
	inline DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 * get__displayBonuses_7() const { return ____displayBonuses_7; }
	inline DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 ** get_address_of__displayBonuses_7() { return &____displayBonuses_7; }
	inline void set__displayBonuses_7(DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 * value)
	{
		____displayBonuses_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayBonuses_7), (void*)value);
	}

	inline static int32_t get_offset_of__cameraController_8() { return static_cast<int32_t>(offsetof(GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F, ____cameraController_8)); }
	inline CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E * get__cameraController_8() const { return ____cameraController_8; }
	inline CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E ** get_address_of__cameraController_8() { return &____cameraController_8; }
	inline void set__cameraController_8(CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E * value)
	{
		____cameraController_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cameraController_8), (void*)value);
	}

	inline static int32_t get_offset_of__inputController_9() { return static_cast<int32_t>(offsetof(GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F, ____inputController_9)); }
	inline InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D * get__inputController_9() const { return ____inputController_9; }
	inline InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D ** get_address_of__inputController_9() { return &____inputController_9; }
	inline void set__inputController_9(InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D * value)
	{
		____inputController_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputController_9), (void*)value);
	}

	inline static int32_t get_offset_of__countBonuses_10() { return static_cast<int32_t>(offsetof(GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F, ____countBonuses_10)); }
	inline int32_t get__countBonuses_10() const { return ____countBonuses_10; }
	inline int32_t* get_address_of__countBonuses_10() { return &____countBonuses_10; }
	inline void set__countBonuses_10(int32_t value)
	{
		____countBonuses_10 = value;
	}

	inline static int32_t get_offset_of__reference_11() { return static_cast<int32_t>(offsetof(GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F, ____reference_11)); }
	inline References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * get__reference_11() const { return ____reference_11; }
	inline References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 ** get_address_of__reference_11() { return &____reference_11; }
	inline void set__reference_11(References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * value)
	{
		____reference_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reference_11), (void*)value);
	}
};


// RollaBall.InteractiveObject
struct  InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color RollaBall.InteractiveObject::_color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color_4;
	// System.Boolean RollaBall.InteractiveObject::_isInteractable
	bool ____isInteractable_5;

public:
	inline static int32_t get_offset_of__color_4() { return static_cast<int32_t>(offsetof(InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F, ____color_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__color_4() const { return ____color_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__color_4() { return &____color_4; }
	inline void set__color_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____color_4 = value;
	}

	inline static int32_t get_offset_of__isInteractable_5() { return static_cast<int32_t>(offsetof(InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F, ____isInteractable_5)); }
	inline bool get__isInteractable_5() const { return ____isInteractable_5; }
	inline bool* get_address_of__isInteractable_5() { return &____isInteractable_5; }
	inline void set__isInteractable_5(bool value)
	{
		____isInteractable_5 = value;
	}
};


// RollaBall.PlayerBase
struct  PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single RollaBall.PlayerBase::Speed
	float ___Speed_4;

public:
	inline static int32_t get_offset_of_Speed_4() { return static_cast<int32_t>(offsetof(PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747, ___Speed_4)); }
	inline float get_Speed_4() const { return ___Speed_4; }
	inline float* get_address_of_Speed_4() { return &___Speed_4; }
	inline void set_Speed_4(float value)
	{
		___Speed_4 = value;
	}
};


// RollaBall.PredicateAndFuncDelegatesExample
struct  PredicateAndFuncDelegatesExample_t6C8BED6CB14E01AE68464E19109881A52C6BE6B7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Predicate`1<UnityEngine.Collision> RollaBall.PredicateAndFuncDelegatesExample::Predicate
	Predicate_1_t33DF3761BA2FB834D9AD61377A4DAD64284A4418 * ___Predicate_4;
	// System.Func`2<System.Single,System.Single> RollaBall.PredicateAndFuncDelegatesExample::Func
	Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * ___Func_5;
	// System.Single RollaBall.PredicateAndFuncDelegatesExample::_armor
	float ____armor_6;
	// System.Single RollaBall.PredicateAndFuncDelegatesExample::_hp
	float ____hp_7;

public:
	inline static int32_t get_offset_of_Predicate_4() { return static_cast<int32_t>(offsetof(PredicateAndFuncDelegatesExample_t6C8BED6CB14E01AE68464E19109881A52C6BE6B7, ___Predicate_4)); }
	inline Predicate_1_t33DF3761BA2FB834D9AD61377A4DAD64284A4418 * get_Predicate_4() const { return ___Predicate_4; }
	inline Predicate_1_t33DF3761BA2FB834D9AD61377A4DAD64284A4418 ** get_address_of_Predicate_4() { return &___Predicate_4; }
	inline void set_Predicate_4(Predicate_1_t33DF3761BA2FB834D9AD61377A4DAD64284A4418 * value)
	{
		___Predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_Func_5() { return static_cast<int32_t>(offsetof(PredicateAndFuncDelegatesExample_t6C8BED6CB14E01AE68464E19109881A52C6BE6B7, ___Func_5)); }
	inline Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * get_Func_5() const { return ___Func_5; }
	inline Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 ** get_address_of_Func_5() { return &___Func_5; }
	inline void set_Func_5(Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * value)
	{
		___Func_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Func_5), (void*)value);
	}

	inline static int32_t get_offset_of__armor_6() { return static_cast<int32_t>(offsetof(PredicateAndFuncDelegatesExample_t6C8BED6CB14E01AE68464E19109881A52C6BE6B7, ____armor_6)); }
	inline float get__armor_6() const { return ____armor_6; }
	inline float* get_address_of__armor_6() { return &____armor_6; }
	inline void set__armor_6(float value)
	{
		____armor_6 = value;
	}

	inline static int32_t get_offset_of__hp_7() { return static_cast<int32_t>(offsetof(PredicateAndFuncDelegatesExample_t6C8BED6CB14E01AE68464E19109881A52C6BE6B7, ____hp_7)); }
	inline float get__hp_7() const { return ____hp_7; }
	inline float* get_address_of__hp_7() { return &____hp_7; }
	inline void set__hp_7(float value)
	{
		____hp_7 = value;
	}
};


// RollaBall.SlowingDown
struct  SlowingDown_t07D8BB3D25AB02A7CD3D56C28A776B791FA22822  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// RollaBall.PlayerBase RollaBall.SlowingDown::_player
	PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * ____player_4;

public:
	inline static int32_t get_offset_of__player_4() { return static_cast<int32_t>(offsetof(SlowingDown_t07D8BB3D25AB02A7CD3D56C28A776B791FA22822, ____player_4)); }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * get__player_4() const { return ____player_4; }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 ** get_address_of__player_4() { return &____player_4; }
	inline void set__player_4(PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * value)
	{
		____player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____player_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// RollaBall.BadBonus
struct  BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421  : public InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F
{
public:
	// System.Single RollaBall.BadBonus::_lengthFlay
	float ____lengthFlay_6;
	// System.Single RollaBall.BadBonus::_speedRotation
	float ____speedRotation_7;
	// System.Action`2<System.String,UnityEngine.Color> RollaBall.BadBonus::OnCaughtPlayerChange
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * ___OnCaughtPlayerChange_8;

public:
	inline static int32_t get_offset_of__lengthFlay_6() { return static_cast<int32_t>(offsetof(BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421, ____lengthFlay_6)); }
	inline float get__lengthFlay_6() const { return ____lengthFlay_6; }
	inline float* get_address_of__lengthFlay_6() { return &____lengthFlay_6; }
	inline void set__lengthFlay_6(float value)
	{
		____lengthFlay_6 = value;
	}

	inline static int32_t get_offset_of__speedRotation_7() { return static_cast<int32_t>(offsetof(BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421, ____speedRotation_7)); }
	inline float get__speedRotation_7() const { return ____speedRotation_7; }
	inline float* get_address_of__speedRotation_7() { return &____speedRotation_7; }
	inline void set__speedRotation_7(float value)
	{
		____speedRotation_7 = value;
	}

	inline static int32_t get_offset_of_OnCaughtPlayerChange_8() { return static_cast<int32_t>(offsetof(BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421, ___OnCaughtPlayerChange_8)); }
	inline Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * get_OnCaughtPlayerChange_8() const { return ___OnCaughtPlayerChange_8; }
	inline Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 ** get_address_of_OnCaughtPlayerChange_8() { return &___OnCaughtPlayerChange_8; }
	inline void set_OnCaughtPlayerChange_8(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * value)
	{
		___OnCaughtPlayerChange_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCaughtPlayerChange_8), (void*)value);
	}
};


// RollaBall.GoodBonus
struct  GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240  : public InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F
{
public:
	// UnityEngine.Material RollaBall.GoodBonus::_material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____material_6;
	// System.Single RollaBall.GoodBonus::_lenghtFlay
	float ____lenghtFlay_7;
	// UnityEngine.UI.Text RollaBall.GoodBonus::_scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____scoreText_8;
	// RollaBall.PlayerBase RollaBall.GoodBonus::_player
	PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * ____player_9;
	// System.Single RollaBall.GoodBonus::_speedRotation
	float ____speedRotation_10;
	// System.Action`1<System.Int32> RollaBall.GoodBonus::OnpointChange
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnpointChange_11;
	// System.Int32 RollaBall.GoodBonus::Point
	int32_t ___Point_12;

public:
	inline static int32_t get_offset_of__material_6() { return static_cast<int32_t>(offsetof(GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240, ____material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__material_6() const { return ____material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__material_6() { return &____material_6; }
	inline void set__material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____material_6), (void*)value);
	}

	inline static int32_t get_offset_of__lenghtFlay_7() { return static_cast<int32_t>(offsetof(GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240, ____lenghtFlay_7)); }
	inline float get__lenghtFlay_7() const { return ____lenghtFlay_7; }
	inline float* get_address_of__lenghtFlay_7() { return &____lenghtFlay_7; }
	inline void set__lenghtFlay_7(float value)
	{
		____lenghtFlay_7 = value;
	}

	inline static int32_t get_offset_of__scoreText_8() { return static_cast<int32_t>(offsetof(GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240, ____scoreText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__scoreText_8() const { return ____scoreText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__scoreText_8() { return &____scoreText_8; }
	inline void set__scoreText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____scoreText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scoreText_8), (void*)value);
	}

	inline static int32_t get_offset_of__player_9() { return static_cast<int32_t>(offsetof(GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240, ____player_9)); }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * get__player_9() const { return ____player_9; }
	inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 ** get_address_of__player_9() { return &____player_9; }
	inline void set__player_9(PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * value)
	{
		____player_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____player_9), (void*)value);
	}

	inline static int32_t get_offset_of__speedRotation_10() { return static_cast<int32_t>(offsetof(GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240, ____speedRotation_10)); }
	inline float get__speedRotation_10() const { return ____speedRotation_10; }
	inline float* get_address_of__speedRotation_10() { return &____speedRotation_10; }
	inline void set__speedRotation_10(float value)
	{
		____speedRotation_10 = value;
	}

	inline static int32_t get_offset_of_OnpointChange_11() { return static_cast<int32_t>(offsetof(GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240, ___OnpointChange_11)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnpointChange_11() const { return ___OnpointChange_11; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnpointChange_11() { return &___OnpointChange_11; }
	inline void set_OnpointChange_11(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnpointChange_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnpointChange_11), (void*)value);
	}

	inline static int32_t get_offset_of_Point_12() { return static_cast<int32_t>(offsetof(GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240, ___Point_12)); }
	inline int32_t get_Point_12() const { return ___Point_12; }
	inline int32_t* get_address_of_Point_12() { return &___Point_12; }
	inline void set_Point_12(int32_t value)
	{
		___Point_12 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// RollaBall.PlayerBall
struct  PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD  : public PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747
{
public:
	// UnityEngine.Rigidbody RollaBall.PlayerBall::_rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidbody_5;

public:
	inline static int32_t get_offset_of__rigidbody_5() { return static_cast<int32_t>(offsetof(PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD, ____rigidbody_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidbody_5() const { return ____rigidbody_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidbody_5() { return &____rigidbody_5; }
	inline void set__rigidbody_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody_5), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// RollaBall.InteractiveObject[]
struct InteractiveObjectU5BU5D_t346AB261ED075CF1E616FCA070CDFC2C7855AA54  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * m_Items[1];

public:
	inline InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// RollaBall.IExecute[]
struct IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB1BD995056039C2AD2CE07E04A53E652A6C039B9_gshared (Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9215D95723C41AEB3C238805171E3D7928C90206_gshared (Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mEA5665B69C064636B283B6E324FAEA99DDC82A18_gshared (Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Color>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m5D7201C1CF3F5439EC400FBDA3F0E2FD0F97DDD9_gshared (Action_2_tA115706E18DF04DC2FE89DB5AE302F7A84C851CA * __this, RuntimeObject * ___arg10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg21, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m86F5F9DFA8E5C3DA94E502EA3A7DA368D24E9FD9_gshared (Action_2_tA115706E18DF04DC2FE89DB5AE302F7A84C851CA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6D3A43A54FAC38E55033FA2CCD04E7BD19C943CF_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !1 System.Func`2<System.Single,System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Func_2_Invoke_mD203EFB0908EAA1D1F0328AA5E34C1E7CA69AB55_gshared (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * __this, float ___arg0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<RollaBall.UserAction,System.Action>::.ctor()
inline void Dictionary_2__ctor_m1A655D8306FAC45E7B124290A958EA039990BA1C (Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 *, const RuntimeMethod*))Dictionary_2__ctor_mB1BD995056039C2AD2CE07E04A53E652A6C039B9_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<RollaBall.UserAction,System.Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m6022D31FE4210DB9AA5ACCDF3DCCD99FD44482E1 (Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * __this, uint8_t ___key0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 *, uint8_t, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Dictionary_2_set_Item_m9215D95723C41AEB3C238805171E3D7928C90206_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<RollaBall.UserAction,System.Action>::get_Item(!0)
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * Dictionary_2_get_Item_m5B766DB587262E7313769C1978ECB62AB801141C (Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_mEA5665B69C064636B283B6E324FAEA99DDC82A18_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.String,UnityEngine.Color>::Invoke(!0,!1)
inline void Action_2_Invoke_m6AE0B24D85981C6DB69D5E08593FA4F59C09FF05 (Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * __this, String_t* ___arg10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *, String_t*, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))Action_2_Invoke_m5D7201C1CF3F5439EC400FBDA3F0E2FD0F97DDD9_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean RollaBall.InteractiveObject::get_IsInteractable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractiveObject_get_IsInteractable_m455C04E19C7DFFA646C8DC8B4AAE29526DFF7DA8_inline (InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * __this, const RuntimeMethod* method);
// System.Void RollaBall.BadBonus::Flay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_Flay_m0E794E6AA3293DF66C3816D613EE9133A8265B01 (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, const RuntimeMethod* method);
// System.Void RollaBall.BadBonus::Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_Rotation_m712E7D1C66205E1B00680511F294E5D75375DC4D (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1 (float ___t0, float ___length1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void System.Action`2<System.String,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06 (Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m86F5F9DFA8E5C3DA94E502EA3A7DA368D24E9FD9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void RollaBall.InteractiveObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObject__ctor_mDD0771D248C83E33947DC22DD902DD36B84BB492 (InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<RollaBall.PlayerBase>()
inline PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2 (const RuntimeMethod* method)
{
	return ((  PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void RollaBall.ListExecuteObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExecuteObject__ctor_m3341A3F18D110BBDF46BE441D06C4B0ECCEB7103 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method);
// System.Void RollaBall.References::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void References__ctor_m3B7977D7D38024CB0D648FE13F60D7CC5D60B033 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method);
// RollaBall.PlayerBall RollaBall.References::get_PlayerBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * References_get_PlayerBall_m98D69688FC4292799CEB266718D1A10EAD09F0C6 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method);
// UnityEngine.Camera RollaBall.References::get_MainCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * References_get_MainCamera_m8613846A53AE7E15CB60BB355945F080CAAE8294 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method);
// System.Void RollaBall.CameraController::.ctor(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mED1DE2DA9FC813B3127B5439E91D9A79F9A45C72 (CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mainCamera1, const RuntimeMethod* method);
// System.Void RollaBall.ListExecuteObject::AddExecuteObject(RollaBall.IExecute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExecuteObject_AddExecuteObject_m526A1EBA81383F06243F04D2CC4A73859B411230 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, RuntimeObject* ___execute0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void RollaBall.InputController::.ctor(RollaBall.PlayerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController__ctor_m2E392B471D94CDBD19087C0CD55E188385B468AE (InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D * __this, PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * ___player0, const RuntimeMethod* method);
// UnityEngine.GameObject RollaBall.References::get_EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * References_get_EndGame_mD18BF81D883B2BDB69454CDAE7B3647A66481D17 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method);
// System.Void RollaBall.DisplayEndGame::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayEndGame__ctor_mB31BC7938221F1E21171C84F2A7FA34FA8412D76 (DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___endGame0, const RuntimeMethod* method);
// UnityEngine.GameObject RollaBall.References::get_Bonuse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * References_get_Bonuse_mC97E4CDA4595029AD7C1FA337C8A9E3D3024100E (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method);
// System.Void RollaBall.DisplayBonuses::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayBonuses__ctor_m611FE4085D9585D65351A1B01FC00AD2B07F7707 (DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bonus0, const RuntimeMethod* method);
// System.Collections.IEnumerator RollaBall.ListExecuteObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListExecuteObject_GetEnumerator_m04C3BF4C9E053BB95A1612934B7FC6230CBF4223 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method);
// System.Void RollaBall.BadBonus::add_OnCaughtPlayerChange(System.Action`2<System.String,UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_add_OnCaughtPlayerChange_mF3CD85DFB5E179401F810BD329D8A54624BF4A8A (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void RollaBall.GoodBonus::add_OnpointChange(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_add_OnpointChange_m11F7899008A9D9B9CE925BF2D107A4F9846A0D60 (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Button RollaBall.References::get_RestartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * References_get_RestartButton_m44407E62F85477E67A2F1A74B20980D76F486A29 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void RollaBall.DisplayBonuses::Display(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayBonuses_Display_m80E79A080BD1A20306E1E58754C2492F6AE30CC6 (DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 * __this, int32_t ___value0, const RuntimeMethod* method);
// RollaBall.IExecute RollaBall.ListExecuteObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListExecuteObject_get_Item_m5206134DA42C4FE6A3168B560014D44C87714CE0 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 RollaBall.ListExecuteObject::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListExecuteObject_get_Length_m98B20D49A30686D793C4DF55B70AA72E75082570 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method);
// System.Void RollaBall.BadBonus::remove_OnCaughtPlayerChange(System.Action`2<System.String,UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_remove_OnCaughtPlayerChange_m85598E0F1178EAFA66250E372D8AA7B2CD13CD02 (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * ___value0, const RuntimeMethod* method);
// System.Void RollaBall.GoodBonus::remove_OnpointChange(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_remove_OnpointChange_m2E76B37AF4D43FAB1ED8EF626C5417C4A74023B8 (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Material>()
inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * Component_GetComponent_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA8236AE6B5D05438B1E6B61080D18C93E21539AA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Material_t8927C00353A72755313F046D0CE85178AE8218EE * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Object_FindObjectOfType_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m32EF8CB2CBFADED22FEF111A3147D99E8AE9FC52 (const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared)(__this, ___obj0, method);
}
// System.Void RollaBall.GoodBonus::Flay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_Flay_m679E805287B605794FACE24814D6F73BDFB2BB9C (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, const RuntimeMethod* method);
// System.Void RollaBall.GoodBonus::Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_Rotation_m8DB0E674202A779E544A15762573E83B40394A0A (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void RollaBall.InteractiveObject::set_IsInteractable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObject_set_IsInteractable_mE22D31255CA7374CABA1CE2ACE6971C693C3815D (InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Random::ColorHSV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Random_ColorHSV_mCC5611616B89F24DFE2667E892B67A58A2D079A6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Renderer>(!!0&)
inline bool Component_TryGetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630D40E4FA7B1646CF5D9B57E3169A79B0B2778D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C **, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<RollaBall.InteractiveObject>()
inline InteractiveObjectU5BU5D_t346AB261ED075CF1E616FCA070CDFC2C7855AA54* Object_FindObjectsOfType_TisInteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F_m9FCD78E9E0720F68B4D507FA7094B9DA1241D548 (const RuntimeMethod* method)
{
	return ((  InteractiveObjectU5BU5D_t346AB261ED075CF1E616FCA070CDFC2C7855AA54* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void System.Array::Resize<RollaBall.IExecute>(!!0[]&,System.Int32)
inline void Array_Resize_TisIExecute_t66818815903AD48B13A6595C0FAB79824894DA20_mD6A02A1E316212D2020389C1BA28ED500FEC7339 (IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared)(___array0, ___newSize1, method);
}
// System.Void RollaBall.ListExecuteObject::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExecuteObject_Reset_mF75F502C4453AB2B1FA40A595E8A8022B2D1A760 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Void RollaBall.PlayerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBase__ctor_m216379A3468081D8F200C5C947EE2B3723FCB483 (PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * __this, const RuntimeMethod* method);
// System.Boolean System.Predicate`1<UnityEngine.Collision>::Invoke(!0)
inline bool Predicate_1_Invoke_mD189340351175567687595F6C2F728A7B50BE8BD (Predicate_1_t33DF3761BA2FB834D9AD61377A4DAD64284A4418 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t33DF3761BA2FB834D9AD61377A4DAD64284A4418 *, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 *, const RuntimeMethod*))Predicate_1_Invoke_m6D3A43A54FAC38E55033FA2CCD04E7BD19C943CF_gshared)(__this, ___obj0, method);
}
// !1 System.Func`2<System.Single,System.Single>::Invoke(!0)
inline float Func_2_Invoke_mD203EFB0908EAA1D1F0328AA5E34C1E7CA69AB55 (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * __this, float ___arg0, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, float, const RuntimeMethod*))Func_2_Invoke_mD203EFB0908EAA1D1F0328AA5E34C1E7CA69AB55_gshared)(__this, ___arg0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.UI.Button>(System.String)
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Resources_Load_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF446C7F8E216868EF6C2527728ACF1C31614554A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// UnityEngine.Canvas RollaBall.References::get_Canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * References_get_Canvas_m276AD5FBFF479F50BB3ACE4A282EF1FF7F156B60 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.UI.Button>(!!0,UnityEngine.Transform)
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89 (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Object_FindObjectOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m6781AB341DB6A01F9B6CF21AE947D9E2E20BFC97 (const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.Resources::Load<RollaBall.PlayerBall>(System.String)
inline PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * Resources_Load_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_m3FA4913F10993A2BACCAD3D5DB835523944FFBAE (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// !!0 UnityEngine.Object::Instantiate<RollaBall.PlayerBall>(!!0)
inline PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * Object_Instantiate_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_mEDD848A39C4D335F536D68B6CC5933BB642E8435 (PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * ___original0, const RuntimeMethod* method)
{
	return ((  PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * (*) (PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void RollaBall.BadBonus/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82F9BA61150489E045AB72BE595F0C68A7EA9033 (U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 * __this, const RuntimeMethod* method);
// System.Void RollaBall.DelegatesObserver/Source::add__functions(RollaBall.DelegatesObserver/MyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Source_add__functions_m372403C73200C314A77B0A86391495CEDB0DBDE6 (Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9 * __this, MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * ___value0, const RuntimeMethod* method);
// System.Void RollaBall.DelegatesObserver/Source::remove__functions(RollaBall.DelegatesObserver/MyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Source_remove__functions_m0FB70D8A46E003C15E22D912BEEF98E453E3CFC7 (Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9 * __this, MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * ___value0, const RuntimeMethod* method);
// System.Void RollaBall.DelegatesObserver/MyDelegate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyDelegate_Invoke_m15EB707311368D7804996C423E6D53EEE8A92587 (MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void RollaBall.GoodBonus/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7AA178824CD53B51841CAC0D4668F066B95F5854 (U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 * __this, const RuntimeMethod* method);
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
// System.Void RollaBall.ActionDelegateExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDelegateExample__ctor_mEAEBB138BE395F6805D816047EFBFD3163E82CB2 (ActionDelegateExample_t48D2DAE55761602195580A0C02352797B51035A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionDelegateExample_DownMethod_m2860CE0A82BF56FCFF414AFE52131A03E981A025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionDelegateExample_UpMethod_m2078DB9AA13DE8624768E84B4C331E258BADCCA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1A655D8306FAC45E7B124290A958EA039990BA1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6022D31FE4210DB9AA5ACCDF3DCCD99FD44482E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ActionDelegateExample()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _actions = new Dictionary<UserAction, Action>
		// {
		// 
		//     [UserAction.Up] = UpMethod,
		//     [UserAction.Down] = DownMethod
		// 
		// };
		Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * L_0 = (Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 *)il2cpp_codegen_object_new(Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1A655D8306FAC45E7B124290A958EA039990BA1C(L_0, /*hidden argument*/Dictionary_2__ctor_m1A655D8306FAC45E7B124290A958EA039990BA1C_RuntimeMethod_var);
		Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * L_1 = L_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)ActionDelegateExample_UpMethod_m2078DB9AA13DE8624768E84B4C331E258BADCCA4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_set_Item_m6022D31FE4210DB9AA5ACCDF3DCCD99FD44482E1(L_1, 1, L_2, /*hidden argument*/Dictionary_2_set_Item_m6022D31FE4210DB9AA5ACCDF3DCCD99FD44482E1_RuntimeMethod_var);
		Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * L_3 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, __this, (intptr_t)((intptr_t)ActionDelegateExample_DownMethod_m2860CE0A82BF56FCFF414AFE52131A03E981A025_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_set_Item_m6022D31FE4210DB9AA5ACCDF3DCCD99FD44482E1(L_3, 2, L_4, /*hidden argument*/Dictionary_2_set_Item_m6022D31FE4210DB9AA5ACCDF3DCCD99FD44482E1_RuntimeMethod_var);
		__this->set__actions_0(L_3);
		// }
		return;
	}
}
// System.Action RollaBall.ActionDelegateExample::get_Item(RollaBall.UserAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ActionDelegateExample_get_Item_mB4358F940453FA314E550B4A19FFC137D6942BC7 (ActionDelegateExample_t48D2DAE55761602195580A0C02352797B51035A5 * __this, uint8_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5B766DB587262E7313769C1978ECB62AB801141C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Action this [UserAction index] =>_actions[index];
		Dictionary_2_t39A84C48BD25F9B2B16CDF52A6C04DD2EE8105A0 * L_0 = __this->get__actions_0();
		uint8_t L_1 = ___index0;
		NullCheck(L_0);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2;
		L_2 = Dictionary_2_get_Item_m5B766DB587262E7313769C1978ECB62AB801141C(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m5B766DB587262E7313769C1978ECB62AB801141C_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void RollaBall.ActionDelegateExample::UpMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDelegateExample_UpMethod_m2078DB9AA13DE8624768E84B4C331E258BADCCA4 (ActionDelegateExample_t48D2DAE55761602195580A0C02352797B51035A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11CFD6D258A14AED47B45B4056A6B112BF31F0B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(nameof(UpMethod));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral11CFD6D258A14AED47B45B4056A6B112BF31F0B5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.ActionDelegateExample::DownMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDelegateExample_DownMethod_m2860CE0A82BF56FCFF414AFE52131A03E981A025 (ActionDelegateExample_t48D2DAE55761602195580A0C02352797B51035A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0EBEDEFB5058B4331B8D8842EE53784CEFCFBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(nameof(DownMethod));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral4D0EBEDEFB5058B4331B8D8842EE53784CEFCFBF, /*hidden argument*/NULL);
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
// System.Void RollaBall.BadBonus::add_OnCaughtPlayerChange(System.Action`2<System.String,UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_add_OnCaughtPlayerChange_mF3CD85DFB5E179401F810BD329D8A54624BF4A8A (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * V_0 = NULL;
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * V_1 = NULL;
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * V_2 = NULL;
	{
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_0 = __this->get_OnCaughtPlayerChange_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_1 = V_0;
		V_1 = L_1;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_2 = V_1;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)CastclassSealed((RuntimeObject*)L_4, Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var));
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 ** L_5 = __this->get_address_of_OnCaughtPlayerChange_8();
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_6 = V_2;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_7 = V_1;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *>((Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_9 = V_0;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)L_9) == ((RuntimeObject*)(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RollaBall.BadBonus::remove_OnCaughtPlayerChange(System.Action`2<System.String,UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_remove_OnCaughtPlayerChange_m85598E0F1178EAFA66250E372D8AA7B2CD13CD02 (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * V_0 = NULL;
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * V_1 = NULL;
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * V_2 = NULL;
	{
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_0 = __this->get_OnCaughtPlayerChange_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_1 = V_0;
		V_1 = L_1;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_2 = V_1;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)CastclassSealed((RuntimeObject*)L_4, Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var));
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 ** L_5 = __this->get_address_of_OnCaughtPlayerChange_8();
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_6 = V_2;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_7 = V_1;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *>((Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_9 = V_0;
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)L_9) == ((RuntimeObject*)(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RollaBall.BadBonus::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_Awake_m1FF4ADF741F932F49174CD214BF7FE1FA3848467 (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, const RuntimeMethod* method)
{
	{
		// _lengthFlay = Random.Range(1.0f, 5.0f);
		float L_0;
		L_0 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (5.0f), /*hidden argument*/NULL);
		__this->set__lengthFlay_6(L_0);
		// _speedRotation = Random.Range(10.0f, 50.0f);
		float L_1;
		L_1 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((10.0f), (50.0f), /*hidden argument*/NULL);
		__this->set__speedRotation_7(L_1);
		// }
		return;
	}
}
// System.Void RollaBall.BadBonus::Interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_Interaction_mFBA4C952D0CAEAA784BAA75FCA1B433914AF0E2F (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m6AE0B24D85981C6DB69D5E08593FA4F59C09FF05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnCaughtPlayerChange.Invoke(gameObject.name, _color);
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_0 = __this->get_OnCaughtPlayerChange_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ((InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F *)__this)->get__color_4();
		NullCheck(L_0);
		Action_2_Invoke_m6AE0B24D85981C6DB69D5E08593FA4F59C09FF05(L_0, L_2, L_3, /*hidden argument*/Action_2_Invoke_m6AE0B24D85981C6DB69D5E08593FA4F59C09FF05_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RollaBall.BadBonus::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_Execute_mE0327BC9F213758F00D66102AA200ED5AE50643E (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, const RuntimeMethod* method)
{
	{
		// if(!IsInteractable)
		bool L_0;
		L_0 = InteractiveObject_get_IsInteractable_m455C04E19C7DFFA646C8DC8B4AAE29526DFF7DA8_inline(__this, /*hidden argument*/NULL);
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
		// Flay();
		BadBonus_Flay_m0E794E6AA3293DF66C3816D613EE9133A8265B01(__this, /*hidden argument*/NULL);
		// Rotation();
		BadBonus_Rotation_m712E7D1C66205E1B00680511F294E5D75375DC4D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.BadBonus::Flay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_Flay_m0E794E6AA3293DF66C3816D613EE9133A8265B01 (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, const RuntimeMethod* method)
{
	{
		// transform.localPosition = new Vector3(transform.localPosition.x,
		//     Mathf.PingPong(Time.time, _lengthFlay),
		//     transform.localPosition.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = __this->get__lengthFlay_6();
		float L_6;
		L_6 = Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1(L_4, L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_3, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.BadBonus::Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus_Rotation_m712E7D1C66205E1B00680511F294E5D75375DC4D (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(Vector3.up * (Time.deltaTime * _speedRotation), Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_3 = __this->get__speedRotation_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_0, L_4, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.BadBonus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadBonus__ctor_m6689B5F8D7E47A1CB4ECD05DF4FC715A6558F129 (BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__10_0_m68B260E4297BDACC4D6997175F20FEF192436CEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * G_B2_0 = NULL;
	BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * G_B2_1 = NULL;
	Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * G_B1_0 = NULL;
	BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * G_B1_1 = NULL;
	{
		// public event Action<string, Color> OnCaughtPlayerChange = delegate (string str, Color color) { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var);
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_0 = ((U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var))->get_U3CU3E9__10_0_1();
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var);
		U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 * L_2 = ((U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_3 = (Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)il2cpp_codegen_object_new(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
		Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__10_0_m68B260E4297BDACC4D6997175F20FEF192436CEE_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06_RuntimeMethod_var);
		Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_4 = L_3;
		((U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var))->set_U3CU3E9__10_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_OnCaughtPlayerChange_8(G_B2_0);
		InteractiveObject__ctor_mDD0771D248C83E33947DC22DD902DD36B84BB492(__this, /*hidden argument*/NULL);
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
// System.Void RollaBall.CameraController::.ctor(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mED1DE2DA9FC813B3127B5439E91D9A79F9A45C72 (CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mainCamera1, const RuntimeMethod* method)
{
	{
		// public CameraController(Transform player, Transform mainCamera)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _player = player;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___player0;
		__this->set__player_0(L_0);
		// _mainCamera = mainCamera;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___mainCamera1;
		__this->set__mainCamera_1(L_1);
		// _mainCamera.LookAt(_player);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get__mainCamera_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get__player_0();
		NullCheck(L_2);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_2, L_3, /*hidden argument*/NULL);
		// _offset = _mainCamera.position - _player.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get__mainCamera_1();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get__player_0();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_7, /*hidden argument*/NULL);
		__this->set__offset_2(L_8);
		// }
		return;
	}
}
// System.Void RollaBall.CameraController::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Execute_m1F6DA6BFB59FA6945ED015A4CE5AA2E676F20E5A (CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E * __this, const RuntimeMethod* method)
{
	{
		// _mainCamera.position = _player.position + _offset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__mainCamera_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get__player_0();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get__offset_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_4, /*hidden argument*/NULL);
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
// UnityEngine.Color RollaBall.CaughtPlayerEventArgs::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  CaughtPlayerEventArgs_get_Color_m76E2EE86C8C259875687F8281CED6EEF72AA3AAF (CaughtPlayerEventArgs_t3E48E52F9D50AFC86C0958740D19FE6F4218710A * __this, const RuntimeMethod* method)
{
	{
		// public Color Color { get; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_U3CColorU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void RollaBall.CaughtPlayerEventArgs::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaughtPlayerEventArgs__ctor_m36A4B4708AEB7B5A68F7474B4FF852C1EB35088F (CaughtPlayerEventArgs_t3E48E52F9D50AFC86C0958740D19FE6F4218710A * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CaughtPlayerEventArgs(Color Color)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.Color = Color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___Color0;
		__this->set_U3CColorU3Ek__BackingField_1(L_0);
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
// System.Void RollaBall.DelegatesObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegatesObserver__ctor_m052EB18412D0339CC49619DB4DA2F13F547E4AAC (DelegatesObserver_tED03D34C8427D03F9277E1B1982B4C4FDF0F233F * __this, const RuntimeMethod* method)
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
// System.Void RollaBall.Destroy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy_OnTriggerEnter_m7D7F7C3CC8AE82FF6E5445FD5DBFAE0F35FAEC68 (Destroy_t9744A5FB35725024ADD105271BA98CC5B2DD02B8 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// Destroy(_player);
		PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * L_3 = __this->get__player_4();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// Time.timeScale = 0.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void RollaBall.Destroy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy_Awake_mB1D791FE4DD0E9DF3B1D17DF75F399063760E5DD (Destroy_t9744A5FB35725024ADD105271BA98CC5B2DD02B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _player = FindObjectOfType<PlayerBase>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2(/*hidden argument*/Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2_RuntimeMethod_var);
		__this->set__player_4(L_0);
		// }
		return;
	}
}
// System.Void RollaBall.Destroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy__ctor_mE0E9D3F80A9BAE13C51BAB691B4A910F46A10A3C (Destroy_t9744A5FB35725024ADD105271BA98CC5B2DD02B8 * __this, const RuntimeMethod* method)
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
// System.Void RollaBall.DisplayBonuses::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayBonuses__ctor_m611FE4085D9585D65351A1B01FC00AD2B07F7707 (DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bonus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DisplayBonuses(GameObject bonus)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _bonuseLable = bonus.GetComponentInChildren<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___bonus0;
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_0, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		__this->set__bonuseLable_0(L_1);
		// _bonuseLable.text = String.Empty;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get__bonuseLable_0();
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void RollaBall.DisplayBonuses::Display(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayBonuses_Display_m80E79A080BD1A20306E1E58754C2492F6AE30CC6 (DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ABF1CB72EE75612285D28BDC138BB1776651D60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bonuseLable.text = $"�� ������� {value} �����";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__bonuseLable_0();
		int32_t L_1 = ___value0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5ABF1CB72EE75612285D28BDC138BB1776651D60, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
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
// System.Void RollaBall.DisplayEndGame::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayEndGame__ctor_mB31BC7938221F1E21171C84F2A7FA34FA8412D76 (DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___endGame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DisplayEndGame(GameObject endGame)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _finishGameLabel = endGame.GetComponentInChildren<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___endGame0;
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_0, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		__this->set__finishGameLabel_0(L_1);
		// _finishGameLabel.text = String.Empty;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get__finishGameLabel_0();
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void RollaBall.DisplayEndGame::GameOver(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayEndGame_GameOver_m4729B21FC743BCD68675324A0B42A7DC18FBF0F5 (DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3357E746F1241457078B20C1A5A4DC680749891D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _finishGameLabel.text = $"�� ���������. ��� ���� {name}, {color} �����";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__finishGameLabel_0();
		String_t* L_1 = ___name0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = L_2;
		RuntimeObject * L_4 = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral3357E746F1241457078B20C1A5A4DC680749891D, L_1, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
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
// System.Void RollaBall.DisplayWonGame::.ctor(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayWonGame__ctor_m9788656E2D661020F3A97D25240E03DA0828C352 (DisplayWonGame_t9F4DDA514637D0085BBE6712FF73AA85921ECB91 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___wonGameLabel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DisplayWonGame(Text wonGameLabel)
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// _wonGameLabel = wonGameLabel;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___wonGameLabel0;
		__this->set__wonGameLabel_5(L_0);
		// _wonGameLabel.text = string.Empty;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get__wonGameLabel_5();
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void RollaBall.DisplayWonGame::WonGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayWonGame_WonGame_m0E2A3181AF9D7C7A812007C5EC299FE9EF63D245 (DisplayWonGame_t9F4DDA514637D0085BBE6712FF73AA85921ECB91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23F3A515A5BFCC123480D7F6F176F240E32FDB21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _wonGameLabel.text = "�� ��������";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__wonGameLabel_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral23F3A515A5BFCC123480D7F6F176F240E32FDB21);
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
// System.Void RollaBall.ExampleClass::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleClass_Start_mE1BE44740210569FA0AFA50C7B8BD64C5E8D1C0D (ExampleClass_tE5801E8A2EA8C5EE378AD4D667D2A4629D460766 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85F17699BAD229335C21279768C0B4A0006E4BE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(3, /*hidden argument*/NULL);
		// Renderer rend = go.GetComponent<Renderer>();
		NullCheck(L_0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		// rend.material.mainTexture = Resources.Load("glass") as Texture;
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral85F17699BAD229335C21279768C0B4A0006E4BE8, /*hidden argument*/NULL);
		NullCheck(L_2);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_2, ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)IsInstClass((RuntimeObject*)L_3, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.ExampleClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleClass__ctor_m85A847704362ED65D4E867885F8DD9331160BB70 (ExampleClass_tE5801E8A2EA8C5EE378AD4D667D2A4629D460766 * __this, const RuntimeMethod* method)
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
// System.Void ExampleUnityEvent::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUnityEvent_OnEnable_m58B18DD3CD84FFD6717D4F272FD7A46264157803 (ExampleUnityEvent_t88E6D8760D00C93991F6584206A55860900CCC03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleUnityEvent_Ping_m4FA39FE6CCBE6C80406CBBD1AAD4F8E1232FB49A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(MyEvent == null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_MyEvent_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// MyEvent = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_1, /*hidden argument*/NULL);
		__this->set_MyEvent_4(L_1);
	}

IL_0013:
	{
		// MyEvent.AddListener(Ping);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = __this->get_MyEvent_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)ExampleUnityEvent_Ping_m4FA39FE6CCBE6C80406CBBD1AAD4F8E1232FB49A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExampleUnityEvent::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUnityEvent_OnDisable_m597DE88BDD2D3FE84B4766ED7A417B1A329E3980 (ExampleUnityEvent_t88E6D8760D00C93991F6584206A55860900CCC03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleUnityEvent_Ping_m4FA39FE6CCBE6C80406CBBD1AAD4F8E1232FB49A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(MyEvent == null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_MyEvent_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// MyEvent = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_1, /*hidden argument*/NULL);
		__this->set_MyEvent_4(L_1);
	}

IL_0013:
	{
		// MyEvent.RemoveListener(Ping);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = __this->get_MyEvent_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)ExampleUnityEvent_Ping_m4FA39FE6CCBE6C80406CBBD1AAD4F8E1232FB49A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExampleUnityEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUnityEvent_Update_m6D6FD16660C122F7737712229FA5F6D683695A9D (ExampleUnityEvent_t88E6D8760D00C93991F6584206A55860900CCC03 * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetKeyDown(KeyCode.Space) && MyEvent != null)
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_MyEvent_4();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// MyEvent.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = __this->get_MyEvent_4();
		NullCheck(L_2);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void ExampleUnityEvent::Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUnityEvent_Ping_m4FA39FE6CCBE6C80406CBBD1AAD4F8E1232FB49A (ExampleUnityEvent_t88E6D8760D00C93991F6584206A55860900CCC03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431077C003681F73A9BFC13944008C90F564FD9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ping!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral431077C003681F73A9BFC13944008C90F564FD9B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExampleUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUnityEvent__ctor_m987BD1B98127DA27100C5A9C4CB9627268B4C141 (ExampleUnityEvent_t88E6D8760D00C93991F6584206A55860900CCC03 * __this, const RuntimeMethod* method)
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
// System.Void RollaBall.GameController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Awake_m3680378AC80DCD5121AD4E1599A27DD504B90621 (GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayEndGame_GameOver_m4729B21FC743BCD68675324A0B42A7DC18FBF0F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_AddBonuse_m29B735CC6DE8A78F1729D385A788BF7E0AE074B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_CaughtPlayer_mF75B4FC33071BF62280603F71398BBBEA1406EAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_RestartGame_m72F32324C292AEB0FD7C6979D8518BD1E4A5595E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * V_2 = NULL;
	GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject * G_B8_0 = NULL;
	RuntimeObject * G_B7_0 = NULL;
	{
		// _interactiveObject = new ListExecuteObject();
		ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * L_0 = (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E *)il2cpp_codegen_object_new(ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E_il2cpp_TypeInfo_var);
		ListExecuteObject__ctor_m3341A3F18D110BBDF46BE441D06C4B0ECCEB7103(L_0, /*hidden argument*/NULL);
		__this->set__interactiveObject_5(L_0);
		// _reference = new References();
		References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * L_1 = (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 *)il2cpp_codegen_object_new(References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084_il2cpp_TypeInfo_var);
		References__ctor_m3B7977D7D38024CB0D648FE13F60D7CC5D60B033(L_1, /*hidden argument*/NULL);
		__this->set__reference_11(L_1);
		// PlayerBase player = null;
		V_0 = (PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 *)NULL;
		// if (PlayerType == PlayerType.Ball)
		int32_t L_2 = __this->get_PlayerType_4();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		// player = _reference.PlayerBall;
		References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * L_3 = __this->get__reference_11();
		NullCheck(L_3);
		PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * L_4;
		L_4 = References_get_PlayerBall_m98D69688FC4292799CEB266718D1A10EAD09F0C6(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002d:
	{
		// _cameraController = new CameraController(player.transform, _reference.MainCamera.transform);
		PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * L_5 = V_0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * L_7 = __this->get__reference_11();
		NullCheck(L_7);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
		L_8 = References_get_MainCamera_m8613846A53AE7E15CB60BB355945F080CAAE8294(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E * L_10 = (CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E *)il2cpp_codegen_object_new(CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E_il2cpp_TypeInfo_var);
		CameraController__ctor_mED1DE2DA9FC813B3127B5439E91D9A79F9A45C72(L_10, L_6, L_9, /*hidden argument*/NULL);
		__this->set__cameraController_8(L_10);
		// _interactiveObject.AddExecuteObject(_cameraController);
		ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * L_11 = __this->get__interactiveObject_5();
		CameraController_tB302F31E426622903A4A024B88785D0A44E39F2E * L_12 = __this->get__cameraController_8();
		NullCheck(L_11);
		ListExecuteObject_AddExecuteObject_m526A1EBA81383F06243F04D2CC4A73859B411230(L_11, L_12, /*hidden argument*/NULL);
		// if (Application.platform == RuntimePlatform.WindowsEditor)
		int32_t L_13;
		L_13 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)7))))
		{
			goto IL_0084;
		}
	}
	{
		// _inputController = new InputController(player);
		PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * L_14 = V_0;
		InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D * L_15 = (InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D *)il2cpp_codegen_object_new(InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D_il2cpp_TypeInfo_var);
		InputController__ctor_m2E392B471D94CDBD19087C0CD55E188385B468AE(L_15, L_14, /*hidden argument*/NULL);
		__this->set__inputController_9(L_15);
		// _interactiveObject.AddExecuteObject(_inputController);
		ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * L_16 = __this->get__interactiveObject_5();
		InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D * L_17 = __this->get__inputController_9();
		NullCheck(L_16);
		ListExecuteObject_AddExecuteObject_m526A1EBA81383F06243F04D2CC4A73859B411230(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// _displayEndGame = new DisplayEndGame(_reference.EndGame);
		References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * L_18 = __this->get__reference_11();
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = References_get_EndGame_mD18BF81D883B2BDB69454CDAE7B3647A66481D17(L_18, /*hidden argument*/NULL);
		DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 * L_20 = (DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 *)il2cpp_codegen_object_new(DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656_il2cpp_TypeInfo_var);
		DisplayEndGame__ctor_mB31BC7938221F1E21171C84F2A7FA34FA8412D76(L_20, L_19, /*hidden argument*/NULL);
		__this->set__displayEndGame_6(L_20);
		// _displayBonuses = new DisplayBonuses(_reference.Bonuse);
		References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * L_21 = __this->get__reference_11();
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = References_get_Bonuse_mC97E4CDA4595029AD7C1FA337C8A9E3D3024100E(L_21, /*hidden argument*/NULL);
		DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 * L_23 = (DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 *)il2cpp_codegen_object_new(DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38_il2cpp_TypeInfo_var);
		DisplayBonuses__ctor_m611FE4085D9585D65351A1B01FC00AD2B07F7707(L_23, L_22, /*hidden argument*/NULL);
		__this->set__displayBonuses_7(L_23);
		// foreach (var o in _interactiveObject)
		ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * L_24 = __this->get__interactiveObject_5();
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = ListExecuteObject_GetEnumerator_m04C3BF4C9E053BB95A1612934B7FC6230CBF4223(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
	}

IL_00bc:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0112;
		}

IL_00be:
		{
			// foreach (var o in _interactiveObject)
			RuntimeObject* L_26 = V_1;
			NullCheck(L_26);
			RuntimeObject * L_27;
			L_27 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_26);
			// if (o is BadBonus badBonus)
			RuntimeObject * L_28 = L_27;
			V_2 = ((BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 *)IsInstSealed((RuntimeObject*)L_28, BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421_il2cpp_TypeInfo_var));
			BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * L_29 = V_2;
			G_B7_0 = L_28;
			if (!L_29)
			{
				G_B8_0 = L_28;
				goto IL_00f7;
			}
		}

IL_00ce:
		{
			// badBonus.OnCaughtPlayerChange += CaughtPlayer;
			BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * L_30 = V_2;
			Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_31 = (Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)il2cpp_codegen_object_new(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
			Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06(L_31, __this, (intptr_t)((intptr_t)GameController_CaughtPlayer_mF75B4FC33071BF62280603F71398BBBEA1406EAC_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06_RuntimeMethod_var);
			NullCheck(L_30);
			BadBonus_add_OnCaughtPlayerChange_mF3CD85DFB5E179401F810BD329D8A54624BF4A8A(L_30, L_31, /*hidden argument*/NULL);
			// badBonus.OnCaughtPlayerChange += _displayEndGame.GameOver;
			BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * L_32 = V_2;
			DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 * L_33 = __this->get__displayEndGame_6();
			Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_34 = (Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)il2cpp_codegen_object_new(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
			Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06(L_34, L_33, (intptr_t)((intptr_t)DisplayEndGame_GameOver_m4729B21FC743BCD68675324A0B42A7DC18FBF0F5_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06_RuntimeMethod_var);
			NullCheck(L_32);
			BadBonus_add_OnCaughtPlayerChange_mF3CD85DFB5E179401F810BD329D8A54624BF4A8A(L_32, L_34, /*hidden argument*/NULL);
			G_B8_0 = G_B7_0;
		}

IL_00f7:
		{
			// if (o is GoodBonus goodBonus)
			V_3 = ((GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 *)IsInstSealed((RuntimeObject*)G_B8_0, GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240_il2cpp_TypeInfo_var));
			GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * L_35 = V_3;
			if (!L_35)
			{
				goto IL_0112;
			}
		}

IL_0100:
		{
			// goodBonus.OnpointChange += AddBonuse;
			GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * L_36 = V_3;
			Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_37 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
			Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_37, __this, (intptr_t)((intptr_t)GameController_AddBonuse_m29B735CC6DE8A78F1729D385A788BF7E0AE074B2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
			NullCheck(L_36);
			GoodBonus_add_OnpointChange_m11F7899008A9D9B9CE925BF2D107A4F9846A0D60(L_36, L_37, /*hidden argument*/NULL);
		}

IL_0112:
		{
			// foreach (var o in _interactiveObject)
			RuntimeObject* L_38 = V_1;
			NullCheck(L_38);
			bool L_39;
			L_39 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_38);
			if (L_39)
			{
				goto IL_00be;
			}
		}

IL_011a:
		{
			IL2CPP_LEAVE(0x130, FINALLY_011c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011c;
	}

FINALLY_011c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_40 = V_1;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_40, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_41 = V_4;
			if (!L_41)
			{
				goto IL_012f;
			}
		}

IL_0128:
		{
			RuntimeObject* L_42 = V_4;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_42);
		}

IL_012f:
		{
			IL2CPP_END_FINALLY(284)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(284)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x130, IL_0130)
	}

IL_0130:
	{
		// _reference.RestartButton.onClick.AddListener(RestartGame);
		References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * L_43 = __this->get__reference_11();
		NullCheck(L_43);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_44;
		L_44 = References_get_RestartButton_m44407E62F85477E67A2F1A74B20980D76F486A29(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_45;
		L_45 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_44, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_46 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_46, __this, (intptr_t)((intptr_t)GameController_RestartGame_m72F32324C292AEB0FD7C6979D8518BD1E4A5595E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_45);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_45, L_46, /*hidden argument*/NULL);
		// _reference.RestartButton.gameObject.SetActive(false);
		References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * L_47 = __this->get__reference_11();
		NullCheck(L_47);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_48;
		L_48 = References_get_RestartButton_m44407E62F85477E67A2F1A74B20980D76F486A29(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_49, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.GameController::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_RestartGame_m72F32324C292AEB0FD7C6979D8518BD1E4A5595E (GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SampleScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, /*hidden argument*/NULL);
		// Time.timeScale = 0.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.GameController::CaughtPlayer(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CaughtPlayer_mF75B4FC33071BF62280603F71398BBBEA1406EAC (GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F * __this, String_t* ___value0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___args1, const RuntimeMethod* method)
{
	{
		// _reference.RestartButton.gameObject.SetActive(true);
		References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * L_0 = __this->get__reference_11();
		NullCheck(L_0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1;
		L_1 = References_get_RestartButton_m44407E62F85477E67A2F1A74B20980D76F486A29(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.GameController::AddBonuse(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddBonuse_m29B735CC6DE8A78F1729D385A788BF7E0AE074B2 (GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _countBonuses += value;
		int32_t L_0 = __this->get__countBonuses_10();
		int32_t L_1 = ___value0;
		__this->set__countBonuses_10(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// _displayBonuses.Display(_countBonuses);
		DisplayBonuses_t5198626A6D280D3606972B1B9127E9DFB22CAF38 * L_2 = __this->get__displayBonuses_7();
		int32_t L_3 = __this->get__countBonuses_10();
		NullCheck(L_2);
		DisplayBonuses_Display_m80E79A080BD1A20306E1E58754C2492F6AE30CC6(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_mBC916EBF730B0926AF23F8F9FC18BBE38EAD6E70 (GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExecute_t66818815903AD48B13A6595C0FAB79824894DA20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		// for (var i = 0; i < _interactiveObject.Length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// var interactiveObject = _interactiveObject[i];
		ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * L_0 = __this->get__interactiveObject_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ListExecuteObject_get_Item_m5206134DA42C4FE6A3168B560014D44C87714CE0(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// if (interactiveObject == null)
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// interactiveObject.Execute();
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void RollaBall.IExecute::Execute() */, IExecute_t66818815903AD48B13A6595C0FAB79824894DA20_il2cpp_TypeInfo_var, L_4);
	}

IL_001a:
	{
		// for (var i = 0; i < _interactiveObject.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		// for (var i = 0; i < _interactiveObject.Length; i++)
		int32_t L_6 = V_0;
		ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * L_7 = __this->get__interactiveObject_5();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ListExecuteObject_get_Length_m98B20D49A30686D793C4DF55B70AA72E75082570(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RollaBall.GameController::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Dispose_m39BF65FDEDAAF270E5A94E8D00500027F5052301 (GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayEndGame_GameOver_m4729B21FC743BCD68675324A0B42A7DC18FBF0F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_AddBonuse_m29B735CC6DE8A78F1729D385A788BF7E0AE074B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_CaughtPlayer_mF75B4FC33071BF62280603F71398BBBEA1406EAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * V_1 = NULL;
	GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject * G_B4_0 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	{
		// foreach (var o in _interactiveObject)
		ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * L_0 = __this->get__interactiveObject_5();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ListExecuteObject_GetEnumerator_m04C3BF4C9E053BB95A1612934B7FC6230CBF4223(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0062;
		}

IL_000e:
		{
			// foreach (var o in _interactiveObject)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			// if(o is BadBonus badBonus)
			RuntimeObject * L_4 = L_3;
			V_1 = ((BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 *)IsInstSealed((RuntimeObject*)L_4, BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421_il2cpp_TypeInfo_var));
			BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * L_5 = V_1;
			G_B3_0 = L_4;
			if (!L_5)
			{
				G_B4_0 = L_4;
				goto IL_0047;
			}
		}

IL_001e:
		{
			// badBonus.OnCaughtPlayerChange -= CaughtPlayer;
			BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * L_6 = V_1;
			Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_7 = (Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)il2cpp_codegen_object_new(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
			Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06(L_7, __this, (intptr_t)((intptr_t)GameController_CaughtPlayer_mF75B4FC33071BF62280603F71398BBBEA1406EAC_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06_RuntimeMethod_var);
			NullCheck(L_6);
			BadBonus_remove_OnCaughtPlayerChange_m85598E0F1178EAFA66250E372D8AA7B2CD13CD02(L_6, L_7, /*hidden argument*/NULL);
			// badBonus.OnCaughtPlayerChange -= _displayEndGame.GameOver;
			BadBonus_t22E5DA1D058CA229F2FF73EFEAB9924BE1DC2421 * L_8 = V_1;
			DisplayEndGame_t4A7A2B4E002FA36061D3636B9FC74622155B3656 * L_9 = __this->get__displayEndGame_6();
			Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 * L_10 = (Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063 *)il2cpp_codegen_object_new(Action_2_t71E1753A6309FBDDA102A9F7D3444BD47580A063_il2cpp_TypeInfo_var);
			Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06(L_10, L_9, (intptr_t)((intptr_t)DisplayEndGame_GameOver_m4729B21FC743BCD68675324A0B42A7DC18FBF0F5_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6B60C54CD5853172013FEBF241C4ADE82FE51B06_RuntimeMethod_var);
			NullCheck(L_8);
			BadBonus_remove_OnCaughtPlayerChange_m85598E0F1178EAFA66250E372D8AA7B2CD13CD02(L_8, L_10, /*hidden argument*/NULL);
			G_B4_0 = G_B3_0;
		}

IL_0047:
		{
			// if(o is GoodBonus goodBonus)
			V_2 = ((GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 *)IsInstSealed((RuntimeObject*)G_B4_0, GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240_il2cpp_TypeInfo_var));
			GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * L_11 = V_2;
			if (!L_11)
			{
				goto IL_0062;
			}
		}

IL_0050:
		{
			// goodBonus.OnpointChange -= AddBonuse;
			GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * L_12 = V_2;
			Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_13 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
			Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_13, __this, (intptr_t)((intptr_t)GameController_AddBonuse_m29B735CC6DE8A78F1729D385A788BF7E0AE074B2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
			NullCheck(L_12);
			GoodBonus_remove_OnpointChange_m2E76B37AF4D43FAB1ED8EF626C5417C4A74023B8(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0062:
		{
			// foreach (var o in _interactiveObject)
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_000e;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_3;
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_0076:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_007c:
		{
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void RollaBall.GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m090387A854B360A0D754B907035F84D2EA0B5BC9 (GameController_tC94CCF0A682CD9905E6F681CE4BB090E9F1D293F * __this, const RuntimeMethod* method)
{
	{
		// public PlayerType PlayerType = PlayerType.Ball;
		__this->set_PlayerType_4(1);
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
// System.Void RollaBall.GoodBonus::add_OnpointChange(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_add_OnpointChange_m11F7899008A9D9B9CE925BF2D107A4F9846A0D60 (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = __this->get_OnpointChange_11();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** L_5 = __this->get_address_of_OnpointChange_11();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RollaBall.GoodBonus::remove_OnpointChange(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_remove_OnpointChange_m2E76B37AF4D43FAB1ED8EF626C5417C4A74023B8 (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = __this->get_OnpointChange_11();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** L_5 = __this->get_address_of_OnpointChange_11();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RollaBall.GoodBonus::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_Awake_mBCE1E6F47DD43DCB179C2F794A2D5134F46A8A99 (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA8236AE6B5D05438B1E6B61080D18C93E21539AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m32EF8CB2CBFADED22FEF111A3147D99E8AE9FC52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _material = GetComponent<Material>();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0;
		L_0 = Component_GetComponent_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA8236AE6B5D05438B1E6B61080D18C93E21539AA(__this, /*hidden argument*/Component_GetComponent_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA8236AE6B5D05438B1E6B61080D18C93E21539AA_RuntimeMethod_var);
		__this->set__material_6(L_0);
		// _lenghtFlay = Random.Range(1.0f, 5.0f);
		float L_1;
		L_1 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (5.0f), /*hidden argument*/NULL);
		__this->set__lenghtFlay_7(L_1);
		// _scoreText = FindObjectOfType<Text>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Object_FindObjectOfType_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m32EF8CB2CBFADED22FEF111A3147D99E8AE9FC52(/*hidden argument*/Object_FindObjectOfType_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m32EF8CB2CBFADED22FEF111A3147D99E8AE9FC52_RuntimeMethod_var);
		__this->set__scoreText_8(L_2);
		// _player = FindObjectOfType<PlayerBase>();
		PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * L_3;
		L_3 = Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2(/*hidden argument*/Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2_RuntimeMethod_var);
		__this->set__player_9(L_3);
		// }
		return;
	}
}
// System.Void RollaBall.GoodBonus::Interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_Interaction_m98DC28CB168591C5A07D656CFD2D62B84E13EADA (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnpointChange.Invoke(Point);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = __this->get_OnpointChange_11();
		int32_t L_1 = __this->get_Point_12();
		NullCheck(L_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_0, L_1, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RollaBall.GoodBonus::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_Execute_m4A140F97744984302B079675D44F4CB3E4BA69D4 (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, const RuntimeMethod* method)
{
	{
		// if(!IsInteractable)
		bool L_0;
		L_0 = InteractiveObject_get_IsInteractable_m455C04E19C7DFFA646C8DC8B4AAE29526DFF7DA8_inline(__this, /*hidden argument*/NULL);
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
		// Flay();
		GoodBonus_Flay_m679E805287B605794FACE24814D6F73BDFB2BB9C(__this, /*hidden argument*/NULL);
		// Rotation();
		GoodBonus_Rotation_m8DB0E674202A779E544A15762573E83B40394A0A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.GoodBonus::Flay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_Flay_m679E805287B605794FACE24814D6F73BDFB2BB9C (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, const RuntimeMethod* method)
{
	{
		// transform.localPosition = new Vector3(transform.localPosition.x, Mathf.PingPong(Time.time, _lenghtFlay), transform.localPosition.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = __this->get__lenghtFlay_7();
		float L_6;
		L_6 = Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1(L_4, L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_3, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.GoodBonus::Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus_Rotation_m8DB0E674202A779E544A15762573E83B40394A0A (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(Vector3.up * (Time.deltaTime * _speedRotation), Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_3 = __this->get__speedRotation_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_0, L_4, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.GoodBonus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoodBonus__ctor_m0F85B1953A2E0948C55999E407E32B6F28D4E1B0 (GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__14_0_mDF0F1A9ED9880FA545DCA7AF0E8C0631FE08DA72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B2_0 = NULL;
	GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * G_B2_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B1_0 = NULL;
	GoodBonus_t56D54389A017B999C8664C13F71F0F3FD230B240 * G_B1_1 = NULL;
	{
		// private float _speedRotation = 15.0f;
		__this->set__speedRotation_10((15.0f));
		// public event Action<int> OnpointChange = delegate (int i) { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var))->get_U3CU3E9__14_0_1();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var);
		U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 * L_2 = ((U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__14_0_mDF0F1A9ED9880FA545DCA7AF0E8C0631FE08DA72_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_4 = L_3;
		((U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var))->set_U3CU3E9__14_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_OnpointChange_11(G_B2_0);
		InteractiveObject__ctor_mDD0771D248C83E33947DC22DD902DD36B84BB492(__this, /*hidden argument*/NULL);
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
// System.Void RollaBall.InputController::.ctor(RollaBall.PlayerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController__ctor_m2E392B471D94CDBD19087C0CD55E188385B468AE (InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D * __this, PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * ___player0, const RuntimeMethod* method)
{
	{
		// public InputController(PlayerBase player)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _playerBase = player;
		PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * L_0 = ___player0;
		__this->set__playerBase_0(L_0);
		// }
		return;
	}
}
// System.Void RollaBall.InputController::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController_Execute_mD89F59CE640151D148269FBF22E25E135FD24DDF (InputController_t6E4FD842FB77262852F0C6A36CCCEEE33BF3017D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playerBase.Move(Input.GetAxis("Horizontal"), 0.0f, Input.GetAxis("Vertical"));
		PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * L_0 = __this->get__playerBase_0();
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker3< float, float, float >::Invoke(4 /* System.Void RollaBall.PlayerBase::Move(System.Single,System.Single,System.Single) */, L_0, L_1, (0.0f), L_2);
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
// System.Boolean RollaBall.InteractiveObject::get_IsInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractiveObject_get_IsInteractable_m455C04E19C7DFFA646C8DC8B4AAE29526DFF7DA8 (InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * __this, const RuntimeMethod* method)
{
	{
		// return _isInteractable;
		bool L_0 = __this->get__isInteractable_5();
		return L_0;
	}
}
// System.Void RollaBall.InteractiveObject::set_IsInteractable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObject_set_IsInteractable_mE22D31255CA7374CABA1CE2ACE6971C693C3815D (InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isInteractable = value;
		bool L_0 = ___value0;
		__this->set__isInteractable_5(L_0);
		// GetComponent<Renderer>().enabled = _isInteractable;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		bool L_2 = __this->get__isInteractable_5();
		NullCheck(L_1);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_1, L_2, /*hidden argument*/NULL);
		// GetComponent<Collider>().enabled = _isInteractable;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3;
		L_3 = Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60(__this, /*hidden argument*/Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		bool L_4 = __this->get__isInteractable_5();
		NullCheck(L_3);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.InteractiveObject::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObject_OnTriggerEnter_m78E39F4C0A33C14DD85B1FC60C414119E7E16E54 (InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInteractable || !other.CompareTag("Player"))
		bool L_0;
		L_0 = InteractiveObject_get_IsInteractable_m455C04E19C7DFFA646C8DC8B4AAE29526DFF7DA8_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1 = ___other0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// Interaction();
		VirtActionInvoker0::Invoke(5 /* System.Void RollaBall.InteractiveObject::Interaction() */, __this);
		// IsInteractable = false;
		InteractiveObject_set_IsInteractable_mE22D31255CA7374CABA1CE2ACE6971C693C3815D(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.InteractiveObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObject_Start_m0DE13BB7C56BE4CBC571A9287FDC9692C1F64B42 (InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630D40E4FA7B1646CF5D9B57E3169A79B0B2778D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_0 = NULL;
	{
		// IsInteractable = true;
		InteractiveObject_set_IsInteractable_mE22D31255CA7374CABA1CE2ACE6971C693C3815D(__this, (bool)1, /*hidden argument*/NULL);
		// _color = ColorHSV();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Random_ColorHSV_mCC5611616B89F24DFE2667E892B67A58A2D079A6(/*hidden argument*/NULL);
		__this->set__color_4(L_0);
		// if(TryGetComponent(out Renderer renderer))
		bool L_1;
		L_1 = Component_TryGetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630D40E4FA7B1646CF5D9B57E3169A79B0B2778D(__this, (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C **)(&V_0), /*hidden argument*/Component_TryGetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m630D40E4FA7B1646CF5D9B57E3169A79B0B2778D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// renderer.material.color = _color;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = V_0;
		NullCheck(L_2);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_2, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = __this->get__color_4();
		NullCheck(L_3);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void RollaBall.InteractiveObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveObject__ctor_mDD0771D248C83E33947DC22DD902DD36B84BB492 (InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * __this, const RuntimeMethod* method)
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
// System.Void RollaBall.ListExecuteObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExecuteObject__ctor_m3341A3F18D110BBDF46BE441D06C4B0ECCEB7103 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisInteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F_m9FCD78E9E0720F68B4D507FA7094B9DA1241D548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InteractiveObjectU5BU5D_t346AB261ED075CF1E616FCA070CDFC2C7855AA54* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// private int _index = -1;
		__this->set__index_1((-1));
		// public ListExecuteObject()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// var interactiveObjects = Object.FindObjectsOfType<InteractiveObject>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		InteractiveObjectU5BU5D_t346AB261ED075CF1E616FCA070CDFC2C7855AA54* L_0;
		L_0 = Object_FindObjectsOfType_TisInteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F_m9FCD78E9E0720F68B4D507FA7094B9DA1241D548(/*hidden argument*/Object_FindObjectsOfType_TisInteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F_m9FCD78E9E0720F68B4D507FA7094B9DA1241D548_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < interactiveObjects.Length; i++)
		V_1 = 0;
		goto IL_0029;
	}

IL_0017:
	{
		// if (interactiveObjects[i] is IExecute interactiveObject)
		InteractiveObjectU5BU5D_t346AB261ED075CF1E616FCA070CDFC2C7855AA54* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// AddExecuteObject(interactiveObject);
		RuntimeObject* L_6 = V_2;
		ListExecuteObject_AddExecuteObject_m526A1EBA81383F06243F04D2CC4A73859B411230(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// for (int i = 0; i < interactiveObjects.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		// for (int i = 0; i < interactiveObjects.Length; i++)
		int32_t L_8 = V_1;
		InteractiveObjectU5BU5D_t346AB261ED075CF1E616FCA070CDFC2C7855AA54* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RollaBall.ListExecuteObject::AddExecuteObject(RollaBall.IExecute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExecuteObject_AddExecuteObject_m526A1EBA81383F06243F04D2CC4A73859B411230 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, RuntimeObject* ___execute0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIExecute_t66818815903AD48B13A6595C0FAB79824894DA20_mD6A02A1E316212D2020389C1BA28ED500FEC7339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_interactiveObjects == null)
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* L_0 = __this->get__interactiveObjects_0();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _interactiveObjects = new[] {execute};
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* L_1 = (IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584*)(IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584*)SZArrayNew(IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584_il2cpp_TypeInfo_var, (uint32_t)1);
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* L_2 = L_1;
		RuntimeObject* L_3 = ___execute0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		__this->set__interactiveObjects_0(L_2);
		// return;
		return;
	}

IL_0019:
	{
		// Array.Resize(ref _interactiveObjects, Length + 1);
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584** L_4 = __this->get_address_of__interactiveObjects_0();
		int32_t L_5;
		L_5 = ListExecuteObject_get_Length_m98B20D49A30686D793C4DF55B70AA72E75082570(__this, /*hidden argument*/NULL);
		Array_Resize_TisIExecute_t66818815903AD48B13A6595C0FAB79824894DA20_mD6A02A1E316212D2020389C1BA28ED500FEC7339((IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584**)L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/Array_Resize_TisIExecute_t66818815903AD48B13A6595C0FAB79824894DA20_mD6A02A1E316212D2020389C1BA28ED500FEC7339_RuntimeMethod_var);
		// _interactiveObjects[Length-1] = execute;
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* L_6 = __this->get__interactiveObjects_0();
		int32_t L_7;
		L_7 = ListExecuteObject_get_Length_m98B20D49A30686D793C4DF55B70AA72E75082570(__this, /*hidden argument*/NULL);
		RuntimeObject* L_8 = ___execute0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))), (RuntimeObject*)L_8);
		// }
		return;
	}
}
// RollaBall.IExecute RollaBall.ListExecuteObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListExecuteObject_get_Item_m5206134DA42C4FE6A3168B560014D44C87714CE0 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// get => _interactiveObjects[index];
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* L_0 = __this->get__interactiveObjects_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void RollaBall.ListExecuteObject::set_Item(System.Int32,RollaBall.IExecute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExecuteObject_set_Item_m9B0A062DC81E948693802D36A722CD05CCCC97EB (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	{
		// private set => _interactiveObjects[index] = value;
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* L_0 = __this->get__interactiveObjects_0();
		int32_t L_1 = ___index0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (RuntimeObject*)L_2);
		return;
	}
}
// System.Int32 RollaBall.ListExecuteObject::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListExecuteObject_get_Length_m98B20D49A30686D793C4DF55B70AA72E75082570 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method)
{
	{
		// public int Length => _interactiveObjects.Length;
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* L_0 = __this->get__interactiveObjects_0();
		NullCheck(L_0);
		return ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
	}
}
// System.Boolean RollaBall.ListExecuteObject::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListExecuteObject_MoveNext_mD58785C8B160196C1153BA2EDC3DB0CAEFEC0626 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method)
{
	{
		// if (_index == _interactiveObjects.Length - 1)
		int32_t L_0 = __this->get__index_1();
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* L_1 = __this->get__interactiveObjects_0();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1))))))
		{
			goto IL_001a;
		}
	}
	{
		// Reset();
		ListExecuteObject_Reset_mF75F502C4453AB2B1FA40A595E8A8022B2D1A760(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// _index++;
		int32_t L_2 = __this->get__index_1();
		__this->set__index_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// return true;
		return (bool)1;
	}
}
// System.Void RollaBall.ListExecuteObject::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListExecuteObject_Reset_mF75F502C4453AB2B1FA40A595E8A8022B2D1A760 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method)
{
	{
		// public void Reset() => _index = -1;
		__this->set__index_1((-1));
		return;
	}
}
// System.Object RollaBall.ListExecuteObject::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ListExecuteObject_get_Current_m2D54A45FD103FC1073081E7D1A4AD3BFFD77CCAC (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method)
{
	{
		// public object Current => _interactiveObjects[_index];
		IExecuteU5BU5D_t8B0A32D03CE25E630D00B4BAA17FA4FB52DC0584* L_0 = __this->get__interactiveObjects_0();
		int32_t L_1 = __this->get__index_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Collections.IEnumerator RollaBall.ListExecuteObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListExecuteObject_GetEnumerator_m04C3BF4C9E053BB95A1612934B7FC6230CBF4223 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method)
{
	{
		// return this;
		return __this;
	}
}
// System.Collections.IEnumerator RollaBall.ListExecuteObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListExecuteObject_System_Collections_IEnumerable_GetEnumerator_m99C419D7D7ABB3FC80692F8CC548B731574826B3 (ListExecuteObject_tD39FB9862B49665FCFBE9331F898AE7B97F1B31E * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = ListExecuteObject_GetEnumerator_m04C3BF4C9E053BB95A1612934B7FC6230CBF4223(__this, /*hidden argument*/NULL);
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
// System.Void RollaBall.PlayerBall::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBall_Start_m1CFF608D37105FEF68ABB6FCD11DDD2A9D826400 (PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set__rigidbody_5(L_0);
		// }
		return;
	}
}
// System.Void RollaBall.PlayerBall::Move(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBall_Move_m3D8E505071025264880C22480E1711F4A36F90E7 (PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		// _rigidbody.AddForce(new Vector3(x, y, z) * Speed);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get__rigidbody_5();
		float L_1 = ___x0;
		float L_2 = ___y1;
		float L_3 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = ((PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 *)__this)->get_Speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.PlayerBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBall__ctor_mAE7C5D3B2B82534870D0302530CE5E4224C9E4AC (PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * __this, const RuntimeMethod* method)
{
	{
		PlayerBase__ctor_m216379A3468081D8F200C5C947EE2B3723FCB483(__this, /*hidden argument*/NULL);
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
// System.Void RollaBall.PlayerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBase__ctor_m216379A3468081D8F200C5C947EE2B3723FCB483 (PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * __this, const RuntimeMethod* method)
{
	{
		// public float Speed = 3.0f;
		__this->set_Speed_4((3.0f));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RollaBall.PredicateAndFuncDelegatesExample::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PredicateAndFuncDelegatesExample_OnCollisionEnter_m1C726FBCC2B57FC2C5B430A91BE9FF078DF6AFE6 (PredicateAndFuncDelegatesExample_t6C8BED6CB14E01AE68464E19109881A52C6BE6B7 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mD203EFB0908EAA1D1F0328AA5E34C1E7CA69AB55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_Invoke_mD189340351175567687595F6C2F728A7B50BE8BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Predicate(other))
		Predicate_1_t33DF3761BA2FB834D9AD61377A4DAD64284A4418 * L_0 = __this->get_Predicate_4();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_1 = ___other0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Predicate_1_Invoke_mD189340351175567687595F6C2F728A7B50BE8BD(L_0, L_1, /*hidden argument*/Predicate_1_Invoke_mD189340351175567687595F6C2F728A7B50BE8BD_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// _hp = Func(_armor);
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_3 = __this->get_Func_5();
		float L_4 = __this->get__armor_6();
		NullCheck(L_3);
		float L_5;
		L_5 = Func_2_Invoke_mD203EFB0908EAA1D1F0328AA5E34C1E7CA69AB55(L_3, L_4, /*hidden argument*/Func_2_Invoke_mD203EFB0908EAA1D1F0328AA5E34C1E7CA69AB55_RuntimeMethod_var);
		__this->set__hp_7(L_5);
		// Debug.Log(_hp);
		float L_6 = __this->get__hp_7();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void RollaBall.PredicateAndFuncDelegatesExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PredicateAndFuncDelegatesExample__ctor_m8942888E84C394756D7F135FF8AD1A0782C933A4 (PredicateAndFuncDelegatesExample_t6C8BED6CB14E01AE68464E19109881A52C6BE6B7 * __this, const RuntimeMethod* method)
{
	{
		// private float _armor = 3.0f;
		__this->set__armor_6((3.0f));
		// private float _hp = 100.0f;
		__this->set__hp_7((100.0f));
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
// UnityEngine.UI.Button RollaBall.References::get_RestartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * References_get_RestartButton_m44407E62F85477E67A2F1A74B20980D76F486A29 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF446C7F8E216868EF6C2527728ACF1C31614554A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68A8D79E1725ADEE88A33DE3B7AF53E43D7A2C32);
		s_Il2CppMethodInitialized = true;
	}
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_0 = NULL;
	{
		// if(_restartButton == null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get__restartButton_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// var gameObject = Resources.Load<Button>("UI/RestartButton");
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2;
		L_2 = Resources_Load_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF446C7F8E216868EF6C2527728ACF1C31614554A(_stringLiteral68A8D79E1725ADEE88A33DE3B7AF53E43D7A2C32, /*hidden argument*/Resources_Load_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF446C7F8E216868EF6C2527728ACF1C31614554A_RuntimeMethod_var);
		V_0 = L_2;
		// _restartButton = Object.Instantiate(gameObject, Canvas.transform);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = V_0;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4;
		L_4 = References_get_Canvas_m276AD5FBFF479F50BB3ACE4A282EF1FF7F156B60(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6;
		L_6 = Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89(L_3, L_5, /*hidden argument*/Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89_RuntimeMethod_var);
		__this->set__restartButton_5(L_6);
	}

IL_0030:
	{
		// return _restartButton;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = __this->get__restartButton_5();
		return L_7;
	}
}
// UnityEngine.Canvas RollaBall.References::get_Canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * References_get_Canvas_m276AD5FBFF479F50BB3ACE4A282EF1FF7F156B60 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m6781AB341DB6A01F9B6CF21AE947D9E2E20BFC97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_canvas == null)
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get__canvas_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _canvas = Object.FindObjectOfType<Canvas>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_2;
		L_2 = Object_FindObjectOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m6781AB341DB6A01F9B6CF21AE947D9E2E20BFC97(/*hidden argument*/Object_FindObjectOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m6781AB341DB6A01F9B6CF21AE947D9E2E20BFC97_RuntimeMethod_var);
		__this->set__canvas_4(L_2);
	}

IL_0019:
	{
		// return _canvas;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3 = __this->get__canvas_4();
		return L_3;
	}
}
// UnityEngine.GameObject RollaBall.References::get_Bonuse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * References_get_Bonuse_mC97E4CDA4595029AD7C1FA337C8A9E3D3024100E (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA3D4F3F631C1E897332BDECB54E9EB7FE7A69FA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// if(_bonuse == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__bonuse_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// var gameObject = Resources.Load<GameObject>("UI/Bonuse");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C(_stringLiteralBA3D4F3F631C1E897332BDECB54E9EB7FE7A69FA, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		V_0 = L_2;
		// _bonuse = Object.Instantiate(gameObject, Canvas.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4;
		L_4 = References_get_Canvas_m276AD5FBFF479F50BB3ACE4A282EF1FF7F156B60(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_3, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set__bonuse_2(L_6);
	}

IL_0030:
	{
		// return _bonuse;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get__bonuse_2();
		return L_7;
	}
}
// UnityEngine.GameObject RollaBall.References::get_EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * References_get_EndGame_mD18BF81D883B2BDB69454CDAE7B3647A66481D17 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA3C54CD11864D8C0F73B16E508DE9A58A267756);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// if(_endGame == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__endGame_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// var gameObject = Resources.Load<GameObject>("UI/EndGame");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C(_stringLiteralDA3C54CD11864D8C0F73B16E508DE9A58A267756, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		V_0 = L_2;
		// _endGame = Object.Instantiate(gameObject, Canvas.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4;
		L_4 = References_get_Canvas_m276AD5FBFF479F50BB3ACE4A282EF1FF7F156B60(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_3, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set__endGame_3(L_6);
	}

IL_0030:
	{
		// return _endGame;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get__endGame_3();
		return L_7;
	}
}
// RollaBall.PlayerBall RollaBall.References::get_PlayerBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * References_get_PlayerBall_m98D69688FC4292799CEB266718D1A10EAD09F0C6 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_mEDD848A39C4D335F536D68B6CC5933BB642E8435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_m3FA4913F10993A2BACCAD3D5DB835523944FFBAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * V_0 = NULL;
	{
		// if(_playerBall == null)
		PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * L_0 = __this->get__playerBall_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// var gameObject = Resources.Load<PlayerBall>("Player");
		PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * L_2;
		L_2 = Resources_Load_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_m3FA4913F10993A2BACCAD3D5DB835523944FFBAE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/Resources_Load_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_m3FA4913F10993A2BACCAD3D5DB835523944FFBAE_RuntimeMethod_var);
		V_0 = L_2;
		// _playerBall = Object.Instantiate(gameObject);
		PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * L_4;
		L_4 = Object_Instantiate_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_mEDD848A39C4D335F536D68B6CC5933BB642E8435(L_3, /*hidden argument*/Object_Instantiate_TisPlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD_mEDD848A39C4D335F536D68B6CC5933BB642E8435_RuntimeMethod_var);
		__this->set__playerBall_0(L_4);
	}

IL_0025:
	{
		// return _playerBall;
		PlayerBall_t597CEEB29877E2CFE7775882C61464CBDC0FB6AD * L_5 = __this->get__playerBall_0();
		return L_5;
	}
}
// UnityEngine.Camera RollaBall.References::get_MainCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * References_get_MainCamera_m8613846A53AE7E15CB60BB355945F080CAAE8294 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_mainCamera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get__mainCamera_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _mainCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set__mainCamera_1(L_2);
	}

IL_0019:
	{
		// return _mainCamera;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get__mainCamera_1();
		return L_3;
	}
}
// System.Void RollaBall.References::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void References__ctor_m3B7977D7D38024CB0D648FE13F60D7CC5D60B033 (References_tA7FE16749EEF2092A86B3E8F6A14F1A28DD0E084 * __this, const RuntimeMethod* method)
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
// System.Void RollaBall.SlowingDown::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowingDown_OnTriggerEnter_mA63C92214411F98DBEC4AF4C0A900B121C7F80B2 (SlowingDown_t07D8BB3D25AB02A7CD3D56C28A776B791FA22822 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// _player.Speed = 2.3f;
		PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * L_3 = __this->get__player_4();
		NullCheck(L_3);
		L_3->set_Speed_4((2.29999995f));
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void RollaBall.SlowingDown::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowingDown_Awake_m590F02DD3BD0BB48030A4003F8CD367A6A1B1741 (SlowingDown_t07D8BB3D25AB02A7CD3D56C28A776B791FA22822 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _player = FindObjectOfType<PlayerBase>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2(/*hidden argument*/Object_FindObjectOfType_TisPlayerBase_t6E84E4BC571E9E21AA7F0ED2606A9C4A17895747_mD7C3A631D1B06C4CD4F173B9CC37978052C2AAE2_RuntimeMethod_var);
		__this->set__player_4(L_0);
		// }
		return;
	}
}
// System.Void RollaBall.SlowingDown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowingDown__ctor_m9A0A790CE8AF15774AE8CB38CE195414DC89B4DF (SlowingDown_t07D8BB3D25AB02A7CD3D56C28A776B791FA22822 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RollaBall.BadBonus/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4E387073F14EDEF6A00C7F6DCA99C867129D9E2F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 * L_0 = (U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 *)il2cpp_codegen_object_new(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m82F9BA61150489E045AB72BE595F0C68A7EA9033(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RollaBall.BadBonus/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82F9BA61150489E045AB72BE595F0C68A7EA9033 (U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RollaBall.BadBonus/<>c::<.ctor>b__10_0(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__10_0_m68B260E4297BDACC4D6997175F20FEF192436CEE (U3CU3Ec_tA899105A1524D64EB49D8549BFF0CA5F4FA56890 * __this, String_t* ___str0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	{
		// public event Action<string, Color> OnCaughtPlayerChange = delegate (string str, Color color) { };
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
// System.Void RollaBall.DelegatesObserver/MyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyDelegate__ctor_mB09361C949C72E3088F93297E7C7EDE27175833D (MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void RollaBall.DelegatesObserver/MyDelegate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyDelegate_Invoke_m15EB707311368D7804996C423E6D53EEE8A92587 (MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___o0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___o0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___o0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___o0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___o0);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___o0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___o0);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___o0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult RollaBall.DelegatesObserver/MyDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MyDelegate_BeginInvoke_m46EAB9B5D9E245B2B859085C0DB798709E042ABE (MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * __this, RuntimeObject * ___o0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___o0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void RollaBall.DelegatesObserver/MyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyDelegate_EndInvoke_mF09BA75A4051A5EF4ADEA13AC9BBE8D3765BE382 (MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RollaBall.DelegatesObserver/Observer1::Do(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer1_Do_mC60E87AE3F4238405FC26059C8CB2FA50BAC8FC9 (Observer1_tFD2197E3B77ADF161D3D75CB37F8252AAA0E5FD9 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7A61CC3B30F282C45F10C0DEE0C022542888F73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"������. ������ ��� ������ {o} �������");
		RuntimeObject * L_0 = ___o0;
		String_t* L_1;
		L_1 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralF7A61CC3B30F282C45F10C0DEE0C022542888F73, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.DelegatesObserver/Observer1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer1__ctor_mE459A964FC08091E4D569D45028E2EF3EA5F1AE4 (Observer1_tFD2197E3B77ADF161D3D75CB37F8252AAA0E5FD9 * __this, const RuntimeMethod* method)
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
// System.Void RollaBall.DelegatesObserver/Observer2::Do(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer2_Do_m970BF5D92E55ED669C36B4790CE9F476012F298B (Observer2_t9A89E9CF25EB65EA6BFF9A6560A8EA50206CAA5F * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0230328A1FDD8B6243F5BDF5CE651CBA85CF538A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"������. ������ ��� ������ {o} �������");
		RuntimeObject * L_0 = ___o0;
		String_t* L_1;
		L_1 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral0230328A1FDD8B6243F5BDF5CE651CBA85CF538A, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.DelegatesObserver/Observer2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer2__ctor_mB9FC306002301BF07613A54D811C96287FB5D2D9 (Observer2_t9A89E9CF25EB65EA6BFF9A6560A8EA50206CAA5F * __this, const RuntimeMethod* method)
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
// System.Void RollaBall.DelegatesObserver/Source::add__functions(RollaBall.DelegatesObserver/MyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Source_add__functions_m372403C73200C314A77B0A86391495CEDB0DBDE6 (Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9 * __this, MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * V_0 = NULL;
	MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * V_1 = NULL;
	MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * V_2 = NULL;
	{
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_0 = __this->get__functions_0();
		V_0 = L_0;
	}

IL_0007:
	{
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_1 = V_0;
		V_1 = L_1;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_2 = V_1;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 *)CastclassSealed((RuntimeObject*)L_4, MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762_il2cpp_TypeInfo_var));
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 ** L_5 = __this->get_address_of__functions_0();
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_6 = V_2;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_7 = V_1;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 *>((MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 **)L_5, L_6, L_7);
		V_0 = L_8;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_9 = V_0;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 *)L_9) == ((RuntimeObject*)(MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RollaBall.DelegatesObserver/Source::remove__functions(RollaBall.DelegatesObserver/MyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Source_remove__functions_m0FB70D8A46E003C15E22D912BEEF98E453E3CFC7 (Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9 * __this, MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * V_0 = NULL;
	MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * V_1 = NULL;
	MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * V_2 = NULL;
	{
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_0 = __this->get__functions_0();
		V_0 = L_0;
	}

IL_0007:
	{
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_1 = V_0;
		V_1 = L_1;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_2 = V_1;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 *)CastclassSealed((RuntimeObject*)L_4, MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762_il2cpp_TypeInfo_var));
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 ** L_5 = __this->get_address_of__functions_0();
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_6 = V_2;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_7 = V_1;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 *>((MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 **)L_5, L_6, L_7);
		V_0 = L_8;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_9 = V_0;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 *)L_9) == ((RuntimeObject*)(MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RollaBall.DelegatesObserver/Source::Add(RollaBall.DelegatesObserver/MyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Source_Add_mC3F110654CDCD88596529EF602E45E007130D1DC (Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9 * __this, MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * ___f0, const RuntimeMethod* method)
{
	{
		// _functions += f;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_0 = ___f0;
		Source_add__functions_m372403C73200C314A77B0A86391495CEDB0DBDE6(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.DelegatesObserver/Source::Remove(RollaBall.DelegatesObserver/MyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Source_Remove_mC08134F1127B4F5F38E59219D5E84BD76A33B96B (Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9 * __this, MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * ___f0, const RuntimeMethod* method)
{
	{
		// _functions -= f;
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_0 = ___f0;
		Source_remove__functions_m0FB70D8A46E003C15E22D912BEEF98E453E3CFC7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RollaBall.DelegatesObserver/Source::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Source_Run_mC6D2E3BC28F9B2785153FA72D5D42EDF2DDD5049 (Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5AED1875208F61EA92930E98EC1B0E438D2217C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Run!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA5AED1875208F61EA92930E98EC1B0E438D2217C, /*hidden argument*/NULL);
		// if(_functions != null)
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_0 = __this->get__functions_0();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// _functions(this);
		MyDelegate_tAEFDDA19379FE38B3FBB24DAE8EFEED8F4459762 * L_1 = __this->get__functions_0();
		NullCheck(L_1);
		MyDelegate_Invoke_m15EB707311368D7804996C423E6D53EEE8A92587(L_1, __this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void RollaBall.DelegatesObserver/Source::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Source__ctor_m4653BB3B3ABB146A32F5647D22C629B8E8744C67 (Source_t33BDAE1018B0C30509E2AFFD338E1D19F2F913E9 * __this, const RuntimeMethod* method)
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
// System.Void RollaBall.GoodBonus/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0201675B5E1AA6E3E6A4DEF020C18326CFFE6B25 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 * L_0 = (U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 *)il2cpp_codegen_object_new(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7AA178824CD53B51841CAC0D4668F066B95F5854(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RollaBall.GoodBonus/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7AA178824CD53B51841CAC0D4668F066B95F5854 (U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RollaBall.GoodBonus/<>c::<.ctor>b__14_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__14_0_mDF0F1A9ED9880FA545DCA7AF0E8C0631FE08DA72 (U3CU3Ec_tC31C9F5855EA8DA540F78170EDE1D17195BDDE57 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// public event Action<int> OnpointChange = delegate (int i) { };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractiveObject_get_IsInteractable_m455C04E19C7DFFA646C8DC8B4AAE29526DFF7DA8_inline (InteractiveObject_t2CABB45C31577D51DD1572DD066ABF9DC153A16F * __this, const RuntimeMethod* method)
{
	{
		// return _isInteractable;
		bool L_0 = __this->get__isInteractable_5();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
