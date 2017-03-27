#include "plastiqmethod.h"
#include "plastiqqsyntaxhighlighter.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QSyntaxHighlighter> 
#include <QTextDocument>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>

QHash<QByteArray, PlastiQMethod> PlastiQQSyntaxHighlighter::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQSyntaxHighlighter::plastiqMethods = {
    { "document()", { "document", "", "QTextDocument*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocument(QTextDocument*)", { "setDocument", "QTextDocument*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentBlock()", { "currentBlock", "", "QTextBlock", 2, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "currentBlockState()", { "currentBlockState", "", "int", 3, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "currentBlockUserData()", { "currentBlockUserData", "", "QTextBlockUserData*", 4, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "format(int)", { "format", "int", "QTextCharFormat", 5, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "highlightBlock(QString)", { "highlightBlock", "QString&", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "previousBlockState()", { "previousBlockState", "", "int", 7, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setCurrentBlockState(int)", { "setCurrentBlockState", "int", "void", 8, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setCurrentBlockUserData(QTextBlockUserData*)", { "setCurrentBlockUserData", "QTextBlockUserData*", "void", 9, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setFormat(int,int,QTextCharFormat&)", { "setFormat", "int,int,QTextCharFormat&", "void", 10, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setFormat(int,int,QColor&)", { "setFormat", "int,int,QColor&", "void", 11, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setFormat(int,int,QFont&)", { "setFormat", "int,int,QFont&", "void", 12, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "rehighlight()", { "rehighlight", "", "void", 13, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "rehighlightBlock(QTextBlock&)", { "rehighlightBlock", "QTextBlock&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSyntaxHighlighter::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSyntaxHighlighter::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSyntaxHighlighter::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSyntaxHighlighter::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSyntaxHighlighter::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSyntaxHighlighter::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QSyntaxHighlighter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSyntaxHighlighter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSyntaxHighlighter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSyntaxHighlighter *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSyntaxHighlighter *p = new PlastiQQSyntaxHighlighter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSyntaxHighlighter *p = new PlastiQQSyntaxHighlighter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSyntaxHighlighter *o = sc ? Q_NULLPTR : reinterpret_cast<QSyntaxHighlighter*>(object->plastiq_data());

        switch(id) {
        case 0: { QTextDocument* _r = o->document();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 1: o->setDocument(reinterpret_cast<QTextDocument*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QTextBlock *_r; stack[0].type = PlastiQ::Error; } break;
        case 3: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 4: { QTextBlockUserData* _r; stack[0].type = PlastiQ::Error; } break;
        case 5: { /* COPY OBJECT */
            QTextCharFormat *_r; stack[0].type = PlastiQ::Error; } break;
        case 6: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 7: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 8: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 9: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 10: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 11: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 12: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 13: o->rehighlight();
                stack[0].type = PlastiQ::Void; break;
        case 14: o->rehighlightBlock((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSyntaxHighlighter *o = reinterpret_cast<QSyntaxHighlighter*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSyntaxHighlighter *o = reinterpret_cast<QSyntaxHighlighter*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSyntaxHighlighter *o = reinterpret_cast<QSyntaxHighlighter*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSyntaxHighlighter *o = reinterpret_cast<QSyntaxHighlighter*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSyntaxHighlighter::~PlastiQQSyntaxHighlighter() {
    QSyntaxHighlighter* o = reinterpret_cast<QSyntaxHighlighter*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
