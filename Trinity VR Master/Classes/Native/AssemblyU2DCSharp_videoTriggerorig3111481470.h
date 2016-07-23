#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MediaPlayerCtrl
struct MediaPlayerCtrl_t3572035536;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// videoTriggerorig
struct  videoTriggerorig_t3111481470  : public MonoBehaviour_t667441552
{
public:
	// MediaPlayerCtrl videoTriggerorig::mediaScript
	MediaPlayerCtrl_t3572035536 * ___mediaScript_2;
	// System.Single videoTriggerorig::moveXby
	float ___moveXby_3;
	// System.Single videoTriggerorig::moveYby
	float ___moveYby_4;
	// System.Single videoTriggerorig::moveZby
	float ___moveZby_5;
	// UnityEngine.Vector3 videoTriggerorig::CamPos
	Vector3_t4282066566  ___CamPos_6;
	// UnityEngine.Vector3 videoTriggerorig::HomePos
	Vector3_t4282066566  ___HomePos_7;
	// System.Boolean videoTriggerorig::hasMoved
	bool ___hasMoved_8;

public:
	inline static int32_t get_offset_of_mediaScript_2() { return static_cast<int32_t>(offsetof(videoTriggerorig_t3111481470, ___mediaScript_2)); }
	inline MediaPlayerCtrl_t3572035536 * get_mediaScript_2() const { return ___mediaScript_2; }
	inline MediaPlayerCtrl_t3572035536 ** get_address_of_mediaScript_2() { return &___mediaScript_2; }
	inline void set_mediaScript_2(MediaPlayerCtrl_t3572035536 * value)
	{
		___mediaScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___mediaScript_2, value);
	}

	inline static int32_t get_offset_of_moveXby_3() { return static_cast<int32_t>(offsetof(videoTriggerorig_t3111481470, ___moveXby_3)); }
	inline float get_moveXby_3() const { return ___moveXby_3; }
	inline float* get_address_of_moveXby_3() { return &___moveXby_3; }
	inline void set_moveXby_3(float value)
	{
		___moveXby_3 = value;
	}

	inline static int32_t get_offset_of_moveYby_4() { return static_cast<int32_t>(offsetof(videoTriggerorig_t3111481470, ___moveYby_4)); }
	inline float get_moveYby_4() const { return ___moveYby_4; }
	inline float* get_address_of_moveYby_4() { return &___moveYby_4; }
	inline void set_moveYby_4(float value)
	{
		___moveYby_4 = value;
	}

	inline static int32_t get_offset_of_moveZby_5() { return static_cast<int32_t>(offsetof(videoTriggerorig_t3111481470, ___moveZby_5)); }
	inline float get_moveZby_5() const { return ___moveZby_5; }
	inline float* get_address_of_moveZby_5() { return &___moveZby_5; }
	inline void set_moveZby_5(float value)
	{
		___moveZby_5 = value;
	}

	inline static int32_t get_offset_of_CamPos_6() { return static_cast<int32_t>(offsetof(videoTriggerorig_t3111481470, ___CamPos_6)); }
	inline Vector3_t4282066566  get_CamPos_6() const { return ___CamPos_6; }
	inline Vector3_t4282066566 * get_address_of_CamPos_6() { return &___CamPos_6; }
	inline void set_CamPos_6(Vector3_t4282066566  value)
	{
		___CamPos_6 = value;
	}

	inline static int32_t get_offset_of_HomePos_7() { return static_cast<int32_t>(offsetof(videoTriggerorig_t3111481470, ___HomePos_7)); }
	inline Vector3_t4282066566  get_HomePos_7() const { return ___HomePos_7; }
	inline Vector3_t4282066566 * get_address_of_HomePos_7() { return &___HomePos_7; }
	inline void set_HomePos_7(Vector3_t4282066566  value)
	{
		___HomePos_7 = value;
	}

	inline static int32_t get_offset_of_hasMoved_8() { return static_cast<int32_t>(offsetof(videoTriggerorig_t3111481470, ___hasMoved_8)); }
	inline bool get_hasMoved_8() const { return ___hasMoved_8; }
	inline bool* get_address_of_hasMoved_8() { return &___hasMoved_8; }
	inline void set_hasMoved_8(bool value)
	{
		___hasMoved_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
