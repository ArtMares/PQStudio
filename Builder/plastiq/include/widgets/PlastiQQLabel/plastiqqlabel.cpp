#include "plastiqmethod.h"
#include "plastiqqlabel.h"

#include "widgets/PlastiQQFrame/plastiqqframe.h"
#include <QLabel> 
#include <QWidget>
#include <QMovie>
#include <QPicture>
#include <QPixmap>
#include <QString>
#include <QEvent>
#include <QContextMenuEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQLabel::plastiqConstructors = {
    { "QLabel()", { "QLabel", "", "QLabel*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLabel(QWidget*)", { "QLabel", "QWidget*", "QLabel*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLabel(QWidget*,enum)", { "QLabel", "QWidget*,Qt::WindowFlags", "QLabel*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLabel(QString)", { "QLabel", "QString&", "QLabel*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLabel(QString,QWidget*)", { "QLabel", "QString&,QWidget*", "QLabel*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLabel(QString,QWidget*,enum)", { "QLabel", "QString&,QWidget*,Qt::WindowFlags", "QLabel*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLabel::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buddy()", { "buddy", "", "QWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasScaledContents()", { "hasScaledContents", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasSelectedText()", { "hasSelectedText", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indent()", { "indent", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "margin()", { "margin", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "movie()", { "movie", "", "QMovie*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openExternalLinks()", { "openExternalLinks", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "picture()", { "picture", "", "const QPicture*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap()", { "pixmap", "", "const QPixmap*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedText()", { "selectedText", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionStart()", { "selectionStart", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBuddy(QWidget*)", { "setBuddy", "QWidget*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIndent(int)", { "setIndent", "int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMargin(int)", { "setMargin", "int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpenExternalLinks(bool)", { "setOpenExternalLinks", "bool", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScaledContents(bool)", { "setScaledContents", "bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelection(int,int)", { "setSelection", "int,int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextFormat(enum)", { "setTextFormat", "Qt::TextFormat", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextInteractionFlags(enum)", { "setTextInteractionFlags", "Qt::TextInteractionFlags", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWordWrap(bool)", { "setWordWrap", "bool", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textFormat()", { "textFormat", "", "Qt::TextFormat", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textInteractionFlags()", { "textInteractionFlags", "", "Qt::TextInteractionFlags", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wordWrap()", { "wordWrap", "", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 35, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 36, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 37, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMovie(QMovie*)", { "setMovie", "QMovie*", "void", 38, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setNum(int)", { "setNum", "int", "void", 39, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setNum(double)", { "setNum", "double", "void", 40, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPicture(QPicture&)", { "setPicture", "QPicture&", "void", 41, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPixmap(QPixmap&)", { "setPixmap", "QPixmap&", "void", 42, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setText(QString)", { "setText", "QString&", "void", 43, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLabel::plastiqSignals = {
    { "linkActivated(QString)", { "linkActivated", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "linkHovered(QString)", { "linkHovered", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQLabel::plastiqProperties = {
    { "alignment", { "alignment", "long", "setAlignment", "alignment" } },
    { "hasSelectedText", { "hasSelectedText", "bool", "", "hasSelectedText" } },
    { "indent", { "indent", "int", "setIndent", "indent" } },
    { "margin", { "margin", "int", "setMargin", "margin" } },
    { "openExternalLinks", { "openExternalLinks", "bool", "setOpenExternalLinks", "openExternalLinks" } },
    { "pixmap", { "pixmap", "QPixmap", "setPixmap", "pixmap" } },
    { "scaledContents", { "scaledContents", "bool", "setScaledContents", "hasScaledContents" } },
    { "selectedText", { "selectedText", "QString", "", "selectedText" } },
    { "text", { "text", "QString", "setText", "text" } },
    { "textFormat", { "textFormat", "long", "setTextFormat", "textFormat" } },
    { "textInteractionFlags", { "textInteractionFlags", "long", "setTextInteractionFlags", "textInteractionFlags" } },
    { "wordWrap", { "wordWrap", "bool", "setWordWrap", "wordWrap" } },

};

QHash<QByteArray, long> PlastiQQLabel::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLabel::plastiqInherits = { &PlastiQQFrame::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLabel::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQLabel::plastiq_static_metaObject = {
    { &PlastiQQFrame::plastiq_static_metaObject, &plastiqInherits, "QLabel", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLabel::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQLabelWrapper : public QLabel {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQLabelWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags())
         : QLabel(parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQLabelWrapper(const QString &text, QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags())
         : QLabel(text,parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void changeEvent(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLabel::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QLabel::changeEvent(ev);
    }

    void contextMenuEvent(QContextMenuEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLabel::contextMenuEvent(ev);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *ev) {
        return QLabel::contextMenuEvent(ev);
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
        else return QLabel::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QLabel::event(e);
    }

    void focusInEvent(QFocusEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLabel::focusInEvent(ev);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *ev) {
        return QLabel::focusInEvent(ev);
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
        else return QLabel::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QLabel::focusNextPrevChild(next);
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
        else return QLabel::focusOutEvent(ev);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *ev) {
        return QLabel::focusOutEvent(ev);
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
        else return QLabel::keyPressEvent(ev);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *ev) {
        return QLabel::keyPressEvent(ev);
    }

    void mouseMoveEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLabel::mouseMoveEvent(ev);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *ev) {
        return QLabel::mouseMoveEvent(ev);
    }

    void mousePressEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLabel::mousePressEvent(ev);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *ev) {
        return QLabel::mousePressEvent(ev);
    }

    void mouseReleaseEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLabel::mouseReleaseEvent(ev);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *ev) {
        return QLabel::mouseReleaseEvent(ev);
    }

};

void PlastiQQLabel::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQLabelWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQLabelWrapper(); break;
        case 1: o = new PlastiQQLabelWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQLabelWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;
        case 3: o = new PlastiQQLabelWrapper(stack[1].s_string); break;
        case 4: o = new PlastiQQLabelWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 5: o = new PlastiQQLabelWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    Qt::WindowFlags(stack[3].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQLabel *p = new PlastiQQLabel();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLabel *p = new PlastiQQLabel();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 44) {
            id -= 44;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLabel *o = sc ? Q_NULLPTR : reinterpret_cast<QLabel*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QWidget* _r = o->buddy();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 2: { bool _r = o->hasScaledContents();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->hasSelectedText();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { int _r = o->indent();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->margin();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { QMovie* _r = o->movie();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMovie"; } break;
        case 7: { bool _r = o->openExternalLinks();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { QPicture* _r = const_cast<QPicture*>(o->picture());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPicture"; } break;
        case 9: { QPixmap* _r = const_cast<QPixmap*>(o->pixmap());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPixmap"; } break;
        case 10: { QString _r = o->selectedText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { int _r = o->selectionStart();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setBuddy(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setIndent(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setMargin(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setOpenExternalLinks(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setScaledContents(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setSelection(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setTextFormat(Qt::TextFormat(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setTextInteractionFlags(Qt::TextInteractionFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setWordWrap(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 22: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: { qint64 _r = o->textFormat(); // HACK for Qt::TextFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 24: { qint64 _r = o->textInteractionFlags(); // HACK for Qt::TextInteractionFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 25: { bool _r = o->wordWrap();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: if (isWrapper) ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 27: if (isWrapper) ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 28: { bool _r;
                if (isWrapper) _r = ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: if (isWrapper) ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 30: { bool _r;
                if (isWrapper) _r = ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 31: if (isWrapper) ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: if (isWrapper) ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: if (isWrapper) ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 34: if (isWrapper) ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: if (isWrapper) ((PlastiQQLabelWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 36: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 37: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setMovie(reinterpret_cast<QMovie*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setNum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setNum(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setPicture((*reinterpret_cast< QPicture(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLabel *o = reinterpret_cast<QLabel*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QLabel::linkActivated,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "linkActivated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QLabel::linkHovered,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "linkHovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLabel *o = reinterpret_cast<QLabel*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLabel *o = reinterpret_cast<QLabel*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLabel *o = reinterpret_cast<QLabel*>(object->plastiq_data());

        if(className == "QFrame") {
            stack[0].s_voidp = static_cast<QFrame*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLabel::~PlastiQQLabel() {
    QLabel* o = reinterpret_cast<QLabel*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
