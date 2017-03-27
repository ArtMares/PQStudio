#include "plastiqmethod.h"
#include "plastiqqstylepainter.h"

#include "gui/PlastiQQPainter/plastiqqpainter.h"
#include <QStylePainter> 
#include <QStyle>

QHash<QByteArray, PlastiQMethod> PlastiQQStylePainter::plastiqConstructors = {
    { "QStylePainter()", { "QStylePainter", "", "QStylePainter*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStylePainter(QWidget*)", { "QStylePainter", "QWidget*", "QStylePainter*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStylePainter(QPaintDevice*,QWidget*)", { "QStylePainter", "QPaintDevice*,QWidget*", "QStylePainter*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStylePainter::plastiqMethods = {
    { "begin(QWidget*)", { "begin", "QWidget*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "begin(QPaintDevice*,QWidget*)", { "begin", "QPaintDevice*,QWidget*", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawComplexControl(enum,QStyleOptionComplex&)", { "drawComplexControl", "QStyle::ComplexControl,QStyleOptionComplex&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawControl(enum,QStyleOption&)", { "drawControl", "QStyle::ControlElement,QStyleOption&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawItemPixmap(QRect&,int,QPixmap&)", { "drawItemPixmap", "QRect&,int,QPixmap&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawItemText(QRect&,int,QPalette&,bool,QString)", { "drawItemText", "QRect&,int,QPalette&,bool,QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawItemText(QRect&,int,QPalette&,bool,QString,enum)", { "drawItemText", "QRect&,int,QPalette&,bool,QString&,QPalette::ColorRole", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPrimitive(enum,QStyleOption&)", { "drawPrimitive", "QStyle::PrimitiveElement,QStyleOption&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "QStyle*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStylePainter::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStylePainter::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStylePainter::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStylePainter::plastiqInherits = { &PlastiQQPainter::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStylePainter::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStylePainter::plastiq_static_metaObject = {
    { &PlastiQQPainter::plastiq_static_metaObject, &plastiqInherits, "QStylePainter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStylePainter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStylePainter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStylePainter *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStylePainter(); break;
        case 1: o = new QStylePainter(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new QStylePainter(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStylePainter *p = new PlastiQQStylePainter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStylePainter *p = new PlastiQQStylePainter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQPainter::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStylePainter *o = sc ? Q_NULLPTR : reinterpret_cast<QStylePainter*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->begin(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->begin(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->drawComplexControl(QStyle::ComplexControl(stack[1].s_int64),
                    (*reinterpret_cast< QStyleOptionComplex(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->drawControl(QStyle::ControlElement(stack[1].s_int64),
                    (*reinterpret_cast< QStyleOption(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->drawItemPixmap((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->drawItemText((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QPalette(*) >(stack[3].s_voidp)),
                    stack[4].s_bool,
                    stack[5].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->drawItemText((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QPalette(*) >(stack[3].s_voidp)),
                    stack[4].s_bool,
                    stack[5].s_string,
                    QPalette::ColorRole(stack[6].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->drawPrimitive(QStyle::PrimitiveElement(stack[1].s_int64),
                    (*reinterpret_cast< QStyleOption(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: { QStyle* _r = o->style();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;

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
        QStylePainter *o = reinterpret_cast<QStylePainter*>(object->plastiq_data());

        if(className == "QPainter") {
            stack[0].s_voidp = static_cast<QPainter*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStylePainter::~PlastiQQStylePainter() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
