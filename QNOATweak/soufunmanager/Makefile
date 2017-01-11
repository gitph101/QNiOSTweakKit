THEOS_DEVICE_IP = 192.168.1.42
ARCHS = armv7 arm64
soufunmanager_FRAMEWORKS = CoreLocation


include $(THEOS)/makefiles/common.mk

TWEAK_NAME = soufunmanager
soufunmanager_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SouFunManager"
