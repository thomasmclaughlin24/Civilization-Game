#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.List`1<Buildings>
struct List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28;
// System.Collections.Generic.List`1<City>
struct List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71;
// System.Collections.Generic.List`1<Empires>
struct List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<TerrainTile>
struct List_1_tB3F944139168A62377B4E136185ADBF590543826;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// Buildings[]
struct BuildingsU5BU5D_tCB76829B6C03707E186E0D4B1B425C8E8B5E1D54;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// City[]
struct CityU5BU5D_tE4B34AB78D0D1EA34184D545C04C3CE428AEAECD;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Empires[]
struct EmpiresU5BU5D_t99093E299170D2ADA7141997892051E5B8485A46;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552;
// TerrainTile[]
struct TerrainTileU5BU5D_t4FD67E9AD5AADE62470FA1939DF058726DB3ED70;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// TerrainTile[0...,0...]
struct TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649;
// AddBuilding
struct AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioHandler
struct AudioHandler_tC2FB2E59AE540A3B7A2CE2EF47802AEAE7BE6288;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Buildings
struct Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C;
// BuildingsOpen
struct BuildingsOpen_tBD3EFE57B05715EA857EDB9A465C678F69023C54;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// City
struct City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E;
// CityNaming
struct CityNaming_t79FEF8E4F09AFC4355DEAE296337A4630C56A88F;
// CityPanel
struct CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942;
// ClickPanel
struct ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Empires
struct Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GridLayout
struct GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// LoadGame
struct LoadGame_t1EAC64ECA0C45AA246F223964F9C4C1047B519C5;
// LoadTitle
struct LoadTitle_tD353049BDFFB39EF2512B4B0C2401681FBB11D95;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// TerrainTile
struct TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Tilemaps.Tile
struct Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27;
// UnityEngine.Tilemaps.TileBase
struct TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052;
// TileClick
struct TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TurnButton
struct TurnButton_t6E0C2FA126B8B9C16A53E9BCE40E2BC371C9F299;
// UIUpdate
struct UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A;
// Units
struct Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WorldGeneration
struct WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934;
// citypanelanimation
struct citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E;
// clickanddrag
struct clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E;
// exitbutton
struct exitbutton_t23A6BB851EDDED5E619E32D6DB56590BE4604123;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;

IL2CPP_EXTERN_C RuntimeClass* AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB3F944139168A62377B4E136185ADBF590543826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09C3152C24244C0A4482BDD08496C4CD6FEEDFE0;
IL2CPP_EXTERN_C String_t* _stringLiteral0BAC3E925A475D0757EA5353BB3204F1A951E7E3;
IL2CPP_EXTERN_C String_t* _stringLiteral0CFC686F306D6C5A9ABE245CB8EE9C5A466C466C;
IL2CPP_EXTERN_C String_t* _stringLiteral1252CE30DA759C03396586EF3AD9B2DF719306E4;
IL2CPP_EXTERN_C String_t* _stringLiteral139D522116B078B2E24E34CF493F0E81C85B7477;
IL2CPP_EXTERN_C String_t* _stringLiteral28BBA0FFE3F23F96799979DE12AF6A0B2090DDCD;
IL2CPP_EXTERN_C String_t* _stringLiteral32C49E800E744E27CD40A683B5801FEA968BC5E0;
IL2CPP_EXTERN_C String_t* _stringLiteral39FB1B12C60EDFF271F261ECF96FA8F3AEDC8C67;
IL2CPP_EXTERN_C String_t* _stringLiteral42F8337D7364850BC3CA6FBB08E0FBDB30CF8E19;
IL2CPP_EXTERN_C String_t* _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6;
IL2CPP_EXTERN_C String_t* _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B;
IL2CPP_EXTERN_C String_t* _stringLiteral4C1687827DD9E9412FDE912A5B51EA43BCACAE60;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral69B1A8C9CA31F18C707F0899EFE87D124F957E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2;
IL2CPP_EXTERN_C String_t* _stringLiteral6E8EEEC61ED00FE10C89D5F65F105F6721A1C70D;
IL2CPP_EXTERN_C String_t* _stringLiteral6F334A8E09B2AD8F2672B543D8932E864C432CFC;
IL2CPP_EXTERN_C String_t* _stringLiteral7E0EDA535AAC383249AC43F66430DDDBC27C2BC3;
IL2CPP_EXTERN_C String_t* _stringLiteral817587ED56AE25F4249B6578D00B7571DBF9E724;
IL2CPP_EXTERN_C String_t* _stringLiteral915FB01663B270A429A9196FA91AC22023DFED4C;
IL2CPP_EXTERN_C String_t* _stringLiteral9493C914788251D7B6FE830D6393BE2F5345D88E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D58F319E558740809D07FC4A7430E9033B88069;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBED218361C55B6F6D0579F3F8DB511465B1645;
IL2CPP_EXTERN_C String_t* _stringLiteralA3BFF17AFF4811520BAA68CDB894C9951C0062EA;
IL2CPP_EXTERN_C String_t* _stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC679D9FDD096E31E14E3319FA031E29B01805A;
IL2CPP_EXTERN_C String_t* _stringLiteralAFBCAF51A5EC8411877FB968529EA01B3A167959;
IL2CPP_EXTERN_C String_t* _stringLiteralB20075339A32A57EFE587830904C1B1B60D9BA0D;
IL2CPP_EXTERN_C String_t* _stringLiteralC54440980954580FB34BB7471E937C78A506BD3C;
IL2CPP_EXTERN_C String_t* _stringLiteralCE8ED886E24300F7030145B9D85D25B24B8B4607;
IL2CPP_EXTERN_C String_t* _stringLiteralDAD771FCE32E1B35609EB8CBFDF6D030AA6C4369;
IL2CPP_EXTERN_C String_t* _stringLiteralDF201F519D58FB2A98600B095B7406C651C9CD4B;
IL2CPP_EXTERN_C String_t* _stringLiteralDFE8EAD3C71FD0528A437D79804E987E69CB1058;
IL2CPP_EXTERN_C String_t* _stringLiteralE08A0248521A255C457A6C1D492A7FE138B6446A;
IL2CPP_EXTERN_C String_t* _stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511;
IL2CPP_EXTERN_C String_t* _stringLiteralF7A2136E8F29A10D4BEBD301F52F62AF0824516A;
IL2CPP_EXTERN_C String_t* _stringLiteralF8ECB300A8B76F65B207DFA158A9BD004707D432;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_m72B749FCC9292FBBFF4226F048FB86A91DE46F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA32E899A8B90B453E0D889980CA14766DAAF0023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDA65DDA79668BC96D20BAFB983ED08935080D243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3B124D050403E721819FC6C5FFC05FFAE6514D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAD0A13871E6CF9F409D8389312474BBE4FCDACA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m342BD4EF96746E3D428502718C338C5C0B3DB4FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC51238197C8A6DE2A729073F4525BC9CA2509E60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112_m7DBE9036DE3CA69158561AA7D3D339B5F8DBAD88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7D684C4596B5BCBA1136957F0B53CA8E983F9896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA1BB2694AE0DED2C0EDF2D1CA0CB8C4FE907EFA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m22828079D5181E33BCAF9F15ACDF8C57A46DC755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m84AD6842031342ECE9856222645E616FD83965AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m670947E173A53E06EC96917DE33E14817302B810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD548AF8776640636BAFD874B5F272CD948B08275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mECA06E60A338112522AF321D9CA64DB90169F20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFCD36555C9F94B4ADC42B2A22F75CAFF3443D71D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6C8EAE6C1359FDC60F6F4F93C22ACCBF02F1AE77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m28A13A059EF10086690C04B2DBE9F01F677A4776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadTitle_OnFinished_mE8C1F1B54954642CDEB4A6847606796D0E8B2904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Buildings>
struct List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BuildingsU5BU5D_tCB76829B6C03707E186E0D4B1B425C8E8B5E1D54* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28, ____items_1)); }
	inline BuildingsU5BU5D_tCB76829B6C03707E186E0D4B1B425C8E8B5E1D54* get__items_1() const { return ____items_1; }
	inline BuildingsU5BU5D_tCB76829B6C03707E186E0D4B1B425C8E8B5E1D54** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BuildingsU5BU5D_tCB76829B6C03707E186E0D4B1B425C8E8B5E1D54* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BuildingsU5BU5D_tCB76829B6C03707E186E0D4B1B425C8E8B5E1D54* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28_StaticFields, ____emptyArray_5)); }
	inline BuildingsU5BU5D_tCB76829B6C03707E186E0D4B1B425C8E8B5E1D54* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BuildingsU5BU5D_tCB76829B6C03707E186E0D4B1B425C8E8B5E1D54** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BuildingsU5BU5D_tCB76829B6C03707E186E0D4B1B425C8E8B5E1D54* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<City>
struct List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CityU5BU5D_tE4B34AB78D0D1EA34184D545C04C3CE428AEAECD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71, ____items_1)); }
	inline CityU5BU5D_tE4B34AB78D0D1EA34184D545C04C3CE428AEAECD* get__items_1() const { return ____items_1; }
	inline CityU5BU5D_tE4B34AB78D0D1EA34184D545C04C3CE428AEAECD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CityU5BU5D_tE4B34AB78D0D1EA34184D545C04C3CE428AEAECD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CityU5BU5D_tE4B34AB78D0D1EA34184D545C04C3CE428AEAECD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71_StaticFields, ____emptyArray_5)); }
	inline CityU5BU5D_tE4B34AB78D0D1EA34184D545C04C3CE428AEAECD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CityU5BU5D_tE4B34AB78D0D1EA34184D545C04C3CE428AEAECD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CityU5BU5D_tE4B34AB78D0D1EA34184D545C04C3CE428AEAECD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Empires>
struct List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EmpiresU5BU5D_t99093E299170D2ADA7141997892051E5B8485A46* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC, ____items_1)); }
	inline EmpiresU5BU5D_t99093E299170D2ADA7141997892051E5B8485A46* get__items_1() const { return ____items_1; }
	inline EmpiresU5BU5D_t99093E299170D2ADA7141997892051E5B8485A46** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EmpiresU5BU5D_t99093E299170D2ADA7141997892051E5B8485A46* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EmpiresU5BU5D_t99093E299170D2ADA7141997892051E5B8485A46* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC_StaticFields, ____emptyArray_5)); }
	inline EmpiresU5BU5D_t99093E299170D2ADA7141997892051E5B8485A46* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EmpiresU5BU5D_t99093E299170D2ADA7141997892051E5B8485A46** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EmpiresU5BU5D_t99093E299170D2ADA7141997892051E5B8485A46* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TerrainTile>
struct List_1_tB3F944139168A62377B4E136185ADBF590543826  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TerrainTileU5BU5D_t4FD67E9AD5AADE62470FA1939DF058726DB3ED70* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB3F944139168A62377B4E136185ADBF590543826, ____items_1)); }
	inline TerrainTileU5BU5D_t4FD67E9AD5AADE62470FA1939DF058726DB3ED70* get__items_1() const { return ____items_1; }
	inline TerrainTileU5BU5D_t4FD67E9AD5AADE62470FA1939DF058726DB3ED70** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TerrainTileU5BU5D_t4FD67E9AD5AADE62470FA1939DF058726DB3ED70* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB3F944139168A62377B4E136185ADBF590543826, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB3F944139168A62377B4E136185ADBF590543826, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB3F944139168A62377B4E136185ADBF590543826, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB3F944139168A62377B4E136185ADBF590543826_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TerrainTileU5BU5D_t4FD67E9AD5AADE62470FA1939DF058726DB3ED70* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB3F944139168A62377B4E136185ADBF590543826_StaticFields, ____emptyArray_5)); }
	inline TerrainTileU5BU5D_t4FD67E9AD5AADE62470FA1939DF058726DB3ED70* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TerrainTileU5BU5D_t4FD67E9AD5AADE62470FA1939DF058726DB3ED70** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TerrainTileU5BU5D_t4FD67E9AD5AADE62470FA1939DF058726DB3ED70* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Buildings
struct Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C  : public RuntimeObject
{
public:
	// System.Int32 Buildings::productioncost
	int32_t ___productioncost_0;
	// System.Int32 Buildings::goldcost
	int32_t ___goldcost_1;
	// System.Int32 Buildings::faithcost
	int32_t ___faithcost_2;
	// System.Int32 Buildings::foodmodifier
	int32_t ___foodmodifier_3;
	// System.Int32 Buildings::goldmodifier
	int32_t ___goldmodifier_4;
	// System.Int32 Buildings::productionmodifier
	int32_t ___productionmodifier_5;
	// System.Int32 Buildings::culturemodifier
	int32_t ___culturemodifier_6;
	// System.Int32 Buildings::faithmodifier
	int32_t ___faithmodifier_7;
	// City Buildings::city
	City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * ___city_8;
	// System.String Buildings::name
	String_t* ___name_9;

public:
	inline static int32_t get_offset_of_productioncost_0() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___productioncost_0)); }
	inline int32_t get_productioncost_0() const { return ___productioncost_0; }
	inline int32_t* get_address_of_productioncost_0() { return &___productioncost_0; }
	inline void set_productioncost_0(int32_t value)
	{
		___productioncost_0 = value;
	}

	inline static int32_t get_offset_of_goldcost_1() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___goldcost_1)); }
	inline int32_t get_goldcost_1() const { return ___goldcost_1; }
	inline int32_t* get_address_of_goldcost_1() { return &___goldcost_1; }
	inline void set_goldcost_1(int32_t value)
	{
		___goldcost_1 = value;
	}

	inline static int32_t get_offset_of_faithcost_2() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___faithcost_2)); }
	inline int32_t get_faithcost_2() const { return ___faithcost_2; }
	inline int32_t* get_address_of_faithcost_2() { return &___faithcost_2; }
	inline void set_faithcost_2(int32_t value)
	{
		___faithcost_2 = value;
	}

	inline static int32_t get_offset_of_foodmodifier_3() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___foodmodifier_3)); }
	inline int32_t get_foodmodifier_3() const { return ___foodmodifier_3; }
	inline int32_t* get_address_of_foodmodifier_3() { return &___foodmodifier_3; }
	inline void set_foodmodifier_3(int32_t value)
	{
		___foodmodifier_3 = value;
	}

	inline static int32_t get_offset_of_goldmodifier_4() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___goldmodifier_4)); }
	inline int32_t get_goldmodifier_4() const { return ___goldmodifier_4; }
	inline int32_t* get_address_of_goldmodifier_4() { return &___goldmodifier_4; }
	inline void set_goldmodifier_4(int32_t value)
	{
		___goldmodifier_4 = value;
	}

	inline static int32_t get_offset_of_productionmodifier_5() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___productionmodifier_5)); }
	inline int32_t get_productionmodifier_5() const { return ___productionmodifier_5; }
	inline int32_t* get_address_of_productionmodifier_5() { return &___productionmodifier_5; }
	inline void set_productionmodifier_5(int32_t value)
	{
		___productionmodifier_5 = value;
	}

	inline static int32_t get_offset_of_culturemodifier_6() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___culturemodifier_6)); }
	inline int32_t get_culturemodifier_6() const { return ___culturemodifier_6; }
	inline int32_t* get_address_of_culturemodifier_6() { return &___culturemodifier_6; }
	inline void set_culturemodifier_6(int32_t value)
	{
		___culturemodifier_6 = value;
	}

	inline static int32_t get_offset_of_faithmodifier_7() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___faithmodifier_7)); }
	inline int32_t get_faithmodifier_7() const { return ___faithmodifier_7; }
	inline int32_t* get_address_of_faithmodifier_7() { return &___faithmodifier_7; }
	inline void set_faithmodifier_7(int32_t value)
	{
		___faithmodifier_7 = value;
	}

	inline static int32_t get_offset_of_city_8() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___city_8)); }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * get_city_8() const { return ___city_8; }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E ** get_address_of_city_8() { return &___city_8; }
	inline void set_city_8(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * value)
	{
		___city_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___city_8), (void*)value);
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}
};


// City
struct City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E  : public RuntimeObject
{
public:
	// TerrainTile City::centralTile
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * ___centralTile_0;
	// System.Collections.Generic.List`1<TerrainTile> City::OwnedTiles
	List_1_tB3F944139168A62377B4E136185ADBF590543826 * ___OwnedTiles_1;
	// GameManager City::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_2;
	// Empires City::empire
	Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * ___empire_9;

public:
	inline static int32_t get_offset_of_centralTile_0() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E, ___centralTile_0)); }
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * get_centralTile_0() const { return ___centralTile_0; }
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 ** get_address_of_centralTile_0() { return &___centralTile_0; }
	inline void set_centralTile_0(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * value)
	{
		___centralTile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centralTile_0), (void*)value);
	}

	inline static int32_t get_offset_of_OwnedTiles_1() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E, ___OwnedTiles_1)); }
	inline List_1_tB3F944139168A62377B4E136185ADBF590543826 * get_OwnedTiles_1() const { return ___OwnedTiles_1; }
	inline List_1_tB3F944139168A62377B4E136185ADBF590543826 ** get_address_of_OwnedTiles_1() { return &___OwnedTiles_1; }
	inline void set_OwnedTiles_1(List_1_tB3F944139168A62377B4E136185ADBF590543826 * value)
	{
		___OwnedTiles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OwnedTiles_1), (void*)value);
	}

	inline static int32_t get_offset_of_gm_2() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E, ___gm_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_2() const { return ___gm_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_2() { return &___gm_2; }
	inline void set_gm_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_2), (void*)value);
	}

	inline static int32_t get_offset_of_empire_9() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E, ___empire_9)); }
	inline Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * get_empire_9() const { return ___empire_9; }
	inline Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 ** get_address_of_empire_9() { return &___empire_9; }
	inline void set_empire_9(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * value)
	{
		___empire_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empire_9), (void*)value);
	}
};

struct City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields
{
public:
	// UnityEngine.Sprite City::abc
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___abc_3;
	// UnityEngine.Sprite City::abf
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___abf_4;
	// UnityEngine.Sprite City::aef
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___aef_5;
	// UnityEngine.Sprite City::bcd
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___bcd_6;
	// UnityEngine.Sprite City::cde
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___cde_7;
	// UnityEngine.Sprite City::def
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___def_8;

public:
	inline static int32_t get_offset_of_abc_3() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields, ___abc_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_abc_3() const { return ___abc_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_abc_3() { return &___abc_3; }
	inline void set_abc_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___abc_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abc_3), (void*)value);
	}

	inline static int32_t get_offset_of_abf_4() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields, ___abf_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_abf_4() const { return ___abf_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_abf_4() { return &___abf_4; }
	inline void set_abf_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___abf_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abf_4), (void*)value);
	}

	inline static int32_t get_offset_of_aef_5() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields, ___aef_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_aef_5() const { return ___aef_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_aef_5() { return &___aef_5; }
	inline void set_aef_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___aef_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aef_5), (void*)value);
	}

	inline static int32_t get_offset_of_bcd_6() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields, ___bcd_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_bcd_6() const { return ___bcd_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_bcd_6() { return &___bcd_6; }
	inline void set_bcd_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___bcd_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bcd_6), (void*)value);
	}

	inline static int32_t get_offset_of_cde_7() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields, ___cde_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_cde_7() const { return ___cde_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_cde_7() { return &___cde_7; }
	inline void set_cde_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___cde_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cde_7), (void*)value);
	}

	inline static int32_t get_offset_of_def_8() { return static_cast<int32_t>(offsetof(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields, ___def_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_def_8() const { return ___def_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_def_8() { return &___def_8; }
	inline void set_def_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___def_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___def_8), (void*)value);
	}
};


// Empires
struct Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9  : public RuntimeObject
{
public:
	// System.String Empires::empirename
	String_t* ___empirename_0;
	// System.Collections.Generic.List`1<City> Empires::cities
	List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * ___cities_1;
	// System.Int32 Empires::totalfood
	int32_t ___totalfood_2;
	// System.Int32 Empires::totalgold
	int32_t ___totalgold_3;
	// System.Int32 Empires::totalproduction
	int32_t ___totalproduction_4;
	// System.Int32 Empires::totalculture
	int32_t ___totalculture_5;
	// System.Int32 Empires::totalfaith
	int32_t ___totalfaith_6;

public:
	inline static int32_t get_offset_of_empirename_0() { return static_cast<int32_t>(offsetof(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9, ___empirename_0)); }
	inline String_t* get_empirename_0() const { return ___empirename_0; }
	inline String_t** get_address_of_empirename_0() { return &___empirename_0; }
	inline void set_empirename_0(String_t* value)
	{
		___empirename_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empirename_0), (void*)value);
	}

	inline static int32_t get_offset_of_cities_1() { return static_cast<int32_t>(offsetof(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9, ___cities_1)); }
	inline List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * get_cities_1() const { return ___cities_1; }
	inline List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 ** get_address_of_cities_1() { return &___cities_1; }
	inline void set_cities_1(List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * value)
	{
		___cities_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cities_1), (void*)value);
	}

	inline static int32_t get_offset_of_totalfood_2() { return static_cast<int32_t>(offsetof(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9, ___totalfood_2)); }
	inline int32_t get_totalfood_2() const { return ___totalfood_2; }
	inline int32_t* get_address_of_totalfood_2() { return &___totalfood_2; }
	inline void set_totalfood_2(int32_t value)
	{
		___totalfood_2 = value;
	}

	inline static int32_t get_offset_of_totalgold_3() { return static_cast<int32_t>(offsetof(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9, ___totalgold_3)); }
	inline int32_t get_totalgold_3() const { return ___totalgold_3; }
	inline int32_t* get_address_of_totalgold_3() { return &___totalgold_3; }
	inline void set_totalgold_3(int32_t value)
	{
		___totalgold_3 = value;
	}

	inline static int32_t get_offset_of_totalproduction_4() { return static_cast<int32_t>(offsetof(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9, ___totalproduction_4)); }
	inline int32_t get_totalproduction_4() const { return ___totalproduction_4; }
	inline int32_t* get_address_of_totalproduction_4() { return &___totalproduction_4; }
	inline void set_totalproduction_4(int32_t value)
	{
		___totalproduction_4 = value;
	}

	inline static int32_t get_offset_of_totalculture_5() { return static_cast<int32_t>(offsetof(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9, ___totalculture_5)); }
	inline int32_t get_totalculture_5() const { return ___totalculture_5; }
	inline int32_t* get_address_of_totalculture_5() { return &___totalculture_5; }
	inline void set_totalculture_5(int32_t value)
	{
		___totalculture_5 = value;
	}

	inline static int32_t get_offset_of_totalfaith_6() { return static_cast<int32_t>(offsetof(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9, ___totalfaith_6)); }
	inline int32_t get_totalfaith_6() const { return ___totalfaith_6; }
	inline int32_t* get_address_of_totalfaith_6() { return &___totalfaith_6; }
	inline void set_totalfaith_6(int32_t value)
	{
		___totalfaith_6 = value;
	}
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


// TerrainTile
struct TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1  : public RuntimeObject
{
public:
	// System.String TerrainTile::type
	String_t* ___type_0;
	// System.Int32 TerrainTile::basefood
	int32_t ___basefood_1;
	// System.Int32 TerrainTile::basegold
	int32_t ___basegold_2;
	// System.Int32 TerrainTile::baseproduction
	int32_t ___baseproduction_3;
	// System.Int32 TerrainTile::baseculture
	int32_t ___baseculture_4;
	// System.Int32 TerrainTile::basefaith
	int32_t ___basefaith_5;
	// System.Int32 TerrainTile::x
	int32_t ___x_6;
	// System.Int32 TerrainTile::y
	int32_t ___y_7;
	// UnityEngine.Sprite TerrainTile::tileImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___tileImage_8;
	// System.Boolean TerrainTile::hasCity
	bool ___hasCity_14;
	// GameManager TerrainTile::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_16;
	// System.Int32 TerrainTile::gridX
	int32_t ___gridX_17;
	// System.Int32 TerrainTile::gridY
	int32_t ___gridY_18;
	// City TerrainTile::city
	City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * ___city_19;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_basefood_1() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___basefood_1)); }
	inline int32_t get_basefood_1() const { return ___basefood_1; }
	inline int32_t* get_address_of_basefood_1() { return &___basefood_1; }
	inline void set_basefood_1(int32_t value)
	{
		___basefood_1 = value;
	}

	inline static int32_t get_offset_of_basegold_2() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___basegold_2)); }
	inline int32_t get_basegold_2() const { return ___basegold_2; }
	inline int32_t* get_address_of_basegold_2() { return &___basegold_2; }
	inline void set_basegold_2(int32_t value)
	{
		___basegold_2 = value;
	}

	inline static int32_t get_offset_of_baseproduction_3() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___baseproduction_3)); }
	inline int32_t get_baseproduction_3() const { return ___baseproduction_3; }
	inline int32_t* get_address_of_baseproduction_3() { return &___baseproduction_3; }
	inline void set_baseproduction_3(int32_t value)
	{
		___baseproduction_3 = value;
	}

	inline static int32_t get_offset_of_baseculture_4() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___baseculture_4)); }
	inline int32_t get_baseculture_4() const { return ___baseculture_4; }
	inline int32_t* get_address_of_baseculture_4() { return &___baseculture_4; }
	inline void set_baseculture_4(int32_t value)
	{
		___baseculture_4 = value;
	}

	inline static int32_t get_offset_of_basefaith_5() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___basefaith_5)); }
	inline int32_t get_basefaith_5() const { return ___basefaith_5; }
	inline int32_t* get_address_of_basefaith_5() { return &___basefaith_5; }
	inline void set_basefaith_5(int32_t value)
	{
		___basefaith_5 = value;
	}

	inline static int32_t get_offset_of_x_6() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___x_6)); }
	inline int32_t get_x_6() const { return ___x_6; }
	inline int32_t* get_address_of_x_6() { return &___x_6; }
	inline void set_x_6(int32_t value)
	{
		___x_6 = value;
	}

	inline static int32_t get_offset_of_y_7() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___y_7)); }
	inline int32_t get_y_7() const { return ___y_7; }
	inline int32_t* get_address_of_y_7() { return &___y_7; }
	inline void set_y_7(int32_t value)
	{
		___y_7 = value;
	}

	inline static int32_t get_offset_of_tileImage_8() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___tileImage_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_tileImage_8() const { return ___tileImage_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_tileImage_8() { return &___tileImage_8; }
	inline void set_tileImage_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___tileImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tileImage_8), (void*)value);
	}

	inline static int32_t get_offset_of_hasCity_14() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___hasCity_14)); }
	inline bool get_hasCity_14() const { return ___hasCity_14; }
	inline bool* get_address_of_hasCity_14() { return &___hasCity_14; }
	inline void set_hasCity_14(bool value)
	{
		___hasCity_14 = value;
	}

	inline static int32_t get_offset_of_gm_16() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___gm_16)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_16() const { return ___gm_16; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_16() { return &___gm_16; }
	inline void set_gm_16(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_16), (void*)value);
	}

	inline static int32_t get_offset_of_gridX_17() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___gridX_17)); }
	inline int32_t get_gridX_17() const { return ___gridX_17; }
	inline int32_t* get_address_of_gridX_17() { return &___gridX_17; }
	inline void set_gridX_17(int32_t value)
	{
		___gridX_17 = value;
	}

	inline static int32_t get_offset_of_gridY_18() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___gridY_18)); }
	inline int32_t get_gridY_18() const { return ___gridY_18; }
	inline int32_t* get_address_of_gridY_18() { return &___gridY_18; }
	inline void set_gridY_18(int32_t value)
	{
		___gridY_18 = value;
	}

	inline static int32_t get_offset_of_city_19() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1, ___city_19)); }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * get_city_19() const { return ___city_19; }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E ** get_address_of_city_19() { return &___city_19; }
	inline void set_city_19(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * value)
	{
		___city_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___city_19), (void*)value);
	}
};

struct TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields
{
public:
	// UnityEngine.Sprite TerrainTile::grassImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___grassImage_9;
	// UnityEngine.Sprite TerrainTile::waterImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___waterImage_10;
	// UnityEngine.Sprite TerrainTile::gravelImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___gravelImage_11;
	// UnityEngine.Sprite TerrainTile::sandImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sandImage_12;
	// UnityEngine.Sprite TerrainTile::desertImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___desertImage_13;
	// UnityEngine.Sprite TerrainTile::cityImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___cityImage_15;

public:
	inline static int32_t get_offset_of_grassImage_9() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields, ___grassImage_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_grassImage_9() const { return ___grassImage_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_grassImage_9() { return &___grassImage_9; }
	inline void set_grassImage_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___grassImage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grassImage_9), (void*)value);
	}

	inline static int32_t get_offset_of_waterImage_10() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields, ___waterImage_10)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_waterImage_10() const { return ___waterImage_10; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_waterImage_10() { return &___waterImage_10; }
	inline void set_waterImage_10(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___waterImage_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waterImage_10), (void*)value);
	}

	inline static int32_t get_offset_of_gravelImage_11() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields, ___gravelImage_11)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_gravelImage_11() const { return ___gravelImage_11; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_gravelImage_11() { return &___gravelImage_11; }
	inline void set_gravelImage_11(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___gravelImage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gravelImage_11), (void*)value);
	}

	inline static int32_t get_offset_of_sandImage_12() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields, ___sandImage_12)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_sandImage_12() const { return ___sandImage_12; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_sandImage_12() { return &___sandImage_12; }
	inline void set_sandImage_12(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___sandImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sandImage_12), (void*)value);
	}

	inline static int32_t get_offset_of_desertImage_13() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields, ___desertImage_13)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_desertImage_13() const { return ___desertImage_13; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_desertImage_13() { return &___desertImage_13; }
	inline void set_desertImage_13(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___desertImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desertImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_cityImage_15() { return static_cast<int32_t>(offsetof(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields, ___cityImage_15)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_cityImage_15() const { return ___cityImage_15; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_cityImage_15() { return &___cityImage_15; }
	inline void set_cityImage_15(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___cityImage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cityImage_15), (void*)value);
	}
};


// Units
struct Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0  : public RuntimeObject
{
public:
	// System.Int32 Units::moveSpeed
	int32_t ___moveSpeed_0;
	// System.Int32 Units::strength
	int32_t ___strength_1;
	// System.Int32 Units::HP
	int32_t ___HP_2;
	// System.String Units::name
	String_t* ___name_3;
	// System.Boolean Units::canAttack
	bool ___canAttack_4;
	// GameManager Units::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_5;
	// TerrainTile Units::currentTile
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * ___currentTile_6;

public:
	inline static int32_t get_offset_of_moveSpeed_0() { return static_cast<int32_t>(offsetof(Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0, ___moveSpeed_0)); }
	inline int32_t get_moveSpeed_0() const { return ___moveSpeed_0; }
	inline int32_t* get_address_of_moveSpeed_0() { return &___moveSpeed_0; }
	inline void set_moveSpeed_0(int32_t value)
	{
		___moveSpeed_0 = value;
	}

	inline static int32_t get_offset_of_strength_1() { return static_cast<int32_t>(offsetof(Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0, ___strength_1)); }
	inline int32_t get_strength_1() const { return ___strength_1; }
	inline int32_t* get_address_of_strength_1() { return &___strength_1; }
	inline void set_strength_1(int32_t value)
	{
		___strength_1 = value;
	}

	inline static int32_t get_offset_of_HP_2() { return static_cast<int32_t>(offsetof(Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0, ___HP_2)); }
	inline int32_t get_HP_2() const { return ___HP_2; }
	inline int32_t* get_address_of_HP_2() { return &___HP_2; }
	inline void set_HP_2(int32_t value)
	{
		___HP_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_canAttack_4() { return static_cast<int32_t>(offsetof(Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0, ___canAttack_4)); }
	inline bool get_canAttack_4() const { return ___canAttack_4; }
	inline bool* get_address_of_canAttack_4() { return &___canAttack_4; }
	inline void set_canAttack_4(bool value)
	{
		___canAttack_4 = value;
	}

	inline static int32_t get_offset_of_gm_5() { return static_cast<int32_t>(offsetof(Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0, ___gm_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_5() const { return ___gm_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_5() { return &___gm_5; }
	inline void set_gm_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentTile_6() { return static_cast<int32_t>(offsetof(Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0, ___currentTile_6)); }
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * get_currentTile_6() const { return ___currentTile_6; }
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 ** get_address_of_currentTile_6() { return &___currentTile_6; }
	inline void set_currentTile_6(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * value)
	{
		___currentTile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTile_6), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<City>
struct Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC82792F0B2124AFA151BF5C18917755081322166, ___list_0)); }
	inline List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * get_list_0() const { return ___list_0; }
	inline List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC82792F0B2124AFA151BF5C18917755081322166, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC82792F0B2124AFA151BF5C18917755081322166, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC82792F0B2124AFA151BF5C18917755081322166, ___current_3)); }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * get_current_3() const { return ___current_3; }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Empires>
struct Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666, ___list_0)); }
	inline List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * get_list_0() const { return ___list_0; }
	inline List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666, ___current_3)); }
	inline Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * get_current_3() const { return ___current_3; }
	inline Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<TerrainTile>
struct Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tB3F944139168A62377B4E136185ADBF590543826 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E, ___list_0)); }
	inline List_1_tB3F944139168A62377B4E136185ADBF590543826 * get_list_0() const { return ___list_0; }
	inline List_1_tB3F944139168A62377B4E136185ADBF590543826 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB3F944139168A62377B4E136185ADBF590543826 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E, ___current_3)); }
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * get_current_3() const { return ___current_3; }
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
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

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
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


// UnityEngine.Vector3Int
struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
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


// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Array_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.ColorMode
struct ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// TMPro.Extents
struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Tilemaps.TileFlags
struct TileFlags_tAA2786C2FC3467D33A613BE2AE244E9E43EF510B 
{
public:
	// System.Int32 UnityEngine.Tilemaps.TileFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileFlags_tAA2786C2FC3467D33A613BE2AE244E9E43EF510B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Tilemaps.Tile/ColliderType
struct ColliderType_tB8E55E3EB1D378726420E99E6F7646DC119923FB 
{
public:
	// System.Int32 UnityEngine.Tilemaps.Tile/ColliderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColliderType_tB8E55E3EB1D378726420E99E6F7646DC119923FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// citypanelanimation/Sides
struct Sides_tEF14FBC9B9671570625738E3BA6E74E4A8E3397A 
{
public:
	// System.Int32 citypanelanimation/Sides::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sides_tEF14FBC9B9671570625738E3BA6E74E4A8E3397A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
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


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
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
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Tilemaps.TileBase
struct TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
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


// TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_35)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_36)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_58)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_60)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_62)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD  : public MulticastDelegate_t
{
public:

public:
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.GridLayout
struct GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.Tilemaps.Tile
struct Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27  : public TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052
{
public:
	// UnityEngine.Sprite UnityEngine.Tilemaps.Tile::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_4;
	// UnityEngine.Color UnityEngine.Tilemaps.Tile::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_5;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::m_Transform
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_Transform_6;
	// UnityEngine.GameObject UnityEngine.Tilemaps.Tile::m_InstancedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_InstancedGameObject_7;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::m_Flags
	int32_t ___m_Flags_8;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::m_ColliderType
	int32_t ___m_ColliderType_9;

public:
	inline static int32_t get_offset_of_m_Sprite_4() { return static_cast<int32_t>(offsetof(Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27, ___m_Sprite_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_4() const { return ___m_Sprite_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_4() { return &___m_Sprite_4; }
	inline void set_m_Sprite_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27, ___m_Color_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_Transform_6() { return static_cast<int32_t>(offsetof(Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27, ___m_Transform_6)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_Transform_6() const { return ___m_Transform_6; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_Transform_6() { return &___m_Transform_6; }
	inline void set_m_Transform_6(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_Transform_6 = value;
	}

	inline static int32_t get_offset_of_m_InstancedGameObject_7() { return static_cast<int32_t>(offsetof(Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27, ___m_InstancedGameObject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_InstancedGameObject_7() const { return ___m_InstancedGameObject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_InstancedGameObject_7() { return &___m_InstancedGameObject_7; }
	inline void set_m_InstancedGameObject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_InstancedGameObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InstancedGameObject_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_8() { return static_cast<int32_t>(offsetof(Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27, ___m_Flags_8)); }
	inline int32_t get_m_Flags_8() const { return ___m_Flags_8; }
	inline int32_t* get_address_of_m_Flags_8() { return &___m_Flags_8; }
	inline void set_m_Flags_8(int32_t value)
	{
		___m_Flags_8 = value;
	}

	inline static int32_t get_offset_of_m_ColliderType_9() { return static_cast<int32_t>(offsetof(Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27, ___m_ColliderType_9)); }
	inline int32_t get_m_ColliderType_9() const { return ___m_ColliderType_9; }
	inline int32_t* get_address_of_m_ColliderType_9() { return &___m_ColliderType_9; }
	inline void set_m_ColliderType_9(int32_t value)
	{
		___m_ColliderType_9 = value;
	}
};


// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// AddBuilding
struct AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// City AddBuilding::city
	City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * ___city_4;
	// Buildings AddBuilding::buildings
	Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C * ___buildings_5;
	// GameManager AddBuilding::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_7;

public:
	inline static int32_t get_offset_of_city_4() { return static_cast<int32_t>(offsetof(AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF, ___city_4)); }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * get_city_4() const { return ___city_4; }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E ** get_address_of_city_4() { return &___city_4; }
	inline void set_city_4(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * value)
	{
		___city_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___city_4), (void*)value);
	}

	inline static int32_t get_offset_of_buildings_5() { return static_cast<int32_t>(offsetof(AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF, ___buildings_5)); }
	inline Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C * get_buildings_5() const { return ___buildings_5; }
	inline Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C ** get_address_of_buildings_5() { return &___buildings_5; }
	inline void set_buildings_5(Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C * value)
	{
		___buildings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildings_5), (void*)value);
	}

	inline static int32_t get_offset_of_gm_7() { return static_cast<int32_t>(offsetof(AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF, ___gm_7)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_7() const { return ___gm_7; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_7() { return &___gm_7; }
	inline void set_gm_7(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_7), (void*)value);
	}
};

struct AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF_StaticFields
{
public:
	// UnityEngine.Sprite AddBuilding::buildingImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___buildingImage_6;

public:
	inline static int32_t get_offset_of_buildingImage_6() { return static_cast<int32_t>(offsetof(AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF_StaticFields, ___buildingImage_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_buildingImage_6() const { return ___buildingImage_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_buildingImage_6() { return &___buildingImage_6; }
	inline void set_buildingImage_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___buildingImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildingImage_6), (void*)value);
	}
};


// AudioHandler
struct AudioHandler_tC2FB2E59AE540A3B7A2CE2EF47802AEAE7BE6288  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource AudioHandler::maintheme
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___maintheme_4;
	// UnityEngine.AudioClip AudioHandler::mainthemeclip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___mainthemeclip_5;

public:
	inline static int32_t get_offset_of_maintheme_4() { return static_cast<int32_t>(offsetof(AudioHandler_tC2FB2E59AE540A3B7A2CE2EF47802AEAE7BE6288, ___maintheme_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_maintheme_4() const { return ___maintheme_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_maintheme_4() { return &___maintheme_4; }
	inline void set_maintheme_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___maintheme_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maintheme_4), (void*)value);
	}

	inline static int32_t get_offset_of_mainthemeclip_5() { return static_cast<int32_t>(offsetof(AudioHandler_tC2FB2E59AE540A3B7A2CE2EF47802AEAE7BE6288, ___mainthemeclip_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_mainthemeclip_5() const { return ___mainthemeclip_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_mainthemeclip_5() { return &___mainthemeclip_5; }
	inline void set_mainthemeclip_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___mainthemeclip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainthemeclip_5), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BuildingsOpen
struct BuildingsOpen_tBD3EFE57B05715EA857EDB9A465C678F69023C54  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ClickPanel BuildingsOpen::BuildingsPanel
	ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * ___BuildingsPanel_4;

public:
	inline static int32_t get_offset_of_BuildingsPanel_4() { return static_cast<int32_t>(offsetof(BuildingsOpen_tBD3EFE57B05715EA857EDB9A465C678F69023C54, ___BuildingsPanel_4)); }
	inline ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * get_BuildingsPanel_4() const { return ___BuildingsPanel_4; }
	inline ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 ** get_address_of_BuildingsPanel_4() { return &___BuildingsPanel_4; }
	inline void set_BuildingsPanel_4(ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * value)
	{
		___BuildingsPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingsPanel_4), (void*)value);
	}
};


// CityNaming
struct CityNaming_t79FEF8E4F09AFC4355DEAE296337A4630C56A88F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CityNaming::CityNameInput
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CityNameInput_4;
	// UnityEngine.GameObject CityNaming::CityName
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CityName_5;

public:
	inline static int32_t get_offset_of_CityNameInput_4() { return static_cast<int32_t>(offsetof(CityNaming_t79FEF8E4F09AFC4355DEAE296337A4630C56A88F, ___CityNameInput_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CityNameInput_4() const { return ___CityNameInput_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CityNameInput_4() { return &___CityNameInput_4; }
	inline void set_CityNameInput_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CityNameInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CityNameInput_4), (void*)value);
	}

	inline static int32_t get_offset_of_CityName_5() { return static_cast<int32_t>(offsetof(CityNaming_t79FEF8E4F09AFC4355DEAE296337A4630C56A88F, ___CityName_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CityName_5() const { return ___CityName_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CityName_5() { return &___CityName_5; }
	inline void set_CityName_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CityName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CityName_5), (void*)value);
	}
};


// CityPanel
struct CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// City CityPanel::city
	City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * ___city_4;
	// UnityEngine.GameObject CityPanel::cityname
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cityname_5;
	// UnityEngine.GameObject CityPanel::foodperturn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___foodperturn_6;
	// UnityEngine.GameObject CityPanel::goldperturn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___goldperturn_7;
	// UnityEngine.GameObject CityPanel::productionperturn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___productionperturn_8;
	// UnityEngine.GameObject CityPanel::cultureperturn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cultureperturn_9;
	// UnityEngine.GameObject CityPanel::faithperturn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___faithperturn_10;
	// UnityEngine.GameObject CityPanel::cityNameInput
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cityNameInput_11;
	// UnityEngine.GameObject CityPanel::totalproduction
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___totalproduction_12;

public:
	inline static int32_t get_offset_of_city_4() { return static_cast<int32_t>(offsetof(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942, ___city_4)); }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * get_city_4() const { return ___city_4; }
	inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E ** get_address_of_city_4() { return &___city_4; }
	inline void set_city_4(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * value)
	{
		___city_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___city_4), (void*)value);
	}

	inline static int32_t get_offset_of_cityname_5() { return static_cast<int32_t>(offsetof(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942, ___cityname_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cityname_5() const { return ___cityname_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cityname_5() { return &___cityname_5; }
	inline void set_cityname_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cityname_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cityname_5), (void*)value);
	}

	inline static int32_t get_offset_of_foodperturn_6() { return static_cast<int32_t>(offsetof(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942, ___foodperturn_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_foodperturn_6() const { return ___foodperturn_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_foodperturn_6() { return &___foodperturn_6; }
	inline void set_foodperturn_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___foodperturn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodperturn_6), (void*)value);
	}

	inline static int32_t get_offset_of_goldperturn_7() { return static_cast<int32_t>(offsetof(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942, ___goldperturn_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_goldperturn_7() const { return ___goldperturn_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_goldperturn_7() { return &___goldperturn_7; }
	inline void set_goldperturn_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___goldperturn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goldperturn_7), (void*)value);
	}

	inline static int32_t get_offset_of_productionperturn_8() { return static_cast<int32_t>(offsetof(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942, ___productionperturn_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_productionperturn_8() const { return ___productionperturn_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_productionperturn_8() { return &___productionperturn_8; }
	inline void set_productionperturn_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___productionperturn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productionperturn_8), (void*)value);
	}

	inline static int32_t get_offset_of_cultureperturn_9() { return static_cast<int32_t>(offsetof(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942, ___cultureperturn_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cultureperturn_9() const { return ___cultureperturn_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cultureperturn_9() { return &___cultureperturn_9; }
	inline void set_cultureperturn_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cultureperturn_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cultureperturn_9), (void*)value);
	}

	inline static int32_t get_offset_of_faithperturn_10() { return static_cast<int32_t>(offsetof(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942, ___faithperturn_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_faithperturn_10() const { return ___faithperturn_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_faithperturn_10() { return &___faithperturn_10; }
	inline void set_faithperturn_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___faithperturn_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faithperturn_10), (void*)value);
	}

	inline static int32_t get_offset_of_cityNameInput_11() { return static_cast<int32_t>(offsetof(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942, ___cityNameInput_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cityNameInput_11() const { return ___cityNameInput_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cityNameInput_11() { return &___cityNameInput_11; }
	inline void set_cityNameInput_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cityNameInput_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cityNameInput_11), (void*)value);
	}

	inline static int32_t get_offset_of_totalproduction_12() { return static_cast<int32_t>(offsetof(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942, ___totalproduction_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_totalproduction_12() const { return ___totalproduction_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_totalproduction_12() { return &___totalproduction_12; }
	inline void set_totalproduction_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___totalproduction_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___totalproduction_12), (void*)value);
	}
};


// ClickPanel
struct ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator ClickPanel::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Tilemaps.Tilemap GameManager::terrainmap
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___terrainmap_4;
	// UnityEngine.Tilemaps.Tilemap GameManager::overlay
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___overlay_5;
	// UnityEngine.Tilemaps.Tilemap GameManager::unitoverlay
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___unitoverlay_6;
	// TerrainTile[0...,0...] GameManager::tiles
	TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* ___tiles_7;
	// System.Collections.Generic.List`1<Empires> GameManager::empires
	List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * ___empires_8;
	// Empires GameManager::player
	Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * ___player_9;
	// System.Int32 GameManager::mapHeight
	int32_t ___mapHeight_10;
	// System.Int32 GameManager::mapWidth
	int32_t ___mapWidth_11;
	// UnityEngine.Vector3Int GameManager::hit
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___hit_12;
	// System.Collections.Generic.List`1<Buildings> GameManager::buildings
	List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28 * ___buildings_13;

public:
	inline static int32_t get_offset_of_terrainmap_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___terrainmap_4)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_terrainmap_4() const { return ___terrainmap_4; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_terrainmap_4() { return &___terrainmap_4; }
	inline void set_terrainmap_4(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___terrainmap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainmap_4), (void*)value);
	}

	inline static int32_t get_offset_of_overlay_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___overlay_5)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_overlay_5() const { return ___overlay_5; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_overlay_5() { return &___overlay_5; }
	inline void set_overlay_5(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___overlay_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overlay_5), (void*)value);
	}

	inline static int32_t get_offset_of_unitoverlay_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___unitoverlay_6)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_unitoverlay_6() const { return ___unitoverlay_6; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_unitoverlay_6() { return &___unitoverlay_6; }
	inline void set_unitoverlay_6(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___unitoverlay_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitoverlay_6), (void*)value);
	}

	inline static int32_t get_offset_of_tiles_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___tiles_7)); }
	inline TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* get_tiles_7() const { return ___tiles_7; }
	inline TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649** get_address_of_tiles_7() { return &___tiles_7; }
	inline void set_tiles_7(TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* value)
	{
		___tiles_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiles_7), (void*)value);
	}

	inline static int32_t get_offset_of_empires_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___empires_8)); }
	inline List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * get_empires_8() const { return ___empires_8; }
	inline List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC ** get_address_of_empires_8() { return &___empires_8; }
	inline void set_empires_8(List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * value)
	{
		___empires_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empires_8), (void*)value);
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_9)); }
	inline Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * get_player_9() const { return ___player_9; }
	inline Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_9), (void*)value);
	}

	inline static int32_t get_offset_of_mapHeight_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___mapHeight_10)); }
	inline int32_t get_mapHeight_10() const { return ___mapHeight_10; }
	inline int32_t* get_address_of_mapHeight_10() { return &___mapHeight_10; }
	inline void set_mapHeight_10(int32_t value)
	{
		___mapHeight_10 = value;
	}

	inline static int32_t get_offset_of_mapWidth_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___mapWidth_11)); }
	inline int32_t get_mapWidth_11() const { return ___mapWidth_11; }
	inline int32_t* get_address_of_mapWidth_11() { return &___mapWidth_11; }
	inline void set_mapWidth_11(int32_t value)
	{
		___mapWidth_11 = value;
	}

	inline static int32_t get_offset_of_hit_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___hit_12)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_hit_12() const { return ___hit_12; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_hit_12() { return &___hit_12; }
	inline void set_hit_12(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___hit_12 = value;
	}

	inline static int32_t get_offset_of_buildings_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___buildings_13)); }
	inline List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28 * get_buildings_13() const { return ___buildings_13; }
	inline List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28 ** get_address_of_buildings_13() { return &___buildings_13; }
	inline void set_buildings_13(List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28 * value)
	{
		___buildings_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildings_13), (void*)value);
	}
};


// LoadGame
struct LoadGame_t1EAC64ECA0C45AA246F223964F9C4C1047B519C5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String LoadGame::mainScene
	String_t* ___mainScene_4;

public:
	inline static int32_t get_offset_of_mainScene_4() { return static_cast<int32_t>(offsetof(LoadGame_t1EAC64ECA0C45AA246F223964F9C4C1047B519C5, ___mainScene_4)); }
	inline String_t* get_mainScene_4() const { return ___mainScene_4; }
	inline String_t** get_address_of_mainScene_4() { return &___mainScene_4; }
	inline void set_mainScene_4(String_t* value)
	{
		___mainScene_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainScene_4), (void*)value);
	}
};


// LoadTitle
struct LoadTitle_tD353049BDFFB39EF2512B4B0C2401681FBB11D95  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Video.VideoPlayer LoadTitle::IntroVideo
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___IntroVideo_4;
	// UnityEngine.GameObject LoadTitle::titlescreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___titlescreen_5;
	// UnityEngine.Video.VideoPlayer LoadTitle::TitleBG
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___TitleBG_6;

public:
	inline static int32_t get_offset_of_IntroVideo_4() { return static_cast<int32_t>(offsetof(LoadTitle_tD353049BDFFB39EF2512B4B0C2401681FBB11D95, ___IntroVideo_4)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_IntroVideo_4() const { return ___IntroVideo_4; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_IntroVideo_4() { return &___IntroVideo_4; }
	inline void set_IntroVideo_4(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___IntroVideo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IntroVideo_4), (void*)value);
	}

	inline static int32_t get_offset_of_titlescreen_5() { return static_cast<int32_t>(offsetof(LoadTitle_tD353049BDFFB39EF2512B4B0C2401681FBB11D95, ___titlescreen_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_titlescreen_5() const { return ___titlescreen_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_titlescreen_5() { return &___titlescreen_5; }
	inline void set_titlescreen_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___titlescreen_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titlescreen_5), (void*)value);
	}

	inline static int32_t get_offset_of_TitleBG_6() { return static_cast<int32_t>(offsetof(LoadTitle_tD353049BDFFB39EF2512B4B0C2401681FBB11D95, ___TitleBG_6)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_TitleBG_6() const { return ___TitleBG_6; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_TitleBG_6() { return &___TitleBG_6; }
	inline void set_TitleBG_6(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___TitleBG_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TitleBG_6), (void*)value);
	}
};


// TileClick
struct TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 TileClick::WorldPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___WorldPoint_4;
	// GameManager TileClick::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_5;
	// CityPanel TileClick::cityPanel
	CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * ___cityPanel_6;

public:
	inline static int32_t get_offset_of_WorldPoint_4() { return static_cast<int32_t>(offsetof(TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD, ___WorldPoint_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_WorldPoint_4() const { return ___WorldPoint_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_WorldPoint_4() { return &___WorldPoint_4; }
	inline void set_WorldPoint_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___WorldPoint_4 = value;
	}

	inline static int32_t get_offset_of_gm_5() { return static_cast<int32_t>(offsetof(TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD, ___gm_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_5() const { return ___gm_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_5() { return &___gm_5; }
	inline void set_gm_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_5), (void*)value);
	}

	inline static int32_t get_offset_of_cityPanel_6() { return static_cast<int32_t>(offsetof(TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD, ___cityPanel_6)); }
	inline CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * get_cityPanel_6() const { return ___cityPanel_6; }
	inline CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 ** get_address_of_cityPanel_6() { return &___cityPanel_6; }
	inline void set_cityPanel_6(CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * value)
	{
		___cityPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cityPanel_6), (void*)value);
	}
};


// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31  : public GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29
{
public:

public:
};


// TurnButton
struct TurnButton_t6E0C2FA126B8B9C16A53E9BCE40E2BC371C9F299  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager TurnButton::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;
	// UnityEngine.AudioSource TurnButton::nextturnmusic
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___nextturnmusic_5;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(TurnButton_t6E0C2FA126B8B9C16A53E9BCE40E2BC371C9F299, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}

	inline static int32_t get_offset_of_nextturnmusic_5() { return static_cast<int32_t>(offsetof(TurnButton_t6E0C2FA126B8B9C16A53E9BCE40E2BC371C9F299, ___nextturnmusic_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_nextturnmusic_5() const { return ___nextturnmusic_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_nextturnmusic_5() { return &___nextturnmusic_5; }
	inline void set_nextturnmusic_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___nextturnmusic_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextturnmusic_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIUpdate
struct UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager UIUpdate::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;
	// TMPro.TextMeshProUGUI UIUpdate::foodlabel
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___foodlabel_5;
	// TMPro.TextMeshProUGUI UIUpdate::goldlabel
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___goldlabel_6;
	// TMPro.TextMeshProUGUI UIUpdate::productionlabel
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___productionlabel_7;
	// TMPro.TextMeshProUGUI UIUpdate::culturelabel
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___culturelabel_8;
	// TMPro.TextMeshProUGUI UIUpdate::faithlabel
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___faithlabel_9;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}

	inline static int32_t get_offset_of_foodlabel_5() { return static_cast<int32_t>(offsetof(UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A, ___foodlabel_5)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_foodlabel_5() const { return ___foodlabel_5; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_foodlabel_5() { return &___foodlabel_5; }
	inline void set_foodlabel_5(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___foodlabel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodlabel_5), (void*)value);
	}

	inline static int32_t get_offset_of_goldlabel_6() { return static_cast<int32_t>(offsetof(UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A, ___goldlabel_6)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_goldlabel_6() const { return ___goldlabel_6; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_goldlabel_6() { return &___goldlabel_6; }
	inline void set_goldlabel_6(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___goldlabel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goldlabel_6), (void*)value);
	}

	inline static int32_t get_offset_of_productionlabel_7() { return static_cast<int32_t>(offsetof(UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A, ___productionlabel_7)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_productionlabel_7() const { return ___productionlabel_7; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_productionlabel_7() { return &___productionlabel_7; }
	inline void set_productionlabel_7(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___productionlabel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productionlabel_7), (void*)value);
	}

	inline static int32_t get_offset_of_culturelabel_8() { return static_cast<int32_t>(offsetof(UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A, ___culturelabel_8)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_culturelabel_8() const { return ___culturelabel_8; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_culturelabel_8() { return &___culturelabel_8; }
	inline void set_culturelabel_8(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___culturelabel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___culturelabel_8), (void*)value);
	}

	inline static int32_t get_offset_of_faithlabel_9() { return static_cast<int32_t>(offsetof(UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A, ___faithlabel_9)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_faithlabel_9() const { return ___faithlabel_9; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_faithlabel_9() { return &___faithlabel_9; }
	inline void set_faithlabel_9(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___faithlabel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faithlabel_9), (void*)value);
	}
};


// WorldGeneration
struct WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 WorldGeneration::mapWidth
	int32_t ___mapWidth_4;
	// System.Int32 WorldGeneration::mapHeight
	int32_t ___mapHeight_5;
	// System.Int32 WorldGeneration::offsetX
	int32_t ___offsetX_6;
	// System.Int32 WorldGeneration::offsetY
	int32_t ___offsetY_7;
	// TerrainTile[0...,0...] WorldGeneration::tiles
	TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* ___tiles_8;
	// System.String[] WorldGeneration::TerrainTypes
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___TerrainTypes_9;
	// UnityEngine.Tilemaps.Tilemap WorldGeneration::map
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map_10;
	// System.String WorldGeneration::GenerationType
	String_t* ___GenerationType_11;
	// TerrainTile WorldGeneration::startTile
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * ___startTile_12;
	// UnityEngine.Tilemaps.Tilemap WorldGeneration::overlay
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___overlay_13;
	// UnityEngine.Tilemaps.Tilemap WorldGeneration::unitoverlay
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___unitoverlay_14;
	// GameManager WorldGeneration::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_15;

public:
	inline static int32_t get_offset_of_mapWidth_4() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___mapWidth_4)); }
	inline int32_t get_mapWidth_4() const { return ___mapWidth_4; }
	inline int32_t* get_address_of_mapWidth_4() { return &___mapWidth_4; }
	inline void set_mapWidth_4(int32_t value)
	{
		___mapWidth_4 = value;
	}

	inline static int32_t get_offset_of_mapHeight_5() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___mapHeight_5)); }
	inline int32_t get_mapHeight_5() const { return ___mapHeight_5; }
	inline int32_t* get_address_of_mapHeight_5() { return &___mapHeight_5; }
	inline void set_mapHeight_5(int32_t value)
	{
		___mapHeight_5 = value;
	}

	inline static int32_t get_offset_of_offsetX_6() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___offsetX_6)); }
	inline int32_t get_offsetX_6() const { return ___offsetX_6; }
	inline int32_t* get_address_of_offsetX_6() { return &___offsetX_6; }
	inline void set_offsetX_6(int32_t value)
	{
		___offsetX_6 = value;
	}

	inline static int32_t get_offset_of_offsetY_7() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___offsetY_7)); }
	inline int32_t get_offsetY_7() const { return ___offsetY_7; }
	inline int32_t* get_address_of_offsetY_7() { return &___offsetY_7; }
	inline void set_offsetY_7(int32_t value)
	{
		___offsetY_7 = value;
	}

	inline static int32_t get_offset_of_tiles_8() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___tiles_8)); }
	inline TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* get_tiles_8() const { return ___tiles_8; }
	inline TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649** get_address_of_tiles_8() { return &___tiles_8; }
	inline void set_tiles_8(TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* value)
	{
		___tiles_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiles_8), (void*)value);
	}

	inline static int32_t get_offset_of_TerrainTypes_9() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___TerrainTypes_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_TerrainTypes_9() const { return ___TerrainTypes_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_TerrainTypes_9() { return &___TerrainTypes_9; }
	inline void set_TerrainTypes_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___TerrainTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TerrainTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_map_10() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___map_10)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_map_10() const { return ___map_10; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_map_10() { return &___map_10; }
	inline void set_map_10(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___map_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_10), (void*)value);
	}

	inline static int32_t get_offset_of_GenerationType_11() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___GenerationType_11)); }
	inline String_t* get_GenerationType_11() const { return ___GenerationType_11; }
	inline String_t** get_address_of_GenerationType_11() { return &___GenerationType_11; }
	inline void set_GenerationType_11(String_t* value)
	{
		___GenerationType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenerationType_11), (void*)value);
	}

	inline static int32_t get_offset_of_startTile_12() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___startTile_12)); }
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * get_startTile_12() const { return ___startTile_12; }
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 ** get_address_of_startTile_12() { return &___startTile_12; }
	inline void set_startTile_12(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * value)
	{
		___startTile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startTile_12), (void*)value);
	}

	inline static int32_t get_offset_of_overlay_13() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___overlay_13)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_overlay_13() const { return ___overlay_13; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_overlay_13() { return &___overlay_13; }
	inline void set_overlay_13(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___overlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_unitoverlay_14() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___unitoverlay_14)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_unitoverlay_14() const { return ___unitoverlay_14; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_unitoverlay_14() { return &___unitoverlay_14; }
	inline void set_unitoverlay_14(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___unitoverlay_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitoverlay_14), (void*)value);
	}

	inline static int32_t get_offset_of_gm_15() { return static_cast<int32_t>(offsetof(WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934, ___gm_15)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_15() const { return ___gm_15; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_15() { return &___gm_15; }
	inline void set_gm_15(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_15), (void*)value);
	}
};


// citypanelanimation
struct citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// citypanelanimation/Sides citypanelanimation::side
	int32_t ___side_4;
	// System.Single citypanelanimation::transition
	float ___transition_5;
	// UnityEngine.Vector2 citypanelanimation::inside
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___inside_6;
	// UnityEngine.Vector2 citypanelanimation::outside
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___outside_7;
	// UnityEngine.RectTransform citypanelanimation::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_8;
	// UnityEngine.Canvas citypanelanimation::canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas_9;

public:
	inline static int32_t get_offset_of_side_4() { return static_cast<int32_t>(offsetof(citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E, ___side_4)); }
	inline int32_t get_side_4() const { return ___side_4; }
	inline int32_t* get_address_of_side_4() { return &___side_4; }
	inline void set_side_4(int32_t value)
	{
		___side_4 = value;
	}

	inline static int32_t get_offset_of_transition_5() { return static_cast<int32_t>(offsetof(citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E, ___transition_5)); }
	inline float get_transition_5() const { return ___transition_5; }
	inline float* get_address_of_transition_5() { return &___transition_5; }
	inline void set_transition_5(float value)
	{
		___transition_5 = value;
	}

	inline static int32_t get_offset_of_inside_6() { return static_cast<int32_t>(offsetof(citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E, ___inside_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_inside_6() const { return ___inside_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_inside_6() { return &___inside_6; }
	inline void set_inside_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___inside_6 = value;
	}

	inline static int32_t get_offset_of_outside_7() { return static_cast<int32_t>(offsetof(citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E, ___outside_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_outside_7() const { return ___outside_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_outside_7() { return &___outside_7; }
	inline void set_outside_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___outside_7 = value;
	}

	inline static int32_t get_offset_of_rectTransform_8() { return static_cast<int32_t>(offsetof(citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E, ___rectTransform_8)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_8() const { return ___rectTransform_8; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_8() { return &___rectTransform_8; }
	inline void set_rectTransform_8(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_8), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_9() { return static_cast<int32_t>(offsetof(citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E, ___canvas_9)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas_9() const { return ___canvas_9; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas_9() { return &___canvas_9; }
	inline void set_canvas_9(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_9), (void*)value);
	}
};


// clickanddrag
struct clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single clickanddrag::dragSpeed
	float ___dragSpeed_4;
	// UnityEngine.Vector3 clickanddrag::dragStartPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dragStartPos_5;
	// UnityEngine.Vector3 clickanddrag::dragDistance
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dragDistance_6;
	// System.Boolean clickanddrag::dragging
	bool ___dragging_7;
	// GameManager clickanddrag::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_8;

public:
	inline static int32_t get_offset_of_dragSpeed_4() { return static_cast<int32_t>(offsetof(clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E, ___dragSpeed_4)); }
	inline float get_dragSpeed_4() const { return ___dragSpeed_4; }
	inline float* get_address_of_dragSpeed_4() { return &___dragSpeed_4; }
	inline void set_dragSpeed_4(float value)
	{
		___dragSpeed_4 = value;
	}

	inline static int32_t get_offset_of_dragStartPos_5() { return static_cast<int32_t>(offsetof(clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E, ___dragStartPos_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dragStartPos_5() const { return ___dragStartPos_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dragStartPos_5() { return &___dragStartPos_5; }
	inline void set_dragStartPos_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dragStartPos_5 = value;
	}

	inline static int32_t get_offset_of_dragDistance_6() { return static_cast<int32_t>(offsetof(clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E, ___dragDistance_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dragDistance_6() const { return ___dragDistance_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dragDistance_6() { return &___dragDistance_6; }
	inline void set_dragDistance_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dragDistance_6 = value;
	}

	inline static int32_t get_offset_of_dragging_7() { return static_cast<int32_t>(offsetof(clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E, ___dragging_7)); }
	inline bool get_dragging_7() const { return ___dragging_7; }
	inline bool* get_address_of_dragging_7() { return &___dragging_7; }
	inline void set_dragging_7(bool value)
	{
		___dragging_7 = value;
	}

	inline static int32_t get_offset_of_gm_8() { return static_cast<int32_t>(offsetof(clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E, ___gm_8)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_8() const { return ___gm_8; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_8() { return &___gm_8; }
	inline void set_gm_8(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_8), (void*)value);
	}
};


// exitbutton
struct exitbutton_t23A6BB851EDDED5E619E32D6DB56590BE4604123  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject exitbutton::closedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___closedObject_4;
	// UnityEngine.Events.UnityEvent exitbutton::OnExit
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnExit_5;
	// System.Boolean exitbutton::useCustomAction
	bool ___useCustomAction_6;

public:
	inline static int32_t get_offset_of_closedObject_4() { return static_cast<int32_t>(offsetof(exitbutton_t23A6BB851EDDED5E619E32D6DB56590BE4604123, ___closedObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_closedObject_4() const { return ___closedObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_closedObject_4() { return &___closedObject_4; }
	inline void set_closedObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___closedObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closedObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnExit_5() { return static_cast<int32_t>(offsetof(exitbutton_t23A6BB851EDDED5E619E32D6DB56590BE4604123, ___OnExit_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnExit_5() const { return ___OnExit_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnExit_5() { return &___OnExit_5; }
	inline void set_OnExit_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnExit_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnExit_5), (void*)value);
	}

	inline static int32_t get_offset_of_useCustomAction_6() { return static_cast<int32_t>(offsetof(exitbutton_t23A6BB851EDDED5E619E32D6DB56590BE4604123, ___useCustomAction_6)); }
	inline bool get_useCustomAction_6() const { return ___useCustomAction_6; }
	inline bool* get_address_of_useCustomAction_6() { return &___useCustomAction_6; }
	inline void set_useCustomAction_6(bool value)
	{
		___useCustomAction_6 = value;
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


// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_79;
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
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_90;
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
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_97;
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
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_118;
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
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_146;
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_166;
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
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_173;
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
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_199;
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
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextBackingStringDirty_37)); }
	inline bool get_m_IsTextBackingStringDirty_37() const { return ___m_IsTextBackingStringDirty_37; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_37() { return &___m_IsTextBackingStringDirty_37; }
	inline void set_m_IsTextBackingStringDirty_37(bool value)
	{
		___m_IsTextBackingStringDirty_37 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_38)); }
	inline RuntimeObject* get_m_TextPreprocessor_38() const { return ___m_TextPreprocessor_38; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_38() { return &___m_TextPreprocessor_38; }
	inline void set_m_TextPreprocessor_38(RuntimeObject* value)
	{
		___m_TextPreprocessor_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_39)); }
	inline bool get_m_isRightToLeft_39() const { return ___m_isRightToLeft_39; }
	inline bool* get_address_of_m_isRightToLeft_39() { return &___m_isRightToLeft_39; }
	inline void set_m_isRightToLeft_39(bool value)
	{
		___m_isRightToLeft_39 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_40() const { return ___m_fontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_40() { return &___m_fontAsset_40; }
	inline void set_m_fontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_41)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_41() const { return ___m_currentFontAsset_41; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_41() { return &___m_currentFontAsset_41; }
	inline void set_m_currentFontAsset_41(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_42)); }
	inline bool get_m_isSDFShader_42() const { return ___m_isSDFShader_42; }
	inline bool* get_address_of_m_isSDFShader_42() { return &___m_isSDFShader_42; }
	inline void set_m_isSDFShader_42(bool value)
	{
		___m_isSDFShader_42 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_43() const { return ___m_sharedMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_43() { return &___m_sharedMaterial_43; }
	inline void set_m_sharedMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_44() const { return ___m_currentMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_44() { return &___m_currentMaterial_44; }
	inline void set_m_currentMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_48)); }
	inline int32_t get_m_currentMaterialIndex_48() const { return ___m_currentMaterialIndex_48; }
	inline int32_t* get_address_of_m_currentMaterialIndex_48() { return &___m_currentMaterialIndex_48; }
	inline void set_m_currentMaterialIndex_48(int32_t value)
	{
		___m_currentMaterialIndex_48 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_49)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_49() const { return ___m_fontSharedMaterials_49; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_49() { return &___m_fontSharedMaterials_49; }
	inline void set_m_fontSharedMaterials_49(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_50() const { return ___m_fontMaterial_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_50() { return &___m_fontMaterial_50; }
	inline void set_m_fontMaterial_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_51)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_51() const { return ___m_fontMaterials_51; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_51() { return &___m_fontMaterials_51; }
	inline void set_m_fontMaterials_51(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_52)); }
	inline bool get_m_isMaterialDirty_52() const { return ___m_isMaterialDirty_52; }
	inline bool* get_address_of_m_isMaterialDirty_52() { return &___m_isMaterialDirty_52; }
	inline void set_m_isMaterialDirty_52(bool value)
	{
		___m_isMaterialDirty_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_53)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_53() const { return ___m_fontColor32_53; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_53() { return &___m_fontColor32_53; }
	inline void set_m_fontColor32_53(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_54)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_54() const { return ___m_fontColor_54; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_54() { return &___m_fontColor_54; }
	inline void set_m_fontColor_54(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_54 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_56() const { return ___m_underlineColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_56() { return &___m_underlineColor_56; }
	inline void set_m_underlineColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_56 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_57)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_57() const { return ___m_strikethroughColor_57; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_57() { return &___m_strikethroughColor_57; }
	inline void set_m_strikethroughColor_57(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_57 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_58)); }
	inline bool get_m_enableVertexGradient_58() const { return ___m_enableVertexGradient_58; }
	inline bool* get_address_of_m_enableVertexGradient_58() { return &___m_enableVertexGradient_58; }
	inline void set_m_enableVertexGradient_58(bool value)
	{
		___m_enableVertexGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_59)); }
	inline int32_t get_m_colorMode_59() const { return ___m_colorMode_59; }
	inline int32_t* get_address_of_m_colorMode_59() { return &___m_colorMode_59; }
	inline void set_m_colorMode_59(int32_t value)
	{
		___m_colorMode_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_60)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_60() const { return ___m_fontColorGradient_60; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_60() { return &___m_fontColorGradient_60; }
	inline void set_m_fontColorGradient_60(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_60 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_61)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_61() const { return ___m_fontColorGradientPreset_61; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_61() { return &___m_fontColorGradientPreset_61; }
	inline void set_m_fontColorGradientPreset_61(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_62)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_62() const { return ___m_spriteAsset_62; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_62() { return &___m_spriteAsset_62; }
	inline void set_m_spriteAsset_62(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_63)); }
	inline bool get_m_tintAllSprites_63() const { return ___m_tintAllSprites_63; }
	inline bool* get_address_of_m_tintAllSprites_63() { return &___m_tintAllSprites_63; }
	inline void set_m_tintAllSprites_63(bool value)
	{
		___m_tintAllSprites_63 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_64)); }
	inline bool get_m_tintSprite_64() const { return ___m_tintSprite_64; }
	inline bool* get_address_of_m_tintSprite_64() { return &___m_tintSprite_64; }
	inline void set_m_tintSprite_64(bool value)
	{
		___m_tintSprite_64 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_65)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_65() const { return ___m_spriteColor_65; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_65() { return &___m_spriteColor_65; }
	inline void set_m_spriteColor_65(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_65 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_66)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_66() const { return ___m_StyleSheet_66; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_66() { return &___m_StyleSheet_66; }
	inline void set_m_StyleSheet_66(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_67)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_67() const { return ___m_TextStyle_67; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_67() { return &___m_TextStyle_67; }
	inline void set_m_TextStyle_67(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_68)); }
	inline int32_t get_m_TextStyleHashCode_68() const { return ___m_TextStyleHashCode_68; }
	inline int32_t* get_address_of_m_TextStyleHashCode_68() { return &___m_TextStyleHashCode_68; }
	inline void set_m_TextStyleHashCode_68(int32_t value)
	{
		___m_TextStyleHashCode_68 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_69)); }
	inline bool get_m_overrideHtmlColors_69() const { return ___m_overrideHtmlColors_69; }
	inline bool* get_address_of_m_overrideHtmlColors_69() { return &___m_overrideHtmlColors_69; }
	inline void set_m_overrideHtmlColors_69(bool value)
	{
		___m_overrideHtmlColors_69 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_70() const { return ___m_faceColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_70() { return &___m_faceColor_70; }
	inline void set_m_faceColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_71)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_71() const { return ___m_outlineColor_71; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_71() { return &___m_outlineColor_71; }
	inline void set_m_outlineColor_71(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_71 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_72)); }
	inline float get_m_outlineWidth_72() const { return ___m_outlineWidth_72; }
	inline float* get_address_of_m_outlineWidth_72() { return &___m_outlineWidth_72; }
	inline void set_m_outlineWidth_72(float value)
	{
		___m_outlineWidth_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_73)); }
	inline float get_m_fontSize_73() const { return ___m_fontSize_73; }
	inline float* get_address_of_m_fontSize_73() { return &___m_fontSize_73; }
	inline void set_m_fontSize_73(float value)
	{
		___m_fontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_74)); }
	inline float get_m_currentFontSize_74() const { return ___m_currentFontSize_74; }
	inline float* get_address_of_m_currentFontSize_74() { return &___m_currentFontSize_74; }
	inline void set_m_currentFontSize_74(float value)
	{
		___m_currentFontSize_74 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_75)); }
	inline float get_m_fontSizeBase_75() const { return ___m_fontSizeBase_75; }
	inline float* get_address_of_m_fontSizeBase_75() { return &___m_fontSizeBase_75; }
	inline void set_m_fontSizeBase_75(float value)
	{
		___m_fontSizeBase_75 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_76)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_76() const { return ___m_sizeStack_76; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_76() { return &___m_sizeStack_76; }
	inline void set_m_sizeStack_76(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_76 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_76))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_77)); }
	inline int32_t get_m_fontWeight_77() const { return ___m_fontWeight_77; }
	inline int32_t* get_address_of_m_fontWeight_77() { return &___m_fontWeight_77; }
	inline void set_m_fontWeight_77(int32_t value)
	{
		___m_fontWeight_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_78)); }
	inline int32_t get_m_FontWeightInternal_78() const { return ___m_FontWeightInternal_78; }
	inline int32_t* get_address_of_m_FontWeightInternal_78() { return &___m_FontWeightInternal_78; }
	inline void set_m_FontWeightInternal_78(int32_t value)
	{
		___m_FontWeightInternal_78 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_79)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_79() const { return ___m_FontWeightStack_79; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_79() { return &___m_FontWeightStack_79; }
	inline void set_m_FontWeightStack_79(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_79 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_79))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_80)); }
	inline bool get_m_enableAutoSizing_80() const { return ___m_enableAutoSizing_80; }
	inline bool* get_address_of_m_enableAutoSizing_80() { return &___m_enableAutoSizing_80; }
	inline void set_m_enableAutoSizing_80(bool value)
	{
		___m_enableAutoSizing_80 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_81)); }
	inline float get_m_maxFontSize_81() const { return ___m_maxFontSize_81; }
	inline float* get_address_of_m_maxFontSize_81() { return &___m_maxFontSize_81; }
	inline void set_m_maxFontSize_81(float value)
	{
		___m_maxFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_82)); }
	inline float get_m_minFontSize_82() const { return ___m_minFontSize_82; }
	inline float* get_address_of_m_minFontSize_82() { return &___m_minFontSize_82; }
	inline void set_m_minFontSize_82(float value)
	{
		___m_minFontSize_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_83)); }
	inline int32_t get_m_AutoSizeIterationCount_83() const { return ___m_AutoSizeIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_83() { return &___m_AutoSizeIterationCount_83; }
	inline void set_m_AutoSizeIterationCount_83(int32_t value)
	{
		___m_AutoSizeIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_84)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_84() const { return ___m_AutoSizeMaxIterationCount_84; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_84() { return &___m_AutoSizeMaxIterationCount_84; }
	inline void set_m_AutoSizeMaxIterationCount_84(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_84 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_85)); }
	inline bool get_m_IsAutoSizePointSizeSet_85() const { return ___m_IsAutoSizePointSizeSet_85; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_85() { return &___m_IsAutoSizePointSizeSet_85; }
	inline void set_m_IsAutoSizePointSizeSet_85(bool value)
	{
		___m_IsAutoSizePointSizeSet_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_86)); }
	inline float get_m_fontSizeMin_86() const { return ___m_fontSizeMin_86; }
	inline float* get_address_of_m_fontSizeMin_86() { return &___m_fontSizeMin_86; }
	inline void set_m_fontSizeMin_86(float value)
	{
		___m_fontSizeMin_86 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_87)); }
	inline float get_m_fontSizeMax_87() const { return ___m_fontSizeMax_87; }
	inline float* get_address_of_m_fontSizeMax_87() { return &___m_fontSizeMax_87; }
	inline void set_m_fontSizeMax_87(float value)
	{
		___m_fontSizeMax_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_88)); }
	inline int32_t get_m_fontStyle_88() const { return ___m_fontStyle_88; }
	inline int32_t* get_address_of_m_fontStyle_88() { return &___m_fontStyle_88; }
	inline void set_m_fontStyle_88(int32_t value)
	{
		___m_fontStyle_88 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_89)); }
	inline int32_t get_m_FontStyleInternal_89() const { return ___m_FontStyleInternal_89; }
	inline int32_t* get_address_of_m_FontStyleInternal_89() { return &___m_FontStyleInternal_89; }
	inline void set_m_FontStyleInternal_89(int32_t value)
	{
		___m_FontStyleInternal_89 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_90)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_90() const { return ___m_fontStyleStack_90; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_90() { return &___m_fontStyleStack_90; }
	inline void set_m_fontStyleStack_90(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_90 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_91)); }
	inline bool get_m_isUsingBold_91() const { return ___m_isUsingBold_91; }
	inline bool* get_address_of_m_isUsingBold_91() { return &___m_isUsingBold_91; }
	inline void set_m_isUsingBold_91(bool value)
	{
		___m_isUsingBold_91 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_92)); }
	inline int32_t get_m_HorizontalAlignment_92() const { return ___m_HorizontalAlignment_92; }
	inline int32_t* get_address_of_m_HorizontalAlignment_92() { return &___m_HorizontalAlignment_92; }
	inline void set_m_HorizontalAlignment_92(int32_t value)
	{
		___m_HorizontalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_93)); }
	inline int32_t get_m_VerticalAlignment_93() const { return ___m_VerticalAlignment_93; }
	inline int32_t* get_address_of_m_VerticalAlignment_93() { return &___m_VerticalAlignment_93; }
	inline void set_m_VerticalAlignment_93(int32_t value)
	{
		___m_VerticalAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_94)); }
	inline int32_t get_m_textAlignment_94() const { return ___m_textAlignment_94; }
	inline int32_t* get_address_of_m_textAlignment_94() { return &___m_textAlignment_94; }
	inline void set_m_textAlignment_94(int32_t value)
	{
		___m_textAlignment_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_95)); }
	inline int32_t get_m_lineJustification_95() const { return ___m_lineJustification_95; }
	inline int32_t* get_address_of_m_lineJustification_95() { return &___m_lineJustification_95; }
	inline void set_m_lineJustification_95(int32_t value)
	{
		___m_lineJustification_95 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_96)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_96() const { return ___m_lineJustificationStack_96; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_96() { return &___m_lineJustificationStack_96; }
	inline void set_m_lineJustificationStack_96(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_96 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_96))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_97)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_97() const { return ___m_textContainerLocalCorners_97; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_97() { return &___m_textContainerLocalCorners_97; }
	inline void set_m_textContainerLocalCorners_97(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_97), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_98)); }
	inline float get_m_characterSpacing_98() const { return ___m_characterSpacing_98; }
	inline float* get_address_of_m_characterSpacing_98() { return &___m_characterSpacing_98; }
	inline void set_m_characterSpacing_98(float value)
	{
		___m_characterSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_99)); }
	inline float get_m_cSpacing_99() const { return ___m_cSpacing_99; }
	inline float* get_address_of_m_cSpacing_99() { return &___m_cSpacing_99; }
	inline void set_m_cSpacing_99(float value)
	{
		___m_cSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_100)); }
	inline float get_m_monoSpacing_100() const { return ___m_monoSpacing_100; }
	inline float* get_address_of_m_monoSpacing_100() { return &___m_monoSpacing_100; }
	inline void set_m_monoSpacing_100(float value)
	{
		___m_monoSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_101)); }
	inline float get_m_wordSpacing_101() const { return ___m_wordSpacing_101; }
	inline float* get_address_of_m_wordSpacing_101() { return &___m_wordSpacing_101; }
	inline void set_m_wordSpacing_101(float value)
	{
		___m_wordSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_102)); }
	inline float get_m_lineSpacing_102() const { return ___m_lineSpacing_102; }
	inline float* get_address_of_m_lineSpacing_102() { return &___m_lineSpacing_102; }
	inline void set_m_lineSpacing_102(float value)
	{
		___m_lineSpacing_102 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_103)); }
	inline float get_m_lineSpacingDelta_103() const { return ___m_lineSpacingDelta_103; }
	inline float* get_address_of_m_lineSpacingDelta_103() { return &___m_lineSpacingDelta_103; }
	inline void set_m_lineSpacingDelta_103(float value)
	{
		___m_lineSpacingDelta_103 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_104)); }
	inline float get_m_lineHeight_104() const { return ___m_lineHeight_104; }
	inline float* get_address_of_m_lineHeight_104() { return &___m_lineHeight_104; }
	inline void set_m_lineHeight_104(float value)
	{
		___m_lineHeight_104 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_105)); }
	inline bool get_m_IsDrivenLineSpacing_105() const { return ___m_IsDrivenLineSpacing_105; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_105() { return &___m_IsDrivenLineSpacing_105; }
	inline void set_m_IsDrivenLineSpacing_105(bool value)
	{
		___m_IsDrivenLineSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_106)); }
	inline float get_m_lineSpacingMax_106() const { return ___m_lineSpacingMax_106; }
	inline float* get_address_of_m_lineSpacingMax_106() { return &___m_lineSpacingMax_106; }
	inline void set_m_lineSpacingMax_106(float value)
	{
		___m_lineSpacingMax_106 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_107)); }
	inline float get_m_paragraphSpacing_107() const { return ___m_paragraphSpacing_107; }
	inline float* get_address_of_m_paragraphSpacing_107() { return &___m_paragraphSpacing_107; }
	inline void set_m_paragraphSpacing_107(float value)
	{
		___m_paragraphSpacing_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_108)); }
	inline float get_m_charWidthMaxAdj_108() const { return ___m_charWidthMaxAdj_108; }
	inline float* get_address_of_m_charWidthMaxAdj_108() { return &___m_charWidthMaxAdj_108; }
	inline void set_m_charWidthMaxAdj_108(float value)
	{
		___m_charWidthMaxAdj_108 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_109)); }
	inline float get_m_charWidthAdjDelta_109() const { return ___m_charWidthAdjDelta_109; }
	inline float* get_address_of_m_charWidthAdjDelta_109() { return &___m_charWidthAdjDelta_109; }
	inline void set_m_charWidthAdjDelta_109(float value)
	{
		___m_charWidthAdjDelta_109 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_110)); }
	inline bool get_m_enableWordWrapping_110() const { return ___m_enableWordWrapping_110; }
	inline bool* get_address_of_m_enableWordWrapping_110() { return &___m_enableWordWrapping_110; }
	inline void set_m_enableWordWrapping_110(bool value)
	{
		___m_enableWordWrapping_110 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_111)); }
	inline bool get_m_isCharacterWrappingEnabled_111() const { return ___m_isCharacterWrappingEnabled_111; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_111() { return &___m_isCharacterWrappingEnabled_111; }
	inline void set_m_isCharacterWrappingEnabled_111(bool value)
	{
		___m_isCharacterWrappingEnabled_111 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_112)); }
	inline bool get_m_isNonBreakingSpace_112() const { return ___m_isNonBreakingSpace_112; }
	inline bool* get_address_of_m_isNonBreakingSpace_112() { return &___m_isNonBreakingSpace_112; }
	inline void set_m_isNonBreakingSpace_112(bool value)
	{
		___m_isNonBreakingSpace_112 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_113)); }
	inline bool get_m_isIgnoringAlignment_113() const { return ___m_isIgnoringAlignment_113; }
	inline bool* get_address_of_m_isIgnoringAlignment_113() { return &___m_isIgnoringAlignment_113; }
	inline void set_m_isIgnoringAlignment_113(bool value)
	{
		___m_isIgnoringAlignment_113 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_114)); }
	inline float get_m_wordWrappingRatios_114() const { return ___m_wordWrappingRatios_114; }
	inline float* get_address_of_m_wordWrappingRatios_114() { return &___m_wordWrappingRatios_114; }
	inline void set_m_wordWrappingRatios_114(float value)
	{
		___m_wordWrappingRatios_114 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_115)); }
	inline int32_t get_m_overflowMode_115() const { return ___m_overflowMode_115; }
	inline int32_t* get_address_of_m_overflowMode_115() { return &___m_overflowMode_115; }
	inline void set_m_overflowMode_115(int32_t value)
	{
		___m_overflowMode_115 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_116)); }
	inline int32_t get_m_firstOverflowCharacterIndex_116() const { return ___m_firstOverflowCharacterIndex_116; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_116() { return &___m_firstOverflowCharacterIndex_116; }
	inline void set_m_firstOverflowCharacterIndex_116(int32_t value)
	{
		___m_firstOverflowCharacterIndex_116 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_117() const { return ___m_linkedTextComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_117() { return &___m_linkedTextComponent_117; }
	inline void set_m_linkedTextComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_118)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_118() const { return ___parentLinkedComponent_118; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_118() { return &___parentLinkedComponent_118; }
	inline void set_parentLinkedComponent_118(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_118), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_119)); }
	inline bool get_m_isTextTruncated_119() const { return ___m_isTextTruncated_119; }
	inline bool* get_address_of_m_isTextTruncated_119() { return &___m_isTextTruncated_119; }
	inline void set_m_isTextTruncated_119(bool value)
	{
		___m_isTextTruncated_119 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_120)); }
	inline bool get_m_enableKerning_120() const { return ___m_enableKerning_120; }
	inline bool* get_address_of_m_enableKerning_120() { return &___m_enableKerning_120; }
	inline void set_m_enableKerning_120(bool value)
	{
		___m_enableKerning_120 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_121)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_121() const { return ___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_121() { return &___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_121(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_121 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_122)); }
	inline bool get_m_enableExtraPadding_122() const { return ___m_enableExtraPadding_122; }
	inline bool* get_address_of_m_enableExtraPadding_122() { return &___m_enableExtraPadding_122; }
	inline void set_m_enableExtraPadding_122(bool value)
	{
		___m_enableExtraPadding_122 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_123)); }
	inline bool get_checkPaddingRequired_123() const { return ___checkPaddingRequired_123; }
	inline bool* get_address_of_checkPaddingRequired_123() { return &___checkPaddingRequired_123; }
	inline void set_checkPaddingRequired_123(bool value)
	{
		___checkPaddingRequired_123 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_124)); }
	inline bool get_m_isRichText_124() const { return ___m_isRichText_124; }
	inline bool* get_address_of_m_isRichText_124() { return &___m_isRichText_124; }
	inline void set_m_isRichText_124(bool value)
	{
		___m_isRichText_124 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_125)); }
	inline bool get_m_parseCtrlCharacters_125() const { return ___m_parseCtrlCharacters_125; }
	inline bool* get_address_of_m_parseCtrlCharacters_125() { return &___m_parseCtrlCharacters_125; }
	inline void set_m_parseCtrlCharacters_125(bool value)
	{
		___m_parseCtrlCharacters_125 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_126)); }
	inline bool get_m_isOverlay_126() const { return ___m_isOverlay_126; }
	inline bool* get_address_of_m_isOverlay_126() { return &___m_isOverlay_126; }
	inline void set_m_isOverlay_126(bool value)
	{
		___m_isOverlay_126 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_127)); }
	inline bool get_m_isOrthographic_127() const { return ___m_isOrthographic_127; }
	inline bool* get_address_of_m_isOrthographic_127() { return &___m_isOrthographic_127; }
	inline void set_m_isOrthographic_127(bool value)
	{
		___m_isOrthographic_127 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_128)); }
	inline bool get_m_isCullingEnabled_128() const { return ___m_isCullingEnabled_128; }
	inline bool* get_address_of_m_isCullingEnabled_128() { return &___m_isCullingEnabled_128; }
	inline void set_m_isCullingEnabled_128(bool value)
	{
		___m_isCullingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_129)); }
	inline bool get_m_isMaskingEnabled_129() const { return ___m_isMaskingEnabled_129; }
	inline bool* get_address_of_m_isMaskingEnabled_129() { return &___m_isMaskingEnabled_129; }
	inline void set_m_isMaskingEnabled_129(bool value)
	{
		___m_isMaskingEnabled_129 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_130)); }
	inline bool get_isMaskUpdateRequired_130() const { return ___isMaskUpdateRequired_130; }
	inline bool* get_address_of_isMaskUpdateRequired_130() { return &___isMaskUpdateRequired_130; }
	inline void set_isMaskUpdateRequired_130(bool value)
	{
		___isMaskUpdateRequired_130 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_131)); }
	inline bool get_m_ignoreCulling_131() const { return ___m_ignoreCulling_131; }
	inline bool* get_address_of_m_ignoreCulling_131() { return &___m_ignoreCulling_131; }
	inline void set_m_ignoreCulling_131(bool value)
	{
		___m_ignoreCulling_131 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_132)); }
	inline int32_t get_m_horizontalMapping_132() const { return ___m_horizontalMapping_132; }
	inline int32_t* get_address_of_m_horizontalMapping_132() { return &___m_horizontalMapping_132; }
	inline void set_m_horizontalMapping_132(int32_t value)
	{
		___m_horizontalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_133)); }
	inline int32_t get_m_verticalMapping_133() const { return ___m_verticalMapping_133; }
	inline int32_t* get_address_of_m_verticalMapping_133() { return &___m_verticalMapping_133; }
	inline void set_m_verticalMapping_133(int32_t value)
	{
		___m_verticalMapping_133 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_134)); }
	inline float get_m_uvLineOffset_134() const { return ___m_uvLineOffset_134; }
	inline float* get_address_of_m_uvLineOffset_134() { return &___m_uvLineOffset_134; }
	inline void set_m_uvLineOffset_134(float value)
	{
		___m_uvLineOffset_134 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_135)); }
	inline int32_t get_m_renderMode_135() const { return ___m_renderMode_135; }
	inline int32_t* get_address_of_m_renderMode_135() { return &___m_renderMode_135; }
	inline void set_m_renderMode_135(int32_t value)
	{
		___m_renderMode_135 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_136)); }
	inline int32_t get_m_geometrySortingOrder_136() const { return ___m_geometrySortingOrder_136; }
	inline int32_t* get_address_of_m_geometrySortingOrder_136() { return &___m_geometrySortingOrder_136; }
	inline void set_m_geometrySortingOrder_136(int32_t value)
	{
		___m_geometrySortingOrder_136 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_137)); }
	inline bool get_m_IsTextObjectScaleStatic_137() const { return ___m_IsTextObjectScaleStatic_137; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_137() { return &___m_IsTextObjectScaleStatic_137; }
	inline void set_m_IsTextObjectScaleStatic_137(bool value)
	{
		___m_IsTextObjectScaleStatic_137 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_138)); }
	inline bool get_m_VertexBufferAutoSizeReduction_138() const { return ___m_VertexBufferAutoSizeReduction_138; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_138() { return &___m_VertexBufferAutoSizeReduction_138; }
	inline void set_m_VertexBufferAutoSizeReduction_138(bool value)
	{
		___m_VertexBufferAutoSizeReduction_138 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_139)); }
	inline int32_t get_m_firstVisibleCharacter_139() const { return ___m_firstVisibleCharacter_139; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_139() { return &___m_firstVisibleCharacter_139; }
	inline void set_m_firstVisibleCharacter_139(int32_t value)
	{
		___m_firstVisibleCharacter_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_140)); }
	inline int32_t get_m_maxVisibleCharacters_140() const { return ___m_maxVisibleCharacters_140; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_140() { return &___m_maxVisibleCharacters_140; }
	inline void set_m_maxVisibleCharacters_140(int32_t value)
	{
		___m_maxVisibleCharacters_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_141)); }
	inline int32_t get_m_maxVisibleWords_141() const { return ___m_maxVisibleWords_141; }
	inline int32_t* get_address_of_m_maxVisibleWords_141() { return &___m_maxVisibleWords_141; }
	inline void set_m_maxVisibleWords_141(int32_t value)
	{
		___m_maxVisibleWords_141 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_142)); }
	inline int32_t get_m_maxVisibleLines_142() const { return ___m_maxVisibleLines_142; }
	inline int32_t* get_address_of_m_maxVisibleLines_142() { return &___m_maxVisibleLines_142; }
	inline void set_m_maxVisibleLines_142(int32_t value)
	{
		___m_maxVisibleLines_142 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_143)); }
	inline bool get_m_useMaxVisibleDescender_143() const { return ___m_useMaxVisibleDescender_143; }
	inline bool* get_address_of_m_useMaxVisibleDescender_143() { return &___m_useMaxVisibleDescender_143; }
	inline void set_m_useMaxVisibleDescender_143(bool value)
	{
		___m_useMaxVisibleDescender_143 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_144)); }
	inline int32_t get_m_pageToDisplay_144() const { return ___m_pageToDisplay_144; }
	inline int32_t* get_address_of_m_pageToDisplay_144() { return &___m_pageToDisplay_144; }
	inline void set_m_pageToDisplay_144(int32_t value)
	{
		___m_pageToDisplay_144 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_145)); }
	inline bool get_m_isNewPage_145() const { return ___m_isNewPage_145; }
	inline bool* get_address_of_m_isNewPage_145() { return &___m_isNewPage_145; }
	inline void set_m_isNewPage_145(bool value)
	{
		___m_isNewPage_145 = value;
	}

	inline static int32_t get_offset_of_m_margin_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_146)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_146() const { return ___m_margin_146; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_146() { return &___m_margin_146; }
	inline void set_m_margin_146(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_146 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_147)); }
	inline float get_m_marginLeft_147() const { return ___m_marginLeft_147; }
	inline float* get_address_of_m_marginLeft_147() { return &___m_marginLeft_147; }
	inline void set_m_marginLeft_147(float value)
	{
		___m_marginLeft_147 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_148)); }
	inline float get_m_marginRight_148() const { return ___m_marginRight_148; }
	inline float* get_address_of_m_marginRight_148() { return &___m_marginRight_148; }
	inline void set_m_marginRight_148(float value)
	{
		___m_marginRight_148 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_149)); }
	inline float get_m_marginWidth_149() const { return ___m_marginWidth_149; }
	inline float* get_address_of_m_marginWidth_149() { return &___m_marginWidth_149; }
	inline void set_m_marginWidth_149(float value)
	{
		___m_marginWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_150)); }
	inline float get_m_marginHeight_150() const { return ___m_marginHeight_150; }
	inline float* get_address_of_m_marginHeight_150() { return &___m_marginHeight_150; }
	inline void set_m_marginHeight_150(float value)
	{
		___m_marginHeight_150 = value;
	}

	inline static int32_t get_offset_of_m_width_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_151)); }
	inline float get_m_width_151() const { return ___m_width_151; }
	inline float* get_address_of_m_width_151() { return &___m_width_151; }
	inline void set_m_width_151(float value)
	{
		___m_width_151 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_152)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_152() const { return ___m_textInfo_152; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_152() { return &___m_textInfo_152; }
	inline void set_m_textInfo_152(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_152), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_153)); }
	inline bool get_m_havePropertiesChanged_153() const { return ___m_havePropertiesChanged_153; }
	inline bool* get_address_of_m_havePropertiesChanged_153() { return &___m_havePropertiesChanged_153; }
	inline void set_m_havePropertiesChanged_153(bool value)
	{
		___m_havePropertiesChanged_153 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_154)); }
	inline bool get_m_isUsingLegacyAnimationComponent_154() const { return ___m_isUsingLegacyAnimationComponent_154; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_154() { return &___m_isUsingLegacyAnimationComponent_154; }
	inline void set_m_isUsingLegacyAnimationComponent_154(bool value)
	{
		___m_isUsingLegacyAnimationComponent_154 = value;
	}

	inline static int32_t get_offset_of_m_transform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_155)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_155() const { return ___m_transform_155; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_155() { return &___m_transform_155; }
	inline void set_m_transform_155(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_156)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_156() const { return ___m_rectTransform_156; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_156() { return &___m_rectTransform_156; }
	inline void set_m_rectTransform_156(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_156), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_157() const { return ___m_PreviousRectTransformSize_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_157() { return &___m_PreviousRectTransformSize_157; }
	inline void set_m_PreviousRectTransformSize_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_157 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_158)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_158() const { return ___m_PreviousPivotPosition_158; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_158() { return &___m_PreviousPivotPosition_158; }
	inline void set_m_PreviousPivotPosition_158(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_158 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_159)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_159() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return &___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_159(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_159 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_160)); }
	inline bool get_m_autoSizeTextContainer_160() const { return ___m_autoSizeTextContainer_160; }
	inline bool* get_address_of_m_autoSizeTextContainer_160() { return &___m_autoSizeTextContainer_160; }
	inline void set_m_autoSizeTextContainer_160(bool value)
	{
		___m_autoSizeTextContainer_160 = value;
	}

	inline static int32_t get_offset_of_m_mesh_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_161)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_161() const { return ___m_mesh_161; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_161() { return &___m_mesh_161; }
	inline void set_m_mesh_161(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_161), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_162)); }
	inline bool get_m_isVolumetricText_162() const { return ___m_isVolumetricText_162; }
	inline bool* get_address_of_m_isVolumetricText_162() { return &___m_isVolumetricText_162; }
	inline void set_m_isVolumetricText_162(bool value)
	{
		___m_isVolumetricText_162 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_165)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_165() const { return ___OnPreRenderText_165; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_165() { return &___OnPreRenderText_165; }
	inline void set_OnPreRenderText_165(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_166)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_166() const { return ___m_spriteAnimator_166; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_166() { return &___m_spriteAnimator_166; }
	inline void set_m_spriteAnimator_166(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_166 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_166), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_167)); }
	inline float get_m_flexibleHeight_167() const { return ___m_flexibleHeight_167; }
	inline float* get_address_of_m_flexibleHeight_167() { return &___m_flexibleHeight_167; }
	inline void set_m_flexibleHeight_167(float value)
	{
		___m_flexibleHeight_167 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_168)); }
	inline float get_m_flexibleWidth_168() const { return ___m_flexibleWidth_168; }
	inline float* get_address_of_m_flexibleWidth_168() { return &___m_flexibleWidth_168; }
	inline void set_m_flexibleWidth_168(float value)
	{
		___m_flexibleWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_169)); }
	inline float get_m_minWidth_169() const { return ___m_minWidth_169; }
	inline float* get_address_of_m_minWidth_169() { return &___m_minWidth_169; }
	inline void set_m_minWidth_169(float value)
	{
		___m_minWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_170)); }
	inline float get_m_minHeight_170() const { return ___m_minHeight_170; }
	inline float* get_address_of_m_minHeight_170() { return &___m_minHeight_170; }
	inline void set_m_minHeight_170(float value)
	{
		___m_minHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_171)); }
	inline float get_m_maxWidth_171() const { return ___m_maxWidth_171; }
	inline float* get_address_of_m_maxWidth_171() { return &___m_maxWidth_171; }
	inline void set_m_maxWidth_171(float value)
	{
		___m_maxWidth_171 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_172)); }
	inline float get_m_maxHeight_172() const { return ___m_maxHeight_172; }
	inline float* get_address_of_m_maxHeight_172() { return &___m_maxHeight_172; }
	inline void set_m_maxHeight_172(float value)
	{
		___m_maxHeight_172 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_173)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_173() const { return ___m_LayoutElement_173; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_173() { return &___m_LayoutElement_173; }
	inline void set_m_LayoutElement_173(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_173 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_173), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_174)); }
	inline float get_m_preferredWidth_174() const { return ___m_preferredWidth_174; }
	inline float* get_address_of_m_preferredWidth_174() { return &___m_preferredWidth_174; }
	inline void set_m_preferredWidth_174(float value)
	{
		___m_preferredWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_175)); }
	inline float get_m_renderedWidth_175() const { return ___m_renderedWidth_175; }
	inline float* get_address_of_m_renderedWidth_175() { return &___m_renderedWidth_175; }
	inline void set_m_renderedWidth_175(float value)
	{
		___m_renderedWidth_175 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_176)); }
	inline bool get_m_isPreferredWidthDirty_176() const { return ___m_isPreferredWidthDirty_176; }
	inline bool* get_address_of_m_isPreferredWidthDirty_176() { return &___m_isPreferredWidthDirty_176; }
	inline void set_m_isPreferredWidthDirty_176(bool value)
	{
		___m_isPreferredWidthDirty_176 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_177)); }
	inline float get_m_preferredHeight_177() const { return ___m_preferredHeight_177; }
	inline float* get_address_of_m_preferredHeight_177() { return &___m_preferredHeight_177; }
	inline void set_m_preferredHeight_177(float value)
	{
		___m_preferredHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_178)); }
	inline float get_m_renderedHeight_178() const { return ___m_renderedHeight_178; }
	inline float* get_address_of_m_renderedHeight_178() { return &___m_renderedHeight_178; }
	inline void set_m_renderedHeight_178(float value)
	{
		___m_renderedHeight_178 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_179)); }
	inline bool get_m_isPreferredHeightDirty_179() const { return ___m_isPreferredHeightDirty_179; }
	inline bool* get_address_of_m_isPreferredHeightDirty_179() { return &___m_isPreferredHeightDirty_179; }
	inline void set_m_isPreferredHeightDirty_179(bool value)
	{
		___m_isPreferredHeightDirty_179 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_180)); }
	inline bool get_m_isCalculatingPreferredValues_180() const { return ___m_isCalculatingPreferredValues_180; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_180() { return &___m_isCalculatingPreferredValues_180; }
	inline void set_m_isCalculatingPreferredValues_180(bool value)
	{
		___m_isCalculatingPreferredValues_180 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_181)); }
	inline int32_t get_m_layoutPriority_181() const { return ___m_layoutPriority_181; }
	inline int32_t* get_address_of_m_layoutPriority_181() { return &___m_layoutPriority_181; }
	inline void set_m_layoutPriority_181(int32_t value)
	{
		___m_layoutPriority_181 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_182)); }
	inline bool get_m_isLayoutDirty_182() const { return ___m_isLayoutDirty_182; }
	inline bool* get_address_of_m_isLayoutDirty_182() { return &___m_isLayoutDirty_182; }
	inline void set_m_isLayoutDirty_182(bool value)
	{
		___m_isLayoutDirty_182 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_183)); }
	inline bool get_m_isAwake_183() const { return ___m_isAwake_183; }
	inline bool* get_address_of_m_isAwake_183() { return &___m_isAwake_183; }
	inline void set_m_isAwake_183(bool value)
	{
		___m_isAwake_183 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_184)); }
	inline bool get_m_isWaitingOnResourceLoad_184() const { return ___m_isWaitingOnResourceLoad_184; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_184() { return &___m_isWaitingOnResourceLoad_184; }
	inline void set_m_isWaitingOnResourceLoad_184(bool value)
	{
		___m_isWaitingOnResourceLoad_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_186)); }
	inline float get_m_fontScaleMultiplier_186() const { return ___m_fontScaleMultiplier_186; }
	inline float* get_address_of_m_fontScaleMultiplier_186() { return &___m_fontScaleMultiplier_186; }
	inline void set_m_fontScaleMultiplier_186(float value)
	{
		___m_fontScaleMultiplier_186 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_190)); }
	inline float get_tag_LineIndent_190() const { return ___tag_LineIndent_190; }
	inline float* get_address_of_tag_LineIndent_190() { return &___tag_LineIndent_190; }
	inline void set_tag_LineIndent_190(float value)
	{
		___tag_LineIndent_190 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_191)); }
	inline float get_tag_Indent_191() const { return ___tag_Indent_191; }
	inline float* get_address_of_tag_Indent_191() { return &___tag_Indent_191; }
	inline void set_tag_Indent_191(float value)
	{
		___tag_Indent_191 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_192)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_192() const { return ___m_indentStack_192; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_192() { return &___m_indentStack_192; }
	inline void set_m_indentStack_192(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_192))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_193)); }
	inline bool get_tag_NoParsing_193() const { return ___tag_NoParsing_193; }
	inline bool* get_address_of_tag_NoParsing_193() { return &___tag_NoParsing_193; }
	inline void set_tag_NoParsing_193(bool value)
	{
		___tag_NoParsing_193 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_194)); }
	inline bool get_m_isParsingText_194() const { return ___m_isParsingText_194; }
	inline bool* get_address_of_m_isParsingText_194() { return &___m_isParsingText_194; }
	inline void set_m_isParsingText_194(bool value)
	{
		___m_isParsingText_194 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_195)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_195() const { return ___m_FXMatrix_195; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_195() { return &___m_FXMatrix_195; }
	inline void set_m_FXMatrix_195(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_195 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_196)); }
	inline bool get_m_isFXMatrixSet_196() const { return ___m_isFXMatrixSet_196; }
	inline bool* get_address_of_m_isFXMatrixSet_196() { return &___m_isFXMatrixSet_196; }
	inline void set_m_isFXMatrixSet_196(bool value)
	{
		___m_isFXMatrixSet_196 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextProcessingArray_197)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextProcessingArray_197() const { return ___m_TextProcessingArray_197; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextProcessingArray_197() { return &___m_TextProcessingArray_197; }
	inline void set_m_TextProcessingArray_197(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextProcessingArray_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalTextProcessingArraySize_198)); }
	inline int32_t get_m_InternalTextProcessingArraySize_198() const { return ___m_InternalTextProcessingArraySize_198; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_198() { return &___m_InternalTextProcessingArraySize_198; }
	inline void set_m_InternalTextProcessingArraySize_198(int32_t value)
	{
		___m_InternalTextProcessingArraySize_198 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_199)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_199() const { return ___m_internalCharacterInfo_199; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_199() { return &___m_internalCharacterInfo_199; }
	inline void set_m_internalCharacterInfo_199(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_200)); }
	inline int32_t get_m_totalCharacterCount_200() const { return ___m_totalCharacterCount_200; }
	inline int32_t* get_address_of_m_totalCharacterCount_200() { return &___m_totalCharacterCount_200; }
	inline void set_m_totalCharacterCount_200(int32_t value)
	{
		___m_totalCharacterCount_200 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_207)); }
	inline int32_t get_m_characterCount_207() const { return ___m_characterCount_207; }
	inline int32_t* get_address_of_m_characterCount_207() { return &___m_characterCount_207; }
	inline void set_m_characterCount_207(int32_t value)
	{
		___m_characterCount_207 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_208)); }
	inline int32_t get_m_firstCharacterOfLine_208() const { return ___m_firstCharacterOfLine_208; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_208() { return &___m_firstCharacterOfLine_208; }
	inline void set_m_firstCharacterOfLine_208(int32_t value)
	{
		___m_firstCharacterOfLine_208 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_209)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_209() const { return ___m_firstVisibleCharacterOfLine_209; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_209() { return &___m_firstVisibleCharacterOfLine_209; }
	inline void set_m_firstVisibleCharacterOfLine_209(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_210)); }
	inline int32_t get_m_lastCharacterOfLine_210() const { return ___m_lastCharacterOfLine_210; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_210() { return &___m_lastCharacterOfLine_210; }
	inline void set_m_lastCharacterOfLine_210(int32_t value)
	{
		___m_lastCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_211)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_211() const { return ___m_lastVisibleCharacterOfLine_211; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_211() { return &___m_lastVisibleCharacterOfLine_211; }
	inline void set_m_lastVisibleCharacterOfLine_211(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_212)); }
	inline int32_t get_m_lineNumber_212() const { return ___m_lineNumber_212; }
	inline int32_t* get_address_of_m_lineNumber_212() { return &___m_lineNumber_212; }
	inline void set_m_lineNumber_212(int32_t value)
	{
		___m_lineNumber_212 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_213)); }
	inline int32_t get_m_lineVisibleCharacterCount_213() const { return ___m_lineVisibleCharacterCount_213; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_213() { return &___m_lineVisibleCharacterCount_213; }
	inline void set_m_lineVisibleCharacterCount_213(int32_t value)
	{
		___m_lineVisibleCharacterCount_213 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_214)); }
	inline int32_t get_m_pageNumber_214() const { return ___m_pageNumber_214; }
	inline int32_t* get_address_of_m_pageNumber_214() { return &___m_pageNumber_214; }
	inline void set_m_pageNumber_214(int32_t value)
	{
		___m_pageNumber_214 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_215)); }
	inline float get_m_PageAscender_215() const { return ___m_PageAscender_215; }
	inline float* get_address_of_m_PageAscender_215() { return &___m_PageAscender_215; }
	inline void set_m_PageAscender_215(float value)
	{
		___m_PageAscender_215 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_216)); }
	inline float get_m_maxTextAscender_216() const { return ___m_maxTextAscender_216; }
	inline float* get_address_of_m_maxTextAscender_216() { return &___m_maxTextAscender_216; }
	inline void set_m_maxTextAscender_216(float value)
	{
		___m_maxTextAscender_216 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_217)); }
	inline float get_m_maxCapHeight_217() const { return ___m_maxCapHeight_217; }
	inline float* get_address_of_m_maxCapHeight_217() { return &___m_maxCapHeight_217; }
	inline void set_m_maxCapHeight_217(float value)
	{
		___m_maxCapHeight_217 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_218)); }
	inline float get_m_ElementAscender_218() const { return ___m_ElementAscender_218; }
	inline float* get_address_of_m_ElementAscender_218() { return &___m_ElementAscender_218; }
	inline void set_m_ElementAscender_218(float value)
	{
		___m_ElementAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_219)); }
	inline float get_m_ElementDescender_219() const { return ___m_ElementDescender_219; }
	inline float* get_address_of_m_ElementDescender_219() { return &___m_ElementDescender_219; }
	inline void set_m_ElementDescender_219(float value)
	{
		___m_ElementDescender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_220)); }
	inline float get_m_maxLineAscender_220() const { return ___m_maxLineAscender_220; }
	inline float* get_address_of_m_maxLineAscender_220() { return &___m_maxLineAscender_220; }
	inline void set_m_maxLineAscender_220(float value)
	{
		___m_maxLineAscender_220 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_221)); }
	inline float get_m_maxLineDescender_221() const { return ___m_maxLineDescender_221; }
	inline float* get_address_of_m_maxLineDescender_221() { return &___m_maxLineDescender_221; }
	inline void set_m_maxLineDescender_221(float value)
	{
		___m_maxLineDescender_221 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_222)); }
	inline float get_m_startOfLineAscender_222() const { return ___m_startOfLineAscender_222; }
	inline float* get_address_of_m_startOfLineAscender_222() { return &___m_startOfLineAscender_222; }
	inline void set_m_startOfLineAscender_222(float value)
	{
		___m_startOfLineAscender_222 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_223)); }
	inline float get_m_startOfLineDescender_223() const { return ___m_startOfLineDescender_223; }
	inline float* get_address_of_m_startOfLineDescender_223() { return &___m_startOfLineDescender_223; }
	inline void set_m_startOfLineDescender_223(float value)
	{
		___m_startOfLineDescender_223 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_224)); }
	inline float get_m_lineOffset_224() const { return ___m_lineOffset_224; }
	inline float* get_address_of_m_lineOffset_224() { return &___m_lineOffset_224; }
	inline void set_m_lineOffset_224(float value)
	{
		___m_lineOffset_224 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_225)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_225() const { return ___m_meshExtents_225; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_225() { return &___m_meshExtents_225; }
	inline void set_m_meshExtents_225(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_225 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_226)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_226() const { return ___m_htmlColor_226; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_226() { return &___m_htmlColor_226; }
	inline void set_m_htmlColor_226(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_226 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_227)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_227() const { return ___m_colorStack_227; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_227() { return &___m_colorStack_227; }
	inline void set_m_colorStack_227(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_227 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_227))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_228)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_228() const { return ___m_underlineColorStack_228; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_228() { return &___m_underlineColorStack_228; }
	inline void set_m_underlineColorStack_228(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_229)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_229() const { return ___m_strikethroughColorStack_229; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_229() { return &___m_strikethroughColorStack_229; }
	inline void set_m_strikethroughColorStack_229(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_230)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_230() const { return ___m_HighlightStateStack_230; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_230() { return &___m_HighlightStateStack_230; }
	inline void set_m_HighlightStateStack_230(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_231)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_231() const { return ___m_colorGradientPreset_231; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_231() { return &___m_colorGradientPreset_231; }
	inline void set_m_colorGradientPreset_231(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_231 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_231), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_232)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_232() const { return ___m_colorGradientStack_232; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_232() { return &___m_colorGradientStack_232; }
	inline void set_m_colorGradientStack_232(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_233)); }
	inline bool get_m_colorGradientPresetIsTinted_233() const { return ___m_colorGradientPresetIsTinted_233; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_233() { return &___m_colorGradientPresetIsTinted_233; }
	inline void set_m_colorGradientPresetIsTinted_233(bool value)
	{
		___m_colorGradientPresetIsTinted_233 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_234)); }
	inline float get_m_tabSpacing_234() const { return ___m_tabSpacing_234; }
	inline float* get_address_of_m_tabSpacing_234() { return &___m_tabSpacing_234; }
	inline void set_m_tabSpacing_234(float value)
	{
		___m_tabSpacing_234 = value;
	}

	inline static int32_t get_offset_of_m_spacing_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_235)); }
	inline float get_m_spacing_235() const { return ___m_spacing_235; }
	inline float* get_address_of_m_spacing_235() { return &___m_spacing_235; }
	inline void set_m_spacing_235(float value)
	{
		___m_spacing_235 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_236)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_236() const { return ___m_TextStyleStacks_236; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_236() { return &___m_TextStyleStacks_236; }
	inline void set_m_TextStyleStacks_236(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_236 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_236), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_237)); }
	inline int32_t get_m_TextStyleStackDepth_237() const { return ___m_TextStyleStackDepth_237; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_237() { return &___m_TextStyleStackDepth_237; }
	inline void set_m_TextStyleStackDepth_237(int32_t value)
	{
		___m_TextStyleStackDepth_237 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_238)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_238() const { return ___m_ItalicAngleStack_238; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_238() { return &___m_ItalicAngleStack_238; }
	inline void set_m_ItalicAngleStack_238(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_238 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_238))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_239)); }
	inline int32_t get_m_ItalicAngle_239() const { return ___m_ItalicAngle_239; }
	inline int32_t* get_address_of_m_ItalicAngle_239() { return &___m_ItalicAngle_239; }
	inline void set_m_ItalicAngle_239(int32_t value)
	{
		___m_ItalicAngle_239 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_240)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_240() const { return ___m_actionStack_240; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_240() { return &___m_actionStack_240; }
	inline void set_m_actionStack_240(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_240 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_240))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_241)); }
	inline float get_m_padding_241() const { return ___m_padding_241; }
	inline float* get_address_of_m_padding_241() { return &___m_padding_241; }
	inline void set_m_padding_241(float value)
	{
		___m_padding_241 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_242)); }
	inline float get_m_baselineOffset_242() const { return ___m_baselineOffset_242; }
	inline float* get_address_of_m_baselineOffset_242() { return &___m_baselineOffset_242; }
	inline void set_m_baselineOffset_242(float value)
	{
		___m_baselineOffset_242 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_243)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_243() const { return ___m_baselineOffsetStack_243; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_243() { return &___m_baselineOffsetStack_243; }
	inline void set_m_baselineOffsetStack_243(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_244)); }
	inline float get_m_xAdvance_244() const { return ___m_xAdvance_244; }
	inline float* get_address_of_m_xAdvance_244() { return &___m_xAdvance_244; }
	inline void set_m_xAdvance_244(float value)
	{
		___m_xAdvance_244 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_245)); }
	inline int32_t get_m_textElementType_245() const { return ___m_textElementType_245; }
	inline int32_t* get_address_of_m_textElementType_245() { return &___m_textElementType_245; }
	inline void set_m_textElementType_245(int32_t value)
	{
		___m_textElementType_245 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_246)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_246() const { return ___m_cached_TextElement_246; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_246() { return &___m_cached_TextElement_246; }
	inline void set_m_cached_TextElement_246(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_246 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_246), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_247)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_247() const { return ___m_Ellipsis_247; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_247() { return &___m_Ellipsis_247; }
	inline void set_m_Ellipsis_247(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_247 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_248)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_248() const { return ___m_Underline_248; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_248() { return &___m_Underline_248; }
	inline void set_m_Underline_248(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_248 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_249)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_249() const { return ___m_defaultSpriteAsset_249; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_249() { return &___m_defaultSpriteAsset_249; }
	inline void set_m_defaultSpriteAsset_249(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_250)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_250() const { return ___m_currentSpriteAsset_250; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_250() { return &___m_currentSpriteAsset_250; }
	inline void set_m_currentSpriteAsset_250(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_251)); }
	inline int32_t get_m_spriteCount_251() const { return ___m_spriteCount_251; }
	inline int32_t* get_address_of_m_spriteCount_251() { return &___m_spriteCount_251; }
	inline void set_m_spriteCount_251(int32_t value)
	{
		___m_spriteCount_251 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_252)); }
	inline int32_t get_m_spriteIndex_252() const { return ___m_spriteIndex_252; }
	inline int32_t* get_address_of_m_spriteIndex_252() { return &___m_spriteIndex_252; }
	inline void set_m_spriteIndex_252(int32_t value)
	{
		___m_spriteIndex_252 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_253)); }
	inline int32_t get_m_spriteAnimationID_253() const { return ___m_spriteAnimationID_253; }
	inline int32_t* get_address_of_m_spriteAnimationID_253() { return &___m_spriteAnimationID_253; }
	inline void set_m_spriteAnimationID_253(int32_t value)
	{
		___m_spriteAnimationID_253 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_256)); }
	inline bool get_m_ignoreActiveState_256() const { return ___m_ignoreActiveState_256; }
	inline bool* get_address_of_m_ignoreActiveState_256() { return &___m_ignoreActiveState_256; }
	inline void set_m_ignoreActiveState_256(bool value)
	{
		___m_ignoreActiveState_256 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextBackingArray_257)); }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  get_m_TextBackingArray_257() const { return ___m_TextBackingArray_257; }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B * get_address_of_m_TextBackingArray_257() { return &___m_TextBackingArray_257; }
	inline void set_m_TextBackingArray_257(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  value)
	{
		___m_TextBackingArray_257 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_257))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_m_materialReferences_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferences_45)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_45() const { return ___m_materialReferences_45; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_45() { return &___m_materialReferences_45; }
	inline void set_m_materialReferences_45(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceIndexLookup_46)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_46() const { return ___m_materialReferenceIndexLookup_46; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_46() { return &___m_materialReferenceIndexLookup_46; }
	inline void set_m_materialReferenceIndexLookup_46(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceStack_47)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_47() const { return ___m_materialReferenceStack_47; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_47() { return &___m_materialReferenceStack_47; }
	inline void set_m_materialReferenceStack_47(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_47))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_55() const { return ___s_colorWhite_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_55() { return &___s_colorWhite_55; }
	inline void set_s_colorWhite_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_55 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_163)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_163() const { return ___OnFontAssetRequest_163; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_163() { return &___OnFontAssetRequest_163; }
	inline void set_OnFontAssetRequest_163(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_164)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_164() const { return ___OnSpriteAssetRequest_164; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_164() { return &___OnSpriteAssetRequest_164; }
	inline void set_OnSpriteAssetRequest_164(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_htmlTag_187)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_187() const { return ___m_htmlTag_187; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_187() { return &___m_htmlTag_187; }
	inline void set_m_htmlTag_187(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_xmlAttribute_188)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_188() const { return ___m_xmlAttribute_188; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_188() { return &___m_xmlAttribute_188; }
	inline void set_m_xmlAttribute_188(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_attributeParameterValues_189)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_189() const { return ___m_attributeParameterValues_189; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_189() { return &___m_attributeParameterValues_189; }
	inline void set_m_attributeParameterValues_189(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedWordWrapState_201)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_201() const { return ___m_SavedWordWrapState_201; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_201() { return &___m_SavedWordWrapState_201; }
	inline void set_m_SavedWordWrapState_201(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_201 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLineState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_202() const { return ___m_SavedLineState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_202() { return &___m_SavedLineState_202; }
	inline void set_m_SavedLineState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedEllipsisState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_203() const { return ___m_SavedEllipsisState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_203() { return &___m_SavedEllipsisState_203; }
	inline void set_m_SavedEllipsisState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLastValidState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_204() const { return ___m_SavedLastValidState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_204() { return &___m_SavedLastValidState_204; }
	inline void set_m_SavedLastValidState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedSoftLineBreakState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_205() const { return ___m_SavedSoftLineBreakState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_205() { return &___m_SavedSoftLineBreakState_205; }
	inline void set_m_SavedSoftLineBreakState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_EllipsisInsertionCandidateStack_206)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_206() const { return ___m_EllipsisInsertionCandidateStack_206; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_206() { return &___m_EllipsisInsertionCandidateStack_206; }
	inline void set_m_EllipsisInsertionCandidateStack_206(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_206))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_ParseTextMarker_254)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseTextMarker_254() const { return ___k_ParseTextMarker_254; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseTextMarker_254() { return &___k_ParseTextMarker_254; }
	inline void set_k_ParseTextMarker_254(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseTextMarker_254 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_InsertNewLineMarker_255)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_InsertNewLineMarker_255() const { return ___k_InsertNewLineMarker_255; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_InsertNewLineMarker_255() { return &___k_InsertNewLineMarker_255; }
	inline void set_k_InsertNewLineMarker_255(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_InsertNewLineMarker_255 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};


// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_265;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* ___m_subTextObjects_266;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_267;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_268;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_canvasRenderer_269;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_canvas_270;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_272;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_273;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_baseMaterial_274;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_275;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_maskOffset_276;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_299;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DelayedGraphicRebuild_300;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DelayedMaterialRebuild_301;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_ClipRect_302;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_303;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_304;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_265() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_hasFontAssetChanged_265)); }
	inline bool get_m_hasFontAssetChanged_265() const { return ___m_hasFontAssetChanged_265; }
	inline bool* get_address_of_m_hasFontAssetChanged_265() { return &___m_hasFontAssetChanged_265; }
	inline void set_m_hasFontAssetChanged_265(bool value)
	{
		___m_hasFontAssetChanged_265 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_266() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_subTextObjects_266)); }
	inline TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* get_m_subTextObjects_266() const { return ___m_subTextObjects_266; }
	inline TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552** get_address_of_m_subTextObjects_266() { return &___m_subTextObjects_266; }
	inline void set_m_subTextObjects_266(TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* value)
	{
		___m_subTextObjects_266 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_266), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_267() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_previousLossyScaleY_267)); }
	inline float get_m_previousLossyScaleY_267() const { return ___m_previousLossyScaleY_267; }
	inline float* get_address_of_m_previousLossyScaleY_267() { return &___m_previousLossyScaleY_267; }
	inline void set_m_previousLossyScaleY_267(float value)
	{
		___m_previousLossyScaleY_267 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_268() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_RectTransformCorners_268)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_268() const { return ___m_RectTransformCorners_268; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_268() { return &___m_RectTransformCorners_268; }
	inline void set_m_RectTransformCorners_268(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_269() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_canvasRenderer_269)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_canvasRenderer_269() const { return ___m_canvasRenderer_269; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_canvasRenderer_269() { return &___m_canvasRenderer_269; }
	inline void set_m_canvasRenderer_269(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_canvasRenderer_269 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_269), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_270() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_canvas_270)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_canvas_270() const { return ___m_canvas_270; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_canvas_270() { return &___m_canvas_270; }
	inline void set_m_canvas_270(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_canvas_270 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_270), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasScaleFactor_271() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_CanvasScaleFactor_271)); }
	inline float get_m_CanvasScaleFactor_271() const { return ___m_CanvasScaleFactor_271; }
	inline float* get_address_of_m_CanvasScaleFactor_271() { return &___m_CanvasScaleFactor_271; }
	inline void set_m_CanvasScaleFactor_271(float value)
	{
		___m_CanvasScaleFactor_271 = value;
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_272() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isFirstAllocation_272)); }
	inline bool get_m_isFirstAllocation_272() const { return ___m_isFirstAllocation_272; }
	inline bool* get_address_of_m_isFirstAllocation_272() { return &___m_isFirstAllocation_272; }
	inline void set_m_isFirstAllocation_272(bool value)
	{
		___m_isFirstAllocation_272 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_273() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_max_characters_273)); }
	inline int32_t get_m_max_characters_273() const { return ___m_max_characters_273; }
	inline int32_t* get_address_of_m_max_characters_273() { return &___m_max_characters_273; }
	inline void set_m_max_characters_273(int32_t value)
	{
		___m_max_characters_273 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_274() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_baseMaterial_274)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_baseMaterial_274() const { return ___m_baseMaterial_274; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_baseMaterial_274() { return &___m_baseMaterial_274; }
	inline void set_m_baseMaterial_274(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_baseMaterial_274 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_274), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_275() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isScrollRegionSet_275)); }
	inline bool get_m_isScrollRegionSet_275() const { return ___m_isScrollRegionSet_275; }
	inline bool* get_address_of_m_isScrollRegionSet_275() { return &___m_isScrollRegionSet_275; }
	inline void set_m_isScrollRegionSet_275(bool value)
	{
		___m_isScrollRegionSet_275 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_276() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_maskOffset_276)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_maskOffset_276() const { return ___m_maskOffset_276; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_maskOffset_276() { return &___m_maskOffset_276; }
	inline void set_m_maskOffset_276(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_maskOffset_276 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_277() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_EnvMapMatrix_277)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_277() const { return ___m_EnvMapMatrix_277; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_277() { return &___m_EnvMapMatrix_277; }
	inline void set_m_EnvMapMatrix_277(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_277 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_278() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isRegisteredForEvents_278)); }
	inline bool get_m_isRegisteredForEvents_278() const { return ___m_isRegisteredForEvents_278; }
	inline bool* get_address_of_m_isRegisteredForEvents_278() { return &___m_isRegisteredForEvents_278; }
	inline void set_m_isRegisteredForEvents_278(bool value)
	{
		___m_isRegisteredForEvents_278 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_299() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isRebuildingLayout_299)); }
	inline bool get_m_isRebuildingLayout_299() const { return ___m_isRebuildingLayout_299; }
	inline bool* get_address_of_m_isRebuildingLayout_299() { return &___m_isRebuildingLayout_299; }
	inline void set_m_isRebuildingLayout_299(bool value)
	{
		___m_isRebuildingLayout_299 = value;
	}

	inline static int32_t get_offset_of_m_DelayedGraphicRebuild_300() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_DelayedGraphicRebuild_300)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DelayedGraphicRebuild_300() const { return ___m_DelayedGraphicRebuild_300; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DelayedGraphicRebuild_300() { return &___m_DelayedGraphicRebuild_300; }
	inline void set_m_DelayedGraphicRebuild_300(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DelayedGraphicRebuild_300 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedGraphicRebuild_300), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayedMaterialRebuild_301() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_DelayedMaterialRebuild_301)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DelayedMaterialRebuild_301() const { return ___m_DelayedMaterialRebuild_301; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DelayedMaterialRebuild_301() { return &___m_DelayedMaterialRebuild_301; }
	inline void set_m_DelayedMaterialRebuild_301(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DelayedMaterialRebuild_301 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedMaterialRebuild_301), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClipRect_302() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_ClipRect_302)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_ClipRect_302() const { return ___m_ClipRect_302; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_ClipRect_302() { return &___m_ClipRect_302; }
	inline void set_m_ClipRect_302(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_ClipRect_302 = value;
	}

	inline static int32_t get_offset_of_m_ValidRect_303() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_ValidRect_303)); }
	inline bool get_m_ValidRect_303() const { return ___m_ValidRect_303; }
	inline bool* get_address_of_m_ValidRect_303() { return &___m_ValidRect_303; }
	inline void set_m_ValidRect_303(bool value)
	{
		___m_ValidRect_303 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_304() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___OnPreRenderText_304)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_304() const { return ___OnPreRenderText_304; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_304() { return &___OnPreRenderText_304; }
	inline void set_OnPreRenderText_304(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_304 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_304), (void*)value);
	}
};

struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextMarker_279;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SetArraySizesMarker_280;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIMarker_281;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseMarkupTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_CharacterLookupMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleGPOSFeaturesMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_CalculateVerticesPositionMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ComputeTextMetricsMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleVisibleCharacterMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleWhiteSpacesMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleHorizontalLineBreakingMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleVerticalLineBreakingMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SaveGlyphVertexDataMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ComputeCharacterAdvanceMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleCarriageReturnMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleLineTerminationMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SavePageInfoMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SaveProcessingStatesMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIIMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIIIMarker_298;

public:
	inline static int32_t get_offset_of_k_GenerateTextMarker_279() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_GenerateTextMarker_279)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextMarker_279() const { return ___k_GenerateTextMarker_279; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextMarker_279() { return &___k_GenerateTextMarker_279; }
	inline void set_k_GenerateTextMarker_279(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextMarker_279 = value;
	}

	inline static int32_t get_offset_of_k_SetArraySizesMarker_280() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_SetArraySizesMarker_280)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SetArraySizesMarker_280() const { return ___k_SetArraySizesMarker_280; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SetArraySizesMarker_280() { return &___k_SetArraySizesMarker_280; }
	inline void set_k_SetArraySizesMarker_280(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SetArraySizesMarker_280 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIMarker_281() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_GenerateTextPhaseIMarker_281)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIMarker_281() const { return ___k_GenerateTextPhaseIMarker_281; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIMarker_281() { return &___k_GenerateTextPhaseIMarker_281; }
	inline void set_k_GenerateTextPhaseIMarker_281(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIMarker_281 = value;
	}

	inline static int32_t get_offset_of_k_ParseMarkupTextMarker_282() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_ParseMarkupTextMarker_282)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseMarkupTextMarker_282() const { return ___k_ParseMarkupTextMarker_282; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseMarkupTextMarker_282() { return &___k_ParseMarkupTextMarker_282; }
	inline void set_k_ParseMarkupTextMarker_282(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseMarkupTextMarker_282 = value;
	}

	inline static int32_t get_offset_of_k_CharacterLookupMarker_283() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_CharacterLookupMarker_283)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_CharacterLookupMarker_283() const { return ___k_CharacterLookupMarker_283; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_CharacterLookupMarker_283() { return &___k_CharacterLookupMarker_283; }
	inline void set_k_CharacterLookupMarker_283(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_CharacterLookupMarker_283 = value;
	}

	inline static int32_t get_offset_of_k_HandleGPOSFeaturesMarker_284() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleGPOSFeaturesMarker_284)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleGPOSFeaturesMarker_284() const { return ___k_HandleGPOSFeaturesMarker_284; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleGPOSFeaturesMarker_284() { return &___k_HandleGPOSFeaturesMarker_284; }
	inline void set_k_HandleGPOSFeaturesMarker_284(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleGPOSFeaturesMarker_284 = value;
	}

	inline static int32_t get_offset_of_k_CalculateVerticesPositionMarker_285() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_CalculateVerticesPositionMarker_285)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_CalculateVerticesPositionMarker_285() const { return ___k_CalculateVerticesPositionMarker_285; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_CalculateVerticesPositionMarker_285() { return &___k_CalculateVerticesPositionMarker_285; }
	inline void set_k_CalculateVerticesPositionMarker_285(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_CalculateVerticesPositionMarker_285 = value;
	}

	inline static int32_t get_offset_of_k_ComputeTextMetricsMarker_286() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_ComputeTextMetricsMarker_286)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ComputeTextMetricsMarker_286() const { return ___k_ComputeTextMetricsMarker_286; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ComputeTextMetricsMarker_286() { return &___k_ComputeTextMetricsMarker_286; }
	inline void set_k_ComputeTextMetricsMarker_286(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ComputeTextMetricsMarker_286 = value;
	}

	inline static int32_t get_offset_of_k_HandleVisibleCharacterMarker_287() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleVisibleCharacterMarker_287)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleVisibleCharacterMarker_287() const { return ___k_HandleVisibleCharacterMarker_287; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleVisibleCharacterMarker_287() { return &___k_HandleVisibleCharacterMarker_287; }
	inline void set_k_HandleVisibleCharacterMarker_287(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleVisibleCharacterMarker_287 = value;
	}

	inline static int32_t get_offset_of_k_HandleWhiteSpacesMarker_288() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleWhiteSpacesMarker_288)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleWhiteSpacesMarker_288() const { return ___k_HandleWhiteSpacesMarker_288; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleWhiteSpacesMarker_288() { return &___k_HandleWhiteSpacesMarker_288; }
	inline void set_k_HandleWhiteSpacesMarker_288(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleWhiteSpacesMarker_288 = value;
	}

	inline static int32_t get_offset_of_k_HandleHorizontalLineBreakingMarker_289() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleHorizontalLineBreakingMarker_289)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleHorizontalLineBreakingMarker_289() const { return ___k_HandleHorizontalLineBreakingMarker_289; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleHorizontalLineBreakingMarker_289() { return &___k_HandleHorizontalLineBreakingMarker_289; }
	inline void set_k_HandleHorizontalLineBreakingMarker_289(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleHorizontalLineBreakingMarker_289 = value;
	}

	inline static int32_t get_offset_of_k_HandleVerticalLineBreakingMarker_290() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleVerticalLineBreakingMarker_290)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleVerticalLineBreakingMarker_290() const { return ___k_HandleVerticalLineBreakingMarker_290; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleVerticalLineBreakingMarker_290() { return &___k_HandleVerticalLineBreakingMarker_290; }
	inline void set_k_HandleVerticalLineBreakingMarker_290(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleVerticalLineBreakingMarker_290 = value;
	}

	inline static int32_t get_offset_of_k_SaveGlyphVertexDataMarker_291() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_SaveGlyphVertexDataMarker_291)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SaveGlyphVertexDataMarker_291() const { return ___k_SaveGlyphVertexDataMarker_291; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SaveGlyphVertexDataMarker_291() { return &___k_SaveGlyphVertexDataMarker_291; }
	inline void set_k_SaveGlyphVertexDataMarker_291(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SaveGlyphVertexDataMarker_291 = value;
	}

	inline static int32_t get_offset_of_k_ComputeCharacterAdvanceMarker_292() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_ComputeCharacterAdvanceMarker_292)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ComputeCharacterAdvanceMarker_292() const { return ___k_ComputeCharacterAdvanceMarker_292; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ComputeCharacterAdvanceMarker_292() { return &___k_ComputeCharacterAdvanceMarker_292; }
	inline void set_k_ComputeCharacterAdvanceMarker_292(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ComputeCharacterAdvanceMarker_292 = value;
	}

	inline static int32_t get_offset_of_k_HandleCarriageReturnMarker_293() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleCarriageReturnMarker_293)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleCarriageReturnMarker_293() const { return ___k_HandleCarriageReturnMarker_293; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleCarriageReturnMarker_293() { return &___k_HandleCarriageReturnMarker_293; }
	inline void set_k_HandleCarriageReturnMarker_293(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleCarriageReturnMarker_293 = value;
	}

	inline static int32_t get_offset_of_k_HandleLineTerminationMarker_294() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleLineTerminationMarker_294)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleLineTerminationMarker_294() const { return ___k_HandleLineTerminationMarker_294; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleLineTerminationMarker_294() { return &___k_HandleLineTerminationMarker_294; }
	inline void set_k_HandleLineTerminationMarker_294(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleLineTerminationMarker_294 = value;
	}

	inline static int32_t get_offset_of_k_SavePageInfoMarker_295() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_SavePageInfoMarker_295)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SavePageInfoMarker_295() const { return ___k_SavePageInfoMarker_295; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SavePageInfoMarker_295() { return &___k_SavePageInfoMarker_295; }
	inline void set_k_SavePageInfoMarker_295(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SavePageInfoMarker_295 = value;
	}

	inline static int32_t get_offset_of_k_SaveProcessingStatesMarker_296() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_SaveProcessingStatesMarker_296)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SaveProcessingStatesMarker_296() const { return ___k_SaveProcessingStatesMarker_296; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SaveProcessingStatesMarker_296() { return &___k_SaveProcessingStatesMarker_296; }
	inline void set_k_SaveProcessingStatesMarker_296(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SaveProcessingStatesMarker_296 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIMarker_297() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_GenerateTextPhaseIIMarker_297)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIIMarker_297() const { return ___k_GenerateTextPhaseIIMarker_297; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIIMarker_297() { return &___k_GenerateTextPhaseIIMarker_297; }
	inline void set_k_GenerateTextPhaseIIMarker_297(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIIMarker_297 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIIMarker_298() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_GenerateTextPhaseIIIMarker_298)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIIIMarker_298() const { return ___k_GenerateTextPhaseIIIMarker_298; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIIIMarker_298() { return &___k_GenerateTextPhaseIIIMarker_298; }
	inline void set_k_GenerateTextPhaseIIIMarker_298(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIIIMarker_298 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TerrainTile[0...,0...]
struct TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * m_Items[1];

public:
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.Int32 System.Collections.Generic.List`1<TerrainTile>::get_Count()
inline int32_t List_1_get_Count_m6C8EAE6C1359FDC60F6F4F93C22ACCBF02F1AE77_inline (List_1_tB3F944139168A62377B4E136185ADBF590543826 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB3F944139168A62377B4E136185ADBF590543826 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<TerrainTile>::get_Item(System.Int32)
inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * List_1_get_Item_m28A13A059EF10086690C04B2DBE9F01F677A4776_inline (List_1_tB3F944139168A62377B4E136185ADBF590543826 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * (*) (List_1_tB3F944139168A62377B4E136185ADBF590543826 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<UnityEngine.Tilemaps.Tile>()
inline Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779 (const RuntimeMethod* method)
{
	return ((  Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared)(method);
}
// System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_sprite_m29904A3BC52CDFB8BF48604CD0FED0EF3477BCE4 (Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.Tilemap::SetTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.TileBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_mDA8C773A2FF8D6744BE268AE9D77CC3FB2A5D862 (Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052 * ___tile1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ClickPanel::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickPanel_Open_m80EFCBAD4B16D68E9A6901B85A93325FD66431D6 (ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TerrainTile>::.ctor()
inline void List_1__ctor_mECA06E60A338112522AF321D9CA64DB90169F20C (List_1_tB3F944139168A62377B4E136185ADBF590543826 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB3F944139168A62377B4E136185ADBF590543826 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TerrainTile>::Add(!0)
inline void List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4 (List_1_tB3F944139168A62377B4E136185ADBF590543826 * __this, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB3F944139168A62377B4E136185ADBF590543826 *, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void TerrainTile::SetTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.Tilemap,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9 (TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map1, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<TerrainTile>::GetEnumerator()
inline Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571 (List_1_tB3F944139168A62377B4E136185ADBF590543826 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  (*) (List_1_tB3F944139168A62377B4E136185ADBF590543826 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<TerrainTile>::get_Current()
inline TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_inline (Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E * __this, const RuntimeMethod* method)
{
	return ((  TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * (*) (Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<TerrainTile>::MoveNext()
inline bool Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC (Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TerrainTile>::Dispose()
inline void Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D (Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 City::GetFoodPerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetFoodPerTurn_mE525A1629BE952BC11ECBD97882EE08BCA2C9B35 (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int32 City::GetGoldPerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetGoldPerTurn_m1513B8366A893332662A71E1B19056B2CD80543F (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method);
// System.Int32 City::GetProductionPerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetProductionPerTurn_m3A07013A86F290381EE7BF389F9FD90709015634 (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method);
// System.Int32 City::GetCulturePerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetCulturePerTurn_m05FFD1041B2E1CEE7CC336F98410B44D150ECF56 (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method);
// System.Int32 City::GetFaithPerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetFaithPerTurn_m13B4314723B762ABB599670F85E11298224888BB (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<City>::.ctor()
inline void List_1__ctor_mFCD36555C9F94B4ADC42B2A22F75CAFF3443D71D (List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Empires>::.ctor()
inline void List_1__ctor_m670947E173A53E06EC96917DE33E14817302B810 (List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Buildings>::.ctor()
inline void List_1__ctor_mD548AF8776640636BAFD874B5F272CD948B08275 (List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400 (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_loopPointReached_m01BBFFE55835498DFF2A1C8CEF3292B4780E4964 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void City::.ctor(TerrainTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void City__ctor_m8008493B16CCCB75BFF61B5FF956C85019804CB3 (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * ___centralTile0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<City>::Add(!0)
inline void List_1_Add_m7D684C4596B5BCBA1136957F0B53CA8E983F9896 (List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * __this, City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 *, City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3Int UnityEngine.GridLayout::WorldToCell(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9 (GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Void TileClick::ProcessClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileClick_ProcessClick_m64C89432BD493B101CD4C4330A51912CCCC4A4EF (TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Void CityPanel::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CityPanel_UpdateText_m66B4504834BDD40698E13D878989376F1A75A8E4 (CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ClickPanel>()
inline ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * GameObject_GetComponent_TisClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112_m7DBE9036DE3CA69158561AA7D3D339B5F8DBAD88 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Empires>::GetEnumerator()
inline Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666  List_1_GetEnumerator_m84AD6842031342ECE9856222645E616FD83965AE (List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666  (*) (List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Empires>::get_Current()
inline Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * Enumerator_get_Current_mC51238197C8A6DE2A729073F4525BC9CA2509E60_inline (Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 * __this, const RuntimeMethod* method)
{
	return ((  Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * (*) (Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<City>::GetEnumerator()
inline Enumerator_tC82792F0B2124AFA151BF5C18917755081322166  List_1_GetEnumerator_m22828079D5181E33BCAF9F15ACDF8C57A46DC755 (List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC82792F0B2124AFA151BF5C18917755081322166  (*) (List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<City>::get_Current()
inline City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * Enumerator_get_Current_m342BD4EF96746E3D428502718C338C5C0B3DB4FF_inline (Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 * __this, const RuntimeMethod* method)
{
	return ((  City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * (*) (Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<City>::MoveNext()
inline bool Enumerator_MoveNext_mAD0A13871E6CF9F409D8389312474BBE4FCDACA8 (Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<City>::Dispose()
inline void Enumerator_Dispose_mA32E899A8B90B453E0D889980CA14766DAAF0023 (Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Empires>::MoveNext()
inline bool Enumerator_MoveNext_m3B124D050403E721819FC6C5FFC05FFAE6514D11 (Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Empires>::Dispose()
inline void Enumerator_Dispose_mDA65DDA79668BC96D20BAFB983ED08935080D243 (Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void TerrainTile::SetTile(UnityEngine.Tilemaps.Tilemap,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile_SetTile_mA0C6F3CDBB7040590CA404D71BC3304BD7EB6D92 (TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * __this, Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite1, const RuntimeMethod* method);
// System.Void Units::Defend(Units,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Units_Defend_m428D91CF122AF765683E938A7D706A3D22C036B3 (Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * __this, Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * ___attacker0, int32_t ___damage1, const RuntimeMethod* method);
// System.Void Units::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Units_Die_mE5955ACCBC0A4BFE6D8148FAE8FB2AFABEF1C4BF (Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * __this, const RuntimeMethod* method);
// System.Void TerrainTile::LoadImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile_LoadImages_mA8437EAF4B2D7931FCE065B96A953617445289CD (const RuntimeMethod* method);
// System.Void City::LoadImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void City_LoadImages_m690D9D75247120ECAAD61AAC2DE8B783CE8C9962 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Tilemaps.Tilemap>()
inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * Component_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_m72B749FCC9292FBBFF4226F048FB86A91DE46F90 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void WorldGeneration::FourCornerGeneration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_FourCornerGeneration_m14502D6069837AE2F28BF2777D949365B4C1703B (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Void Empires::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Empires__ctor_m7726416434B97241EA1F8536B292F8F9A72CEFD7 (Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * __this, String_t* ___empirename0, const RuntimeMethod* method);
// System.Void TerrainTile::AddCity(UnityEngine.Tilemaps.Tilemap,Empires)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile_AddCity_m33823B5F8A272F56531C5AD4E3C0B61564E2EAA4 (TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * __this, Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___overlay0, Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * ___empire1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Empires>::Add(!0)
inline void List_1_Add_mA1BB2694AE0DED2C0EDF2D1CA0CB8C4FE907EFA7 (List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * __this, Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC *, Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void WorldGeneration::BaseGeneration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_BaseGeneration_m3266E1B4FC41657F0525A7265BE54418F4AF0641 (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, const RuntimeMethod* method);
// System.Void WorldGeneration::TileCreation(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_TileCreation_m72193F741C0FFB475FFA61CB0313053ECA2AF87E (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, String_t* ___type0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method);
// System.Void TerrainTile::.ctor(System.String,System.Int32,System.Int32,GameManager,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile__ctor_m093A29C63A925040CF22A768D01CFE604E4A512C (TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * __this, String_t* ___type0, int32_t ___x1, int32_t ___y2, GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm3, int32_t ___gridX4, int32_t ___gridY5, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void citypanelanimation::CalculateOutside()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void citypanelanimation_CalculateOutside_m9A946E12260587472754405520B047D0DDD279F3 (citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 citypanelanimation::GetDifferenceToOutside()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  citypanelanimation_GetDifferenceToOutside_m3D8B9D99D180609254E92816A3BB083F8B08C3DD (citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Canvas::get_pixelRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Canvas_get_pixelRect_m54100E80CD719FFD15D1C2A0C15717290C75A3DE (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AddBuilding::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddBuilding_Start_m8E43CF9380FAD2C075053E1A6F4F3D349BB0BE4B (AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CFC686F306D6C5A9ABE245CB8EE9C5A466C466C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buildingImage = Resources.Load<Sprite>("Tile Sprites/Barn");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0;
		L_0 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral0CFC686F306D6C5A9ABE245CB8EE9C5A466C466C, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF_StaticFields*)il2cpp_codegen_static_fields_for(AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF_il2cpp_TypeInfo_var))->set_buildingImage_6(L_0);
		// }
		return;
	}
}
// System.Void AddBuilding::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddBuilding_Update_m47B9EAB8E111D521C95927D9A7884B6CA18C69CE (AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AddBuilding::AddBuildings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddBuilding_AddBuildings_m353802212AFF503B9049184A2426AD70BD537CD2 (AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6C8EAE6C1359FDC60F6F4F93C22ACCBF02F1AE77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m28A13A059EF10086690C04B2DBE9F01F677A4776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * V_1 = NULL;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * V_3 = NULL;
	{
		// int rand = (int)Random.Range(0, city.OwnedTiles.Count- 1);
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_0 = __this->get_city_4();
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_1 = L_0->get_OwnedTiles_1();
		int32_t L_2;
		L_2 = List_1_get_Count_m6C8EAE6C1359FDC60F6F4F93C22ACCBF02F1AE77_inline(L_1, /*hidden argument*/List_1_get_Count_m6C8EAE6C1359FDC60F6F4F93C22ACCBF02F1AE77_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_3;
		// Debug.Log(rand);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// TerrainTile buildingtile = city.OwnedTiles[rand];
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_7 = __this->get_city_4();
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_8 = L_7->get_OwnedTiles_1();
		int32_t L_9 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_10;
		L_10 = List_1_get_Item_m28A13A059EF10086690C04B2DBE9F01F677A4776_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m28A13A059EF10086690C04B2DBE9F01F677A4776_RuntimeMethod_var);
		V_1 = L_10;
		// Vector3Int position = new Vector3Int(buildingtile.x, buildingtile.y, 0);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_11 = V_1;
		int32_t L_12 = L_11->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_13 = V_1;
		int32_t L_14 = L_13->get_y_7();
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&V_2), L_12, L_14, 0, /*hidden argument*/NULL);
		// Tile t = ScriptableObject.CreateInstance<Tile>();
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_15;
		L_15 = ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779(/*hidden argument*/ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779_RuntimeMethod_var);
		V_3 = L_15;
		// t.sprite = buildingImage;
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_16 = V_3;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_17 = ((AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF_StaticFields*)il2cpp_codegen_static_fields_for(AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF_il2cpp_TypeInfo_var))->get_buildingImage_6();
		Tile_set_sprite_m29904A3BC52CDFB8BF48604CD0FED0EF3477BCE4(L_16, L_17, /*hidden argument*/NULL);
		// gm.overlay.SetTile(position, t);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_18 = __this->get_gm_7();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_19 = L_18->get_overlay_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_20 = V_2;
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_21 = V_3;
		Tilemap_SetTile_mDA8C773A2FF8D6744BE268AE9D77CC3FB2A5D862(L_19, L_20, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AddBuilding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddBuilding__ctor_mD99E380E0FF68EEE51FCDBBD1EE55BED4E677E77 (AddBuilding_tE1DE19E6299AA8AE72AEB6C35A015CD37A7ACCDF * __this, const RuntimeMethod* method)
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
// System.Void AudioHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHandler_Start_mE93817A1C7A0914EDC1EB4519C12389517EEC69A (AudioHandler_tC2FB2E59AE540A3B7A2CE2EF47802AEAE7BE6288 * __this, const RuntimeMethod* method)
{
	{
		// maintheme.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_maintheme_4();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHandler_Update_mB679E75EA58928515C85AC39D04C875BA9D5EB93 (AudioHandler_tC2FB2E59AE540A3B7A2CE2EF47802AEAE7BE6288 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AudioHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHandler__ctor_m6C79830091DA7880ECE61982384CC7CBC5A3D106 (AudioHandler_tC2FB2E59AE540A3B7A2CE2EF47802AEAE7BE6288 * __this, const RuntimeMethod* method)
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
// System.Void Buildings::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buildings__ctor_mC429685DCE29EA20148544AB600E3BFB7DB0FA0E (Buildings_t3597575AABA20D4E87EC15638980C8DB6256FD2C * __this, String_t* ___name0, int32_t ___productioncost1, int32_t ___goldcost2, int32_t ___faithcost3, int32_t ___foodmodifier4, int32_t ___goldmodifier5, int32_t ___productionmodifier6, int32_t ___culturemodifier7, int32_t ___faithmodifier8, const RuntimeMethod* method)
{
	{
		// public int productioncost = 0;
		__this->set_productioncost_0(0);
		// public int goldcost = 0;
		__this->set_goldcost_1(0);
		// public int faithcost = 0;
		__this->set_faithcost_2(0);
		// public int foodmodifier = 1;
		__this->set_foodmodifier_3(1);
		// public int goldmodifier = 1;
		__this->set_goldmodifier_4(1);
		// public int productionmodifier = 1;
		__this->set_productionmodifier_5(1);
		// public int culturemodifier = 1;
		__this->set_culturemodifier_6(1);
		// public int faithmodifier = 1;
		__this->set_faithmodifier_7(1);
		// public Buildings(string name, int productioncost, int goldcost, int faithcost, int foodmodifier, int goldmodifier, int productionmodifier, int culturemodifier, int faithmodifier)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->set_name_9(L_0);
		// this.productioncost = productioncost;
		int32_t L_1 = ___productioncost1;
		__this->set_productioncost_0(L_1);
		// this.goldcost = goldcost;
		int32_t L_2 = ___goldcost2;
		__this->set_goldcost_1(L_2);
		// this.faithcost = faithcost;
		int32_t L_3 = ___faithcost3;
		__this->set_faithcost_2(L_3);
		// this.foodmodifier = foodmodifier;
		int32_t L_4 = ___foodmodifier4;
		__this->set_foodmodifier_3(L_4);
		// this.goldmodifier = goldmodifier;
		int32_t L_5 = ___goldmodifier5;
		__this->set_goldmodifier_4(L_5);
		// this.productionmodifier = productionmodifier;
		int32_t L_6 = ___productionmodifier6;
		__this->set_productionmodifier_5(L_6);
		// this.culturemodifier = culturemodifier;
		int32_t L_7 = ___culturemodifier7;
		__this->set_culturemodifier_6(L_7);
		// this.faithmodifier = faithmodifier;
		int32_t L_8 = ___faithmodifier8;
		__this->set_faithmodifier_7(L_8);
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
// System.Void BuildingsOpen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsOpen_Start_m8F9AA2C740384994AAAF73A904D353DE6570C7B0 (BuildingsOpen_tBD3EFE57B05715EA857EDB9A465C678F69023C54 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BuildingsOpen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsOpen_Update_m2D3776D0AC5076EB599085581F403160B583AB94 (BuildingsOpen_tBD3EFE57B05715EA857EDB9A465C678F69023C54 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BuildingsOpen::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsOpen_OnClick_mAD8A3564A216655076237E114B7BE6ACE331D0E6 (BuildingsOpen_tBD3EFE57B05715EA857EDB9A465C678F69023C54 * __this, const RuntimeMethod* method)
{
	{
		// BuildingsPanel.Open();
		ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * L_0 = __this->get_BuildingsPanel_4();
		ClickPanel_Open_m80EFCBAD4B16D68E9A6901B85A93325FD66431D6(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BuildingsOpen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsOpen__ctor_mE344EB6D4DBFDFEC90CE0FA63C39348D0DE69FB0 (BuildingsOpen_tBD3EFE57B05715EA857EDB9A465C678F69023C54 * __this, const RuntimeMethod* method)
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
// System.Void City::.ctor(TerrainTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void City__ctor_m8008493B16CCCB75BFF61B5FF956C85019804CB3 (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * ___centralTile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mECA06E60A338112522AF321D9CA64DB90169F20C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB3F944139168A62377B4E136185ADBF590543826_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* V_0 = NULL;
	bool V_1 = false;
	{
		// public City(TerrainTile centralTile)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// OwnedTiles = new List<TerrainTile>();
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_0 = (List_1_tB3F944139168A62377B4E136185ADBF590543826 *)il2cpp_codegen_object_new(List_1_tB3F944139168A62377B4E136185ADBF590543826_il2cpp_TypeInfo_var);
		List_1__ctor_mECA06E60A338112522AF321D9CA64DB90169F20C(L_0, /*hidden argument*/List_1__ctor_mECA06E60A338112522AF321D9CA64DB90169F20C_RuntimeMethod_var);
		__this->set_OwnedTiles_1(L_0);
		// this.centralTile = centralTile;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_1 = ___centralTile0;
		__this->set_centralTile_0(L_1);
		// gm = centralTile.gm;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_2 = ___centralTile0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = L_2->get_gm_16();
		__this->set_gm_2(L_3);
		// TerrainTile[,] tiles = gm.tiles;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gm_2();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_5 = L_4->get_tiles_7();
		V_0 = L_5;
		// Debug.Log(tiles[centralTile.gridX, centralTile.gridY].type);
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_6 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_7 = ___centralTile0;
		int32_t L_8 = L_7->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_9 = ___centralTile0;
		int32_t L_10 = L_9->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_11;
		L_11 = (L_6)->GetAtUnchecked(L_8, L_10);
		String_t* L_12 = L_11->get_type_0();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// if(centralTile.y % 2 == 0)
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_13 = ___centralTile0;
		int32_t L_14 = L_13->get_y_7();
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_14%(int32_t)2))) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0232;
		}
	}
	{
		// OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_16 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_17 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_18 = ___centralTile0;
		int32_t L_19 = L_18->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_20 = ___centralTile0;
		int32_t L_21 = L_20->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_22;
		L_22 = (L_17)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), L_21);
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_16, L_22, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x + 1, centralTile.y, 0), gm.overlay, abf);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_23 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_24 = ___centralTile0;
		int32_t L_25 = L_24->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_26 = ___centralTile0;
		int32_t L_27 = L_26->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_28), ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), L_27, 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_29 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_30 = L_29->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_31 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_abf_4();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_23, L_28, L_30, L_31, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY + 1]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_32 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_33 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_34 = ___centralTile0;
		int32_t L_35 = L_34->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_36 = ___centralTile0;
		int32_t L_37 = L_36->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_38;
		L_38 = (L_33)->GetAtUnchecked(L_35, ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_32, L_38, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y + 1, 0), gm.overlay, abc);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_39 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_40 = ___centralTile0;
		int32_t L_41 = L_40->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_42 = ___centralTile0;
		int32_t L_43 = L_42->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_44), L_41, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)), 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_45 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_46 = L_45->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_47 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_abc_3();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_39, L_44, L_46, L_47, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_48 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_49 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_50 = ___centralTile0;
		int32_t L_51 = L_50->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_52 = ___centralTile0;
		int32_t L_53 = L_52->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_54;
		L_54 = (L_49)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1)), L_53);
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_48, L_54, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x - 1, centralTile.y, 0), gm.overlay, cde);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_55 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_56 = ___centralTile0;
		int32_t L_57 = L_56->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_58 = ___centralTile0;
		int32_t L_59 = L_58->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_60), ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)), L_59, 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_61 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_62 = L_61->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_63 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_cde_7();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_55, L_60, L_62, L_63, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY - 1]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_64 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_65 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_66 = ___centralTile0;
		int32_t L_67 = L_66->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_68 = ___centralTile0;
		int32_t L_69 = L_68->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_70;
		L_70 = (L_65)->GetAtUnchecked(L_67, ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1)));
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_64, L_70, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y - 1, 0), gm.overlay, aef);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_71 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_72 = ___centralTile0;
		int32_t L_73 = L_72->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_74 = ___centralTile0;
		int32_t L_75 = L_74->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_76), L_73, ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1)), 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_77 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_78 = L_77->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_79 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_aef_5();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_71, L_76, L_78, L_79, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY + 1]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_80 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_81 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_82 = ___centralTile0;
		int32_t L_83 = L_82->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_84 = ___centralTile0;
		int32_t L_85 = L_84->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_86;
		L_86 = (L_81)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1)));
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_80, L_86, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x - 1, centralTile.y + 1, 0), gm.overlay, bcd);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_87 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_88 = ___centralTile0;
		int32_t L_89 = L_88->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_90 = ___centralTile0;
		int32_t L_91 = L_90->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_92), ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1)), 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_93 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_94 = L_93->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_95 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_bcd_6();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_87, L_92, L_94, L_95, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY - 1]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_96 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_97 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_98 = ___centralTile0;
		int32_t L_99 = L_98->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_100 = ___centralTile0;
		int32_t L_101 = L_100->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_102;
		L_102 = (L_97)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1)));
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_96, L_102, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x - 1, centralTile.y - 1, 0), gm.overlay, def);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_103 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_104 = ___centralTile0;
		int32_t L_105 = L_104->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_106 = ___centralTile0;
		int32_t L_107 = L_106->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_108), ((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_107, (int32_t)1)), 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_109 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_110 = L_109->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_111 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_def_8();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_103, L_108, L_110, L_111, /*hidden argument*/NULL);
		goto IL_03fe;
	}

IL_0232:
	{
		// OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY - 1]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_112 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_113 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_114 = ___centralTile0;
		int32_t L_115 = L_114->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_116 = ___centralTile0;
		int32_t L_117 = L_116->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_118;
		L_118 = (L_113)->GetAtUnchecked(L_115, ((int32_t)il2cpp_codegen_subtract((int32_t)L_117, (int32_t)1)));
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_112, L_118, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y - 1, 0), gm.overlay, def);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_119 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_120 = ___centralTile0;
		int32_t L_121 = L_120->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_122 = ___centralTile0;
		int32_t L_123 = L_122->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_124;
		memset((&L_124), 0, sizeof(L_124));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_124), L_121, ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, (int32_t)1)), 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_125 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_126 = L_125->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_127 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_def_8();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_119, L_124, L_126, L_127, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_128 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_129 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_130 = ___centralTile0;
		int32_t L_131 = L_130->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_132 = ___centralTile0;
		int32_t L_133 = L_132->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_134;
		L_134 = (L_129)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1)), L_133);
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_128, L_134, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x + 1, centralTile.y, 0), gm.overlay, abf);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_135 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_136 = ___centralTile0;
		int32_t L_137 = L_136->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_138 = ___centralTile0;
		int32_t L_139 = L_138->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_140;
		memset((&L_140), 0, sizeof(L_140));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_140), ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1)), L_139, 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_141 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_142 = L_141->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_143 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_abf_4();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_135, L_140, L_142, L_143, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX - 1, centralTile.gridY]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_144 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_145 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_146 = ___centralTile0;
		int32_t L_147 = L_146->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_148 = ___centralTile0;
		int32_t L_149 = L_148->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_150;
		L_150 = (L_145)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_147, (int32_t)1)), L_149);
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_144, L_150, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x - 1, centralTile.y, 0), gm.overlay, cde);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_151 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_152 = ___centralTile0;
		int32_t L_153 = L_152->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_154 = ___centralTile0;
		int32_t L_155 = L_154->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_156;
		memset((&L_156), 0, sizeof(L_156));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_156), ((int32_t)il2cpp_codegen_subtract((int32_t)L_153, (int32_t)1)), L_155, 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_157 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_158 = L_157->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_159 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_cde_7();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_151, L_156, L_158, L_159, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX, centralTile.gridY + 1]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_160 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_161 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_162 = ___centralTile0;
		int32_t L_163 = L_162->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_164 = ___centralTile0;
		int32_t L_165 = L_164->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_166;
		L_166 = (L_161)->GetAtUnchecked(L_163, ((int32_t)il2cpp_codegen_add((int32_t)L_165, (int32_t)1)));
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_160, L_166, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y + 1, 0), gm.overlay, bcd);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_167 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_168 = ___centralTile0;
		int32_t L_169 = L_168->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_170 = ___centralTile0;
		int32_t L_171 = L_170->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_172;
		memset((&L_172), 0, sizeof(L_172));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_172), L_169, ((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)1)), 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_173 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_174 = L_173->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_175 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_bcd_6();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_167, L_172, L_174, L_175, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY + 1]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_176 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_177 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_178 = ___centralTile0;
		int32_t L_179 = L_178->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_180 = ___centralTile0;
		int32_t L_181 = L_180->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_182;
		L_182 = (L_177)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_179, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_181, (int32_t)1)));
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_176, L_182, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x + 1, centralTile.y + 1, 0), gm.overlay, abc);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_183 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_184 = ___centralTile0;
		int32_t L_185 = L_184->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_186 = ___centralTile0;
		int32_t L_187 = L_186->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_188;
		memset((&L_188), 0, sizeof(L_188));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_188), ((int32_t)il2cpp_codegen_add((int32_t)L_185, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)1)), 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_189 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_190 = L_189->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_191 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_abc_3();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_183, L_188, L_190, L_191, /*hidden argument*/NULL);
		// OwnedTiles.Add(tiles[centralTile.gridX + 1, centralTile.gridY - 1]);
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_192 = __this->get_OwnedTiles_1();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_193 = V_0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_194 = ___centralTile0;
		int32_t L_195 = L_194->get_gridX_17();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_196 = ___centralTile0;
		int32_t L_197 = L_196->get_gridY_18();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_198;
		L_198 = (L_193)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_195, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_197, (int32_t)1)));
		List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4(L_192, L_198, /*hidden argument*/List_1_Add_mEC808977F674C01B3D46D857459084EE72AD90C4_RuntimeMethod_var);
		// centralTile.SetTile(new Vector3Int(centralTile.x + 1, centralTile.y - 1, 0), gm.overlay, aef);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_199 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_200 = ___centralTile0;
		int32_t L_201 = L_200->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_202 = ___centralTile0;
		int32_t L_203 = L_202->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_204;
		memset((&L_204), 0, sizeof(L_204));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_204), ((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_203, (int32_t)1)), 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_205 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_206 = L_205->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_207 = ((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->get_aef_5();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_199, L_204, L_206, L_207, /*hidden argument*/NULL);
	}

IL_03fe:
	{
		// centralTile.SetTile(new Vector3Int(centralTile.x, centralTile.y, 0), gm.overlay, TerrainTile.cityImage);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_208 = ___centralTile0;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_209 = ___centralTile0;
		int32_t L_210 = L_209->get_x_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_211 = ___centralTile0;
		int32_t L_212 = L_211->get_y_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_213;
		memset((&L_213), 0, sizeof(L_213));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_213), L_210, L_212, 0, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_214 = __this->get_gm_2();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_215 = L_214->get_overlay_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_216 = ((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->get_cityImage_15();
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(L_208, L_213, L_215, L_216, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void City::LoadImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void City_LoadImages_m690D9D75247120ECAAD61AAC2DE8B783CE8C9962 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28BBA0FFE3F23F96799979DE12AF6A0B2090DDCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3BFF17AFF4811520BAA68CDB894C9951C0062EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAC679D9FDD096E31E14E3319FA031E29B01805A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFBCAF51A5EC8411877FB968529EA01B3A167959);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAD771FCE32E1B35609EB8CBFDF6D030AA6C4369);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8ECB300A8B76F65B207DFA158A9BD004707D432);
		s_Il2CppMethodInitialized = true;
	}
	{
		// abc = Resources.Load<Sprite>("Tile Sprites/abc");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0;
		L_0 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral28BBA0FFE3F23F96799979DE12AF6A0B2090DDCD, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->set_abc_3(L_0);
		// abf = Resources.Load<Sprite>("Tile Sprites/abf");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1;
		L_1 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteralF8ECB300A8B76F65B207DFA158A9BD004707D432, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->set_abf_4(L_1);
		// aef = Resources.Load<Sprite>("Tile Sprites/aef");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2;
		L_2 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteralDAD771FCE32E1B35609EB8CBFDF6D030AA6C4369, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->set_aef_5(L_2);
		// bcd = Resources.Load<Sprite>("Tile Sprites/bcd");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3;
		L_3 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteralAAC679D9FDD096E31E14E3319FA031E29B01805A, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->set_bcd_6(L_3);
		// cde = Resources.Load<Sprite>("Tile Sprites/cde");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4;
		L_4 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteralAFBCAF51A5EC8411877FB968529EA01B3A167959, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->set_cde_7(L_4);
		// def = Resources.Load<Sprite>("Tile Sprites/def");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5;
		L_5 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteralA3BFF17AFF4811520BAA68CDB894C9951C0062EA, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_StaticFields*)il2cpp_codegen_static_fields_for(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var))->set_def_8(L_5);
		// }
		return;
	}
}
// System.Int32 City::GetFoodPerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetFoodPerTurn_mE525A1629BE952BC11ECBD97882EE08BCA2C9B35 (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int foodperturn = 0;
		V_0 = 0;
		// foreach (TerrainTile tile in OwnedTiles)
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_0 = __this->get_OwnedTiles_1();
		Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  L_1;
		L_1 = List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571(L_0, /*hidden argument*/List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_0012:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_2;
			L_2 = Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_inline((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
			V_2 = L_2;
			// foodperturn += tile.basefood;
			int32_t L_3 = V_0;
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_4 = V_2;
			int32_t L_5 = L_4->get_basefood_1();
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5));
		}

IL_0025:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			bool L_6;
			L_6 = Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0012;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// return foodperturn;
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		int32_t L_8 = V_3;
		return L_8;
	}
}
// System.Int32 City::GetGoldPerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetGoldPerTurn_m1513B8366A893332662A71E1B19056B2CD80543F (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int goldperturn = 0;
		V_0 = 0;
		// foreach (TerrainTile tile in OwnedTiles)
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_0 = __this->get_OwnedTiles_1();
		Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  L_1;
		L_1 = List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571(L_0, /*hidden argument*/List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_0012:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_2;
			L_2 = Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_inline((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
			V_2 = L_2;
			// goldperturn += tile.basegold;
			int32_t L_3 = V_0;
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_4 = V_2;
			int32_t L_5 = L_4->get_basegold_2();
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5));
		}

IL_0025:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			bool L_6;
			L_6 = Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0012;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// return goldperturn;
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		int32_t L_8 = V_3;
		return L_8;
	}
}
// System.Int32 City::GetProductionPerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetProductionPerTurn_m3A07013A86F290381EE7BF389F9FD90709015634 (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int productionperturn = 0;
		V_0 = 0;
		// foreach (TerrainTile tile in OwnedTiles)
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_0 = __this->get_OwnedTiles_1();
		Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  L_1;
		L_1 = List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571(L_0, /*hidden argument*/List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_0012:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_2;
			L_2 = Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_inline((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
			V_2 = L_2;
			// productionperturn += tile.baseproduction;
			int32_t L_3 = V_0;
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_4 = V_2;
			int32_t L_5 = L_4->get_baseproduction_3();
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5));
		}

IL_0025:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			bool L_6;
			L_6 = Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0012;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// return productionperturn;
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		int32_t L_8 = V_3;
		return L_8;
	}
}
// System.Int32 City::GetCulturePerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetCulturePerTurn_m05FFD1041B2E1CEE7CC336F98410B44D150ECF56 (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int cultureperturn = 0;
		V_0 = 0;
		// foreach (TerrainTile tile in OwnedTiles)
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_0 = __this->get_OwnedTiles_1();
		Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  L_1;
		L_1 = List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571(L_0, /*hidden argument*/List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_0012:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_2;
			L_2 = Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_inline((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
			V_2 = L_2;
			// cultureperturn += tile.baseculture;
			int32_t L_3 = V_0;
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_4 = V_2;
			int32_t L_5 = L_4->get_baseculture_4();
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5));
		}

IL_0025:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			bool L_6;
			L_6 = Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0012;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// return cultureperturn;
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		int32_t L_8 = V_3;
		return L_8;
	}
}
// System.Int32 City::GetFaithPerTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t City_GetFaithPerTurn_m13B4314723B762ABB599670F85E11298224888BB (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int faithperturn = 0;
		V_0 = 0;
		// foreach (TerrainTile tile in OwnedTiles)
		List_1_tB3F944139168A62377B4E136185ADBF590543826 * L_0 = __this->get_OwnedTiles_1();
		Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E  L_1;
		L_1 = List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571(L_0, /*hidden argument*/List_1_GetEnumerator_m2587AFE33619FDEC6A8C986D2BA81583C4779571_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_0012:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_2;
			L_2 = Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_inline((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_get_Current_m866BC7705242A97D479E8F95AD0D27F0B57FAC5C_RuntimeMethod_var);
			V_2 = L_2;
			// faithperturn += tile.basefaith;
			int32_t L_3 = V_0;
			TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_4 = V_2;
			int32_t L_5 = L_4->get_basefaith_5();
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5));
		}

IL_0025:
		{
			// foreach (TerrainTile tile in OwnedTiles)
			bool L_6;
			L_6 = Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mBF4AA0F2869B982CECAB82D044FF6698F770DFDC_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0012;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D((Enumerator_tB444BB73374E4154EE16CBFE927D473D930A547E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mFD7181A7BA758670620838DDDB467B30B307152D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// return faithperturn;
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		int32_t L_8 = V_3;
		return L_8;
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
// System.Void CityNaming::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CityNaming_Start_m11B433E073463FDE8B6B46207B3CD1F3149F4C95 (CityNaming_t79FEF8E4F09AFC4355DEAE296337A4630C56A88F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CityNaming::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CityNaming_Update_m927E337F70AD0D37DD4062D96F82529975021B81 (CityNaming_t79FEF8E4F09AFC4355DEAE296337A4630C56A88F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CityNaming::CloseCityNaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CityNaming_CloseCityNaming_mF20F85C5BFAFEB955E1DA487A33A3225F36E7E20 (CityNaming_t79FEF8E4F09AFC4355DEAE296337A4630C56A88F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CityName.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_CityName_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Debug.Log(CityNameInput.GetComponent<TextMeshProUGUI>().text);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_CityNameInput_4();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_2;
		L_2 = GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659(L_1, /*hidden argument*/GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CityNaming::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CityNaming__ctor_m03EF3BED041CF6157E567A9D57CB7260ABD5E0A6 (CityNaming_t79FEF8E4F09AFC4355DEAE296337A4630C56A88F * __this, const RuntimeMethod* method)
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
// System.Void CityPanel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CityPanel_Start_m618BFECAD3D6A77408F7C3D659944DE1AAA574F8 (CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CityPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CityPanel_Update_mD5FE3DD94947C00CA38A7D6DDBDC2E7664F1F1C2 (CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CityPanel::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CityPanel_UpdateText_m66B4504834BDD40698E13D878989376F1A75A8E4 (CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BAC3E925A475D0757EA5353BB3204F1A951E7E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1252CE30DA759C03396586EF3AD9B2DF719306E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32C49E800E744E27CD40A683B5801FEA968BC5E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39FB1B12C60EDFF271F261ECF96FA8F3AEDC8C67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBED218361C55B6F6D0579F3F8DB511465B1645);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF201F519D58FB2A98600B095B7406C651C9CD4B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (city != null)
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_0 = __this->get_city_4();
		V_0 = (bool)((!(((RuntimeObject*)(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_015b;
		}
	}
	{
		// cityname.GetComponent<TextMeshProUGUI>().text = cityNameInput.GetComponent<TextMeshProUGUI>().text;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_cityname_5();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_3;
		L_3 = GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659(L_2, /*hidden argument*/GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_cityNameInput_11();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_5;
		L_5 = GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659(L_4, /*hidden argument*/GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_5);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		// foodperturn.GetComponent<TextMeshProUGUI>().text = "Food Per Turn: " + city.GetFoodPerTurn().ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_foodperturn_6();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_8;
		L_8 = GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659(L_7, /*hidden argument*/GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_9 = __this->get_city_4();
		int32_t L_10;
		L_10 = City_GetFoodPerTurn_mE525A1629BE952BC11ECBD97882EE08BCA2C9B35(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1252CE30DA759C03396586EF3AD9B2DF719306E4, L_11, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_12);
		// goldperturn.GetComponent<TextMeshProUGUI>().text = "Gold Per Turn: " + city.GetGoldPerTurn().ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_goldperturn_7();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_14;
		L_14 = GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659(L_13, /*hidden argument*/GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_15 = __this->get_city_4();
		int32_t L_16;
		L_16 = City_GetGoldPerTurn_m1513B8366A893332662A71E1B19056B2CD80543F(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0BAC3E925A475D0757EA5353BB3204F1A951E7E3, L_17, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_18);
		// productionperturn.GetComponent<TextMeshProUGUI>().text = "Production Per Turn: " + city.GetProductionPerTurn().ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_productionperturn_8();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_20;
		L_20 = GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659(L_19, /*hidden argument*/GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_21 = __this->get_city_4();
		int32_t L_22;
		L_22 = City_GetProductionPerTurn_m3A07013A86F290381EE7BF389F9FD90709015634(L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral39FB1B12C60EDFF271F261ECF96FA8F3AEDC8C67, L_23, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_20, L_24);
		// cultureperturn.GetComponent<TextMeshProUGUI>().text = "Culture Per Turn: " + city.GetCulturePerTurn().ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_cultureperturn_9();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_26;
		L_26 = GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659(L_25, /*hidden argument*/GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_27 = __this->get_city_4();
		int32_t L_28;
		L_28 = City_GetCulturePerTurn_m05FFD1041B2E1CEE7CC336F98410B44D150ECF56(L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9FBED218361C55B6F6D0579F3F8DB511465B1645, L_29, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_30);
		// faithperturn.GetComponent<TextMeshProUGUI>().text = "Faith Per Turn: " + city.GetFaithPerTurn().ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_faithperturn_10();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_32;
		L_32 = GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659(L_31, /*hidden argument*/GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_33 = __this->get_city_4();
		int32_t L_34;
		L_34 = City_GetFaithPerTurn_m13B4314723B762ABB599670F85E11298224888BB(L_33, /*hidden argument*/NULL);
		V_1 = L_34;
		String_t* L_35;
		L_35 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral32C49E800E744E27CD40A683B5801FEA968BC5E0, L_35, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_32, L_36);
		// Debug.Log(city.empire);
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_37 = __this->get_city_4();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_38 = L_37->get_empire_9();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_38, /*hidden argument*/NULL);
		// totalproduction.GetComponent<TextMeshProUGUI>().text = "Total Production: " + city.empire.totalproduction.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_totalproduction_12();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_40;
		L_40 = GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659(L_39, /*hidden argument*/GameObject_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_m252F6E57D2F18ECBCD5A4A3FD7053FF797617659_RuntimeMethod_var);
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_41 = __this->get_city_4();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_42 = L_41->get_empire_9();
		int32_t* L_43 = L_42->get_address_of_totalproduction_4();
		String_t* L_44;
		L_44 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_43, /*hidden argument*/NULL);
		String_t* L_45;
		L_45 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDF201F519D58FB2A98600B095B7406C651C9CD4B, L_44, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_40, L_45);
	}

IL_015b:
	{
		// }
		return;
	}
}
// System.Void CityPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CityPanel__ctor_m8668F1B04B4402653E8A69FFCFAB92457D6CD9EE (CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * __this, const RuntimeMethod* method)
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
// System.Void ClickPanel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickPanel_Start_m59C9A53BE600C87193102A2AAE3495E6E3A63AA4 (ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_4(L_0);
		// }
		return;
	}
}
// System.Void ClickPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickPanel_Update_m969AF0457D2546821530FFE695E68C1AC77E7653 (ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ClickPanel::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickPanel_Open_m80EFCBAD4B16D68E9A6901B85A93325FD66431D6 (ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("Open");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClickPanel::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickPanel_Close_m11AD20AD15AB8CAF562000BE7E3021F71027ECD0 (ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("Close");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClickPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickPanel__ctor_mCB44ED2322287D3D4DBB82529289F5A07D8E77DD (ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * __this, const RuntimeMethod* method)
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
// System.Void Empires::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Empires__ctor_m7726416434B97241EA1F8536B292F8F9A72CEFD7 (Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * __this, String_t* ___empirename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFCD36555C9F94B4ADC42B2A22F75CAFF3443D71D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<City> cities = new List<City>();
		List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * L_0 = (List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 *)il2cpp_codegen_object_new(List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71_il2cpp_TypeInfo_var);
		List_1__ctor_mFCD36555C9F94B4ADC42B2A22F75CAFF3443D71D(L_0, /*hidden argument*/List_1__ctor_mFCD36555C9F94B4ADC42B2A22F75CAFF3443D71D_RuntimeMethod_var);
		__this->set_cities_1(L_0);
		// public int totalfood = 0;
		__this->set_totalfood_2(0);
		// public int totalgold = 0;
		__this->set_totalgold_3(0);
		// public int totalproduction = 0;
		__this->set_totalproduction_4(0);
		// public int totalculture = 0;
		__this->set_totalculture_5(0);
		// public int totalfaith = 0;
		__this->set_totalfaith_6(0);
		// public Empires(string empirename)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.empirename = empirename;
		String_t* L_1 = ___empirename0;
		__this->set_empirename_0(L_1);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m670947E173A53E06EC96917DE33E14817302B810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD548AF8776640636BAFD874B5F272CD948B08275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Empires> empires = new List<Empires>();
		List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * L_0 = (List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC *)il2cpp_codegen_object_new(List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC_il2cpp_TypeInfo_var);
		List_1__ctor_m670947E173A53E06EC96917DE33E14817302B810(L_0, /*hidden argument*/List_1__ctor_m670947E173A53E06EC96917DE33E14817302B810_RuntimeMethod_var);
		__this->set_empires_8(L_0);
		// public List<Buildings> buildings = new List<Buildings>();
		List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28 * L_1 = (List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28 *)il2cpp_codegen_object_new(List_1_t2F277B3A0B977BD359D53E7430C48B7CBECECE28_il2cpp_TypeInfo_var);
		List_1__ctor_mD548AF8776640636BAFD874B5F272CD948B08275(L_1, /*hidden argument*/List_1__ctor_mD548AF8776640636BAFD874B5F272CD948B08275_RuntimeMethod_var);
		__this->set_buildings_13(L_1);
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
// System.Void LoadGame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadGame_Start_m70E22829F1CFF64DADCDF1566BF81390802509BA (LoadGame_t1EAC64ECA0C45AA246F223964F9C4C1047B519C5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LoadGame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadGame_Update_m92343BD177DCA87A64A5A126F53367464141DD56 (LoadGame_t1EAC64ECA0C45AA246F223964F9C4C1047B519C5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LoadGame::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadGame_OnClick_m75B5D749786859A78E922077C9E8DB196D5B7E8B (LoadGame_t1EAC64ECA0C45AA246F223964F9C4C1047B519C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(mainScene);
		String_t* L_0 = __this->get_mainScene_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadGame__ctor_m6A263A802A3BD2AC0DE9ADD95022394DD245FF0E (LoadGame_t1EAC64ECA0C45AA246F223964F9C4C1047B519C5 * __this, const RuntimeMethod* method)
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
// System.Void LoadTitle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadTitle_Start_m88D67509B54F0F4655AD049D42746A3A5C57912D (LoadTitle_tD353049BDFFB39EF2512B4B0C2401681FBB11D95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadTitle_OnFinished_mE8C1F1B54954642CDEB4A6847606796D0E8B2904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09C3152C24244C0A4482BDD08496C4CD6FEEDFE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntroVideo.loopPointReached += OnFinished;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_IntroVideo_4();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)il2cpp_codegen_object_new(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400(L_1, __this, (intptr_t)((intptr_t)LoadTitle_OnFinished_mE8C1F1B54954642CDEB4A6847606796D0E8B2904_RuntimeMethod_var), /*hidden argument*/NULL);
		VideoPlayer_add_loopPointReached_m01BBFFE55835498DFF2A1C8CEF3292B4780E4964(L_0, L_1, /*hidden argument*/NULL);
		// IntroVideo.url = System.IO.Path.Combine(Application.streamingAssetsPath, "Super Mario Civilization Intro.mp4");
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_2 = __this->get_IntroVideo_4();
		String_t* L_3;
		L_3 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_3, _stringLiteral09C3152C24244C0A4482BDD08496C4CD6FEEDFE0, /*hidden argument*/NULL);
		VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13(L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadTitle::OnFinished(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadTitle_OnFinished_mE8C1F1B54954642CDEB4A6847606796D0E8B2904 (LoadTitle_tD353049BDFFB39EF2512B4B0C2401681FBB11D95 * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___vp0, const RuntimeMethod* method)
{
	{
		// titlescreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_titlescreen_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// TitleBG.Play();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_1 = __this->get_TitleBG_6();
		VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadTitle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadTitle__ctor_m6EC8CB4DC05DD81DE143AFC688653E3DCD871A6B (LoadTitle_tD353049BDFFB39EF2512B4B0C2401681FBB11D95 * __this, const RuntimeMethod* method)
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
// System.Void TerrainTile::.ctor(System.String,System.Int32,System.Int32,GameManager,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile__ctor_m093A29C63A925040CF22A768D01CFE604E4A512C (TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * __this, String_t* ___type0, int32_t ___x1, int32_t ___y2, GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm3, int32_t ___gridX4, int32_t ___gridY5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42F8337D7364850BC3CA6FBB08E0FBDB30CF8E19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D58F319E558740809D07FC4A7430E9033B88069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB20075339A32A57EFE587830904C1B1B60D9BA0D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// public bool hasCity = false;
		__this->set_hasCity_14((bool)0);
		// public TerrainTile(string type, int x, int y, GameManager gm, int gridX, int gridY)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.type = type;
		String_t* L_0 = ___type0;
		__this->set_type_0(L_0);
		// this.x = x;
		int32_t L_1 = ___x1;
		__this->set_x_6(L_1);
		// this.y = y;
		int32_t L_2 = ___y2;
		__this->set_y_7(L_2);
		// this.gm = gm;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = ___gm3;
		__this->set_gm_16(L_3);
		// this.gridX = gridX;
		int32_t L_4 = ___gridX4;
		__this->set_gridX_17(L_4);
		// this.gridY = gridY;
		int32_t L_5 = ___gridY5;
		__this->set_gridY_18(L_5);
		// if(type == "Grass")
		String_t* L_6 = ___type0;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralB20075339A32A57EFE587830904C1B1B60D9BA0D, /*hidden argument*/NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		// basefood = 5;
		__this->set_basefood_1(5);
		// basegold = 1;
		__this->set_basegold_2(1);
		// baseproduction = 4;
		__this->set_baseproduction_3(4);
		// baseculture = 2;
		__this->set_baseculture_4(2);
		// basefaith = 2;
		__this->set_basefaith_5(2);
		// tileImage = grassImage;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = ((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->get_grassImage_9();
		__this->set_tileImage_8(L_9);
	}

IL_007b:
	{
		// if (type == "Water")
		String_t* L_10 = ___type0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6, /*hidden argument*/NULL);
		V_1 = L_11;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_00ba;
		}
	}
	{
		// basefood = 4;
		__this->set_basefood_1(4);
		// basegold = 2;
		__this->set_basegold_2(2);
		// baseproduction = 3;
		__this->set_baseproduction_3(3);
		// baseculture = 5;
		__this->set_baseculture_4(5);
		// basefaith = 5;
		__this->set_basefaith_5(5);
		// tileImage = waterImage;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_13 = ((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->get_waterImage_10();
		__this->set_tileImage_8(L_13);
	}

IL_00ba:
	{
		// if (type == "Gravel")
		String_t* L_14 = ___type0;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral9D58F319E558740809D07FC4A7430E9033B88069, /*hidden argument*/NULL);
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// basefood = 2;
		__this->set_basefood_1(2);
		// basegold = 5;
		__this->set_basegold_2(5);
		// baseproduction = 5;
		__this->set_baseproduction_3(5);
		// baseculture = 1;
		__this->set_baseculture_4(1);
		// basefaith = 1;
		__this->set_basefaith_5(1);
		// tileImage = gravelImage;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_17 = ((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->get_gravelImage_11();
		__this->set_tileImage_8(L_17);
	}

IL_00f9:
	{
		// if (type == "Sand")
		String_t* L_18 = ___type0;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7, /*hidden argument*/NULL);
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_0138;
		}
	}
	{
		// basefood = 1;
		__this->set_basefood_1(1);
		// basegold = 4;
		__this->set_basegold_2(4);
		// baseproduction = 2;
		__this->set_baseproduction_3(2);
		// baseculture = 4;
		__this->set_baseculture_4(4);
		// basefaith = 3;
		__this->set_basefaith_5(3);
		// tileImage = sandImage;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_21 = ((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->get_sandImage_12();
		__this->set_tileImage_8(L_21);
	}

IL_0138:
	{
		// if (type == "Desert")
		String_t* L_22 = ___type0;
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteral42F8337D7364850BC3CA6FBB08E0FBDB30CF8E19, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_0179;
		}
	}
	{
		// basefood = 3;
		__this->set_basefood_1(3);
		// basegold = 3;
		__this->set_basegold_2(3);
		// baseproduction = 1;
		__this->set_baseproduction_3(1);
		// baseculture = 3;
		__this->set_baseculture_4(3);
		// basefaith = 4;
		__this->set_basefaith_5(4);
		// tileImage = desertImage;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_25 = ((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->get_desertImage_13();
		__this->set_tileImage_8(L_25);
	}

IL_0179:
	{
		// }
		return;
	}
}
// System.Void TerrainTile::LoadImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile_LoadImages_mA8437EAF4B2D7931FCE065B96A953617445289CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C1687827DD9E9412FDE912A5B51EA43BCACAE60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E0EDA535AAC383249AC43F66430DDDBC27C2BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral817587ED56AE25F4249B6578D00B7571DBF9E724);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9493C914788251D7B6FE830D6393BE2F5345D88E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFE8EAD3C71FD0528A437D79804E987E69CB1058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE08A0248521A255C457A6C1D492A7FE138B6446A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grassImage = Resources.Load<Sprite>("Tile Sprites/Grass Tile");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0;
		L_0 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral7E0EDA535AAC383249AC43F66430DDDBC27C2BC3, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->set_grassImage_9(L_0);
		// waterImage = Resources.Load<Sprite>("Tile Sprites/Water Tile");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1;
		L_1 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral4C1687827DD9E9412FDE912A5B51EA43BCACAE60, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->set_waterImage_10(L_1);
		// gravelImage = Resources.Load<Sprite>("Tile Sprites/Gravel Tile");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2;
		L_2 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral9493C914788251D7B6FE830D6393BE2F5345D88E, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->set_gravelImage_11(L_2);
		// sandImage = Resources.Load<Sprite>("Tile Sprites/Desert Rocky Dirt Tile");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3;
		L_3 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteralE08A0248521A255C457A6C1D492A7FE138B6446A, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->set_sandImage_12(L_3);
		// desertImage = Resources.Load<Sprite>("Tile Sprites/Desert Tile");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4;
		L_4 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteralDFE8EAD3C71FD0528A437D79804E987E69CB1058, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->set_desertImage_13(L_4);
		// cityImage = Resources.Load<Sprite>("Tile Sprites/City Tile");
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5;
		L_5 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral817587ED56AE25F4249B6578D00B7571DBF9E724, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->set_cityImage_15(L_5);
		// }
		return;
	}
}
// System.Void TerrainTile::AddCity(UnityEngine.Tilemaps.Tilemap,Empires)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile_AddCity_m33823B5F8A272F56531C5AD4E3C0B61564E2EAA4 (TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * __this, Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___overlay0, Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * ___empire1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7D684C4596B5BCBA1136957F0B53CA8E983F9896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * V_1 = NULL;
	City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * V_2 = NULL;
	{
		// Vector3Int position = new Vector3Int(x, y, 0);
		int32_t L_0 = __this->get_x_6();
		int32_t L_1 = __this->get_y_7();
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&V_0), L_0, L_1, 0, /*hidden argument*/NULL);
		// Tile t = ScriptableObject.CreateInstance<Tile>();
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_2;
		L_2 = ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779(/*hidden argument*/ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779_RuntimeMethod_var);
		V_1 = L_2;
		// t.sprite = cityImage;
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_3 = V_1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = ((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->get_cityImage_15();
		Tile_set_sprite_m29904A3BC52CDFB8BF48604CD0FED0EF3477BCE4(L_3, L_4, /*hidden argument*/NULL);
		// overlay.SetTile(position, t);
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_5 = ___overlay0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6 = V_0;
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_7 = V_1;
		Tilemap_SetTile_mDA8C773A2FF8D6744BE268AE9D77CC3FB2A5D862(L_5, L_6, L_7, /*hidden argument*/NULL);
		// hasCity = true;
		__this->set_hasCity_14((bool)1);
		// City c = new City(this);
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_8 = (City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E *)il2cpp_codegen_object_new(City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E_il2cpp_TypeInfo_var);
		City__ctor_m8008493B16CCCB75BFF61B5FF956C85019804CB3(L_8, __this, /*hidden argument*/NULL);
		V_2 = L_8;
		// empire.cities.Add(c);
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_9 = ___empire1;
		List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * L_10 = L_9->get_cities_1();
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_11 = V_2;
		List_1_Add_m7D684C4596B5BCBA1136957F0B53CA8E983F9896(L_10, L_11, /*hidden argument*/List_1_Add_m7D684C4596B5BCBA1136957F0B53CA8E983F9896_RuntimeMethod_var);
		// c.empire = empire;
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_12 = V_2;
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_13 = ___empire1;
		L_12->set_empire_9(L_13);
		// city = c;
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_14 = V_2;
		__this->set_city_19(L_14);
		// }
		return;
	}
}
// System.Void TerrainTile::SetTile(UnityEngine.Tilemaps.Tilemap,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile_SetTile_mA0C6F3CDBB7040590CA404D71BC3304BD7EB6D92 (TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * __this, Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite1, const RuntimeMethod* method)
{
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3Int position = new Vector3Int(x, y, 0);
		int32_t L_0 = __this->get_x_6();
		int32_t L_1 = __this->get_y_7();
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&V_0), L_0, L_1, 0, /*hidden argument*/NULL);
		// SetTile(position, map, sprite);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_2 = V_0;
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_3 = ___map0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = ___sprite1;
		TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TerrainTile::SetTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.Tilemap,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTile_SetTile_mBEBF038CF7E1187FEA2B6E40970DDD342FA9A1A9 (TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map1, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * V_0 = NULL;
	{
		// Tile t = ScriptableObject.CreateInstance<Tile>();
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_0;
		L_0 = ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779(/*hidden argument*/ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779_RuntimeMethod_var);
		V_0 = L_0;
		// t.sprite = sprite;
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_1 = V_0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = ___sprite2;
		Tile_set_sprite_m29904A3BC52CDFB8BF48604CD0FED0EF3477BCE4(L_1, L_2, /*hidden argument*/NULL);
		// map.SetTile(position, t);
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_3 = ___map1;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = ___position0;
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_5 = V_0;
		Tilemap_SetTile_mDA8C773A2FF8D6744BE268AE9D77CC3FB2A5D862(L_3, L_4, L_5, /*hidden argument*/NULL);
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
// System.Void TileClick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileClick_Start_mB843D18DD787D30D5CF46E3723A4F8B428D34EA4 (TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm = GameObject.Find("GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gm_5(L_1);
		// }
		return;
	}
}
// System.Void TileClick::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileClick_Update_m1D826EB10E4562F16F63171AD6D857224E508C74 (TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// WorldPoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		__this->set_WorldPoint_4(L_5);
		// gm.hit = gm.terrainmap.WorldToCell(WorldPoint);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = __this->get_gm_5();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_gm_5();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_8 = L_7->get_terrainmap_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = __this->get_WorldPoint_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_11;
		L_11 = GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9(L_8, L_10, /*hidden argument*/NULL);
		L_6->set_hit_12(L_11);
		// Debug.Log(gm.hit);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = __this->get_gm_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_13 = L_12->get_hit_12();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_14 = L_13;
		RuntimeObject * L_15 = Box(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// ProcessClick();
		TileClick_ProcessClick_m64C89432BD493B101CD4C4330A51912CCCC4A4EF(__this, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void TileClick::ProcessClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileClick_ProcessClick_m64C89432BD493B101CD4C4330A51912CCCC4A4EF (TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112_m7DBE9036DE3CA69158561AA7D3D339B5F8DBAD88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * V_0 = NULL;
	bool V_1 = false;
	{
		// TerrainTile t = gm.tiles[gm.hit.x + gm.mapWidth / 2, gm.hit.y + gm.mapHeight / 2];
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_5();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_1 = L_0->get_tiles_7();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get_gm_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_3 = L_2->get_address_of_hit_12();
		int32_t L_4;
		L_4 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_3, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = __this->get_gm_5();
		int32_t L_6 = L_5->get_mapWidth_11();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_gm_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_8 = L_7->get_address_of_hit_12();
		int32_t L_9;
		L_9 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_8, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = __this->get_gm_5();
		int32_t L_11 = L_10->get_mapHeight_10();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_12;
		L_12 = (L_1)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)((int32_t)L_6/(int32_t)2)))), ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)((int32_t)L_11/(int32_t)2)))));
		V_0 = L_12;
		// if (t.hasCity == true)
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_13 = V_0;
		bool L_14 = L_13->get_hasCity_14();
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_008d;
		}
	}
	{
		// cityPanel.city = t.city;
		CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * L_16 = __this->get_cityPanel_6();
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_17 = V_0;
		City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_18 = L_17->get_city_19();
		L_16->set_city_4(L_18);
		// cityPanel.UpdateText();
		CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * L_19 = __this->get_cityPanel_6();
		CityPanel_UpdateText_m66B4504834BDD40698E13D878989376F1A75A8E4(L_19, /*hidden argument*/NULL);
		// cityPanel.gameObject.GetComponent<ClickPanel>().Open();
		CityPanel_t2D420B37D9D33F1C388CABCAF87BA05632A96942 * L_20 = __this->get_cityPanel_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		ClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112 * L_22;
		L_22 = GameObject_GetComponent_TisClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112_m7DBE9036DE3CA69158561AA7D3D339B5F8DBAD88(L_21, /*hidden argument*/GameObject_GetComponent_TisClickPanel_t6CA4E9EFC355BA5E553BE2660922D14717C51112_m7DBE9036DE3CA69158561AA7D3D339B5F8DBAD88_RuntimeMethod_var);
		ClickPanel_Open_m80EFCBAD4B16D68E9A6901B85A93325FD66431D6(L_22, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void TileClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileClick__ctor_m504E4A90031D1D6E267BF999F419C8EE04D3702E (TileClick_t2B6EDED528A2A63682D523540409C61883BB4CFD * __this, const RuntimeMethod* method)
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
// System.Void TurnButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnButton_Start_mE5551C088AA7C79FFE38F39A351D1E34C235237B (TurnButton_t6E0C2FA126B8B9C16A53E9BCE40E2BC371C9F299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54440980954580FB34BB7471E937C78A506BD3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm = GameObject.Find("/GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC54440980954580FB34BB7471E937C78A506BD3C, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gm_4(L_1);
		// }
		return;
	}
}
// System.Void TurnButton::NextTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnButton_NextTurn_mD8CEE9B3292333110DE3114707DB4285F68D1D12 (TurnButton_t6E0C2FA126B8B9C16A53E9BCE40E2BC371C9F299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA32E899A8B90B453E0D889980CA14766DAAF0023_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDA65DDA79668BC96D20BAFB983ED08935080D243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3B124D050403E721819FC6C5FFC05FFAE6514D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAD0A13871E6CF9F409D8389312474BBE4FCDACA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m342BD4EF96746E3D428502718C338C5C0B3DB4FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC51238197C8A6DE2A729073F4525BC9CA2509E60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m22828079D5181E33BCAF9F15ACDF8C57A46DC755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m84AD6842031342ECE9856222645E616FD83965AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * V_1 = NULL;
	Enumerator_tC82792F0B2124AFA151BF5C18917755081322166  V_2;
	memset((&V_2), 0, sizeof(V_2));
	City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach(Empires e in gm.empires)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * L_1 = L_0->get_empires_8();
		Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666  L_2;
		L_2 = List_1_GetEnumerator_m84AD6842031342ECE9856222645E616FD83965AE(L_1, /*hidden argument*/List_1_GetEnumerator_m84AD6842031342ECE9856222645E616FD83965AE_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c5;
		}

IL_0018:
		{
			// foreach(Empires e in gm.empires)
			Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_3;
			L_3 = Enumerator_get_Current_mC51238197C8A6DE2A729073F4525BC9CA2509E60_inline((Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC51238197C8A6DE2A729073F4525BC9CA2509E60_RuntimeMethod_var);
			V_1 = L_3;
			// foreach(City c in e.cities)
			Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_4 = V_1;
			List_1_tEFE93DC69E0082D45B2CD505A47AD5744A0CCB71 * L_5 = L_4->get_cities_1();
			Enumerator_tC82792F0B2124AFA151BF5C18917755081322166  L_6;
			L_6 = List_1_GetEnumerator_m22828079D5181E33BCAF9F15ACDF8C57A46DC755(L_5, /*hidden argument*/List_1_GetEnumerator_m22828079D5181E33BCAF9F15ACDF8C57A46DC755_RuntimeMethod_var);
			V_2 = L_6;
		}

IL_002e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0099;
			}

IL_0030:
			{
				// foreach(City c in e.cities)
				City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_7;
				L_7 = Enumerator_get_Current_m342BD4EF96746E3D428502718C338C5C0B3DB4FF_inline((Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m342BD4EF96746E3D428502718C338C5C0B3DB4FF_RuntimeMethod_var);
				V_3 = L_7;
				// e.totalfood += c.GetFoodPerTurn();
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_8 = V_1;
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_9 = L_8;
				int32_t L_10 = L_9->get_totalfood_2();
				City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_11 = V_3;
				int32_t L_12;
				L_12 = City_GetFoodPerTurn_mE525A1629BE952BC11ECBD97882EE08BCA2C9B35(L_11, /*hidden argument*/NULL);
				L_9->set_totalfood_2(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_12)));
				// e.totalgold += c.GetGoldPerTurn();
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_13 = V_1;
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_14 = L_13;
				int32_t L_15 = L_14->get_totalgold_3();
				City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_16 = V_3;
				int32_t L_17;
				L_17 = City_GetGoldPerTurn_m1513B8366A893332662A71E1B19056B2CD80543F(L_16, /*hidden argument*/NULL);
				L_14->set_totalgold_3(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_17)));
				// e.totalproduction += c.GetProductionPerTurn();
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_18 = V_1;
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_19 = L_18;
				int32_t L_20 = L_19->get_totalproduction_4();
				City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_21 = V_3;
				int32_t L_22;
				L_22 = City_GetProductionPerTurn_m3A07013A86F290381EE7BF389F9FD90709015634(L_21, /*hidden argument*/NULL);
				L_19->set_totalproduction_4(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_22)));
				// e.totalculture += c.GetCulturePerTurn();
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_23 = V_1;
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_24 = L_23;
				int32_t L_25 = L_24->get_totalculture_5();
				City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_26 = V_3;
				int32_t L_27;
				L_27 = City_GetCulturePerTurn_m05FFD1041B2E1CEE7CC336F98410B44D150ECF56(L_26, /*hidden argument*/NULL);
				L_24->set_totalculture_5(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_27)));
				// e.totalfaith += c.GetFaithPerTurn();
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_28 = V_1;
				Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_29 = L_28;
				int32_t L_30 = L_29->get_totalfaith_6();
				City_t176A3172F327D5EE2E260C0824B2FBB05D460A4E * L_31 = V_3;
				int32_t L_32;
				L_32 = City_GetFaithPerTurn_m13B4314723B762ABB599670F85E11298224888BB(L_31, /*hidden argument*/NULL);
				L_29->set_totalfaith_6(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_32)));
			}

IL_0099:
			{
				// foreach(City c in e.cities)
				bool L_33;
				L_33 = Enumerator_MoveNext_mAD0A13871E6CF9F409D8389312474BBE4FCDACA8((Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mAD0A13871E6CF9F409D8389312474BBE4FCDACA8_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_0030;
				}
			}

IL_00a2:
			{
				IL2CPP_LEAVE(0xB3, FINALLY_00a4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00a4;
		}

FINALLY_00a4:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mA32E899A8B90B453E0D889980CA14766DAAF0023((Enumerator_tC82792F0B2124AFA151BF5C18917755081322166 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mA32E899A8B90B453E0D889980CA14766DAAF0023_RuntimeMethod_var);
			IL2CPP_END_FINALLY(164)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(164)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		}

IL_00b3:
		{
			// Debug.Log(e.totalfood);
			Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_34 = V_1;
			int32_t L_35 = L_34->get_totalfood_2();
			int32_t L_36 = L_35;
			RuntimeObject * L_37 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_36);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_37, /*hidden argument*/NULL);
		}

IL_00c5:
		{
			// foreach(Empires e in gm.empires)
			bool L_38;
			L_38 = Enumerator_MoveNext_m3B124D050403E721819FC6C5FFC05FFAE6514D11((Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m3B124D050403E721819FC6C5FFC05FFAE6514D11_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0018;
			}
		}

IL_00d1:
		{
			IL2CPP_LEAVE(0xE2, FINALLY_00d3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d3;
	}

FINALLY_00d3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mDA65DDA79668BC96D20BAFB983ED08935080D243((Enumerator_tF67382D4484858DB12E4C749C9D581E826B08666 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mDA65DDA79668BC96D20BAFB983ED08935080D243_RuntimeMethod_var);
		IL2CPP_END_FINALLY(211)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(211)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE2, IL_00e2)
	}

IL_00e2:
	{
		// nextturnmusic.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_39 = __this->get_nextturnmusic_5();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TurnButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnButton__ctor_mFCD27E6D071C41530BF11FCEFDD3733213597D5A (TurnButton_t6E0C2FA126B8B9C16A53E9BCE40E2BC371C9F299 * __this, const RuntimeMethod* method)
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
// System.Void UIUpdate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpdate_Start_m6A9D4AB3D0DABB8017325527A7F253E251D7BE9C (UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54440980954580FB34BB7471E937C78A506BD3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm = GameObject.Find("/GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC54440980954580FB34BB7471E937C78A506BD3C, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gm_4(L_1);
		// }
		return;
	}
}
// System.Void UIUpdate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpdate_Update_m327929D4B09AAB4B409EAB6009CFC01605C18097 (UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E8EEEC61ED00FE10C89D5F65F105F6721A1C70D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F334A8E09B2AD8F2672B543D8932E864C432CFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE8ED886E24300F7030145B9D85D25B24B8B4607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7A2136E8F29A10D4BEBD301F52F62AF0824516A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foodlabel.text = "Food: " + gm.player.totalfood;
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_0 = __this->get_foodlabel_5();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_gm_4();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_2 = L_1->get_player_9();
		int32_t* L_3 = L_2->get_address_of_totalfood_2();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// goldlabel.text = "Gold: " + gm.player.totalgold;
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_6 = __this->get_goldlabel_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_gm_4();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_8 = L_7->get_player_9();
		int32_t* L_9 = L_8->get_address_of_totalgold_3();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6F334A8E09B2AD8F2672B543D8932E864C432CFC, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_11);
		// productionlabel.text = "Production: " + gm.player.totalproduction;
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_12 = __this->get_productionlabel_7();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_13 = __this->get_gm_4();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_14 = L_13->get_player_9();
		int32_t* L_15 = L_14->get_address_of_totalproduction_4();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCE8ED886E24300F7030145B9D85D25B24B8B4607, L_16, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_17);
		// culturelabel.text = "Culture: " + gm.player.totalculture;
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_18 = __this->get_culturelabel_8();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_19 = __this->get_gm_4();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_20 = L_19->get_player_9();
		int32_t* L_21 = L_20->get_address_of_totalculture_5();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6E8EEEC61ED00FE10C89D5F65F105F6721A1C70D, L_22, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_23);
		// faithlabel.text = "Faith: " + gm.player.totalfaith;
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_24 = __this->get_faithlabel_9();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_25 = __this->get_gm_4();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_26 = L_25->get_player_9();
		int32_t* L_27 = L_26->get_address_of_totalfaith_6();
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF7A2136E8F29A10D4BEBD301F52F62AF0824516A, L_28, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_29);
		// }
		return;
	}
}
// System.Void UIUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpdate__ctor_mBB7B0D3CFE04DADD961694725FFB531DECFF8B0B (UIUpdate_t08A293143D76A7EAF673D997161539EFC243817A * __this, const RuntimeMethod* method)
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
// System.Void Units::.ctor(System.Int32,System.Int32,System.Int32,System.String,System.Boolean,TerrainTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Units__ctor_mCCE538126E506B08CA621A45F3AEBE40190982A6 (Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * __this, int32_t ___moveSpeed0, int32_t ___strength1, int32_t ___HP2, String_t* ___name3, bool ___canAttack4, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * ___startTile5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69B1A8C9CA31F18C707F0899EFE87D124F957E9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int moveSpeed = 1;
		__this->set_moveSpeed_0(1);
		// public int strength = 1;
		__this->set_strength_1(1);
		// public int HP = 1;
		__this->set_HP_2(1);
		// public string name = "Unit";
		__this->set_name_3(_stringLiteral69B1A8C9CA31F18C707F0899EFE87D124F957E9D);
		// public bool canAttack = true;
		__this->set_canAttack_4((bool)1);
		// public Units(int moveSpeed, int strength, int HP, string name, bool canAttack, TerrainTile startTile)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.moveSpeed = moveSpeed;
		int32_t L_0 = ___moveSpeed0;
		__this->set_moveSpeed_0(L_0);
		// this.strength = strength;
		int32_t L_1 = ___strength1;
		__this->set_strength_1(L_1);
		// this.HP = HP;
		int32_t L_2 = ___HP2;
		__this->set_HP_2(L_2);
		// this.name = name;
		String_t* L_3 = ___name3;
		__this->set_name_3(L_3);
		// this.canAttack = canAttack;
		bool L_4 = ___canAttack4;
		__this->set_canAttack_4(L_4);
		// this.currentTile = startTile;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_5 = ___startTile5;
		__this->set_currentTile_6(L_5);
		// gm = GameObject.Find("GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7;
		L_7 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_6, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gm_5(L_7);
		// startTile.SetTile(gm.unitoverlay, TerrainTile.cityImage);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_8 = ___startTile5;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_9 = __this->get_gm_5();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_10 = L_9->get_unitoverlay_6();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_11 = ((TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_StaticFields*)il2cpp_codegen_static_fields_for(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var))->get_cityImage_15();
		TerrainTile_SetTile_mA0C6F3CDBB7040590CA404D71BC3304BD7EB6D92(L_8, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Units::Move(TerrainTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Units_Move_m17134174AE7B186AA4803DC4E8CB7D97A2EC14CB (Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * __this, TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * ___moveToTile0, const RuntimeMethod* method)
{
	{
		// currentTile = moveToTile;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_0 = ___moveToTile0;
		__this->set_currentTile_6(L_0);
		// }
		return;
	}
}
// System.Void Units::Attack(Units)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Units_Attack_m9222949ADA0317E93D36F59A657747F36129C76E (Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * __this, Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * ___target0, const RuntimeMethod* method)
{
	{
		// target.Defend(this, strength);
		Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * L_0 = ___target0;
		int32_t L_1 = __this->get_strength_1();
		Units_Defend_m428D91CF122AF765683E938A7D706A3D22C036B3(L_0, __this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Units::Defend(Units,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Units_Defend_m428D91CF122AF765683E938A7D706A3D22C036B3 (Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * __this, Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * ___attacker0, int32_t ___damage1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// HP -= damage;
		int32_t L_0 = __this->get_HP_2();
		int32_t L_1 = ___damage1;
		__this->set_HP_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if(HP <= 0)
		int32_t L_2 = __this->get_HP_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// Die();
		Units_Die_mE5955ACCBC0A4BFE6D8148FAE8FB2AFABEF1C4BF(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Units::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Units_Die_mE5955ACCBC0A4BFE6D8148FAE8FB2AFABEF1C4BF (Units_tEA01A28690FCF58E19A073B483A2D4EB5466A6B0 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void WorldGeneration::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_Start_m089432B2B30F4469013FAF28434DE13B721C8955 (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_m72B749FCC9292FBBFF4226F048FB86A91DE46F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA1BB2694AE0DED2C0EDF2D1CA0CB8C4FE907EFA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral139D522116B078B2E24E34CF493F0E81C85B7477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915FB01663B270A429A9196FA91AC22023DFED4C);
		s_Il2CppMethodInitialized = true;
	}
	Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// TerrainTile.LoadImages();
		TerrainTile_LoadImages_mA8437EAF4B2D7931FCE065B96A953617445289CD(/*hidden argument*/NULL);
		// City.LoadImages();
		City_LoadImages_m690D9D75247120ECAAD61AAC2DE8B783CE8C9962(/*hidden argument*/NULL);
		// map = GetComponent<Tilemap>();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_0;
		L_0 = Component_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_m72B749FCC9292FBBFF4226F048FB86A91DE46F90(__this, /*hidden argument*/Component_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_m72B749FCC9292FBBFF4226F048FB86A91DE46F90_RuntimeMethod_var);
		__this->set_map_10(L_0);
		// if(GenerationType == "Four Corners")
		String_t* L_1 = __this->get_GenerationType_11();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral915FB01663B270A429A9196FA91AC22023DFED4C, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// FourCornerGeneration();
		WorldGeneration_FourCornerGeneration_m14502D6069837AE2F28BF2777D949365B4C1703B(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// gm.overlay = overlay;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gm_15();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_5 = __this->get_overlay_13();
		L_4->set_overlay_5(L_5);
		// gm.unitoverlay = unitoverlay;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = __this->get_gm_15();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_7 = __this->get_unitoverlay_14();
		L_6->set_unitoverlay_6(L_7);
		// gm.terrainmap = map;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = __this->get_gm_15();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_9 = __this->get_map_10();
		L_8->set_terrainmap_4(L_9);
		// gm.tiles = tiles;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = __this->get_gm_15();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_11 = __this->get_tiles_8();
		L_10->set_tiles_7(L_11);
		// startTile = tiles[Random.Range(1, tiles.GetLength(0) - 1), Random.Range(1, tiles.GetLength(1) - 1)];
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_12 = __this->get_tiles_8();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_13 = __this->get_tiles_8();
		int32_t L_14;
		L_14 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_13, 0, /*hidden argument*/NULL);
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_16 = __this->get_tiles_8();
		int32_t L_17;
		L_17 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_16, 1, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), /*hidden argument*/NULL);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_19;
		L_19 = (L_12)->GetAtUnchecked(L_15, L_18);
		__this->set_startTile_12(L_19);
		goto IL_00f0;
	}

IL_00b5:
	{
		// startTile = tiles[Random.Range(1, tiles.GetLength(0) - 1), Random.Range(1, tiles.GetLength(1) - 1)];
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_20 = __this->get_tiles_8();
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_21 = __this->get_tiles_8();
		int32_t L_22;
		L_22 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_21, 0, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), /*hidden argument*/NULL);
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_24 = __this->get_tiles_8();
		int32_t L_25;
		L_25 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_24, 1, /*hidden argument*/NULL);
		int32_t L_26;
		L_26 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_27;
		L_27 = (L_20)->GetAtUnchecked(L_23, L_26);
		__this->set_startTile_12(L_27);
	}

IL_00f0:
	{
		// while(startTile.type == "Water")
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_28 = __this->get_startTile_12();
		String_t* L_29 = L_28->get_type_0();
		bool L_30;
		L_30 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_29, _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6, /*hidden argument*/NULL);
		V_2 = L_30;
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_00b5;
		}
	}
	{
		// Empires e = new Empires("America");
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_32 = (Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 *)il2cpp_codegen_object_new(Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9_il2cpp_TypeInfo_var);
		Empires__ctor_m7726416434B97241EA1F8536B292F8F9A72CEFD7(L_32, _stringLiteral139D522116B078B2E24E34CF493F0E81C85B7477, /*hidden argument*/NULL);
		V_0 = L_32;
		// startTile.AddCity(overlay, e);
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_33 = __this->get_startTile_12();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_34 = __this->get_overlay_13();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_35 = V_0;
		TerrainTile_AddCity_m33823B5F8A272F56531C5AD4E3C0B61564E2EAA4(L_33, L_34, L_35, /*hidden argument*/NULL);
		// gm.empires.Add(e);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_36 = __this->get_gm_15();
		List_1_t05183B2671D4727B526B74809621F3A20FEEB4CC * L_37 = L_36->get_empires_8();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_38 = V_0;
		List_1_Add_mA1BB2694AE0DED2C0EDF2D1CA0CB8C4FE907EFA7(L_37, L_38, /*hidden argument*/List_1_Add_mA1BB2694AE0DED2C0EDF2D1CA0CB8C4FE907EFA7_RuntimeMethod_var);
		// gm.player = e;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_39 = __this->get_gm_15();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_40 = V_0;
		L_39->set_player_9(L_40);
		// Debug.Log(gm.player);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_41 = __this->get_gm_15();
		Empires_t29285CA4F451A0372E7D745021BA31F6D8D238C9 * L_42 = L_41->get_player_9();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_42, /*hidden argument*/NULL);
		// gm.mapWidth = mapWidth;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_43 = __this->get_gm_15();
		int32_t L_44 = __this->get_mapWidth_4();
		L_43->set_mapWidth_11(L_44);
		// gm.mapHeight = mapHeight;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_45 = __this->get_gm_15();
		int32_t L_46 = __this->get_mapHeight_5();
		L_45->set_mapHeight_10(L_46);
		// }
		return;
	}
}
// System.Void WorldGeneration::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_Update_mC2B6888EBDD4101E2D815FFFF7A6FEEDB540E73A (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WorldGeneration::BaseGeneration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_BaseGeneration_m3266E1B4FC41657F0525A7265BE54418F4AF0641 (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// offsetX = (int)(mapWidth * -0.5);
		int32_t L_0 = __this->get_mapWidth_4();
		__this->set_offsetX_6(il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply((double)((double)((double)L_0)), (double)(-0.5)))));
		// offsetY = (int)(mapHeight * -0.5);
		int32_t L_1 = __this->get_mapHeight_5();
		__this->set_offsetY_7(il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply((double)((double)((double)L_1)), (double)(-0.5)))));
		// tiles = new TerrainTile[mapWidth, mapHeight];
		int32_t L_2 = __this->get_mapWidth_4();
		int32_t L_3 = __this->get_mapHeight_5();
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_3 };
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_4 = (TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649*)GenArrayNew(TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649_il2cpp_TypeInfo_var, L_5);
		__this->set_tiles_8(L_4);
		// }
		return;
	}
}
// System.Void WorldGeneration::FourCornerGeneration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_FourCornerGeneration_m14502D6069837AE2F28BF2777D949365B4C1703B (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// BaseGeneration();
		WorldGeneration_BaseGeneration_m3266E1B4FC41657F0525A7265BE54418F4AF0641(__this, /*hidden argument*/NULL);
		// string tr = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_TerrainTypes_9();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_TerrainTypes_9();
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// string br = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = __this->get_TerrainTypes_9();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = __this->get_TerrainTypes_9();
		int32_t L_7;
		L_7 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// string tl = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = __this->get_TerrainTypes_9();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = __this->get_TerrainTypes_9();
		int32_t L_12;
		L_12 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// string bl = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = __this->get_TerrainTypes_9();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = __this->get_TerrainTypes_9();
		int32_t L_17;
		L_17 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))), /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// for(var x = 0; x < mapWidth; x++)
		V_4 = 0;
		goto IL_0155;
	}

IL_0068:
	{
		// for (var y = 0; y < mapHeight; y++)
		V_5 = 0;
		goto IL_013b;
	}

IL_0071:
	{
		// if (x <= mapWidth / 2 && y <= mapHeight / 2)
		int32_t L_20 = V_4;
		int32_t L_21 = __this->get_mapWidth_4();
		if ((((int32_t)L_20) > ((int32_t)((int32_t)((int32_t)L_21/(int32_t)2)))))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_22 = V_5;
		int32_t L_23 = __this->get_mapHeight_5();
		G_B5_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)((int32_t)L_23/(int32_t)2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B5_0 = 0;
	}

IL_0090:
	{
		V_6 = (bool)G_B5_0;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00a4;
		}
	}
	{
		// TileCreation(bl, x, y);
		String_t* L_25 = V_3;
		int32_t L_26 = V_4;
		int32_t L_27 = V_5;
		WorldGeneration_TileCreation_m72193F741C0FFB475FFA61CB0313053ECA2AF87E(__this, L_25, L_26, L_27, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// if (x > mapWidth / 2 && y < mapHeight / 2)
		int32_t L_28 = V_4;
		int32_t L_29 = __this->get_mapWidth_4();
		if ((((int32_t)L_28) <= ((int32_t)((int32_t)((int32_t)L_29/(int32_t)2)))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_30 = V_5;
		int32_t L_31 = __this->get_mapHeight_5();
		G_B10_0 = ((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)L_31/(int32_t)2))))? 1 : 0);
		goto IL_00bf;
	}

IL_00be:
	{
		G_B10_0 = 0;
	}

IL_00bf:
	{
		V_7 = (bool)G_B10_0;
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_00d3;
		}
	}
	{
		// TileCreation(br, x, y);
		String_t* L_33 = V_1;
		int32_t L_34 = V_4;
		int32_t L_35 = V_5;
		WorldGeneration_TileCreation_m72193F741C0FFB475FFA61CB0313053ECA2AF87E(__this, L_33, L_34, L_35, /*hidden argument*/NULL);
	}

IL_00d3:
	{
		// if (x < mapWidth / 2 && y > mapHeight / 2)
		int32_t L_36 = V_4;
		int32_t L_37 = __this->get_mapWidth_4();
		if ((((int32_t)L_36) >= ((int32_t)((int32_t)((int32_t)L_37/(int32_t)2)))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_38 = V_5;
		int32_t L_39 = __this->get_mapHeight_5();
		G_B15_0 = ((((int32_t)L_38) > ((int32_t)((int32_t)((int32_t)L_39/(int32_t)2))))? 1 : 0);
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B15_0 = 0;
	}

IL_00ee:
	{
		V_8 = (bool)G_B15_0;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0102;
		}
	}
	{
		// TileCreation(tl, x, y);
		String_t* L_41 = V_2;
		int32_t L_42 = V_4;
		int32_t L_43 = V_5;
		WorldGeneration_TileCreation_m72193F741C0FFB475FFA61CB0313053ECA2AF87E(__this, L_41, L_42, L_43, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// if (x >= mapWidth / 2 && y >= mapHeight / 2)
		int32_t L_44 = V_4;
		int32_t L_45 = __this->get_mapWidth_4();
		if ((((int32_t)L_44) < ((int32_t)((int32_t)((int32_t)L_45/(int32_t)2)))))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_46 = V_5;
		int32_t L_47 = __this->get_mapHeight_5();
		G_B20_0 = ((((int32_t)((((int32_t)L_46) < ((int32_t)((int32_t)((int32_t)L_47/(int32_t)2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0120;
	}

IL_011f:
	{
		G_B20_0 = 0;
	}

IL_0120:
	{
		V_9 = (bool)G_B20_0;
		bool L_48 = V_9;
		if (!L_48)
		{
			goto IL_0134;
		}
	}
	{
		// TileCreation(tr, x, y);
		String_t* L_49 = V_0;
		int32_t L_50 = V_4;
		int32_t L_51 = V_5;
		WorldGeneration_TileCreation_m72193F741C0FFB475FFA61CB0313053ECA2AF87E(__this, L_49, L_50, L_51, /*hidden argument*/NULL);
	}

IL_0134:
	{
		// for (var y = 0; y < mapHeight; y++)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_013b:
	{
		// for (var y = 0; y < mapHeight; y++)
		int32_t L_53 = V_5;
		int32_t L_54 = __this->get_mapHeight_5();
		V_10 = (bool)((((int32_t)L_53) < ((int32_t)L_54))? 1 : 0);
		bool L_55 = V_10;
		if (L_55)
		{
			goto IL_0071;
		}
	}
	{
		// for(var x = 0; x < mapWidth; x++)
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0155:
	{
		// for(var x = 0; x < mapWidth; x++)
		int32_t L_57 = V_4;
		int32_t L_58 = __this->get_mapWidth_4();
		V_11 = (bool)((((int32_t)L_57) < ((int32_t)L_58))? 1 : 0);
		bool L_59 = V_11;
		if (L_59)
		{
			goto IL_0068;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WorldGeneration::RandomPointsGeneration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_RandomPointsGeneration_m8B5C609F6F4BE11208812FB09B36035D836449DB (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// BaseGeneration();
		WorldGeneration_BaseGeneration_m3266E1B4FC41657F0525A7265BE54418F4AF0641(__this, /*hidden argument*/NULL);
		// for (var i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_004c;
	}

IL_000c:
	{
		// int x = Random.Range(0, mapWidth);
		int32_t L_0 = __this->get_mapWidth_4();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// int y = Random.Range(0, mapHeight);
		int32_t L_2 = __this->get_mapHeight_5();
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// string type = TerrainTypes[Random.Range(0, TerrainTypes.Length)];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = __this->get_TerrainTypes_9();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = __this->get_TerrainTypes_9();
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// TileCreation(type, x, y);
		String_t* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		WorldGeneration_TileCreation_m72193F741C0FFB475FFA61CB0313053ECA2AF87E(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		// for (var i = 0; i < 5; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004c:
	{
		// for (var i = 0; i < 5; i++)
		int32_t L_13 = V_0;
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)5))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WorldGeneration::TileCreation(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_TileCreation_m72193F741C0FFB475FFA61CB0313053ECA2AF87E (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, String_t* ___type0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * V_0 = NULL;
	Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * V_1 = NULL;
	{
		// TerrainTile tile = new TerrainTile(type, x + offsetX, y + offsetY, gm, x, y);
		String_t* L_0 = ___type0;
		int32_t L_1 = ___x1;
		int32_t L_2 = __this->get_offsetX_6();
		int32_t L_3 = ___y2;
		int32_t L_4 = __this->get_offsetY_7();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = __this->get_gm_15();
		int32_t L_6 = ___x1;
		int32_t L_7 = ___y2;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_8 = (TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 *)il2cpp_codegen_object_new(TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1_il2cpp_TypeInfo_var);
		TerrainTile__ctor_m093A29C63A925040CF22A768D01CFE604E4A512C(L_8, L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// tiles[x, y] = tile;
		TerrainTileU5BU2CU5D_tFB6A23B376535FE7F13CE27EA5BB1B82068CC649* L_9 = __this->get_tiles_8();
		int32_t L_10 = ___x1;
		int32_t L_11 = ___y2;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_12 = V_0;
		(L_9)->SetAtUnchecked(L_10, L_11, L_12);
		// Tile t = ScriptableObject.CreateInstance<Tile>();
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_13;
		L_13 = ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779(/*hidden argument*/ScriptableObject_CreateInstance_TisTile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27_m9D3F1B7EE957FCAFB6D732C8A69C459242DFF779_RuntimeMethod_var);
		V_1 = L_13;
		// t.sprite = tile.tileImage;
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_14 = V_1;
		TerrainTile_t0E03FFEC6A18E6AF060C27D4D35BEB5A5F991DF1 * L_15 = V_0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_16 = L_15->get_tileImage_8();
		Tile_set_sprite_m29904A3BC52CDFB8BF48604CD0FED0EF3477BCE4(L_14, L_16, /*hidden argument*/NULL);
		// map.SetTile(new Vector3Int(x + offsetX, y + offsetY, 0), t);
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_17 = __this->get_map_10();
		int32_t L_18 = ___x1;
		int32_t L_19 = __this->get_offsetX_6();
		int32_t L_20 = ___y2;
		int32_t L_21 = __this->get_offsetY_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_22), ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)), ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), 0, /*hidden argument*/NULL);
		Tile_tA049C8EDFA25A7FFBFE6ED4C73B4121A7FB65C27 * L_23 = V_1;
		Tilemap_SetTile_mDA8C773A2FF8D6744BE268AE9D77CC3FB2A5D862(L_17, L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WorldGeneration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration__ctor_m1BF6B15A28BF0102ECF98BDAE588FA8C8F3042D0 (WorldGeneration_tB1776796DBE95658484066CFC57465D16FC49934 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915FB01663B270A429A9196FA91AC22023DFED4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int mapWidth = 10;
		__this->set_mapWidth_4(((int32_t)10));
		// public int mapHeight = 10;
		__this->set_mapHeight_5(((int32_t)10));
		// public string GenerationType = "Four Corners";
		__this->set_GenerationType_11(_stringLiteral915FB01663B270A429A9196FA91AC22023DFED4C);
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
// System.Void citypanelanimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void citypanelanimation_Start_m6D4DE6CDDF64B28A7DF3671B07324CD659E5B722 (citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rectTransform = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rectTransform_8(L_0);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1;
		L_1 = Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		__this->set_canvas_9(L_1);
		// inside = rectTransform.position;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = __this->get_rectTransform_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		__this->set_inside_6(L_4);
		// }
		return;
	}
}
// System.Void citypanelanimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void citypanelanimation_Update_mE851FDF47F9D16678E827433CFDA62B2DDB6B0CA (citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E * __this, const RuntimeMethod* method)
{
	{
		// CalculateOutside();
		citypanelanimation_CalculateOutside_m9A946E12260587472754405520B047D0DDD279F3(__this, /*hidden argument*/NULL);
		// rectTransform.position = Vector2.Lerp(outside, inside, transition);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_rectTransform_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = __this->get_outside_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_inside_6();
		float L_3 = __this->get_transition_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline(L_1, L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void citypanelanimation::CalculateOutside()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void citypanelanimation_CalculateOutside_m9A946E12260587472754405520B047D0DDD279F3 (citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E * __this, const RuntimeMethod* method)
{
	{
		// outside = inside + GetDifferenceToOutside();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_inside_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = citypanelanimation_GetDifferenceToOutside_m3D8B9D99D180609254E92816A3BB083F8B08C3DD(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_0, L_1, /*hidden argument*/NULL);
		__this->set_outside_7(L_2);
		// }
		return;
	}
}
// UnityEngine.Vector2 citypanelanimation::GetDifferenceToOutside()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  citypanelanimation_GetDifferenceToOutside_m3D8B9D99D180609254E92816A3BB083F8B08C3DD (citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// var pos = inside;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_inside_6();
		V_0 = L_0;
		// var size = canvas.scaleFactor * rectTransform.rect.size;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1 = __this->get_canvas_9();
		float L_2;
		L_2 = Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710(L_1, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = __this->get_rectTransform_8();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_2, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var pivot = rectTransform.pivot;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_rectTransform_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// var canvasSize = canvas.pixelRect.size;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_9 = __this->get_canvas_9();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		L_10 = Canvas_get_pixelRect_m54100E80CD719FFD15D1C2A0C15717290C75A3DE(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_11;
		// switch (side)
		int32_t L_12 = __this->get_side_4();
		V_10 = L_12;
		int32_t L_13 = V_10;
		V_9 = L_13;
		int32_t L_14 = V_9;
		switch (L_14)
		{
			case 0:
			{
				goto IL_00d3;
			}
			case 1:
			{
				goto IL_0100;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_00a6;
			}
		}
	}
	{
		goto IL_012d;
	}

IL_0076:
	{
		// var distanceToTop = canvasSize.y - pos.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_3;
		float L_16 = L_15.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		float L_18 = L_17.get_y_1();
		V_5 = ((float)il2cpp_codegen_subtract((float)L_16, (float)L_18));
		// return new Vector2(0f, distanceToTop + size.y * (pivot.y));
		float L_19 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_1;
		float L_21 = L_20.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_2;
		float L_23 = L_22.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_24), (0.0f), ((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_23)))), /*hidden argument*/NULL);
		V_11 = L_24;
		goto IL_0136;
	}

IL_00a6:
	{
		// var distanceToBottom = pos.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_0;
		float L_26 = L_25.get_y_1();
		V_6 = L_26;
		// return new Vector2(0f, -distanceToBottom - size.y * (1 - pivot.y));
		float L_27 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_1;
		float L_29 = L_28.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_2;
		float L_31 = L_30.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_32), (0.0f), ((float)il2cpp_codegen_subtract((float)((-L_27)), (float)((float)il2cpp_codegen_multiply((float)L_29, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_31)))))), /*hidden argument*/NULL);
		V_11 = L_32;
		goto IL_0136;
	}

IL_00d3:
	{
		// var distanceToLeft = pos.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = V_0;
		float L_34 = L_33.get_x_0();
		V_7 = L_34;
		// return new Vector2(-distanceToLeft - size.x * (1 - pivot.x), 0f);
		float L_35 = V_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_1;
		float L_37 = L_36.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_2;
		float L_39 = L_38.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_40), ((float)il2cpp_codegen_subtract((float)((-L_35)), (float)((float)il2cpp_codegen_multiply((float)L_37, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_39)))))), (0.0f), /*hidden argument*/NULL);
		V_11 = L_40;
		goto IL_0136;
	}

IL_0100:
	{
		// var distanceToRight = canvasSize.x - pos.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_3;
		float L_42 = L_41.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = V_0;
		float L_44 = L_43.get_x_0();
		V_8 = ((float)il2cpp_codegen_subtract((float)L_42, (float)L_44));
		// return new Vector2(distanceToRight + size.x * (pivot.x), 0f);
		float L_45 = V_8;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = V_1;
		float L_47 = L_46.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = V_2;
		float L_49 = L_48.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_50), ((float)il2cpp_codegen_add((float)L_45, (float)((float)il2cpp_codegen_multiply((float)L_47, (float)L_49)))), (0.0f), /*hidden argument*/NULL);
		V_11 = L_50;
		goto IL_0136;
	}

IL_012d:
	{
		// return Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		L_51 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_11 = L_51;
		goto IL_0136;
	}

IL_0136:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_11;
		return L_52;
	}
}
// System.Void citypanelanimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void citypanelanimation__ctor_m4557116A87FB97C37F69C0C5FFB69F7280776DC1 (citypanelanimation_t61195B6CF3B3DB27F22B62AD3B0BECD8B1772E5E * __this, const RuntimeMethod* method)
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
// System.Void clickanddrag::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void clickanddrag_Start_m0FFA6156B36EF31CB2FF0734130CBBD836D47483 (clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm = GameObject.Find("GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gm_8(L_1);
		// }
		return;
	}
}
// System.Void clickanddrag::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void clickanddrag_Update_m49FA577BA66BBE8B0B96C9071A4E525FD11FFC44 (clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	{
		// Vector3 mousepos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (Input.GetMouseButton(0))
		bool L_3;
		L_3 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// if(dragging == false)
		bool L_5 = __this->get_dragging_7();
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// dragging = true;
		__this->set_dragging_7((bool)1);
		// dragStartPos = mousepos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		__this->set_dragStartPos_5(L_7);
	}

IL_0039:
	{
		// dragDistance = mousepos - Camera.main.transform.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_11, /*hidden argument*/NULL);
		__this->set_dragDistance_6(L_12);
		goto IL_0060;
	}

IL_0057:
	{
		// dragging = false;
		__this->set_dragging_7((bool)0);
	}

IL_0060:
	{
		// if(dragging == true)
		bool L_13 = __this->get_dragging_7();
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_020d;
		}
	}
	{
		// float moveX = Camera.main.transform.position.x;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		V_4 = L_18;
		// float moveY = Camera.main.transform.position.y;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
		L_19 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_3();
		V_5 = L_22;
		// if((Camera.main.transform.position.y >= -gm.mapWidth / 2 && dragDistance.y >= 0) || (Camera.main.transform.position.y <= gm.mapWidth / 2 && dragDistance.y <= 0))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_23;
		L_23 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_27 = __this->get_gm_8();
		int32_t L_28 = L_27->get_mapWidth_11();
		if ((!(((float)L_26) >= ((float)((float)((float)((int32_t)((int32_t)((-L_28))/(int32_t)2))))))))
		{
			goto IL_00d1;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_dragDistance_6();
		float L_30 = L_29->get_y_3();
		if ((((float)L_30) >= ((float)(0.0f))))
		{
			goto IL_010f;
		}
	}

IL_00d1:
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_31;
		L_31 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_35 = __this->get_gm_8();
		int32_t L_36 = L_35->get_mapWidth_11();
		if ((!(((float)L_34) <= ((float)((float)((float)((int32_t)((int32_t)L_36/(int32_t)2))))))))
		{
			goto IL_010c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_37 = __this->get_address_of_dragDistance_6();
		float L_38 = L_37->get_y_3();
		G_B11_0 = ((((int32_t)((!(((float)L_38) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_010d;
	}

IL_010c:
	{
		G_B11_0 = 0;
	}

IL_010d:
	{
		G_B13_0 = G_B11_0;
		goto IL_0110;
	}

IL_010f:
	{
		G_B13_0 = 1;
	}

IL_0110:
	{
		V_6 = (bool)G_B13_0;
		bool L_39 = V_6;
		if (!L_39)
		{
			goto IL_0131;
		}
	}
	{
		// moveY = dragStartPos.y - dragDistance.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_40 = __this->get_address_of_dragStartPos_5();
		float L_41 = L_40->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = __this->get_address_of_dragDistance_6();
		float L_43 = L_42->get_y_3();
		V_5 = ((float)il2cpp_codegen_subtract((float)L_41, (float)L_43));
	}

IL_0131:
	{
		// if ((Camera.main.transform.position.x >= -gm.mapHeight * 0.5 * 0.75 && dragDistance.x >= 0) || (Camera.main.transform.position.x <= gm.mapHeight * 0.5 * 0.75 && dragDistance.x <= 0))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_44;
		L_44 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_x_2();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_48 = __this->get_gm_8();
		int32_t L_49 = L_48->get_mapHeight_10();
		if ((!(((double)((double)((double)L_47))) >= ((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)((double)((-L_49)))), (double)(0.5))), (double)(0.75)))))))
		{
			goto IL_017b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_50 = __this->get_address_of_dragDistance_6();
		float L_51 = L_50->get_x_2();
		if ((((float)L_51) >= ((float)(0.0f))))
		{
			goto IL_01cc;
		}
	}

IL_017b:
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_52;
		L_52 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_52, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_x_2();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_56 = __this->get_gm_8();
		int32_t L_57 = L_56->get_mapHeight_10();
		if ((!(((double)((double)((double)L_55))) <= ((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_57)), (double)(0.5))), (double)(0.75)))))))
		{
			goto IL_01c9;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_58 = __this->get_address_of_dragDistance_6();
		float L_59 = L_58->get_x_2();
		G_B20_0 = ((((int32_t)((!(((float)L_59) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01ca;
	}

IL_01c9:
	{
		G_B20_0 = 0;
	}

IL_01ca:
	{
		G_B22_0 = G_B20_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B22_0 = 1;
	}

IL_01cd:
	{
		V_7 = (bool)G_B22_0;
		bool L_60 = V_7;
		if (!L_60)
		{
			goto IL_01ee;
		}
	}
	{
		// moveX = dragStartPos.x - dragDistance.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_61 = __this->get_address_of_dragStartPos_5();
		float L_62 = L_61->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_63 = __this->get_address_of_dragDistance_6();
		float L_64 = L_63->get_x_2();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_62, (float)L_64));
	}

IL_01ee:
	{
		// Camera.main.transform.position = new Vector3(moveX, moveY, -10);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_65;
		L_65 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_65, /*hidden argument*/NULL);
		float L_67 = V_4;
		float L_68 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_69), L_67, L_68, (-10.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_66, L_69, /*hidden argument*/NULL);
	}

IL_020d:
	{
		// }
		return;
	}
}
// System.Void clickanddrag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void clickanddrag__ctor_mBD507F0BAFE26BE4119D367A7F5B58763B611936 (clickanddrag_tAF97EA5C1942AA70A52B16EEC444E37F96917D0E * __this, const RuntimeMethod* method)
{
	{
		// public float dragSpeed = 0.1f;
		__this->set_dragSpeed_4((0.100000001f));
		// private bool dragging = false;
		__this->set_dragging_7((bool)0);
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
// System.Void exitbutton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void exitbutton_Start_mD16B9A3FF8F31C71E16DF1A942DE29F0F1BE5EF9 (exitbutton_t23A6BB851EDDED5E619E32D6DB56590BE4604123 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void exitbutton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void exitbutton_Update_m0394B206AAA61E738F3031C8E3037DB71227999F (exitbutton_t23A6BB851EDDED5E619E32D6DB56590BE4604123 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void exitbutton::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void exitbutton_Exit_m70F54861D003B594DAE615FEA03F7533CB32C988 (exitbutton_t23A6BB851EDDED5E619E32D6DB56590BE4604123 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (useCustomAction)
		bool L_0 = __this->get_useCustomAction_6();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// OnExit.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = __this->get_OnExit_5();
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_2, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_001b:
	{
		// closedObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_closedObject_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void exitbutton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void exitbutton__ctor_mAA5C78535E7C3110ADA62D52D0D296C5B98FF2E2 (exitbutton_t23A6BB851EDDED5E619E32D6DB56590BE4604123 * __this, const RuntimeMethod* method)
{
	{
		// public bool useCustomAction = false;
		__this->set_useCustomAction_6((bool)0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		int32_t L_2 = ___z2;
		__this->set_m_Z_2(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___b1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_x_0();
		float L_8 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___a0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___b1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___a0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a1;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a1;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
