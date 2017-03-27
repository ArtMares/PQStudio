#include "plastiqmethod.h"
#include "plastiqqwhatsthis.h"

#include <QWhatsThis> 
#include <QAction>

QHash<QByteArray, PlastiQMethod> PlastiQQWhatsThis::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWhatsThis::plastiqMethods = {
    { "createAction()", { "createAction", "", "QAction*", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "createAction(QObject*)", { "createAction", "QObject*", "QAction*", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "enterWhatsThisMode()", { "enterWhatsThisMode", "", "void", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "hideText()", { "hideText", "", "void", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "inWhatsThisMode()", { "inWhatsThisMode", "", "bool", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "leaveWhatsThisMode()", { "leaveWhatsThisMode", "", "void", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "showText(QPoint&,QString)", { "showText", "QPoint&,QString&", "void", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "showText(QPoint&,QString,QWidget*)", { "showText", "QPoint&,QString&,QWidget*", "void", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWhatsThis::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWhatsThis::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWhatsThis::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWhatsThis::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWhatsThis::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWhatsThis::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWhatsThis", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWhatsThis::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWhatsThis::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWhatsThis *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWhatsThis *p = new PlastiQQWhatsThis();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWhatsThis *p = new PlastiQQWhatsThis();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWhatsThis *o = sc ? Q_NULLPTR : reinterpret_cast<QWhatsThis*>(object->plastiq_data());

        switch(id) {
        case 0: { QAction* _r = sc ? QWhatsThis::createAction() : o->createAction();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 1: { QAction* _r = sc ? QWhatsThis::createAction(reinterpret_cast<QObject*>(stack[1].s_voidp)) : o->createAction(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 2: if(sc) { QWhatsThis::enterWhatsThisMode(); } else { o->enterWhatsThisMode(); }
                stack[0].type = PlastiQ::Void; break;
        case 3: if(sc) { QWhatsThis::hideText(); } else { o->hideText(); }
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = sc ? QWhatsThis::inWhatsThisMode() : o->inWhatsThisMode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: if(sc) { QWhatsThis::leaveWhatsThisMode(); } else { o->leaveWhatsThisMode(); }
                stack[0].type = PlastiQ::Void; break;
        case 6: if(sc) { QWhatsThis::showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string); } else { o->showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 7: if(sc) { QWhatsThis::showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp)); } else { o->showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;

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
        QWhatsThis *o = reinterpret_cast<QWhatsThis*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWhatsThis::~PlastiQQWhatsThis() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
