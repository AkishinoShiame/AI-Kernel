#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecordAndUpload
struct  RecordAndUpload_t701075571  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image RecordAndUpload::mic_img
	Image_t2042527209 * ___mic_img_2;
	// System.Boolean RecordAndUpload::mic_rec
	bool ___mic_rec_3;
	// UnityEngine.AudioClip RecordAndUpload::myAudioClip
	AudioClip_t1932558630 * ___myAudioClip_4;
	// UnityEngine.Animator RecordAndUpload::CurrentAni
	Animator_t69676727 * ___CurrentAni_5;
	// UnityEngine.UI.Text RecordAndUpload::speech_text
	Text_t356221433 * ___speech_text_9;
	// System.String RecordAndUpload::mixedtext
	String_t* ___mixedtext_12;
	// System.String RecordAndUpload::jsonString
	String_t* ___jsonString_13;
	// System.String RecordAndUpload::speaking
	String_t* ___speaking_14;
	// System.Boolean RecordAndUpload::finish_upload
	bool ___finish_upload_15;
	// System.Boolean RecordAndUpload::finish_emotion
	bool ___finish_emotion_16;
	// System.Int32 RecordAndUpload::speechcount
	int32_t ___speechcount_17;

public:
	inline static int32_t get_offset_of_mic_img_2() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___mic_img_2)); }
	inline Image_t2042527209 * get_mic_img_2() const { return ___mic_img_2; }
	inline Image_t2042527209 ** get_address_of_mic_img_2() { return &___mic_img_2; }
	inline void set_mic_img_2(Image_t2042527209 * value)
	{
		___mic_img_2 = value;
		Il2CppCodeGenWriteBarrier(&___mic_img_2, value);
	}

	inline static int32_t get_offset_of_mic_rec_3() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___mic_rec_3)); }
	inline bool get_mic_rec_3() const { return ___mic_rec_3; }
	inline bool* get_address_of_mic_rec_3() { return &___mic_rec_3; }
	inline void set_mic_rec_3(bool value)
	{
		___mic_rec_3 = value;
	}

	inline static int32_t get_offset_of_myAudioClip_4() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___myAudioClip_4)); }
	inline AudioClip_t1932558630 * get_myAudioClip_4() const { return ___myAudioClip_4; }
	inline AudioClip_t1932558630 ** get_address_of_myAudioClip_4() { return &___myAudioClip_4; }
	inline void set_myAudioClip_4(AudioClip_t1932558630 * value)
	{
		___myAudioClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___myAudioClip_4, value);
	}

	inline static int32_t get_offset_of_CurrentAni_5() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___CurrentAni_5)); }
	inline Animator_t69676727 * get_CurrentAni_5() const { return ___CurrentAni_5; }
	inline Animator_t69676727 ** get_address_of_CurrentAni_5() { return &___CurrentAni_5; }
	inline void set_CurrentAni_5(Animator_t69676727 * value)
	{
		___CurrentAni_5 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentAni_5, value);
	}

	inline static int32_t get_offset_of_speech_text_9() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___speech_text_9)); }
	inline Text_t356221433 * get_speech_text_9() const { return ___speech_text_9; }
	inline Text_t356221433 ** get_address_of_speech_text_9() { return &___speech_text_9; }
	inline void set_speech_text_9(Text_t356221433 * value)
	{
		___speech_text_9 = value;
		Il2CppCodeGenWriteBarrier(&___speech_text_9, value);
	}

	inline static int32_t get_offset_of_mixedtext_12() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___mixedtext_12)); }
	inline String_t* get_mixedtext_12() const { return ___mixedtext_12; }
	inline String_t** get_address_of_mixedtext_12() { return &___mixedtext_12; }
	inline void set_mixedtext_12(String_t* value)
	{
		___mixedtext_12 = value;
		Il2CppCodeGenWriteBarrier(&___mixedtext_12, value);
	}

	inline static int32_t get_offset_of_jsonString_13() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___jsonString_13)); }
	inline String_t* get_jsonString_13() const { return ___jsonString_13; }
	inline String_t** get_address_of_jsonString_13() { return &___jsonString_13; }
	inline void set_jsonString_13(String_t* value)
	{
		___jsonString_13 = value;
		Il2CppCodeGenWriteBarrier(&___jsonString_13, value);
	}

	inline static int32_t get_offset_of_speaking_14() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___speaking_14)); }
	inline String_t* get_speaking_14() const { return ___speaking_14; }
	inline String_t** get_address_of_speaking_14() { return &___speaking_14; }
	inline void set_speaking_14(String_t* value)
	{
		___speaking_14 = value;
		Il2CppCodeGenWriteBarrier(&___speaking_14, value);
	}

	inline static int32_t get_offset_of_finish_upload_15() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___finish_upload_15)); }
	inline bool get_finish_upload_15() const { return ___finish_upload_15; }
	inline bool* get_address_of_finish_upload_15() { return &___finish_upload_15; }
	inline void set_finish_upload_15(bool value)
	{
		___finish_upload_15 = value;
	}

	inline static int32_t get_offset_of_finish_emotion_16() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___finish_emotion_16)); }
	inline bool get_finish_emotion_16() const { return ___finish_emotion_16; }
	inline bool* get_address_of_finish_emotion_16() { return &___finish_emotion_16; }
	inline void set_finish_emotion_16(bool value)
	{
		___finish_emotion_16 = value;
	}

	inline static int32_t get_offset_of_speechcount_17() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571, ___speechcount_17)); }
	inline int32_t get_speechcount_17() const { return ___speechcount_17; }
	inline int32_t* get_address_of_speechcount_17() { return &___speechcount_17; }
	inline void set_speechcount_17(int32_t value)
	{
		___speechcount_17 = value;
	}
};

struct RecordAndUpload_t701075571_StaticFields
{
public:
	// System.Single RecordAndUpload::speechPositive
	float ___speechPositive_6;
	// System.Single RecordAndUpload::speechNegative
	float ___speechNegative_7;
	// System.Single RecordAndUpload::speechNatural
	float ___speechNatural_8;
	// System.String RecordAndUpload::ip_addr_notag
	String_t* ___ip_addr_notag_10;
	// System.String RecordAndUpload::ip_addr_withtag
	String_t* ___ip_addr_withtag_11;

public:
	inline static int32_t get_offset_of_speechPositive_6() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571_StaticFields, ___speechPositive_6)); }
	inline float get_speechPositive_6() const { return ___speechPositive_6; }
	inline float* get_address_of_speechPositive_6() { return &___speechPositive_6; }
	inline void set_speechPositive_6(float value)
	{
		___speechPositive_6 = value;
	}

	inline static int32_t get_offset_of_speechNegative_7() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571_StaticFields, ___speechNegative_7)); }
	inline float get_speechNegative_7() const { return ___speechNegative_7; }
	inline float* get_address_of_speechNegative_7() { return &___speechNegative_7; }
	inline void set_speechNegative_7(float value)
	{
		___speechNegative_7 = value;
	}

	inline static int32_t get_offset_of_speechNatural_8() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571_StaticFields, ___speechNatural_8)); }
	inline float get_speechNatural_8() const { return ___speechNatural_8; }
	inline float* get_address_of_speechNatural_8() { return &___speechNatural_8; }
	inline void set_speechNatural_8(float value)
	{
		___speechNatural_8 = value;
	}

	inline static int32_t get_offset_of_ip_addr_notag_10() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571_StaticFields, ___ip_addr_notag_10)); }
	inline String_t* get_ip_addr_notag_10() const { return ___ip_addr_notag_10; }
	inline String_t** get_address_of_ip_addr_notag_10() { return &___ip_addr_notag_10; }
	inline void set_ip_addr_notag_10(String_t* value)
	{
		___ip_addr_notag_10 = value;
		Il2CppCodeGenWriteBarrier(&___ip_addr_notag_10, value);
	}

	inline static int32_t get_offset_of_ip_addr_withtag_11() { return static_cast<int32_t>(offsetof(RecordAndUpload_t701075571_StaticFields, ___ip_addr_withtag_11)); }
	inline String_t* get_ip_addr_withtag_11() const { return ___ip_addr_withtag_11; }
	inline String_t** get_address_of_ip_addr_withtag_11() { return &___ip_addr_withtag_11; }
	inline void set_ip_addr_withtag_11(String_t* value)
	{
		___ip_addr_withtag_11 = value;
		Il2CppCodeGenWriteBarrier(&___ip_addr_withtag_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
