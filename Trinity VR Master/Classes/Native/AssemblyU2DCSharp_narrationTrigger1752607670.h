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

// narrationTrigger
struct  narrationTrigger_t1752607670  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioSource narrationTrigger::audioNarration
	AudioSource_t1740077639 * ___audioNarration_2;
	// System.Boolean narrationTrigger::isPlaying
	bool ___isPlaying_3;

public:
	inline static int32_t get_offset_of_audioNarration_2() { return static_cast<int32_t>(offsetof(narrationTrigger_t1752607670, ___audioNarration_2)); }
	inline AudioSource_t1740077639 * get_audioNarration_2() const { return ___audioNarration_2; }
	inline AudioSource_t1740077639 ** get_address_of_audioNarration_2() { return &___audioNarration_2; }
	inline void set_audioNarration_2(AudioSource_t1740077639 * value)
	{
		___audioNarration_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioNarration_2, value);
	}

	inline static int32_t get_offset_of_isPlaying_3() { return static_cast<int32_t>(offsetof(narrationTrigger_t1752607670, ___isPlaying_3)); }
	inline bool get_isPlaying_3() const { return ___isPlaying_3; }
	inline bool* get_address_of_isPlaying_3() { return &___isPlaying_3; }
	inline void set_isPlaying_3(bool value)
	{
		___isPlaying_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
