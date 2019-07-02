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

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadAndChangeModel
struct  LoadAndChangeModel_t471431630  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] LoadAndChangeModel::model
	GameObjectU5BU5D_t3057952154* ___model_2;
	// UnityEngine.Transform LoadAndChangeModel::parent
	Transform_t3275118058 * ___parent_3;
	// UnityEngine.Vector3 LoadAndChangeModel::OrigPosit
	Vector3_t2243707580  ___OrigPosit_7;
	// UnityEngine.Vector3 LoadAndChangeModel::DeltaPosit
	Vector3_t2243707580  ___DeltaPosit_8;

public:
	inline static int32_t get_offset_of_model_2() { return static_cast<int32_t>(offsetof(LoadAndChangeModel_t471431630, ___model_2)); }
	inline GameObjectU5BU5D_t3057952154* get_model_2() const { return ___model_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_model_2() { return &___model_2; }
	inline void set_model_2(GameObjectU5BU5D_t3057952154* value)
	{
		___model_2 = value;
		Il2CppCodeGenWriteBarrier(&___model_2, value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(LoadAndChangeModel_t471431630, ___parent_3)); }
	inline Transform_t3275118058 * get_parent_3() const { return ___parent_3; }
	inline Transform_t3275118058 ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(Transform_t3275118058 * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier(&___parent_3, value);
	}

	inline static int32_t get_offset_of_OrigPosit_7() { return static_cast<int32_t>(offsetof(LoadAndChangeModel_t471431630, ___OrigPosit_7)); }
	inline Vector3_t2243707580  get_OrigPosit_7() const { return ___OrigPosit_7; }
	inline Vector3_t2243707580 * get_address_of_OrigPosit_7() { return &___OrigPosit_7; }
	inline void set_OrigPosit_7(Vector3_t2243707580  value)
	{
		___OrigPosit_7 = value;
	}

	inline static int32_t get_offset_of_DeltaPosit_8() { return static_cast<int32_t>(offsetof(LoadAndChangeModel_t471431630, ___DeltaPosit_8)); }
	inline Vector3_t2243707580  get_DeltaPosit_8() const { return ___DeltaPosit_8; }
	inline Vector3_t2243707580 * get_address_of_DeltaPosit_8() { return &___DeltaPosit_8; }
	inline void set_DeltaPosit_8(Vector3_t2243707580  value)
	{
		___DeltaPosit_8 = value;
	}
};

struct LoadAndChangeModel_t471431630_StaticFields
{
public:
	// UnityEngine.GameObject LoadAndChangeModel::Now
	GameObject_t1756533147 * ___Now_4;
	// System.Boolean LoadAndChangeModel::CanChangeCharacter
	bool ___CanChangeCharacter_5;
	// System.Int32 LoadAndChangeModel::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_Now_4() { return static_cast<int32_t>(offsetof(LoadAndChangeModel_t471431630_StaticFields, ___Now_4)); }
	inline GameObject_t1756533147 * get_Now_4() const { return ___Now_4; }
	inline GameObject_t1756533147 ** get_address_of_Now_4() { return &___Now_4; }
	inline void set_Now_4(GameObject_t1756533147 * value)
	{
		___Now_4 = value;
		Il2CppCodeGenWriteBarrier(&___Now_4, value);
	}

	inline static int32_t get_offset_of_CanChangeCharacter_5() { return static_cast<int32_t>(offsetof(LoadAndChangeModel_t471431630_StaticFields, ___CanChangeCharacter_5)); }
	inline bool get_CanChangeCharacter_5() const { return ___CanChangeCharacter_5; }
	inline bool* get_address_of_CanChangeCharacter_5() { return &___CanChangeCharacter_5; }
	inline void set_CanChangeCharacter_5(bool value)
	{
		___CanChangeCharacter_5 = value;
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(LoadAndChangeModel_t471431630_StaticFields, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
