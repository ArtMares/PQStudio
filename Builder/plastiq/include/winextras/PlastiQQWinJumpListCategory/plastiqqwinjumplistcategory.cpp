#include "plastiqmethod.h"
#include "plastiqqwinjumplistcategory.h"

#include <QWinJumpListCategory> 
#include <QWinJumpListItem>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQWinJumpListCategory::plastiqConstructors = {
    { "QWinJumpListCategory()", { "QWinJumpListCategory", "", "QWinJumpListCategory*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWinJumpListCategory(QString)", { "QWinJumpListCategory", "QString&", "QWinJumpListCategory*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinJumpListCategory::plastiqMethods = {
    { "addDestination(QString)", { "addDestination", "QString&", "QWinJumpListItem*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QWinJumpListItem*)", { "addItem", "QWinJumpListItem*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLink(QString,QString)", { "addLink", "QString&,QString&", "QWinJumpListItem*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLink(QString,QString,QStringList&)", { "addLink", "QString&,QString&,QStringList&", "QWinJumpListItem*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLink(QIcon&,QString,QString)", { "addLink", "QIcon&,QString&,QString&", "QWinJumpListItem*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLink(QIcon&,QString,QString,QStringList&)", { "addLink", "QIcon&,QString&,QString&,QStringList&", "QWinJumpListItem*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSeparator()", { "addSeparator", "", "QWinJumpListItem*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitle(QString)", { "setTitle", "QString&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 14, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinJumpListCategory::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWinJumpListCategory::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWinJumpListCategory::plastiqConstants = {

    /* QWinJumpListCategory::Type */
   { "Custom", QWinJumpListCategory::Custom },
   { "Recent", QWinJumpListCategory::Recent },
   { "Frequent", QWinJumpListCategory::Frequent },
   { "Tasks", QWinJumpListCategory::Tasks },

};

QVector<PlastiQMetaObject*> PlastiQQWinJumpListCategory::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWinJumpListCategory::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWinJumpListCategory::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWinJumpListCategory", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWinJumpListCategory::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWinJumpListCategory::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWinJumpListCategory *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWinJumpListCategory(); break;
        case 1: o = new QWinJumpListCategory(stack[1].s_string); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWinJumpListCategory *p = new PlastiQQWinJumpListCategory();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWinJumpListCategory *p = new PlastiQQWinJumpListCategory();
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
        QWinJumpListCategory *o = sc ? Q_NULLPTR : reinterpret_cast<QWinJumpListCategory*>(object->plastiq_data());

        switch(id) {
        case 0: { QWinJumpListItem* _r = o->addDestination(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWinJumpListItem"; } break;
        case 1: o->addItem(reinterpret_cast<QWinJumpListItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { QWinJumpListItem* _r = o->addLink(stack[1].s_string,
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWinJumpListItem"; } break;
        case 3: { QWinJumpListItem* _r = o->addLink(stack[1].s_string,
                    stack[2].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[3].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWinJumpListItem"; } break;
        case 4: { QWinJumpListItem* _r = o->addLink((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWinJumpListItem"; } break;
        case 5: { QWinJumpListItem* _r = o->addLink((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWinJumpListItem"; } break;
        case 6: { QWinJumpListItem* _r = o->addSeparator();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWinJumpListItem"; } break;
        case 7: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 8: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: o->setTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { qint64 _r = o->type(); // HACK for Type 
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
        QWinJumpListCategory *o = reinterpret_cast<QWinJumpListCategory*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWinJumpListCategory::~PlastiQQWinJumpListCategory() {
    QWinJumpListCategory* o = reinterpret_cast<QWinJumpListCategory*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
