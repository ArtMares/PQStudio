#include "plastiqmethod.h"
#include "plastiqqtextbrowser.h"

#include "widgets/PlastiQQTextEdit/plastiqqtextedit.h"
#include <QTextBrowser> 
#include <QString>
#include <QUrl>
#include <QStringList>
#include <QEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQTextBrowser::plastiqConstructors = {
    { "QTextBrowser()", { "QTextBrowser", "", "QTextBrowser*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextBrowser(QWidget*)", { "QTextBrowser", "QWidget*", "QTextBrowser*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBrowser::plastiqMethods = {
    { "backwardHistoryCount()", { "backwardHistoryCount", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearHistory()", { "clearHistory", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "forwardHistoryCount()", { "forwardHistoryCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "historyTitle(int)", { "historyTitle", "int", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "historyUrl(int)", { "historyUrl", "int", "QUrl", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBackwardAvailable()", { "isBackwardAvailable", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isForwardAvailable()", { "isForwardAvailable", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openExternalLinks()", { "openExternalLinks", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openLinks()", { "openLinks", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "searchPaths()", { "searchPaths", "", "QStringList", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpenExternalLinks(bool)", { "setOpenExternalLinks", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpenLinks(bool)", { "setOpenLinks", "bool", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSearchPaths(QStringList&)", { "setSearchPaths", "QStringList&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "source()", { "source", "", "QUrl", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 17, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 19, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 20, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 21, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "backward()", { "backward", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "forward()", { "forward", "", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "home()", { "home", "", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "reload()", { "reload", "", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setSource(QUrl&)", { "setSource", "QUrl&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBrowser::plastiqSignals = {
    { "anchorClicked(QUrl&)", { "anchorClicked", "QUrl&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "backwardAvailable(bool)", { "backwardAvailable", "bool", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "forwardAvailable(bool)", { "forwardAvailable", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "highlighted(QUrl&)", { "highlighted", "QUrl&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "highlighted(QString)", { "highlighted", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "historyChanged()", { "historyChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sourceChanged(QUrl&)", { "sourceChanged", "QUrl&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextBrowser::plastiqProperties = {
    { "modified", { "modified", "bool", "", "" } },
    { "openExternalLinks", { "openExternalLinks", "bool", "setOpenExternalLinks", "openExternalLinks" } },
    { "openLinks", { "openLinks", "bool", "setOpenLinks", "openLinks" } },
    { "readOnly", { "readOnly", "bool", "setReadOnly", "isReadOnly" } },
    { "searchPaths", { "searchPaths", "QStringList", "setSearchPaths", "searchPaths" } },
    { "source", { "source", "QUrl", "setSource", "source" } },
    { "undoRedoEnabled", { "undoRedoEnabled", "bool", "setUndoRedoEnabled", "isUndoRedoEnabled" } },

};

QHash<QByteArray, long> PlastiQQTextBrowser::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextBrowser::plastiqInherits = { &PlastiQQTextEdit::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextBrowser::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQTextBrowser::plastiq_static_metaObject = {
    { &PlastiQQTextEdit::plastiq_static_metaObject, &plastiqInherits, "QTextBrowser", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextBrowser::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTextBrowserWrapper : public QTextBrowser {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTextBrowserWrapper(QWidget *parent = Q_NULLPTR)
         : QTextBrowser(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QTextBrowser::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QTextBrowser::event(e);
    }

    bool focusNextPrevChild(bool next) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool focusNextPrevChild(bool)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_bool = next;
            stack[1].name = QByteArrayLiteral("bool");
            stack[1].type = PlastiQ::Bool;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTextBrowser::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QTextBrowser::focusNextPrevChild(next);
    }

    void focusOutEvent(QFocusEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextBrowser::focusOutEvent(ev);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *ev) {
        return QTextBrowser::focusOutEvent(ev);
    }

    void keyPressEvent(QKeyEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextBrowser::keyPressEvent(ev);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *ev) {
        return QTextBrowser::keyPressEvent(ev);
    }

    void mouseMoveEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextBrowser::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QTextBrowser::mouseMoveEvent(e);
    }

    void mousePressEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextBrowser::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QTextBrowser::mousePressEvent(e);
    }

    void mouseReleaseEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextBrowser::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QTextBrowser::mouseReleaseEvent(e);
    }

    void paintEvent(QPaintEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextBrowser::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QTextBrowser::paintEvent(e);
    }

};

void PlastiQQTextBrowser::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTextBrowserWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTextBrowserWrapper(); break;
        case 1: o = new PlastiQQTextBrowserWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTextBrowser *p = new PlastiQQTextBrowser();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextBrowser *p = new PlastiQQTextBrowser();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 27) {
            id -= 27;
            PlastiQQTextEdit::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextBrowser *o = sc ? Q_NULLPTR : reinterpret_cast<QTextBrowser*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->backwardHistoryCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: o->clearHistory();
                stack[0].type = PlastiQ::Void; break;
        case 2: { int _r = o->forwardHistoryCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { QString _r = o->historyTitle(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->historyUrl(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { bool _r = o->isBackwardAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isForwardAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->openExternalLinks();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->openLinks();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->searchPaths());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: o->setOpenExternalLinks(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setOpenLinks(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setSearchPaths((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->source());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { bool _r;
                if (isWrapper) _r = ((PlastiQQTextBrowserWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r;
                if (isWrapper) _r = ((PlastiQQTextBrowserWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: if (isWrapper) ((PlastiQQTextBrowserWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 17: if (isWrapper) ((PlastiQQTextBrowserWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 18: if (isWrapper) ((PlastiQQTextBrowserWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 19: if (isWrapper) ((PlastiQQTextBrowserWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 20: if (isWrapper) ((PlastiQQTextBrowserWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 21: if (isWrapper) ((PlastiQQTextBrowserWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 22: o->backward();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->forward();
                stack[0].type = PlastiQ::Void; break;
        case 24: o->home();
                stack[0].type = PlastiQ::Void; break;
        case 25: o->reload();
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setSource((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQTextEdit::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTextBrowser *o = reinterpret_cast<QTextBrowser*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTextBrowser::anchorClicked,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "anchorClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTextBrowser::backwardAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "backwardAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QTextBrowser::forwardAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "forwardAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::highlighted),
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "highlighted", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, static_cast<void (QTextBrowser::*)(const QString&)>(&QTextBrowser::highlighted),
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "highlighted", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QTextBrowser::historyChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "historyChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QTextBrowser::sourceChanged,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "sourceChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTextBrowser *o = reinterpret_cast<QTextBrowser*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTextBrowser *o = reinterpret_cast<QTextBrowser*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTextBrowser *o = reinterpret_cast<QTextBrowser*>(object->plastiq_data());

        if(className == "QTextEdit") {
            stack[0].s_voidp = static_cast<QTextEdit*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextBrowser::~PlastiQQTextBrowser() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
