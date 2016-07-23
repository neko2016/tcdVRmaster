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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// videoToSceneChange
struct  videoToSceneChange_t17058086  : public MonoBehaviour_t667441552
{
public:
	// MediaPlayerCtrl videoToSceneChange::mediaScript
	MediaPlayerCtrl_t3572035536 * ___mediaScript_2;
	// System.String videoToSceneChange::newScene
	String_t* ___newScene_3;

public:
	inline static int32_t get_offset_of_mediaScript_2() { return static_cast<int32_t>(offsetof(videoToSceneChange_t17058086, ___mediaScript_2)); }
	inline MediaPlayerCtrl_t3572035536 * get_mediaScript_2() const { return ___mediaScript_2; }
	inline MediaPlayerCtrl_t3572035536 ** get_address_of_mediaScript_2() { return &___mediaScript_2; }
	inline void set_mediaScript_2(MediaPlayerCtrl_t3572035536 * value)
	{
		___mediaScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___mediaScript_2, value);
	}

	inline static int32_t get_offset_of_newScene_3() { return static_cast<int32_t>(offsetof(videoToSceneChange_t17058086, ___newScene_3)); }
	inline String_t* get_newScene_3() const { return ___newScene_3; }
	inline String_t** get_address_of_newScene_3() { return &___newScene_3; }
	inline void set_newScene_3(String_t* value)
	{
		___newScene_3 = value;
		Il2CppCodeGenWriteBarrier(&___newScene_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
