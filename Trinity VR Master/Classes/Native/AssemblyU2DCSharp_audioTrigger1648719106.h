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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// audioTrigger
struct  audioTrigger_t1648719106  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioSource audioTrigger::myAudio
	AudioSource_t1740077639 * ___myAudio_2;
	// System.Boolean audioTrigger::fadingIn
	bool ___fadingIn_3;
	// System.Boolean audioTrigger::fadingOut
	bool ___fadingOut_4;
	// System.Int32 audioTrigger::approxSecondsToFade
	int32_t ___approxSecondsToFade_5;

public:
	inline static int32_t get_offset_of_myAudio_2() { return static_cast<int32_t>(offsetof(audioTrigger_t1648719106, ___myAudio_2)); }
	inline AudioSource_t1740077639 * get_myAudio_2() const { return ___myAudio_2; }
	inline AudioSource_t1740077639 ** get_address_of_myAudio_2() { return &___myAudio_2; }
	inline void set_myAudio_2(AudioSource_t1740077639 * value)
	{
		___myAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_2, value);
	}

	inline static int32_t get_offset_of_fadingIn_3() { return static_cast<int32_t>(offsetof(audioTrigger_t1648719106, ___fadingIn_3)); }
	inline bool get_fadingIn_3() const { return ___fadingIn_3; }
	inline bool* get_address_of_fadingIn_3() { return &___fadingIn_3; }
	inline void set_fadingIn_3(bool value)
	{
		___fadingIn_3 = value;
	}

	inline static int32_t get_offset_of_fadingOut_4() { return static_cast<int32_t>(offsetof(audioTrigger_t1648719106, ___fadingOut_4)); }
	inline bool get_fadingOut_4() const { return ___fadingOut_4; }
	inline bool* get_address_of_fadingOut_4() { return &___fadingOut_4; }
	inline void set_fadingOut_4(bool value)
	{
		___fadingOut_4 = value;
	}

	inline static int32_t get_offset_of_approxSecondsToFade_5() { return static_cast<int32_t>(offsetof(audioTrigger_t1648719106, ___approxSecondsToFade_5)); }
	inline int32_t get_approxSecondsToFade_5() const { return ___approxSecondsToFade_5; }
	inline int32_t* get_address_of_approxSecondsToFade_5() { return &___approxSecondsToFade_5; }
	inline void set_approxSecondsToFade_5(int32_t value)
	{
		___approxSecondsToFade_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
