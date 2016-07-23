#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// MediaPlayerCtrl/VideoResize
struct VideoResize_t3742945584;
// MediaPlayerCtrl/VideoReady
struct VideoReady_t259270055;
// MediaPlayerCtrl/VideoEnd
struct VideoEnd_t3177907679;
// MediaPlayerCtrl/VideoError
struct VideoError_t247668236;
// MediaPlayerCtrl/VideoFirstFrameReady
struct VideoFirstFrameReady_t2520860170;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t844452154;
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_STAT1488282328.h"
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIA_SCALE4148698416.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaPlayerCtrl
struct  MediaPlayerCtrl_t3572035536  : public MonoBehaviour_t667441552
{
public:
	// System.String MediaPlayerCtrl::m_strFileName
	String_t* ___m_strFileName_2;
	// UnityEngine.GameObject[] MediaPlayerCtrl::m_TargetMaterial
	GameObjectU5BU5D_t2662109048* ___m_TargetMaterial_3;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTexture
	Texture2D_t3884108195 * ___m_VideoTexture_4;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummy
	Texture2D_t3884108195 * ___m_VideoTextureDummy_5;
	// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::m_CurrentState
	int32_t ___m_CurrentState_6;
	// System.Int32 MediaPlayerCtrl::m_iCurrentSeekPosition
	int32_t ___m_iCurrentSeekPosition_7;
	// System.Single MediaPlayerCtrl::m_fVolume
	float ___m_fVolume_8;
	// System.Int32 MediaPlayerCtrl::m_iWidth
	int32_t ___m_iWidth_9;
	// System.Int32 MediaPlayerCtrl::m_iHeight
	int32_t ___m_iHeight_10;
	// System.Boolean MediaPlayerCtrl::m_bFullScreen
	bool ___m_bFullScreen_11;
	// System.Boolean MediaPlayerCtrl::m_bSupportRockchip
	bool ___m_bSupportRockchip_12;
	// MediaPlayerCtrl/VideoResize MediaPlayerCtrl::OnResize
	VideoResize_t3742945584 * ___OnResize_13;
	// MediaPlayerCtrl/VideoReady MediaPlayerCtrl::OnReady
	VideoReady_t259270055 * ___OnReady_14;
	// MediaPlayerCtrl/VideoEnd MediaPlayerCtrl::OnEnd
	VideoEnd_t3177907679 * ___OnEnd_15;
	// MediaPlayerCtrl/VideoError MediaPlayerCtrl::OnVideoError
	VideoError_t247668236 * ___OnVideoError_16;
	// MediaPlayerCtrl/VideoFirstFrameReady MediaPlayerCtrl::OnVideoFirstFrameReady
	VideoFirstFrameReady_t2520860170 * ___OnVideoFirstFrameReady_17;
	// System.Int32 MediaPlayerCtrl::m_iPauseFrame
	int32_t ___m_iPauseFrame_18;
	// System.Int32 MediaPlayerCtrl::m_iAndroidMgrID
	int32_t ___m_iAndroidMgrID_19;
	// System.Boolean MediaPlayerCtrl::m_bIsFirstFrameReady
	bool ___m_bIsFirstFrameReady_20;
	// System.Boolean MediaPlayerCtrl::m_bFirst
	bool ___m_bFirst_21;
	// MediaPlayerCtrl/MEDIA_SCALE MediaPlayerCtrl::m_ScaleValue
	int32_t ___m_ScaleValue_22;
	// UnityEngine.GameObject[] MediaPlayerCtrl::m_objResize
	GameObjectU5BU5D_t2662109048* ___m_objResize_23;
	// System.Boolean MediaPlayerCtrl::m_bLoop
	bool ___m_bLoop_24;
	// System.Boolean MediaPlayerCtrl::m_bAutoPlay
	bool ___m_bAutoPlay_25;
	// System.Boolean MediaPlayerCtrl::m_bStop
	bool ___m_bStop_26;
	// System.Boolean MediaPlayerCtrl::m_bInit
	bool ___m_bInit_27;
	// System.Boolean MediaPlayerCtrl::m_bCheckFBO
	bool ___m_bCheckFBO_28;
	// System.Boolean MediaPlayerCtrl::m_bPause
	bool ___m_bPause_29;
	// System.Int32 MediaPlayerCtrl::m_iID
	int32_t ___m_iID_30;
	// UnityEngine.Texture2D MediaPlayerCtrl::_videoTexture
	Texture2D_t3884108195 * ____videoTexture_31;
	// System.Collections.Generic.List`1<System.Action> MediaPlayerCtrl::unityMainThreadActionList
	List_1_t844452154 * ___unityMainThreadActionList_32;
	// System.Boolean MediaPlayerCtrl::checkNewActions
	bool ___checkNewActions_33;
	// System.Object MediaPlayerCtrl::thisLock
	Il2CppObject * ___thisLock_34;

public:
	inline static int32_t get_offset_of_m_strFileName_2() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_strFileName_2)); }
	inline String_t* get_m_strFileName_2() const { return ___m_strFileName_2; }
	inline String_t** get_address_of_m_strFileName_2() { return &___m_strFileName_2; }
	inline void set_m_strFileName_2(String_t* value)
	{
		___m_strFileName_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_strFileName_2, value);
	}

	inline static int32_t get_offset_of_m_TargetMaterial_3() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_TargetMaterial_3)); }
	inline GameObjectU5BU5D_t2662109048* get_m_TargetMaterial_3() const { return ___m_TargetMaterial_3; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_m_TargetMaterial_3() { return &___m_TargetMaterial_3; }
	inline void set_m_TargetMaterial_3(GameObjectU5BU5D_t2662109048* value)
	{
		___m_TargetMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_TargetMaterial_3, value);
	}

	inline static int32_t get_offset_of_m_VideoTexture_4() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_VideoTexture_4)); }
	inline Texture2D_t3884108195 * get_m_VideoTexture_4() const { return ___m_VideoTexture_4; }
	inline Texture2D_t3884108195 ** get_address_of_m_VideoTexture_4() { return &___m_VideoTexture_4; }
	inline void set_m_VideoTexture_4(Texture2D_t3884108195 * value)
	{
		___m_VideoTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTexture_4, value);
	}

	inline static int32_t get_offset_of_m_VideoTextureDummy_5() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_VideoTextureDummy_5)); }
	inline Texture2D_t3884108195 * get_m_VideoTextureDummy_5() const { return ___m_VideoTextureDummy_5; }
	inline Texture2D_t3884108195 ** get_address_of_m_VideoTextureDummy_5() { return &___m_VideoTextureDummy_5; }
	inline void set_m_VideoTextureDummy_5(Texture2D_t3884108195 * value)
	{
		___m_VideoTextureDummy_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoTextureDummy_5, value);
	}

	inline static int32_t get_offset_of_m_CurrentState_6() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_CurrentState_6)); }
	inline int32_t get_m_CurrentState_6() const { return ___m_CurrentState_6; }
	inline int32_t* get_address_of_m_CurrentState_6() { return &___m_CurrentState_6; }
	inline void set_m_CurrentState_6(int32_t value)
	{
		___m_CurrentState_6 = value;
	}

	inline static int32_t get_offset_of_m_iCurrentSeekPosition_7() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_iCurrentSeekPosition_7)); }
	inline int32_t get_m_iCurrentSeekPosition_7() const { return ___m_iCurrentSeekPosition_7; }
	inline int32_t* get_address_of_m_iCurrentSeekPosition_7() { return &___m_iCurrentSeekPosition_7; }
	inline void set_m_iCurrentSeekPosition_7(int32_t value)
	{
		___m_iCurrentSeekPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_fVolume_8() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_fVolume_8)); }
	inline float get_m_fVolume_8() const { return ___m_fVolume_8; }
	inline float* get_address_of_m_fVolume_8() { return &___m_fVolume_8; }
	inline void set_m_fVolume_8(float value)
	{
		___m_fVolume_8 = value;
	}

	inline static int32_t get_offset_of_m_iWidth_9() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_iWidth_9)); }
	inline int32_t get_m_iWidth_9() const { return ___m_iWidth_9; }
	inline int32_t* get_address_of_m_iWidth_9() { return &___m_iWidth_9; }
	inline void set_m_iWidth_9(int32_t value)
	{
		___m_iWidth_9 = value;
	}

	inline static int32_t get_offset_of_m_iHeight_10() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_iHeight_10)); }
	inline int32_t get_m_iHeight_10() const { return ___m_iHeight_10; }
	inline int32_t* get_address_of_m_iHeight_10() { return &___m_iHeight_10; }
	inline void set_m_iHeight_10(int32_t value)
	{
		___m_iHeight_10 = value;
	}

	inline static int32_t get_offset_of_m_bFullScreen_11() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bFullScreen_11)); }
	inline bool get_m_bFullScreen_11() const { return ___m_bFullScreen_11; }
	inline bool* get_address_of_m_bFullScreen_11() { return &___m_bFullScreen_11; }
	inline void set_m_bFullScreen_11(bool value)
	{
		___m_bFullScreen_11 = value;
	}

	inline static int32_t get_offset_of_m_bSupportRockchip_12() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bSupportRockchip_12)); }
	inline bool get_m_bSupportRockchip_12() const { return ___m_bSupportRockchip_12; }
	inline bool* get_address_of_m_bSupportRockchip_12() { return &___m_bSupportRockchip_12; }
	inline void set_m_bSupportRockchip_12(bool value)
	{
		___m_bSupportRockchip_12 = value;
	}

	inline static int32_t get_offset_of_OnResize_13() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___OnResize_13)); }
	inline VideoResize_t3742945584 * get_OnResize_13() const { return ___OnResize_13; }
	inline VideoResize_t3742945584 ** get_address_of_OnResize_13() { return &___OnResize_13; }
	inline void set_OnResize_13(VideoResize_t3742945584 * value)
	{
		___OnResize_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnResize_13, value);
	}

	inline static int32_t get_offset_of_OnReady_14() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___OnReady_14)); }
	inline VideoReady_t259270055 * get_OnReady_14() const { return ___OnReady_14; }
	inline VideoReady_t259270055 ** get_address_of_OnReady_14() { return &___OnReady_14; }
	inline void set_OnReady_14(VideoReady_t259270055 * value)
	{
		___OnReady_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnReady_14, value);
	}

	inline static int32_t get_offset_of_OnEnd_15() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___OnEnd_15)); }
	inline VideoEnd_t3177907679 * get_OnEnd_15() const { return ___OnEnd_15; }
	inline VideoEnd_t3177907679 ** get_address_of_OnEnd_15() { return &___OnEnd_15; }
	inline void set_OnEnd_15(VideoEnd_t3177907679 * value)
	{
		___OnEnd_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnEnd_15, value);
	}

	inline static int32_t get_offset_of_OnVideoError_16() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___OnVideoError_16)); }
	inline VideoError_t247668236 * get_OnVideoError_16() const { return ___OnVideoError_16; }
	inline VideoError_t247668236 ** get_address_of_OnVideoError_16() { return &___OnVideoError_16; }
	inline void set_OnVideoError_16(VideoError_t247668236 * value)
	{
		___OnVideoError_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoError_16, value);
	}

	inline static int32_t get_offset_of_OnVideoFirstFrameReady_17() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___OnVideoFirstFrameReady_17)); }
	inline VideoFirstFrameReady_t2520860170 * get_OnVideoFirstFrameReady_17() const { return ___OnVideoFirstFrameReady_17; }
	inline VideoFirstFrameReady_t2520860170 ** get_address_of_OnVideoFirstFrameReady_17() { return &___OnVideoFirstFrameReady_17; }
	inline void set_OnVideoFirstFrameReady_17(VideoFirstFrameReady_t2520860170 * value)
	{
		___OnVideoFirstFrameReady_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoFirstFrameReady_17, value);
	}

	inline static int32_t get_offset_of_m_iPauseFrame_18() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_iPauseFrame_18)); }
	inline int32_t get_m_iPauseFrame_18() const { return ___m_iPauseFrame_18; }
	inline int32_t* get_address_of_m_iPauseFrame_18() { return &___m_iPauseFrame_18; }
	inline void set_m_iPauseFrame_18(int32_t value)
	{
		___m_iPauseFrame_18 = value;
	}

	inline static int32_t get_offset_of_m_iAndroidMgrID_19() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_iAndroidMgrID_19)); }
	inline int32_t get_m_iAndroidMgrID_19() const { return ___m_iAndroidMgrID_19; }
	inline int32_t* get_address_of_m_iAndroidMgrID_19() { return &___m_iAndroidMgrID_19; }
	inline void set_m_iAndroidMgrID_19(int32_t value)
	{
		___m_iAndroidMgrID_19 = value;
	}

	inline static int32_t get_offset_of_m_bIsFirstFrameReady_20() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bIsFirstFrameReady_20)); }
	inline bool get_m_bIsFirstFrameReady_20() const { return ___m_bIsFirstFrameReady_20; }
	inline bool* get_address_of_m_bIsFirstFrameReady_20() { return &___m_bIsFirstFrameReady_20; }
	inline void set_m_bIsFirstFrameReady_20(bool value)
	{
		___m_bIsFirstFrameReady_20 = value;
	}

	inline static int32_t get_offset_of_m_bFirst_21() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bFirst_21)); }
	inline bool get_m_bFirst_21() const { return ___m_bFirst_21; }
	inline bool* get_address_of_m_bFirst_21() { return &___m_bFirst_21; }
	inline void set_m_bFirst_21(bool value)
	{
		___m_bFirst_21 = value;
	}

	inline static int32_t get_offset_of_m_ScaleValue_22() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_ScaleValue_22)); }
	inline int32_t get_m_ScaleValue_22() const { return ___m_ScaleValue_22; }
	inline int32_t* get_address_of_m_ScaleValue_22() { return &___m_ScaleValue_22; }
	inline void set_m_ScaleValue_22(int32_t value)
	{
		___m_ScaleValue_22 = value;
	}

	inline static int32_t get_offset_of_m_objResize_23() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_objResize_23)); }
	inline GameObjectU5BU5D_t2662109048* get_m_objResize_23() const { return ___m_objResize_23; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_m_objResize_23() { return &___m_objResize_23; }
	inline void set_m_objResize_23(GameObjectU5BU5D_t2662109048* value)
	{
		___m_objResize_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_objResize_23, value);
	}

	inline static int32_t get_offset_of_m_bLoop_24() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bLoop_24)); }
	inline bool get_m_bLoop_24() const { return ___m_bLoop_24; }
	inline bool* get_address_of_m_bLoop_24() { return &___m_bLoop_24; }
	inline void set_m_bLoop_24(bool value)
	{
		___m_bLoop_24 = value;
	}

	inline static int32_t get_offset_of_m_bAutoPlay_25() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bAutoPlay_25)); }
	inline bool get_m_bAutoPlay_25() const { return ___m_bAutoPlay_25; }
	inline bool* get_address_of_m_bAutoPlay_25() { return &___m_bAutoPlay_25; }
	inline void set_m_bAutoPlay_25(bool value)
	{
		___m_bAutoPlay_25 = value;
	}

	inline static int32_t get_offset_of_m_bStop_26() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bStop_26)); }
	inline bool get_m_bStop_26() const { return ___m_bStop_26; }
	inline bool* get_address_of_m_bStop_26() { return &___m_bStop_26; }
	inline void set_m_bStop_26(bool value)
	{
		___m_bStop_26 = value;
	}

	inline static int32_t get_offset_of_m_bInit_27() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bInit_27)); }
	inline bool get_m_bInit_27() const { return ___m_bInit_27; }
	inline bool* get_address_of_m_bInit_27() { return &___m_bInit_27; }
	inline void set_m_bInit_27(bool value)
	{
		___m_bInit_27 = value;
	}

	inline static int32_t get_offset_of_m_bCheckFBO_28() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bCheckFBO_28)); }
	inline bool get_m_bCheckFBO_28() const { return ___m_bCheckFBO_28; }
	inline bool* get_address_of_m_bCheckFBO_28() { return &___m_bCheckFBO_28; }
	inline void set_m_bCheckFBO_28(bool value)
	{
		___m_bCheckFBO_28 = value;
	}

	inline static int32_t get_offset_of_m_bPause_29() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_bPause_29)); }
	inline bool get_m_bPause_29() const { return ___m_bPause_29; }
	inline bool* get_address_of_m_bPause_29() { return &___m_bPause_29; }
	inline void set_m_bPause_29(bool value)
	{
		___m_bPause_29 = value;
	}

	inline static int32_t get_offset_of_m_iID_30() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___m_iID_30)); }
	inline int32_t get_m_iID_30() const { return ___m_iID_30; }
	inline int32_t* get_address_of_m_iID_30() { return &___m_iID_30; }
	inline void set_m_iID_30(int32_t value)
	{
		___m_iID_30 = value;
	}

	inline static int32_t get_offset_of__videoTexture_31() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ____videoTexture_31)); }
	inline Texture2D_t3884108195 * get__videoTexture_31() const { return ____videoTexture_31; }
	inline Texture2D_t3884108195 ** get_address_of__videoTexture_31() { return &____videoTexture_31; }
	inline void set__videoTexture_31(Texture2D_t3884108195 * value)
	{
		____videoTexture_31 = value;
		Il2CppCodeGenWriteBarrier(&____videoTexture_31, value);
	}

	inline static int32_t get_offset_of_unityMainThreadActionList_32() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___unityMainThreadActionList_32)); }
	inline List_1_t844452154 * get_unityMainThreadActionList_32() const { return ___unityMainThreadActionList_32; }
	inline List_1_t844452154 ** get_address_of_unityMainThreadActionList_32() { return &___unityMainThreadActionList_32; }
	inline void set_unityMainThreadActionList_32(List_1_t844452154 * value)
	{
		___unityMainThreadActionList_32 = value;
		Il2CppCodeGenWriteBarrier(&___unityMainThreadActionList_32, value);
	}

	inline static int32_t get_offset_of_checkNewActions_33() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___checkNewActions_33)); }
	inline bool get_checkNewActions_33() const { return ___checkNewActions_33; }
	inline bool* get_address_of_checkNewActions_33() { return &___checkNewActions_33; }
	inline void set_checkNewActions_33(bool value)
	{
		___checkNewActions_33 = value;
	}

	inline static int32_t get_offset_of_thisLock_34() { return static_cast<int32_t>(offsetof(MediaPlayerCtrl_t3572035536, ___thisLock_34)); }
	inline Il2CppObject * get_thisLock_34() const { return ___thisLock_34; }
	inline Il2CppObject ** get_address_of_thisLock_34() { return &___thisLock_34; }
	inline void set_thisLock_34(Il2CppObject * value)
	{
		___thisLock_34 = value;
		Il2CppCodeGenWriteBarrier(&___thisLock_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
