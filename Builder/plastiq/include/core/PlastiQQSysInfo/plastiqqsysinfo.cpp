#include "plastiqmethod.h"
#include "plastiqqsysinfo.h"

#include <QSysInfo> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQSysInfo::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQSysInfo::plastiqMethods = {
    { "MacintoshVersion()", { "MacintoshVersion", "", "const MacVersion", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "WindowsVersion()", { "WindowsVersion", "", "const WinVersion", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "buildAbi()", { "buildAbi", "", "QString", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "buildCpuArchitecture()", { "buildCpuArchitecture", "", "QString", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "currentCpuArchitecture()", { "currentCpuArchitecture", "", "QString", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "kernelType()", { "kernelType", "", "QString", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "kernelVersion()", { "kernelVersion", "", "QString", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "macVersion()", { "macVersion", "", "MacVersion", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "machineHostName()", { "machineHostName", "", "QString", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "prettyProductName()", { "prettyProductName", "", "QString", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "productType()", { "productType", "", "QString", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "productVersion()", { "productVersion", "", "QString", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "windowsVersion()", { "windowsVersion", "", "WinVersion", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSysInfo::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSysInfo::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSysInfo::plastiqConstants = {

    /* QSysInfo::Endian */
   { "BigEndian", QSysInfo::BigEndian },
   { "LittleEndian", QSysInfo::LittleEndian },
   { "ByteOrder", QSysInfo::ByteOrder },

    /* QSysInfo::MacVersion */
   { "MV_None", QSysInfo::MV_None },
   { "MV_Unknown", QSysInfo::MV_Unknown },
   { "MV_9", QSysInfo::MV_9 },
   { "MV_10_0", QSysInfo::MV_10_0 },
   { "MV_10_1", QSysInfo::MV_10_1 },
   { "MV_10_2", QSysInfo::MV_10_2 },
   { "MV_10_3", QSysInfo::MV_10_3 },
   { "MV_10_4", QSysInfo::MV_10_4 },
   { "MV_10_5", QSysInfo::MV_10_5 },
   { "MV_10_6", QSysInfo::MV_10_6 },
   { "MV_10_7", QSysInfo::MV_10_7 },
   { "MV_10_8", QSysInfo::MV_10_8 },
   { "MV_10_9", QSysInfo::MV_10_9 },
   { "MV_10_10", QSysInfo::MV_10_10 },
   { "MV_10_11", QSysInfo::MV_10_11 },
   { "MV_10_12", QSysInfo::MV_10_12 },
   { "MV_CHEETAH", QSysInfo::MV_CHEETAH },
   { "MV_PUMA", QSysInfo::MV_PUMA },
   { "MV_JAGUAR", QSysInfo::MV_JAGUAR },
   { "MV_PANTHER", QSysInfo::MV_PANTHER },
   { "MV_TIGER", QSysInfo::MV_TIGER },
   { "MV_LEOPARD", QSysInfo::MV_LEOPARD },
   { "MV_SNOWLEOPARD", QSysInfo::MV_SNOWLEOPARD },
   { "MV_LION", QSysInfo::MV_LION },
   { "MV_MOUNTAINLION", QSysInfo::MV_MOUNTAINLION },
   { "MV_MAVERICKS", QSysInfo::MV_MAVERICKS },
   { "MV_YOSEMITE", QSysInfo::MV_YOSEMITE },
   { "MV_ELCAPITAN", QSysInfo::MV_ELCAPITAN },
   { "MV_SIERRA", QSysInfo::MV_SIERRA },
   { "MV_IOS", QSysInfo::MV_IOS },
   { "MV_IOS_4_3", QSysInfo::MV_IOS_4_3 },
   { "MV_IOS_5_0", QSysInfo::MV_IOS_5_0 },
   { "MV_IOS_5_1", QSysInfo::MV_IOS_5_1 },
   { "MV_IOS_6_0", QSysInfo::MV_IOS_6_0 },
   { "MV_IOS_6_1", QSysInfo::MV_IOS_6_1 },
   { "MV_IOS_7_0", QSysInfo::MV_IOS_7_0 },
   { "MV_IOS_7_1", QSysInfo::MV_IOS_7_1 },
   { "MV_IOS_8_0", QSysInfo::MV_IOS_8_0 },
   { "MV_IOS_8_1", QSysInfo::MV_IOS_8_1 },
   { "MV_IOS_8_2", QSysInfo::MV_IOS_8_2 },
   { "MV_IOS_8_3", QSysInfo::MV_IOS_8_3 },
   { "MV_IOS_8_4", QSysInfo::MV_IOS_8_4 },
   { "MV_IOS_9_0", QSysInfo::MV_IOS_9_0 },
   { "MV_IOS_9_1", QSysInfo::MV_IOS_9_1 },
   { "MV_IOS_9_2", QSysInfo::MV_IOS_9_2 },
   { "MV_IOS_9_3", QSysInfo::MV_IOS_9_3 },
   { "MV_IOS_10_0", QSysInfo::MV_IOS_10_0 },
   { "MV_TVOS", QSysInfo::MV_TVOS },
   { "MV_TVOS_9_0", QSysInfo::MV_TVOS_9_0 },
   { "MV_TVOS_9_1", QSysInfo::MV_TVOS_9_1 },
   { "MV_TVOS_9_2", QSysInfo::MV_TVOS_9_2 },
   { "MV_TVOS_10_0", QSysInfo::MV_TVOS_10_0 },
   { "MV_WATCHOS", QSysInfo::MV_WATCHOS },
   { "MV_WATCHOS_2_0", QSysInfo::MV_WATCHOS_2_0 },
   { "MV_WATCHOS_2_1", QSysInfo::MV_WATCHOS_2_1 },
   { "MV_WATCHOS_2_2", QSysInfo::MV_WATCHOS_2_2 },
   { "MV_WATCHOS_3_0", QSysInfo::MV_WATCHOS_3_0 },

    /* QSysInfo::Sizes */
   { "WordSize", QSysInfo::WordSize },

    /* QSysInfo::WinVersion */
   { "WV_None", QSysInfo::WV_None },
   { "WV_32s", QSysInfo::WV_32s },
   { "WV_95", QSysInfo::WV_95 },
   { "WV_98", QSysInfo::WV_98 },
   { "WV_Me", QSysInfo::WV_Me },
   { "WV_DOS_based", QSysInfo::WV_DOS_based },
   { "WV_NT", QSysInfo::WV_NT },
   { "WV_2000", QSysInfo::WV_2000 },
   { "WV_XP", QSysInfo::WV_XP },
   { "WV_2003", QSysInfo::WV_2003 },
   { "WV_VISTA", QSysInfo::WV_VISTA },
   { "WV_WINDOWS7", QSysInfo::WV_WINDOWS7 },
   { "WV_WINDOWS8", QSysInfo::WV_WINDOWS8 },
   { "WV_WINDOWS8_1", QSysInfo::WV_WINDOWS8_1 },
   { "WV_WINDOWS10", QSysInfo::WV_WINDOWS10 },
   { "WV_NT_based", QSysInfo::WV_NT_based },
   { "WV_4_0", QSysInfo::WV_4_0 },
   { "WV_5_0", QSysInfo::WV_5_0 },
   { "WV_5_1", QSysInfo::WV_5_1 },
   { "WV_5_2", QSysInfo::WV_5_2 },
   { "WV_6_0", QSysInfo::WV_6_0 },
   { "WV_6_1", QSysInfo::WV_6_1 },
   { "WV_6_2", QSysInfo::WV_6_2 },
   { "WV_6_3", QSysInfo::WV_6_3 },
   { "WV_10_0", QSysInfo::WV_10_0 },
   { "WV_CE", QSysInfo::WV_CE },
   { "WV_CENET", QSysInfo::WV_CENET },
   { "WV_CE_5", QSysInfo::WV_CE_5 },
   { "WV_CE_6", QSysInfo::WV_CE_6 },
   { "WV_CE_based", QSysInfo::WV_CE_based },

};

QVector<PlastiQMetaObject*> PlastiQQSysInfo::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSysInfo::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSysInfo::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSysInfo", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSysInfo::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSysInfo::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSysInfo *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSysInfo *p = new PlastiQQSysInfo();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSysInfo *p = new PlastiQQSysInfo();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSysInfo *o = sc ? Q_NULLPTR : reinterpret_cast<QSysInfo*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->MacintoshVersion() | ret: `const MacVersion` */ break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->WindowsVersion() | ret: `const WinVersion` */ break;
        case 2: { QString _r = sc ? QSysInfo::buildAbi() : o->buildAbi();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = sc ? QSysInfo::buildCpuArchitecture() : o->buildCpuArchitecture();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { QString _r = sc ? QSysInfo::currentCpuArchitecture() : o->currentCpuArchitecture();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { QString _r = sc ? QSysInfo::kernelType() : o->kernelType();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = sc ? QSysInfo::kernelVersion() : o->kernelVersion();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { qint64 _r = sc ? QSysInfo::macVersion() : o->macVersion(); // HACK for MacVersion 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { QString _r = sc ? QSysInfo::machineHostName() : o->machineHostName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { QString _r = sc ? QSysInfo::prettyProductName() : o->prettyProductName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { QString _r = sc ? QSysInfo::productType() : o->productType();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { QString _r = sc ? QSysInfo::productVersion() : o->productVersion();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { qint64 _r = sc ? QSysInfo::windowsVersion() : o->windowsVersion(); // HACK for WinVersion 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSysInfo *o = reinterpret_cast<QSysInfo*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSysInfo::~PlastiQQSysInfo() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
