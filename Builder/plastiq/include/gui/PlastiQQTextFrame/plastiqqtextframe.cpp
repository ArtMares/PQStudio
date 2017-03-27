#include "plastiqmethod.h"
#include "plastiqqtextframe.h"

#include "gui/PlastiQQTextObject/plastiqqtextobject.h"
#include <QTextFrame> 
#include <QTextCursor>
#include <QTextFrameFormat>

QHash<QByteArray, PlastiQMethod> PlastiQQTextFrame::plastiqConstructors = {
    { "QTextFrame(QTextDocument*)", { "QTextFrame", "QTextDocument*", "QTextFrame*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextFrame::plastiqMethods = {
    { "begin()", { "begin", "", "iterator", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "iterator", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstCursorPosition()", { "firstCursorPosition", "", "QTextCursor", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstPosition()", { "firstPosition", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameFormat()", { "frameFormat", "", "QTextFrameFormat", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastCursorPosition()", { "lastCursorPosition", "", "QTextCursor", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastPosition()", { "lastPosition", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentFrame()", { "parentFrame", "", "QTextFrame*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameFormat(QTextFrameFormat&)", { "setFrameFormat", "QTextFrameFormat&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextFrame::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextFrame::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextFrame::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextFrame::plastiqInherits = { &PlastiQQTextObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextFrame::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextFrame::plastiq_static_metaObject = {
    { &PlastiQQTextObject::plastiq_static_metaObject, &plastiqInherits, "QTextFrame", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextFrame::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextFrame::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextFrame *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextFrame(reinterpret_cast<QTextDocument*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextFrame *p = new PlastiQQTextFrame();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextFrame *p = new PlastiQQTextFrame();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQTextObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextFrame *o = sc ? Q_NULLPTR : reinterpret_cast<QTextFrame*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->begin() | ret: `iterator` */ break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->end() | ret: `iterator` */ break;
        case 2: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->firstCursorPosition());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { int _r = o->firstPosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { /* COPY OBJECT */
            QTextFrameFormat *_r = new QTextFrameFormat(o->frameFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextFrameFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->lastCursorPosition());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { int _r = o->lastPosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { QTextFrame* _r = o->parentFrame();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextFrame"; } break;
        case 8: o->setFrameFormat((*reinterpret_cast< QTextFrameFormat(*) >(stack[1].s_voidp)));
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
        QTextFrame *o = reinterpret_cast<QTextFrame*>(object->plastiq_data());

        if(className == "QTextObject") {
            stack[0].s_voidp = static_cast<QTextObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextFrame::~PlastiQQTextFrame() {
    QTextFrame* o = reinterpret_cast<QTextFrame*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
