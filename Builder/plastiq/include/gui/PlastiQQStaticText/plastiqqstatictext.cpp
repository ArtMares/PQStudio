#include "plastiqmethod.h"
#include "plastiqqstatictext.h"

#include <QStaticText> 
#include <QSizeF>
#include <QString>
#include <QTextOption>

QHash<QByteArray, PlastiQMethod> PlastiQQStaticText::plastiqConstructors = {
    { "QStaticText()", { "QStaticText", "", "QStaticText*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStaticText(QString)", { "QStaticText", "QString&", "QStaticText*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStaticText(QStaticText&)", { "QStaticText", "QStaticText&", "QStaticText*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStaticText::plastiqMethods = {
    { "performanceHint()", { "performanceHint", "", "PerformanceHint", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepare()", { "prepare", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepare(QTransform&)", { "prepare", "QTransform&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepare(QTransform&,QFont&)", { "prepare", "QTransform&,QFont&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPerformanceHint(enum)", { "setPerformanceHint", "PerformanceHint", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextFormat(enum)", { "setTextFormat", "Qt::TextFormat", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextOption(QTextOption&)", { "setTextOption", "QTextOption&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextWidth(double)", { "setTextWidth", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSizeF", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QStaticText&)", { "swap", "QStaticText&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textFormat()", { "textFormat", "", "Qt::TextFormat", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textOption()", { "textOption", "", "QTextOption", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textWidth()", { "textWidth", "", "qreal", 14, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStaticText::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStaticText::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStaticText::plastiqConstants = {

    /* QStaticText::PerformanceHint */
   { "ModerateCaching", QStaticText::ModerateCaching },
   { "AggressiveCaching", QStaticText::AggressiveCaching },

};

QVector<PlastiQMetaObject*> PlastiQQStaticText::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStaticText::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStaticText::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStaticText", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStaticText::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStaticText::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStaticText *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStaticText(); break;
        case 1: o = new QStaticText(stack[1].s_string); break;
        case 2: o = new QStaticText((*reinterpret_cast< QStaticText(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStaticText *p = new PlastiQQStaticText();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStaticText *p = new PlastiQQStaticText();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStaticText *o = sc ? Q_NULLPTR : reinterpret_cast<QStaticText*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->performanceHint(); // HACK for PerformanceHint 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: o->prepare();
                stack[0].type = PlastiQ::Void; break;
        case 2: o->prepare((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->prepare((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setPerformanceHint(QStaticText::PerformanceHint(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setTextFormat(Qt::TextFormat(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setTextOption((*reinterpret_cast< QTextOption(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setTextWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: o->swap((*reinterpret_cast< QStaticText(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { qint64 _r = o->textFormat(); // HACK for Qt::TextFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: { /* COPY OBJECT */
            QTextOption *_r = new QTextOption(o->textOption());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextOption";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { double _r = o->textWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

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
        QStaticText *o = reinterpret_cast<QStaticText*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStaticText::~PlastiQQStaticText() {
    QStaticText* o = reinterpret_cast<QStaticText*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
