﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadScene
struct  loadScene_t1377993542  : public MonoBehaviour_t667441552
{
public:
	// System.String loadScene::newScene
	String_t* ___newScene_2;

public:
	inline static int32_t get_offset_of_newScene_2() { return static_cast<int32_t>(offsetof(loadScene_t1377993542, ___newScene_2)); }
	inline String_t* get_newScene_2() const { return ___newScene_2; }
	inline String_t** get_address_of_newScene_2() { return &___newScene_2; }
	inline void set_newScene_2(String_t* value)
	{
		___newScene_2 = value;
		Il2CppCodeGenWriteBarrier(&___newScene_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif