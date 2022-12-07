QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    qtwidget.cpp \
    Utilities/Account.cpp \
    Utilities/Initializer.cpp \
    Utilities/Operation.cpp \
    Utilities/PoolInterface.cpp \
    Utilities/Token.cpp

HEADERS += \
    qtwidget.hpp \
    ./Utilities/Utilities.hpp \
    ./Protocols/BalancerPool.hpp \
    ./Protocols/UniswapV2Pool.hpp \
    ./Protocols/ConstantSum.hpp

FORMS += \
    qtwidget.ui

TRANSLATIONS += \
    LiquidityProtocol_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
