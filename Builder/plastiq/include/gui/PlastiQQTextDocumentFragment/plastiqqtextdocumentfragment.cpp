#include "plastiqmethod.h"
#include "plastiqqtextdocumentfragment.h"

#include <QTextDocumentFragment> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTextDocumentFragment::plastiqConstructors = {
    { "QTextDocumentFragment()", { "QTextDocumentFragment", "", "QTextDocumentFragment*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDocumentFragment(const QTextDocument*)", { "QTextDocumentFragment", "QTextDocument*", "QTextDocumentFragment*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDocumentFragment(QTextCursor&)", { "QTextDocumentFragment", "QTextCursor&", "QTextDocumentFragment*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDocumentFragment(QTextDocumentFragment&)", { "QTextDocumentFragment", "QTextDocumentFragment&", "QTextDocumentFragment*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextDocumentFragment::plastiqMethods = {
    { "isEmpty()", { "isEmpty", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHtml()", { "toHtml", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHtml(QByteArray)", { "toHtml", "QByteArray&", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPlainText()", { "toPlainText", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromHtml(QString)", { "fromHtml", "QString&", "QTextDocumentFragment", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHtml(QString,const QTextDocument*)", { "fromHtml", "QString&,QTextDocument*", "QTextDocumentFragment", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromPlainText(QString)", { "fromPlainText", "QString&", "QTextDocumentFragment", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextDocumentFragment::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextDocumentFragment::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextDocumentFragment::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextDocumentFragment::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextDocumentFragment::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextDocumentFragment::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextDocumentFragment", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextDocumentFragment::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextDocumentFragment::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextDocumentFragment *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextDocumentFragment(); break;
        case 1: o = new QTextDocumentFragment(reinterpret_cast<const QTextDocument*>(stack[1].s_voidp)); break;
        case 2: o = new QTextDocumentFragment((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp))); break;
        case 3: o = new QTextDocumentFragment((*reinterpret_cast< QTextDocumentFragment(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextDocumentFragment *p = new PlastiQQTextDocumentFragment();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextDocumentFragment *p = new PlastiQQTextDocumentFragment();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextDocumentFragment *o = sc ? Q_NULLPTR : reinterpret_cast<QTextDocumentFragment*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QString _r = o->toHtml();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->toHtml(stack[1].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->toPlainText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { /* COPY OBJECT */
            QTextDocumentFragment *_r = sc ? new QTextDocumentFragment(QTextDocumentFragment::fromHtml(stack[1].s_string)) : new QTextDocumentFragment(o->fromHtml(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextDocumentFragment";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QTextDocumentFragment *_r = sc ? new QTextDocumentFragment(QTextDocumentFragment::fromHtml(stack[1].s_string,
                    reinterpret_cast<const QTextDocument*>(stack[2].s_voidp))) : new QTextDocumentFragment(o->fromHtml(stack[1].s_string,
                    reinterpret_cast<const QTextDocument*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextDocumentFragment";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QTextDocumentFragment *_r = sc ? new QTextDocumentFragment(QTextDocumentFragment::fromPlainText(stack[1].s_string)) : new QTextDocumentFragment(o->fromPlainText(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextDocumentFragment";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QTextDocumentFragment *o = reinterpret_cast<QTextDocumentFragment*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextDocumentFragment::~PlastiQQTextDocumentFragment() {
    QTextDocumentFragment* o = reinterpret_cast<QTextDocumentFragment*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
