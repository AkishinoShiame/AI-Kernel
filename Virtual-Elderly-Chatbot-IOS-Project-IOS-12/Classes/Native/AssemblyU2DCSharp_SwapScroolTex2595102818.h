#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwapScroolTex
struct  SwapScroolTex_t2595102818  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SwapScroolTex::speed
	float ___speed_2;
	// UnityEngine.Vector3 SwapScroolTex::OrigPosit
	Vector3_t2243707580  ___OrigPosit_3;
	// UnityEngine.Vector3 SwapScroolTex::DeltaPosit
	Vector3_t2243707580  ___DeltaPosit_4;
	// UnityEngine.GameObject SwapScroolTex::TheObject
	GameObject_t1756533147 * ___TheObject_5;
	// System.Int32 SwapScroolTex::index
	int32_t ___index_6;
	// UnityEngine.Sprite[] SwapScroolTex::pictures
	SpriteU5BU5D_t3359083662* ___pictures_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(SwapScroolTex_t2595102818, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_OrigPosit_3() { return static_cast<int32_t>(offsetof(SwapScroolTex_t2595102818, ___OrigPosit_3)); }
	inline Vector3_t2243707580  get_OrigPosit_3() const { return ___OrigPosit_3; }
	inline Vector3_t2243707580 * get_address_of_OrigPosit_3() { return &___OrigPosit_3; }
	inline void set_OrigPosit_3(Vector3_t2243707580  value)
	{
		___OrigPosit_3 = value;
	}

	inline static int32_t get_offset_of_DeltaPosit_4() { return static_cast<int32_t>(offsetof(SwapScroolTex_t2595102818, ___DeltaPosit_4)); }
	inline Vector3_t2243707580  get_DeltaPosit_4() const { return ___DeltaPosit_4; }
	inline Vector3_t2243707580 * get_address_of_DeltaPosit_4() { return &___DeltaPosit_4; }
	inline void set_DeltaPosit_4(Vector3_t2243707580  value)
	{
		___DeltaPosit_4 = value;
	}

	inline static int32_t get_offset_of_TheObject_5() { return static_cast<int32_t>(offsetof(SwapScroolTex_t2595102818, ___TheObject_5)); }
	inline GameObject_t1756533147 * get_TheObject_5() const { return ___TheObject_5; }
	inline GameObject_t1756533147 ** get_address_of_TheObject_5() { return &___TheObject_5; }
	inline void set_TheObject_5(GameObject_t1756533147 * value)
	{
		___TheObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___TheObject_5, value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(SwapScroolTex_t2595102818, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_pictures_7() { return static_cast<int32_t>(offsetof(SwapScroolTex_t2595102818, ___pictures_7)); }
	inline SpriteU5BU5D_t3359083662* get_pictures_7() const { return ___pictures_7; }
	inline SpriteU5BU5D_t3359083662** get_address_of_pictures_7() { return &___pictures_7; }
	inline void set_pictures_7(SpriteU5BU5D_t3359083662* value)
	{
		___pictures_7 = value;
		Il2CppCodeGenWriteBarrier(&___pictures_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
