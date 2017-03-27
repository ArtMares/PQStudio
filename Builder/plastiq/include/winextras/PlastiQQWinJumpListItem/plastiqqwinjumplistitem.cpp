#include "plastiqmethod.h"
#include "plastiqqwinjumplistitem.h"

#include <QWinJumpListItem> 
#include <QStringList>
#include <QString>
#include <QIcon>

QHash<QByteArray, PlastiQMethod> PlastiQQWinJumpListItem::plastiqConstructors = {
    { "QWinJumpListItem(enum)", { "QWinJumpListItem", "Type", "QWinJumpListItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinJumpListItem::plastiqMethods = {
    { "arguments()", { "arguments", "", "QStringList", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "description()", { "description", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filePath()", { "filePath", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setArguments(QStringList&)", { "setArguments", "QStringList&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDescription(QString)", { "setDescription", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilePath(QString)", { "setFilePath", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitle(QString)", { "setTitle", "QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setType(enum)", { "setType", "Type", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWorkingDirectory(QString)", { "setWorkingDirectory", "QString&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "workingDirectory()", { "workingDirectory", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinJumpListItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWinJumpListItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWinJumpListItem::plastiqConstants = {

    /* QWinJumpListItem::Type */
   { "Destination", QWinJumpListItem::Destination },
   { "Link", QWinJumpListItem::Link },
   { "Separator", QWinJumpListItem::Separator },

};

QVector<PlastiQMetaObject*> PlastiQQWinJumpListItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWinJumpListItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQWinJumpListItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWinJumpListItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWinJumpListItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWinJumpListItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWinJumpListItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWinJumpListItem(QWinJumpListItem::Type(stack[1].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWinJumpListItem *p = new PlastiQQWinJumpListItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWinJumpListItem *p = new PlastiQQWinJumpListItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWinJumpListItem *o = sc ? Q_NULLPTR : reinterpret_cast<QWinJumpListItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->arguments());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QString _r = o->description();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->filePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setArguments((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setDescription(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setFilePath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setType(QWinJumpListItem::Type(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setWorkingDirectory(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 11: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { qint64 _r = o->type(); // HACK for Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: { QString _r = o->workingDirectory();
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
        QWinJumpListItem *o = reinterpret_cast<QWinJumpListItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWinJumpListItem::~PlastiQQWinJumpListItem() {
    QWinJumpListItem* o = reinterpret_cast<QWinJumpListItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
