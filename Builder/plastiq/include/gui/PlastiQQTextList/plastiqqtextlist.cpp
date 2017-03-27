#include "plastiqmethod.h"
#include "plastiqqtextlist.h"

#include "gui/PlastiQQTextBlockGroup/plastiqqtextblockgroup.h"
#include <QTextList> 
#include <QTextListFormat>
#include <QTextBlock>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTextList::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextList::plastiqMethods = {
    { "add(QTextBlock&)", { "add", "QTextBlock&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QTextListFormat", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "item(int)", { "item", "int", "QTextBlock", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemNumber(QTextBlock&)", { "itemNumber", "QTextBlock&", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemText(QTextBlock&)", { "itemText", "QTextBlock&", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QTextBlock&)", { "remove", "QTextBlock&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeItem(int)", { "removeItem", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QTextListFormat&)", { "setFormat", "QTextListFormat&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextList::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextList::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextList::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextList::plastiqInherits = { &PlastiQQTextBlockGroup::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextList::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextList::plastiq_static_metaObject = {
    { &PlastiQQTextBlockGroup::plastiq_static_metaObject, &plastiqInherits, "QTextList", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextList::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextList::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextList *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextList *p = new PlastiQQTextList();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextList *p = new PlastiQQTextList();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQTextBlockGroup::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextList *o = sc ? Q_NULLPTR : reinterpret_cast<QTextList*>(object->plastiq_data());

        switch(id) {
        case 0: o->add((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { /* COPY OBJECT */
            QTextListFormat *_r = new QTextListFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextListFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->item(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { int _r = o->itemNumber((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QString _r = o->itemText((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: o->remove((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->removeItem(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFormat((*reinterpret_cast< QTextListFormat(*) >(stack[1].s_voidp)));
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
        QTextList *o = reinterpret_cast<QTextList*>(object->plastiq_data());

        if(className == "QTextBlockGroup") {
            stack[0].s_voidp = static_cast<QTextBlockGroup*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextList::~PlastiQQTextList() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
