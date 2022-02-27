#-------------------------------------------------
#
# Project created by QtCreator 2018-09-21T11:47:38
#
#-------------------------------------------------

QT       -= gui
QT += androidextras

TARGET = qandroidwrapper
TEMPLATE = lib
CONFIG += staticlib

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    android/app/qandroidwrapper_activity.cpp \
    android/app/qandroidwrapper_notification.cpp \
    android/app/qandroidwrapper_notificationchannel.cpp \
    android/app/qandroidwrapper_notificationmanager.cpp \
    android/app/qandroidwrapper_pendingintent.cpp \
    android/app/qandroidwrapper_service.cpp \
    android/content/pm/qandroidwrapper_activityinfo.cpp \
    android/content/pm/qandroidwrapper_packageinfo.cpp \
    android/content/pm/qandroidwrapper_packagemanager.cpp \
    android/content/res/qandroidwrapper_resources.cpp \
    android/content/qandroidwrapper_broadcastreceiver.cpp \
    android/content/qandroidwrapper_componentname.cpp \
    android/content/qandroidwrapper_context.cpp \
    android/content/qandroidwrapper_intent.cpp \
    android/content/qandroidwrapper_intentfilter.cpp \
    android/graphics/qandroidwrapper_color.cpp \
    android/location/qandroidwrapper_locationmanager.cpp \
    android/manifest/qandroidwrapper_permission.cpp \
    android/media/qandroidwrapper_ringtonemanager.cpp \
    android/net/wifi/wifiManager/qandroidwrapper_wifilock.cpp \
    android/net/wifi/qandroidwrapper_wifimanager.cpp \
    android/net/qandroidwrapper_uri.cpp \
    android/os/qandroidwrapper_build.cpp \
    android/os/qandroidwrapper_powermanager.cpp \
    android/os/build/qandroidwrapper_version_codes.cpp \
    android/os/build/qandroidwrapper_version.cpp \
    android/os/powerManager/qandroidwrapper_wakelock.cpp \
    android/provider/qandroidwrapper_settings.cpp \
    android/telephony/qandroidwrapper_telephonymanager.cpp \
    android/widget/qandroidwrapper_toast.cpp \
    android/qandroidwrapper_manifest.cpp \
    androidx/core/app/qandroidwrapper_notificationcompatbuilder.cpp \
    java/lang/qandroidwrapper_charsequence.cpp \
    java/lang/qandroidwrapper_class.cpp \
    java/lang/qandroidwrapper_object.cpp \
    java/lang/qandroidwrapper_string.cpp \
    qandroidwrapper_qjnionload.cpp \
    java/io/qandroidwrapper_file.cpp \
    android/support/v4/content/qandroidwrapper_contextcompat.cpp \
    android/os/qandroidwrapper_environment.cpp \
    android/media/qandroidwrapper_ringtone.cpp


HEADERS += \
    android/app/qandroidwrapper_activity.h \
    android/app/qandroidwrapper_notification.h \
    android/app/qandroidwrapper_notificationchannel.h \
    android/app/qandroidwrapper_notificationmanager.h \
    android/app/qandroidwrapper_pendingintent.h \
    android/app/qandroidwrapper_service.h \
    android/content/pm/qandroidwrapper_activityinfo.h \
    android/content/pm/qandroidwrapper_packageinfo.h \
    android/content/pm/qandroidwrapper_packagemanager.h \
    android/content/res/qandroidwrapper_resources.h \
    android/content/qandroidwrapper_broadcastreceiver.h \
    android/content/qandroidwrapper_componentname.h \
    android/content/qandroidwrapper_context.h \
    android/content/qandroidwrapper_intent.h \
    android/content/qandroidwrapper_intentfilter.h \
    android/graphics/qandroidwrapper_color.h \
    android/location/qandroidwrapper_locationmanager.h \
    android/manifest/qandroidwrapper_permission.h \
    android/media/qandroidwrapper_ringtonemanager.h \
    android/net/wifi/wifiManager/qandroidwrapper_wifilock.h \
    android/net/wifi/qandroidwrapper_wifimanager.h \
    android/net/qandroidwrapper_uri.h \
    android/os/qandroidwrapper_build.h \
    android/os/qandroidwrapper_powermanager.h \
    android/os/build/qandroidwrapper_version_codes.h \
    android/os/build/qandroidwrapper_version.h \
    android/os/powerManager/qandroidwrapper_wakelock.h \
    android/provider/qandroidwrapper_settings.h \
    android/telephony/qandroidwrapper_telephonymanager.h \
    android/widget/qandroidwrapper_toast.h \
    android/qandroidwrapper_manifest.h \
    androidx/core/app/qandroidwrapper_notificationcompatbuilder.h \
    java/lang/qandroidwrapper_charsequence.h \
    java/lang/qandroidwrapper_class.h \
    java/lang/qandroidwrapper_object.h \
    java/lang/qandroidwrapper_string.h \
    java/io/qandroidwrapper_file.h \
    android/support/v4/content/qandroidwrapper_contextcompat.h \
    android/os/qandroidwrapper_environment.h \
    android/media/qandroidwrapper_ringtone.h


unix {
    target.path = /usr/lib
    INSTALLS += target
}

DISTFILES += \
    qandroidwrapper.pri

copydata.commands = $(MKDIR) $$[QT_INSTALL_HEADERS]/qandroidwrapper/ ;

LIST = $$files($$shell_path($$PWD/*.h), true)
LIST += $$files($$shell_path($$PWD/qandroidwrapper.pri))

for(a, LIST):{
    FILE = $$[QT_INSTALL_HEADERS]/qandroidwrapper/$$relative_path($${a}, $$PWD)

    !exists($$dirname(FILE)) {
        copydata.commands += $(MKDIR) $$dirname(FILE);
    }

    copydata.commands += $(COPY_FILE) \"$${a}\" \"$$shell_path($$FILE)\";
}

copydata.commands += $(COPY_FILE) \"$$shell_path($$OUT_PWD/libqandroidwrapper.a)\" \"$$shell_path($$[QT_INSTALL_LIBS]/)\";

first.depends = $(first) copydata
export(first.depends)
export(copydata.commands)
QMAKE_EXTRA_TARGETS += first copydata



