#include "plastiqmethod.h"
#include "plastiqqshortcut.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QShortcut> 
#include <QKeySequence>
#include <QWidget>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQShortcut::plastiqConstructors = {
    { "QShortcut(QWidget*)", { "QShortcut", "QWidget*", "QShortcut*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QShortcut(QKeySequence&,QWidget*)", { "QShortcut", "QKeySequence&,QWidget*", "QShortcut*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QShortcut(QKeySequence&,QWidget*,const char*)", { "QShortcut", "QKeySequence&,QWidget*,char*", "QShortcut*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QShortcut(QKeySequence&,QWidget*,const char*,const char*)", { "QShortcut", "QKeySequence&,QWidget*,char*,char*", "QShortcut*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QShortcut(QKeySequence&,QWidget*,const char*,const char*,enum)", { "QShortcut", "QKeySequence&,QWidget*,char*,char*,Qt::ShortcutContext", "QShortcut*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQShortcut::plastiqMethods = {
    { "autoRepeat()", { "autoRepeat", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "context()", { "context", "", "Qt::ShortcutContext", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "id()", { "id", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "key()", { "key", "", "QKeySequence", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentWidget()", { "parentWidget", "", "QWidget*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoRepeat(bool)", { "setAutoRepeat", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContext(enum)", { "setContext", "Qt::ShortcutContext", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKey(QKeySequence&)", { "setKey", "QKeySequence&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWhatsThis(QString)", { "setWhatsThis", "QString&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "whatsThis()", { "whatsThis", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQShortcut::plastiqSignals = {
    { "activated()", { "activated", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "activatedAmbiguously()", { "activatedAmbiguously", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQShortcut::plastiqProperties = {
    { "autoRepeat", { "autoRepeat", "bool", "setAutoRepeat", "autoRepeat" } },
    { "context", { "context", "long", "setContext", "context" } },
    { "enabled", { "enabled", "bool", "setEnabled", "isEnabled" } },
    { "key", { "key", "QKeySequence", "setKey", "key" } },
    { "whatsThis", { "whatsThis", "QString", "setWhatsThis", "whatsThis" } },

};

QHash<QByteArray, long> PlastiQQShortcut::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQShortcut::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQShortcut::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQShortcut::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QShortcut", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQShortcut::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQShortcut::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QShortcut *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QShortcut(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 1: o = new QShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 2: o = new QShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp)); break;
        case 3: o = new QShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    reinterpret_cast<const char*>(stack[4].s_voidp)); break;
        case 4: o = new QShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    reinterpret_cast<const char*>(stack[4].s_voidp),
                    Qt::ShortcutContext(stack[5].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQShortcut *p = new PlastiQQShortcut();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQShortcut *p = new PlastiQQShortcut();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QShortcut *o = sc ? Q_NULLPTR : reinterpret_cast<QShortcut*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->autoRepeat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { qint64 _r = o->context(); // HACK for Qt::ShortcutContext 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { int _r = o->id();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { /* COPY OBJECT */
            QKeySequence *_r = new QKeySequence(o->key());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QKeySequence";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { QWidget* _r = o->parentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 6: o->setAutoRepeat(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setContext(Qt::ShortcutContext(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setKey((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setWhatsThis(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 11: { QString _r = o->whatsThis();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QShortcut *o = reinterpret_cast<QShortcut*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QShortcut::*)()>(&QShortcut::activated),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "activated", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QShortcut::activatedAmbiguously,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "activatedAmbiguously", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QShortcut *o = reinterpret_cast<QShortcut*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QShortcut *o = reinterpret_cast<QShortcut*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QShortcut *o = reinterpret_cast<QShortcut*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQShortcut::~PlastiQQShortcut() {
    QShortcut* o = reinterpret_cast<QShortcut*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
