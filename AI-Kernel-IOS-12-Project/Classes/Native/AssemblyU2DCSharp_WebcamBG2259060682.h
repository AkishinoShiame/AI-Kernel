#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_t3114550109;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1079476942;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebcamBG
struct  WebcamBG_t2259060682  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.RawImage WebcamBG::imgCam
	RawImage_t2749640213 * ___imgCam_2;
	// UnityEngine.UI.AspectRatioFitter WebcamBG::fit
	AspectRatioFitter_t3114550109 * ___fit_3;
	// UnityEngine.WebCamTexture WebcamBG::CameraTexture
	WebCamTexture_t1079476942 * ___CameraTexture_4;

public:
	inline static int32_t get_offset_of_imgCam_2() { return static_cast<int32_t>(offsetof(WebcamBG_t2259060682, ___imgCam_2)); }
	inline RawImage_t2749640213 * get_imgCam_2() const { return ___imgCam_2; }
	inline RawImage_t2749640213 ** get_address_of_imgCam_2() { return &___imgCam_2; }
	inline void set_imgCam_2(RawImage_t2749640213 * value)
	{
		___imgCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___imgCam_2, value);
	}

	inline static int32_t get_offset_of_fit_3() { return static_cast<int32_t>(offsetof(WebcamBG_t2259060682, ___fit_3)); }
	inline AspectRatioFitter_t3114550109 * get_fit_3() const { return ___fit_3; }
	inline AspectRatioFitter_t3114550109 ** get_address_of_fit_3() { return &___fit_3; }
	inline void set_fit_3(AspectRatioFitter_t3114550109 * value)
	{
		___fit_3 = value;
		Il2CppCodeGenWriteBarrier(&___fit_3, value);
	}

	inline static int32_t get_offset_of_CameraTexture_4() { return static_cast<int32_t>(offsetof(WebcamBG_t2259060682, ___CameraTexture_4)); }
	inline WebCamTexture_t1079476942 * get_CameraTexture_4() const { return ___CameraTexture_4; }
	inline WebCamTexture_t1079476942 ** get_address_of_CameraTexture_4() { return &___CameraTexture_4; }
	inline void set_CameraTexture_4(WebCamTexture_t1079476942 * value)
	{
		___CameraTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___CameraTexture_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
