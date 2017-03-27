#include "plastiqmethod.h"
#include "plastiqqfontdatabase.h"

#include <QFontDatabase> 
#include <QStringList>
#include <QFont>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQFontDatabase::plastiqConstructors = {
    { "QFontDatabase()", { "QFontDatabase", "", "QFontDatabase*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontDatabase::plastiqMethods = {
    { "bold(QString,QString)", { "bold", "QString&,QString&", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "families()", { "families", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "families(enum)", { "families", "WritingSystem", "QStringList", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font(QString,QString,int)", { "font", "QString&,QString&,int", "QFont", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBitmapScalable(QString)", { "isBitmapScalable", "QString&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBitmapScalable(QString,QString)", { "isBitmapScalable", "QString&,QString&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFixedPitch(QString)", { "isFixedPitch", "QString&", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFixedPitch(QString,QString)", { "isFixedPitch", "QString&,QString&", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isPrivateFamily(QString)", { "isPrivateFamily", "QString&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isScalable(QString)", { "isScalable", "QString&", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isScalable(QString,QString)", { "isScalable", "QString&,QString&", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSmoothlyScalable(QString)", { "isSmoothlyScalable", "QString&", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSmoothlyScalable(QString,QString)", { "isSmoothlyScalable", "QString&,QString&", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "italic(QString,QString)", { "italic", "QString&,QString&", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleString(QFont&)", { "styleString", "QFont&", "QString", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleString(QFontInfo&)", { "styleString", "QFontInfo&", "QString", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styles(QString)", { "styles", "QString&", "QStringList", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "weight(QString,QString)", { "weight", "QString&,QString&", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addApplicationFont(QString)", { "addApplicationFont", "QString&", "int", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "addApplicationFontFromData(QByteArray)", { "addApplicationFontFromData", "QByteArray&", "int", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "applicationFontFamilies(int)", { "applicationFontFamilies", "int", "QStringList", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "removeAllApplicationFonts()", { "removeAllApplicationFonts", "", "bool", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "removeApplicationFont(int)", { "removeApplicationFont", "int", "bool", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "systemFont(enum)", { "systemFont", "SystemFont", "QFont", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "writingSystemName(enum)", { "writingSystemName", "WritingSystem", "QString", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "writingSystemSample(enum)", { "writingSystemSample", "WritingSystem", "QString", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontDatabase::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFontDatabase::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFontDatabase::plastiqConstants = {

    /* QFontDatabase::SystemFont */
   { "GeneralFont", QFontDatabase::GeneralFont },
   { "FixedFont", QFontDatabase::FixedFont },
   { "TitleFont", QFontDatabase::TitleFont },
   { "SmallestReadableFont", QFontDatabase::SmallestReadableFont },

    /* QFontDatabase::WritingSystem */
   { "Any", QFontDatabase::Any },
   { "Latin", QFontDatabase::Latin },
   { "Greek", QFontDatabase::Greek },
   { "Cyrillic", QFontDatabase::Cyrillic },
   { "Armenian", QFontDatabase::Armenian },
   { "Hebrew", QFontDatabase::Hebrew },
   { "Arabic", QFontDatabase::Arabic },
   { "Syriac", QFontDatabase::Syriac },
   { "Thaana", QFontDatabase::Thaana },
   { "Devanagari", QFontDatabase::Devanagari },
   { "Bengali", QFontDatabase::Bengali },
   { "Gurmukhi", QFontDatabase::Gurmukhi },
   { "Gujarati", QFontDatabase::Gujarati },
   { "Oriya", QFontDatabase::Oriya },
   { "Tamil", QFontDatabase::Tamil },
   { "Telugu", QFontDatabase::Telugu },
   { "Kannada", QFontDatabase::Kannada },
   { "Malayalam", QFontDatabase::Malayalam },
   { "Sinhala", QFontDatabase::Sinhala },
   { "Thai", QFontDatabase::Thai },
   { "Lao", QFontDatabase::Lao },
   { "Tibetan", QFontDatabase::Tibetan },
   { "Myanmar", QFontDatabase::Myanmar },
   { "Georgian", QFontDatabase::Georgian },
   { "Khmer", QFontDatabase::Khmer },
   { "SimplifiedChinese", QFontDatabase::SimplifiedChinese },
   { "TraditionalChinese", QFontDatabase::TraditionalChinese },
   { "Japanese", QFontDatabase::Japanese },
   { "Korean", QFontDatabase::Korean },
   { "Vietnamese", QFontDatabase::Vietnamese },
   { "Symbol", QFontDatabase::Symbol },
   { "Other", QFontDatabase::Other },
   { "Ogham", QFontDatabase::Ogham },
   { "Runic", QFontDatabase::Runic },
   { "Nko", QFontDatabase::Nko },
   { "WritingSystemsCount", QFontDatabase::WritingSystemsCount },

};

QVector<PlastiQMetaObject*> PlastiQQFontDatabase::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQFontDatabase::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQFontDatabase::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QFontDatabase", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFontDatabase::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFontDatabase::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFontDatabase *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFontDatabase(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFontDatabase *p = new PlastiQQFontDatabase();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFontDatabase *p = new PlastiQQFontDatabase();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 26) {
            id -= 26;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFontDatabase *o = sc ? Q_NULLPTR : reinterpret_cast<QFontDatabase*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->bold(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->families());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->families(QFontDatabase::WritingSystem(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r = o->isBitmapScalable(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isBitmapScalable(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isFixedPitch(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isFixedPitch(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isPrivateFamily(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isScalable(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isScalable(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isSmoothlyScalable(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isSmoothlyScalable(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->italic(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { QString _r = o->styleString((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 15: { QString _r = o->styleString((*reinterpret_cast< QFontInfo(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 16: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->styles(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { int _r = o->weight(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { int _r = sc ? QFontDatabase::addApplicationFont(stack[1].s_string) : o->addApplicationFont(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { int _r = sc ? QFontDatabase::addApplicationFontFromData(stack[1].s_bytearray) : o->addApplicationFontFromData(stack[1].s_bytearray);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFontDatabase::applicationFontFamilies(stack[1].s_int)) : new QStringList(o->applicationFontFamilies(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { bool _r = sc ? QFontDatabase::removeAllApplicationFonts() : o->removeAllApplicationFonts();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = sc ? QFontDatabase::removeApplicationFont(stack[1].s_int) : o->removeApplicationFont(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QFontDatabase::systemFont(QFontDatabase::SystemFont(stack[1].s_int64))) : new QFont(o->systemFont(QFontDatabase::SystemFont(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { QString _r = sc ? QFontDatabase::writingSystemName(QFontDatabase::WritingSystem(stack[1].s_int64)) : o->writingSystemName(QFontDatabase::WritingSystem(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 25: { QString _r = sc ? QFontDatabase::writingSystemSample(QFontDatabase::WritingSystem(stack[1].s_int64)) : o->writingSystemSample(QFontDatabase::WritingSystem(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QFontDatabase *o = reinterpret_cast<QFontDatabase*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQFontDatabase::~PlastiQQFontDatabase() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
