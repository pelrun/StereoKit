#pragma once
#include "platform_utils.h"

#if defined(SK_OS_ANDROID)

#include <android/native_activity.h>

namespace sk {

extern JavaVM        *android_vm;
extern jobject        android_activity;
extern ANativeWindow *android_window;
extern AAssetManager *android_asset_manager;

bool android_init          ();
void android_shutdown      ();
void android_set_window    (void *window);
void android_set_window_xam(void *window);
bool android_start         ();
void android_stop          ();
void android_step_begin    ();
void android_step_end      ();
void android_vsync         ();

} // namespace sk

#endif