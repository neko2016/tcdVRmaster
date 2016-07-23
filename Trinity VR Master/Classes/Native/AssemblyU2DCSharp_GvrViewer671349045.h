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
// GvrViewer
struct GvrViewer_t671349045;
// UnityEngine.Camera
struct Camera_t2727095145;
// StereoController
struct StereoController_t1637909972;
// Gvr.Internal.BaseVRDevice
struct BaseVRDevice_t591083105;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// System.Uri
struct Uri_t1116831938;
// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t2614477363;
// System.Action
struct Action_t3771233898;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe2227033558.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrViewer
struct  GvrViewer_t671349045  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean GvrViewer::vrModeEnabled
	bool ___vrModeEnabled_6;
	// GvrViewer/DistortionCorrectionMethod GvrViewer::distortionCorrection
	int32_t ___distortionCorrection_7;
	// System.Single GvrViewer::neckModelScale
	float ___neckModelScale_8;
	// System.Boolean GvrViewer::electronicDisplayStabilization
	bool ___electronicDisplayStabilization_9;
	// System.Single GvrViewer::stereoScreenScale
	float ___stereoScreenScale_11;
	// UnityEngine.Vector2 GvrViewer::defaultComfortableViewingRange
	Vector2_t4282066565  ___defaultComfortableViewingRange_13;
	// System.Uri GvrViewer::DefaultDeviceProfile
	Uri_t1116831938 * ___DefaultDeviceProfile_14;
	// System.Int32 GvrViewer::updatedToFrame
	int32_t ___updatedToFrame_15;
	// GvrViewer/StereoScreenChangeDelegate GvrViewer::OnStereoScreenChanged
	StereoScreenChangeDelegate_t2614477363 * ___OnStereoScreenChanged_16;
	// System.Action GvrViewer::OnTrigger
	Action_t3771233898 * ___OnTrigger_17;
	// System.Action GvrViewer::OnTilt
	Action_t3771233898 * ___OnTilt_18;
	// System.Action GvrViewer::OnProfileChange
	Action_t3771233898 * ___OnProfileChange_19;
	// System.Action GvrViewer::OnBackButton
	Action_t3771233898 * ___OnBackButton_20;
	// System.Boolean GvrViewer::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_21;
	// System.Boolean GvrViewer::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_22;
	// System.Boolean GvrViewer::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_23;
	// System.Boolean GvrViewer::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_24;
	// System.Boolean GvrViewer::<ProfileChanged>k__BackingField
	bool ___U3CProfileChangedU3Ek__BackingField_25;
	// System.Boolean GvrViewer::<BackButtonPressed>k__BackingField
	bool ___U3CBackButtonPressedU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_vrModeEnabled_6() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___vrModeEnabled_6)); }
	inline bool get_vrModeEnabled_6() const { return ___vrModeEnabled_6; }
	inline bool* get_address_of_vrModeEnabled_6() { return &___vrModeEnabled_6; }
	inline void set_vrModeEnabled_6(bool value)
	{
		___vrModeEnabled_6 = value;
	}

	inline static int32_t get_offset_of_distortionCorrection_7() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___distortionCorrection_7)); }
	inline int32_t get_distortionCorrection_7() const { return ___distortionCorrection_7; }
	inline int32_t* get_address_of_distortionCorrection_7() { return &___distortionCorrection_7; }
	inline void set_distortionCorrection_7(int32_t value)
	{
		___distortionCorrection_7 = value;
	}

	inline static int32_t get_offset_of_neckModelScale_8() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___neckModelScale_8)); }
	inline float get_neckModelScale_8() const { return ___neckModelScale_8; }
	inline float* get_address_of_neckModelScale_8() { return &___neckModelScale_8; }
	inline void set_neckModelScale_8(float value)
	{
		___neckModelScale_8 = value;
	}

	inline static int32_t get_offset_of_electronicDisplayStabilization_9() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___electronicDisplayStabilization_9)); }
	inline bool get_electronicDisplayStabilization_9() const { return ___electronicDisplayStabilization_9; }
	inline bool* get_address_of_electronicDisplayStabilization_9() { return &___electronicDisplayStabilization_9; }
	inline void set_electronicDisplayStabilization_9(bool value)
	{
		___electronicDisplayStabilization_9 = value;
	}

	inline static int32_t get_offset_of_stereoScreenScale_11() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___stereoScreenScale_11)); }
	inline float get_stereoScreenScale_11() const { return ___stereoScreenScale_11; }
	inline float* get_address_of_stereoScreenScale_11() { return &___stereoScreenScale_11; }
	inline void set_stereoScreenScale_11(float value)
	{
		___stereoScreenScale_11 = value;
	}

	inline static int32_t get_offset_of_defaultComfortableViewingRange_13() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___defaultComfortableViewingRange_13)); }
	inline Vector2_t4282066565  get_defaultComfortableViewingRange_13() const { return ___defaultComfortableViewingRange_13; }
	inline Vector2_t4282066565 * get_address_of_defaultComfortableViewingRange_13() { return &___defaultComfortableViewingRange_13; }
	inline void set_defaultComfortableViewingRange_13(Vector2_t4282066565  value)
	{
		___defaultComfortableViewingRange_13 = value;
	}

	inline static int32_t get_offset_of_DefaultDeviceProfile_14() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___DefaultDeviceProfile_14)); }
	inline Uri_t1116831938 * get_DefaultDeviceProfile_14() const { return ___DefaultDeviceProfile_14; }
	inline Uri_t1116831938 ** get_address_of_DefaultDeviceProfile_14() { return &___DefaultDeviceProfile_14; }
	inline void set_DefaultDeviceProfile_14(Uri_t1116831938 * value)
	{
		___DefaultDeviceProfile_14 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultDeviceProfile_14, value);
	}

	inline static int32_t get_offset_of_updatedToFrame_15() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___updatedToFrame_15)); }
	inline int32_t get_updatedToFrame_15() const { return ___updatedToFrame_15; }
	inline int32_t* get_address_of_updatedToFrame_15() { return &___updatedToFrame_15; }
	inline void set_updatedToFrame_15(int32_t value)
	{
		___updatedToFrame_15 = value;
	}

	inline static int32_t get_offset_of_OnStereoScreenChanged_16() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___OnStereoScreenChanged_16)); }
	inline StereoScreenChangeDelegate_t2614477363 * get_OnStereoScreenChanged_16() const { return ___OnStereoScreenChanged_16; }
	inline StereoScreenChangeDelegate_t2614477363 ** get_address_of_OnStereoScreenChanged_16() { return &___OnStereoScreenChanged_16; }
	inline void set_OnStereoScreenChanged_16(StereoScreenChangeDelegate_t2614477363 * value)
	{
		___OnStereoScreenChanged_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnStereoScreenChanged_16, value);
	}

	inline static int32_t get_offset_of_OnTrigger_17() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___OnTrigger_17)); }
	inline Action_t3771233898 * get_OnTrigger_17() const { return ___OnTrigger_17; }
	inline Action_t3771233898 ** get_address_of_OnTrigger_17() { return &___OnTrigger_17; }
	inline void set_OnTrigger_17(Action_t3771233898 * value)
	{
		___OnTrigger_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrigger_17, value);
	}

	inline static int32_t get_offset_of_OnTilt_18() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___OnTilt_18)); }
	inline Action_t3771233898 * get_OnTilt_18() const { return ___OnTilt_18; }
	inline Action_t3771233898 ** get_address_of_OnTilt_18() { return &___OnTilt_18; }
	inline void set_OnTilt_18(Action_t3771233898 * value)
	{
		___OnTilt_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnTilt_18, value);
	}

	inline static int32_t get_offset_of_OnProfileChange_19() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___OnProfileChange_19)); }
	inline Action_t3771233898 * get_OnProfileChange_19() const { return ___OnProfileChange_19; }
	inline Action_t3771233898 ** get_address_of_OnProfileChange_19() { return &___OnProfileChange_19; }
	inline void set_OnProfileChange_19(Action_t3771233898 * value)
	{
		___OnProfileChange_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnProfileChange_19, value);
	}

	inline static int32_t get_offset_of_OnBackButton_20() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___OnBackButton_20)); }
	inline Action_t3771233898 * get_OnBackButton_20() const { return ___OnBackButton_20; }
	inline Action_t3771233898 ** get_address_of_OnBackButton_20() { return &___OnBackButton_20; }
	inline void set_OnBackButton_20(Action_t3771233898 * value)
	{
		___OnBackButton_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnBackButton_20, value);
	}

	inline static int32_t get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_21)); }
	inline bool get_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_21() const { return ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_21() { return &___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_21; }
	inline void set_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_21(bool value)
	{
		___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CNativeUILayerSupportedU3Ek__BackingField_22)); }
	inline bool get_U3CNativeUILayerSupportedU3Ek__BackingField_22() const { return ___U3CNativeUILayerSupportedU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CNativeUILayerSupportedU3Ek__BackingField_22() { return &___U3CNativeUILayerSupportedU3Ek__BackingField_22; }
	inline void set_U3CNativeUILayerSupportedU3Ek__BackingField_22(bool value)
	{
		___U3CNativeUILayerSupportedU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CTriggeredU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CTriggeredU3Ek__BackingField_23)); }
	inline bool get_U3CTriggeredU3Ek__BackingField_23() const { return ___U3CTriggeredU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CTriggeredU3Ek__BackingField_23() { return &___U3CTriggeredU3Ek__BackingField_23; }
	inline void set_U3CTriggeredU3Ek__BackingField_23(bool value)
	{
		___U3CTriggeredU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CTiltedU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CTiltedU3Ek__BackingField_24)); }
	inline bool get_U3CTiltedU3Ek__BackingField_24() const { return ___U3CTiltedU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CTiltedU3Ek__BackingField_24() { return &___U3CTiltedU3Ek__BackingField_24; }
	inline void set_U3CTiltedU3Ek__BackingField_24(bool value)
	{
		___U3CTiltedU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CProfileChangedU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CProfileChangedU3Ek__BackingField_25)); }
	inline bool get_U3CProfileChangedU3Ek__BackingField_25() const { return ___U3CProfileChangedU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CProfileChangedU3Ek__BackingField_25() { return &___U3CProfileChangedU3Ek__BackingField_25; }
	inline void set_U3CProfileChangedU3Ek__BackingField_25(bool value)
	{
		___U3CProfileChangedU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CBackButtonPressedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CBackButtonPressedU3Ek__BackingField_26)); }
	inline bool get_U3CBackButtonPressedU3Ek__BackingField_26() const { return ___U3CBackButtonPressedU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CBackButtonPressedU3Ek__BackingField_26() { return &___U3CBackButtonPressedU3Ek__BackingField_26; }
	inline void set_U3CBackButtonPressedU3Ek__BackingField_26(bool value)
	{
		___U3CBackButtonPressedU3Ek__BackingField_26 = value;
	}
};

struct GvrViewer_t671349045_StaticFields
{
public:
	// GvrViewer GvrViewer::instance
	GvrViewer_t671349045 * ___instance_3;
	// UnityEngine.Camera GvrViewer::currentMainCamera
	Camera_t2727095145 * ___currentMainCamera_4;
	// StereoController GvrViewer::currentController
	StereoController_t1637909972 * ___currentController_5;
	// Gvr.Internal.BaseVRDevice GvrViewer::device
	BaseVRDevice_t591083105 * ___device_10;
	// UnityEngine.RenderTexture GvrViewer::stereoScreen
	RenderTexture_t1963041563 * ___stereoScreen_12;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___instance_3)); }
	inline GvrViewer_t671349045 * get_instance_3() const { return ___instance_3; }
	inline GvrViewer_t671349045 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(GvrViewer_t671349045 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}

	inline static int32_t get_offset_of_currentMainCamera_4() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___currentMainCamera_4)); }
	inline Camera_t2727095145 * get_currentMainCamera_4() const { return ___currentMainCamera_4; }
	inline Camera_t2727095145 ** get_address_of_currentMainCamera_4() { return &___currentMainCamera_4; }
	inline void set_currentMainCamera_4(Camera_t2727095145 * value)
	{
		___currentMainCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentMainCamera_4, value);
	}

	inline static int32_t get_offset_of_currentController_5() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___currentController_5)); }
	inline StereoController_t1637909972 * get_currentController_5() const { return ___currentController_5; }
	inline StereoController_t1637909972 ** get_address_of_currentController_5() { return &___currentController_5; }
	inline void set_currentController_5(StereoController_t1637909972 * value)
	{
		___currentController_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentController_5, value);
	}

	inline static int32_t get_offset_of_device_10() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___device_10)); }
	inline BaseVRDevice_t591083105 * get_device_10() const { return ___device_10; }
	inline BaseVRDevice_t591083105 ** get_address_of_device_10() { return &___device_10; }
	inline void set_device_10(BaseVRDevice_t591083105 * value)
	{
		___device_10 = value;
		Il2CppCodeGenWriteBarrier(&___device_10, value);
	}

	inline static int32_t get_offset_of_stereoScreen_12() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___stereoScreen_12)); }
	inline RenderTexture_t1963041563 * get_stereoScreen_12() const { return ___stereoScreen_12; }
	inline RenderTexture_t1963041563 ** get_address_of_stereoScreen_12() { return &___stereoScreen_12; }
	inline void set_stereoScreen_12(RenderTexture_t1963041563 * value)
	{
		___stereoScreen_12 = value;
		Il2CppCodeGenWriteBarrier(&___stereoScreen_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
