#include "plastiqmethod.h"
#include "plastiqqabstracttextdocumentlayout.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractTextDocumentLayout> 
#include <QString>
#include <QRectF>
#include <QTextDocument>
#include <QSizeF>
#include <QTextFormat>
#include <QTextObjectInterface>
#include <QPaintDevice>
#include <QPainter>
#include <QTextInlineObject>
#include <QTextCharFormat>
#include <QTextBlock>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractTextDocumentLayout::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractTextDocumentLayout::plastiqMethods = {
    { "anchorAt(QPointF&)", { "anchorAt", "QPointF&", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockBoundingRect(QTextBlock&)", { "blockBoundingRect", "QTextBlock&", "QRectF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "document()", { "document", "", "QTextDocument*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentSize()", { "documentSize", "", "QSizeF", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "formatAt(QPointF&)", { "formatAt", "QPointF&", "QTextFormat", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameBoundingRect(QTextFrame*)", { "frameBoundingRect", "QTextFrame*", "QRectF", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handlerForObject(int)", { "handlerForObject", "int", "QTextObjectInterface*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hitTest(QPointF&,enum)", { "hitTest", "QPointF&,Qt::HitTestAccuracy", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "imageAt(QPointF&)", { "imageAt", "QPointF&", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageCount()", { "pageCount", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintDevice()", { "paintDevice", "", "QPaintDevice*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerHandler(int,QObject*)", { "registerHandler", "int,QObject*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPaintDevice(QPaintDevice*)", { "setPaintDevice", "QPaintDevice*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unregisterHandler(int)", { "unregisterHandler", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unregisterHandler(int,QObject*)", { "unregisterHandler", "int,QObject*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentChanged(int,int,int)", { "documentChanged", "int,int,int", "void", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawInlineObject(QPainter*,QRectF&,QTextInlineObject,int,QTextFormat&)", { "drawInlineObject", "QPainter*,QRectF&,QTextInlineObject,int,QTextFormat&", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "format(int)", { "format", "int", "QTextCharFormat", 17, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "positionInlineObject(QTextInlineObject,int,QTextFormat&)", { "positionInlineObject", "QTextInlineObject,int,QTextFormat&", "void", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeInlineObject(QTextInlineObject,int,QTextFormat&)", { "resizeInlineObject", "QTextInlineObject,int,QTextFormat&", "void", 19, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractTextDocumentLayout::plastiqSignals = {
    { "documentSizeChanged(QSizeF&)", { "documentSizeChanged", "QSizeF&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pageCountChanged(int)", { "pageCountChanged", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "updateBlock(QTextBlock&)", { "updateBlock", "QTextBlock&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractTextDocumentLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractTextDocumentLayout::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractTextDocumentLayout::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractTextDocumentLayout::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractTextDocumentLayout::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractTextDocumentLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractTextDocumentLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractTextDocumentLayoutWrapper : public QAbstractTextDocumentLayout {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void drawInlineObject(QPainter *painter, const QRectF &rect, QTextInlineObject object, int posInDocument, const QTextFormat &format) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawInlineObject(QPainter*,const QRectF&,QTextInlineObject,int,const QTextFormat&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[6];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRectF");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_voidp = new QTextInlineObject(object) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QTextInlineObject");
            stack[3].type = PlastiQ::QtObject;
            stack[4].s_int = posInDocument;
            stack[4].name = QByteArrayLiteral("int");
            stack[4].type = PlastiQ::Int;
            stack[5].s_voidp = new QTextFormat(format) /* COPY OBJECT */;
            stack[5].name = QByteArrayLiteral("QTextFormat");
            stack[5].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractTextDocumentLayout::drawInlineObject(painter,rect,object,posInDocument,format);
    }

    void PlastiQParentCall_drawInlineObject(QPainter *painter, const QRectF &rect, QTextInlineObject object, int posInDocument, const QTextFormat &format) {
        return QAbstractTextDocumentLayout::drawInlineObject(painter,rect,object,posInDocument,format);
    }

    void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat &format) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void positionInlineObject(QTextInlineObject,int,const QTextFormat&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QTextInlineObject(item) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QTextInlineObject");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int = posInDocument;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = new QTextFormat(format) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QTextFormat");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractTextDocumentLayout::positionInlineObject(item,posInDocument,format);
    }

    void PlastiQParentCall_positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat &format) {
        return QAbstractTextDocumentLayout::positionInlineObject(item,posInDocument,format);
    }

    void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat &format) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeInlineObject(QTextInlineObject,int,const QTextFormat&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QTextInlineObject(item) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QTextInlineObject");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int = posInDocument;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = new QTextFormat(format) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QTextFormat");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractTextDocumentLayout::resizeInlineObject(item,posInDocument,format);
    }

    void PlastiQParentCall_resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat &format) {
        return QAbstractTextDocumentLayout::resizeInlineObject(item,posInDocument,format);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractTextDocumentLayout::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QAbstractTextDocumentLayout::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractTextDocumentLayout::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QAbstractTextDocumentLayout::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QAbstractTextDocumentLayout::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QAbstractTextDocumentLayout::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractTextDocumentLayout::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QAbstractTextDocumentLayout::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractTextDocumentLayout::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QAbstractTextDocumentLayout::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractTextDocumentLayout::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QAbstractTextDocumentLayout::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractTextDocumentLayout::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QAbstractTextDocumentLayout::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractTextDocumentLayout::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QAbstractTextDocumentLayout::timerEvent(event);
    }

};

void PlastiQQAbstractTextDocumentLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractTextDocumentLayoutWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractTextDocumentLayout *p = new PlastiQQAbstractTextDocumentLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractTextDocumentLayout *p = new PlastiQQAbstractTextDocumentLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 20) {
            id -= 20;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractTextDocumentLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractTextDocumentLayout*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->anchorAt((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->blockBoundingRect((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QTextDocument* _r = o->document();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 3: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->documentSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QTextFormat *_r = new QTextFormat(o->formatAt((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->frameBoundingRect(reinterpret_cast<QTextFrame*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { QTextObjectInterface* _r = o->handlerForObject(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextObjectInterface"; } break;
        case 7: { int _r = o->hitTest((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    Qt::HitTestAccuracy(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { QString _r = o->imageAt((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { int _r = o->pageCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { QPaintDevice* _r = o->paintDevice();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPaintDevice"; } break;
        case 11: o->registerHandler(stack[1].s_int,
                    reinterpret_cast<QObject*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setPaintDevice(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->unregisterHandler(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->unregisterHandler(stack[1].s_int,
                    reinterpret_cast<QObject*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 16: if (isWrapper) ((PlastiQQAbstractTextDocumentLayoutWrapper*)o)->PlastiQParentCall_drawInlineObject(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QTextInlineObject(*) >(stack[3].s_voidp)),
                    stack[4].s_int,
                    (*reinterpret_cast< QTextFormat(*) >(stack[5].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 17: { /* COPY OBJECT */
            QTextCharFormat *_r; stack[0].type = PlastiQ::Error; } break;
        case 18: if (isWrapper) ((PlastiQQAbstractTextDocumentLayoutWrapper*)o)->PlastiQParentCall_positionInlineObject((*reinterpret_cast< QTextInlineObject(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QTextFormat(*) >(stack[3].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 19: if (isWrapper) ((PlastiQQAbstractTextDocumentLayoutWrapper*)o)->PlastiQParentCall_resizeInlineObject((*reinterpret_cast< QTextInlineObject(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QTextFormat(*) >(stack[3].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractTextDocumentLayout *o = reinterpret_cast<QAbstractTextDocumentLayout*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractTextDocumentLayout::documentSizeChanged,
            [=](const QSizeF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QSizeF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QSizeF";
                PlastiQ_activate(sender, "documentSizeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractTextDocumentLayout::pageCountChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "pageCountChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractTextDocumentLayout::updateBlock,
            [=](const QTextBlock& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QTextBlock(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QTextBlock";
                PlastiQ_activate(sender, "updateBlock", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractTextDocumentLayout *o = reinterpret_cast<QAbstractTextDocumentLayout*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractTextDocumentLayout *o = reinterpret_cast<QAbstractTextDocumentLayout*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractTextDocumentLayout *o = reinterpret_cast<QAbstractTextDocumentLayout*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractTextDocumentLayout::~PlastiQQAbstractTextDocumentLayout() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
