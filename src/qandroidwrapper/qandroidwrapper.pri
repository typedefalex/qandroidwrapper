#INCLUDEPATH += "$$PWD/.."

!exists($$[QT_INSTALL_PREFIX]/jar/QtAndroidWrapper.jar) {
    error("File QtAndroidWrapper.jar does not exist")
}

#isEmpty(ANDROID_PACKAGE_SOURCE_DIR) {
#    error("ANDROID_PACKAGE_SOURCE_DIR is empty")
#}

#!exists($$ANDROID_PACKAGE_SOURCE_DIR) {
#    error("ANDROID_PACKAGE_SOURCE_DIR does not exist")
#}

!contains(QMAKE_EXTRA_TARGETS, copydata) {
    #copydata.commands = $(MKDIR) $$ANDROID_PACKAGE_SOURCE_DIR/libs ;$(COPY_FILE) \"$$shell_path($$[QT_INSTALL_PREFIX]/jar/QtAndroidWrapper.jar)\" \"$$shell_path($$ANDROID_PACKAGE_SOURCE_DIR/libs/)\"
    copydata.commands = $(MKDIR) $$OUT_PWD/android-build/libs ;$(COPY_FILE) \"$$shell_path($$[QT_INSTALL_PREFIX]/jar/QtAndroidWrapper.jar)\" \"$$shell_path($$OUT_PWD/android-build/libs/)\"
    first.depends = $(first) copydata
    export(first.depends)
    export(copydata.commands)
    QMAKE_EXTRA_TARGETS += first copydata

    QT += androidextras

    unix:!macx: LIBS += -L$$shell_path($$[QT_INSTALL_LIBS]/) -lqandroidwrapper
    unix:!macx: PRE_TARGETDEPS += $$shell_path($$[QT_INSTALL_LIBS]/)libqandroidwrapper.a

    INCLUDEPATH += $$shell_path($$[QT_INSTALL_HEADERS]/qandroidwrapper/)
    DEPENDPATH += $$shell_path($$[QT_INSTALL_HEADERS]/qandroidwrapper/)
}
