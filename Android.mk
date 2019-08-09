#
# Copyright (C) 2015 The CyanogenMod Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

LOCAL_PATH := $(call my-dir)

ifeq ($(TARGET_DEVICE),f1plus)


include $(call all-makefiles-under,$(LOCAL_PATH))


include $(CLEAR_VARS)

include device/coolpad/f1plus/kernel/AndroidKernel.mk

#Create symbolic links
$(shell mkdir -p $(TARGET_OUT_ETC)/firmware/wlan/prima; \
        mkdir -p $(TARGET_OUT)/lib/modules; \
        ln -sf /system/etc/wifi/WCNSS_qcom_cfg.ini \
        $(TARGET_OUT_ETC)/firmware/wlan/prima/WCNSS_qcom_cfg.ini; \
        ln -sf /system/etc/wifi/WCNSS_qcom_wlan_nv.bin \
        $(TARGET_OUT_ETC)/firmware/wlan/prima/WCNSS_qcom_wlan_nv.bin; \
        ln -sf /system/lib/modules/pronto/pronto_wlan.ko \
        $(TARGET_OUT)/lib/modules/wlan.ko)
endif