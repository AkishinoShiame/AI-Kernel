#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecordAndUpload/predict
struct  predict_t1667798653  : public Il2CppObject
{
public:
	// System.Single RecordAndUpload/predict::Positive
	float ___Positive_0;
	// System.Single RecordAndUpload/predict::Natural
	float ___Natural_1;
	// System.Single RecordAndUpload/predict::Negative
	float ___Negative_2;

public:
	inline static int32_t get_offset_of_Positive_0() { return static_cast<int32_t>(offsetof(predict_t1667798653, ___Positive_0)); }
	inline float get_Positive_0() const { return ___Positive_0; }
	inline float* get_address_of_Positive_0() { return &___Positive_0; }
	inline void set_Positive_0(float value)
	{
		___Positive_0 = value;
	}

	inline static int32_t get_offset_of_Natural_1() { return static_cast<int32_t>(offsetof(predict_t1667798653, ___Natural_1)); }
	inline float get_Natural_1() const { return ___Natural_1; }
	inline float* get_address_of_Natural_1() { return &___Natural_1; }
	inline void set_Natural_1(float value)
	{
		___Natural_1 = value;
	}

	inline static int32_t get_offset_of_Negative_2() { return static_cast<int32_t>(offsetof(predict_t1667798653, ___Negative_2)); }
	inline float get_Negative_2() const { return ___Negative_2; }
	inline float* get_address_of_Negative_2() { return &___Negative_2; }
	inline void set_Negative_2(float value)
	{
		___Negative_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
