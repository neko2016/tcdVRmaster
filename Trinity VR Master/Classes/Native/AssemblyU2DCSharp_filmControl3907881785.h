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
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// filmControl
struct  filmControl_t3907881785  : public MonoBehaviour_t667441552
{
public:
	// MediaPlayerCtrl filmControl::mediaScript
	MediaPlayerCtrl_t3572035536 * ___mediaScript_2;
	// UnityEngine.MeshRenderer filmControl::myMesh
	MeshRenderer_t2804666580 * ___myMesh_3;
	// System.Boolean filmControl::meshOn
	bool ___meshOn_4;

public:
	inline static int32_t get_offset_of_mediaScript_2() { return static_cast<int32_t>(offsetof(filmControl_t3907881785, ___mediaScript_2)); }
	inline MediaPlayerCtrl_t3572035536 * get_mediaScript_2() const { return ___mediaScript_2; }
	inline MediaPlayerCtrl_t3572035536 ** get_address_of_mediaScript_2() { return &___mediaScript_2; }
	inline void set_mediaScript_2(MediaPlayerCtrl_t3572035536 * value)
	{
		___mediaScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___mediaScript_2, value);
	}

	inline static int32_t get_offset_of_myMesh_3() { return static_cast<int32_t>(offsetof(filmControl_t3907881785, ___myMesh_3)); }
	inline MeshRenderer_t2804666580 * get_myMesh_3() const { return ___myMesh_3; }
	inline MeshRenderer_t2804666580 ** get_address_of_myMesh_3() { return &___myMesh_3; }
	inline void set_myMesh_3(MeshRenderer_t2804666580 * value)
	{
		___myMesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___myMesh_3, value);
	}

	inline static int32_t get_offset_of_meshOn_4() { return static_cast<int32_t>(offsetof(filmControl_t3907881785, ___meshOn_4)); }
	inline bool get_meshOn_4() const { return ___meshOn_4; }
	inline bool* get_address_of_meshOn_4() { return &___meshOn_4; }
	inline void set_meshOn_4(bool value)
	{
		___meshOn_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
