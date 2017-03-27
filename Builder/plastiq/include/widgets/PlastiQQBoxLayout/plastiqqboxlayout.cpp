#include "plastiqmethod.h"
#include "plastiqqboxlayout.h"

#include "widgets/PlastiQQLayout/plastiqqlayout.h"
#include <QBoxLayout> 

QHash<QByteArray, PlastiQMethod> PlastiQQBoxLayout::plastiqConstructors = {
    { "QBoxLayout(enum)", { "QBoxLayout", "Direction", "QBoxLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBoxLayout(enum,QWidget*)", { "QBoxLayout", "Direction,QWidget*", "QBoxLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBoxLayout::plastiqMethods = {
    { "addLayout(QLayout*)", { "addLayout", "QLayout*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLayout(QLayout*,int)", { "addLayout", "QLayout*,int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSpacerItem(QSpacerItem*)", { "addSpacerItem", "QSpacerItem*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSpacing(int)", { "addSpacing", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addStretch()", { "addStretch", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addStretch(int)", { "addStretch", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addStrut(int)", { "addStrut", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*)", { "addWidget", "QWidget*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*,int)", { "addWidget", "QWidget*,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*,int,enum)", { "addWidget", "QWidget*,int,Qt::Alignment", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "direction()", { "direction", "", "Direction", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QLayoutItem*)", { "insertItem", "int,QLayoutItem*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertLayout(int,QLayout*)", { "insertLayout", "int,QLayout*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertLayout(int,QLayout*,int)", { "insertLayout", "int,QLayout*,int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertSpacerItem(int,QSpacerItem*)", { "insertSpacerItem", "int,QSpacerItem*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertSpacing(int,int)", { "insertSpacing", "int,int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertStretch(int)", { "insertStretch", "int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertStretch(int,int)", { "insertStretch", "int,int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertWidget(int,QWidget*)", { "insertWidget", "int,QWidget*", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertWidget(int,QWidget*,int)", { "insertWidget", "int,QWidget*,int", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertWidget(int,QWidget*,int,enum)", { "insertWidget", "int,QWidget*,int,Qt::Alignment", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDirection(enum)", { "setDirection", "Direction", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpacing(int)", { "setSpacing", "int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStretch(int,int)", { "setStretch", "int,int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStretchFactor(QWidget*,int)", { "setStretchFactor", "QWidget*,int", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStretchFactor(QLayout*,int)", { "setStretchFactor", "QLayout*,int", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spacing()", { "spacing", "", "int", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stretch(int)", { "stretch", "int", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBoxLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQBoxLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQBoxLayout::plastiqConstants = {

    /* QBoxLayout::Direction */
   { "LeftToRight", QBoxLayout::LeftToRight },
   { "RightToLeft", QBoxLayout::RightToLeft },
   { "TopToBottom", QBoxLayout::TopToBottom },
   { "BottomToTop", QBoxLayout::BottomToTop },
   { "Down", QBoxLayout::Down },
   { "Up", QBoxLayout::Up },

};

QVector<PlastiQMetaObject*> PlastiQQBoxLayout::plastiqInherits = { &PlastiQQLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQBoxLayout::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQBoxLayout::plastiq_static_metaObject = {
    { &PlastiQQLayout::plastiq_static_metaObject, &plastiqInherits, "QBoxLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBoxLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBoxLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBoxLayout *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QBoxLayout(QBoxLayout::Direction(stack[1].s_int64)); break;
        case 1: o = new QBoxLayout(QBoxLayout::Direction(stack[1].s_int64),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBoxLayout *p = new PlastiQQBoxLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBoxLayout *p = new PlastiQQBoxLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 28) {
            id -= 28;
            PlastiQQLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBoxLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QBoxLayout*>(object->plastiq_data());

        switch(id) {
        case 0: o->addLayout(reinterpret_cast<QLayout*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addLayout(reinterpret_cast<QLayout*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addSpacerItem(reinterpret_cast<QSpacerItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->addSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->addStretch();
                stack[0].type = PlastiQ::Void; break;
        case 5: o->addStretch(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->addStrut(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int,
                    Qt::Alignment(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: { qint64 _r = o->direction(); // HACK for Direction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: o->insertItem(stack[1].s_int,
                    reinterpret_cast<QLayoutItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->insertLayout(stack[1].s_int,
                    reinterpret_cast<QLayout*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->insertLayout(stack[1].s_int,
                    reinterpret_cast<QLayout*>(stack[2].s_voidp),
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->insertSpacerItem(stack[1].s_int,
                    reinterpret_cast<QSpacerItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->insertSpacing(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->insertStretch(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->insertStretch(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->insertWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->insertWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->insertWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_int,
                    Qt::Alignment(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setDirection(QBoxLayout::Direction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setStretch(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: { bool _r = o->setStretchFactor(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { bool _r = o->setStretchFactor(reinterpret_cast<QLayout*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: { int _r = o->spacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 27: { int _r = o->stretch(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QBoxLayout *o = reinterpret_cast<QBoxLayout*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QBoxLayout *o = reinterpret_cast<QBoxLayout*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QBoxLayout *o = reinterpret_cast<QBoxLayout*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QBoxLayout *o = reinterpret_cast<QBoxLayout*>(object->plastiq_data());

        if(className == "QLayout") {
            stack[0].s_voidp = static_cast<QLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQBoxLayout::~PlastiQQBoxLayout() {
    QBoxLayout* o = reinterpret_cast<QBoxLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
