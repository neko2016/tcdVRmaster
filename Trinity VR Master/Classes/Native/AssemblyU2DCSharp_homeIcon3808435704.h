#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// homeIcon
struct  homeIcon_t3808435704  : public MonoBehaviour_t667441552
{
public:
	// System.Single homeIcon::camXRot
	float ___camXRot_2;
	// System.Single homeIcon::newYRot
	float ___newYRot_3;
	// UnityEngine.Vector3 homeIcon::lastRot
	Vector3_t4282066566  ___lastRot_4;
	// UnityEngine.AudioSource homeIcon::pop
	AudioSource_t1740077639 * ___pop_5;
	// System.Single homeIcon::speed
	float ___speed_6;

public:
	inline static int32_t get_offset_of_camXRot_2() { return static_cast<int32_t>(offsetof(homeIcon_t3808435704, ___camXRot_2)); }
	inline float get_camXRot_2() const { return ___camXRot_2; }
	inline float* get_address_of_camXRot_2() { return &___camXRot_2; }
	inline void set_camXRot_2(float value)
	{
		___camXRot_2 = value;
	}

	inline static int32_t get_offset_of_newYRot_3() { return static_cast<int32_t>(offsetof(homeIcon_t3808435704, ___newYRot_3)); }
	inline float get_newYRot_3() const { return ___newYRot_3; }
	inline float* get_address_of_newYRot_3() { return &___newYRot_3; }
	inline void set_newYRot_3(float value)
	{
		___newYRot_3 = value;
	}

	inline static int32_t get_offset_of_lastRot_4() { return static_cast<int32_t>(offsetof(homeIcon_t3808435704, ___lastRot_4)); }
	inline Vector3_t4282066566  get_lastRot_4() const { return ___lastRot_4; }
	inline Vector3_t4282066566 * get_address_of_lastRot_4() { return &___lastRot_4; }
	inline void set_lastRot_4(Vector3_t4282066566  value)
	{
		___lastRot_4 = value;
	}

	inline static int32_t get_offset_of_pop_5() { return static_cast<int32_t>(offsetof(homeIcon_t3808435704, ___pop_5)); }
	inline AudioSource_t1740077639 * get_pop_5() const { return ___pop_5; }
	inline AudioSource_t1740077639 ** get_address_of_pop_5() { return &___pop_5; }
	inline void set_pop_5(AudioSource_t1740077639 * value)
	{
		___pop_5 = value;
		Il2CppCodeGenWriteBarrier(&___pop_5, value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(homeIcon_t3808435704, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
