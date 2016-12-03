LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

TENSORFLOW_CFLAGS	  := \
  -fstack-protector-strong \
  -fpic \
  -ffunction-sections \
  -funwind-tables \
  -no-canonical-prefixes \
  -fno-canonical-system-headers \
  '-march=armv7-a' \
  '-mfpu=vfpv3-d16' \
  '-mfloat-abi=softfp' \
  -DHAVE_PTHREAD \
  -Wall \
  -Wwrite-strings \
  -Woverloaded-virtual \
  -Wno-sign-compare \
  '-Wno-error=unused-function' \
  '-std=c++11' \
  -fno-exceptions \
  -DEIGEN_AVOID_STL_ARRAY \
  '-mfpu=neon' \
  '-std=c++11' \
  '-DMIN_LOG_LEVEL=0' \
  -DTF_LEAN_BINARY \
  -O2 \
  -Os \
  -frtti \
  -MD \

#-MF \

TENSORFLOW_SRC_FILES := \
	./imageutils_jni.cc \
	./jni_utils.cc \
	./rgb2yuv.cc \
	./tensorflow_jni.cc \
	./yuv2rgb.cc \

LOCAL_MODULE    := tensorflow_demo
LOCAL_ARM_MODE  := arm
LOCAL_SRC_FILES := $(TENSORFLOW_SRC_FILES)
LOCAL_CFLAGS    := $(TENSORFLOW_CFLAGS)

LOCAL_LDLIBS    := \
	-Wl,-whole-archive \
	$(LOCAL_PATH)/libs/$(TARGET_ARCH_ABI)/libandroid_tensorflow_lib.lo \
	$(LOCAL_PATH)/libs/$(TARGET_ARCH_ABI)/libandroid_tensorflow_kernels.lo \
	$(LOCAL_PATH)/libs/$(TARGET_ARCH_ABI)/libandroid_tensorflow_lib_lite.lo \
	$(LOCAL_PATH)/libs/$(TARGET_ARCH_ABI)/libprotos_all_cc.a \
	$(LOCAL_PATH)/libs/$(TARGET_ARCH_ABI)/libprotobuf.a \
	$(LOCAL_PATH)/libs/$(TARGET_ARCH_ABI)/libprotobuf_lite.a \
	-Wl,-no-whole-archive \
	$(NDK_ROOT)/sources/cxx-stl/gnu-libstdc++/4.9/libs/$(TARGET_ARCH_ABI)/libgnustl_static.a \
	$(NDK_ROOT)/sources/cxx-stl/gnu-libstdc++/4.9/libs/$(TARGET_ARCH_ABI)/libsupc++.a \
	-landroid \
	-ljnigraphics \
	-llog \
	-lm \
	-z defs \
	-s \
	'-Wl,--icf=all' \
	-Wl,--exclude-libs,ALL \
	-lz \
	-static-libgcc \
	-no-canonical-prefixes \
	'-march=armv7-a' \
	-Wl,--fix-cortex-a8 \
	-Wl,-S \

LOCAL_C_INCLUDES += $(LOCAL_PATH)/include \
	$(LOCAL_PATH)/genfiles \
	$(LOCAL_PATH)/include/external/protobuf \
	$(LOCAL_PATH)/include/external/bazel_tools \
	$(LOCAL_PATH)/include/external/eigen_archive \
	$(LOCAL_PATH)/include/external/protobuf/src \
	$(LOCAL_PATH)/include/external/bazel_tools/tools/cpp/gcc3 \

NDK_MODULE_PATH := $(call my-dir)

include $(BUILD_SHARED_LIBRARY)

