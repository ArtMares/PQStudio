#include "plastiqmethod.h"
#include "plastiqqundoview.h"

#include "widgets/PlastiQQListView/plastiqqlistview.h"
#include <QUndoView> 
#include <QIcon>
#include <QString>
#include <QUndoGroup>
#include <QUndoStack>

QHash<QByteArray, PlastiQMethod> PlastiQQUndoView::plastiqConstructors = {
    { "QUndoView()", { "QUndoView", "", "QUndoView*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoView(QWidget*)", { "QUndoView", "QWidget*", "QUndoView*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoView(QUndoStack*)", { "QUndoView", "QUndoStack*", "QUndoView*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoView(QUndoStack*,QWidget*)", { "QUndoView", "QUndoStack*,QWidget*", "QUndoView*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoView(QUndoGroup*)", { "QUndoView", "QUndoGroup*", "QUndoView*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoView(QUndoGroup*,QWidget*)", { "QUndoView", "QUndoGroup*,QWidget*", "QUndoView*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUndoView::plastiqMethods = {
    { "cleanIcon()", { "cleanIcon", "", "QIcon", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "emptyLabel()", { "emptyLabel", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "group()", { "group", "", "QUndoGroup*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCleanIcon(QIcon&)", { "setCleanIcon", "QIcon&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEmptyLabel(QString)", { "setEmptyLabel", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stack()", { "stack", "", "QUndoStack*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGroup(QUndoGroup*)", { "setGroup", "QUndoGroup*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setStack(QUndoStack*)", { "setStack", "QUndoStack*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUndoView::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQUndoView::plastiqProperties = {
    { "cleanIcon", { "cleanIcon", "QIcon", "setCleanIcon", "cleanIcon" } },
    { "emptyLabel", { "emptyLabel", "QString", "setEmptyLabel", "emptyLabel" } },

};

QHash<QByteArray, long> PlastiQQUndoView::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQUndoView::plastiqInherits = { &PlastiQQListView::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQUndoView::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQUndoView::plastiq_static_metaObject = {
    { &PlastiQQListView::plastiq_static_metaObject, &plastiqInherits, "QUndoView", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQUndoView::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQUndoView::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QUndoView *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QUndoView(); break;
        case 1: o = new QUndoView(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new QUndoView(reinterpret_cast<QUndoStack*>(stack[1].s_voidp)); break;
        case 3: o = new QUndoView(reinterpret_cast<QUndoStack*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 4: o = new QUndoView(reinterpret_cast<QUndoGroup*>(stack[1].s_voidp)); break;
        case 5: o = new QUndoView(reinterpret_cast<QUndoGroup*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQUndoView *p = new PlastiQQUndoView();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQUndoView *p = new PlastiQQUndoView();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            PlastiQQListView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QUndoView *o = sc ? Q_NULLPTR : reinterpret_cast<QUndoView*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->cleanIcon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QString _r = o->emptyLabel();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QUndoGroup* _r = o->group();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QUndoGroup"; } break;
        case 3: o->setCleanIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setEmptyLabel(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: { QUndoStack* _r = o->stack();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QUndoStack"; } break;
        case 6: o->setGroup(reinterpret_cast<QUndoGroup*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setStack(reinterpret_cast<QUndoStack*>(stack[1].s_voidp));
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
        QUndoView *o = reinterpret_cast<QUndoView*>(object->plastiq_data());

        if(className == "QListView") {
            stack[0].s_voidp = static_cast<QListView*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQUndoView::~PlastiQQUndoView() {
    QUndoView* o = reinterpret_cast<QUndoView*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
