TARGET = QtAndroidWrapper

CONFIG += java

DESTDIR = $$[QT_INSTALL_PREFIX]/jar

JAVACLASSPATH += $$PWD/src

JAVASOURCES += $$PWD/src/ru/yas/android/QtWrapperBroadcastReceiver.java \

# install
target.path = $$[QT_INSTALL_PREFIX]/jar
INSTALLS += target

message($$INSTALLS)

OTHER_FILES += $$JAVASOURCES
