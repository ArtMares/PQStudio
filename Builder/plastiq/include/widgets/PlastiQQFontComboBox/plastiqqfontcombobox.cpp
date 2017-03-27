#include "plastiqmethod.h"
#include "plastiqqfontcombobox.h"

#include "widgets/PlastiQQComboBox/plastiqqcombobox.h"
#include <QFontComboBox> 
#include <QFont>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQFontComboBox::plastiqConstructors = {
    { "QFontComboBox()", { "QFontComboBox", "", "QFontComboBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontComboBox(QWidget*)", { "QFontComboBox", "QWidget*", "QFontComboBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontComboBox::plastiqMethods = {
    { "currentFont()", { "currentFont", "", "QFont", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontFilters()", { "fontFilters", "", "FontFilters", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontFilters(enum)", { "setFontFilters", "FontFilters", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWritingSystem(enum)", { "setWritingSystem", "QFontDatabase::WritingSystem", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "writingSystem()", { "writingSystem", "", "QFontDatabase::WritingSystem", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setCurrentFont(QFont&)", { "setCurrentFont", "QFont&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontComboBox::plastiqSignals = {
    { "currentFontChanged(QFont&)", { "currentFontChanged", "QFont&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQFontComboBox::plastiqProperties = {
    { "currentFont", { "currentFont", "QFont", "setCurrentFont", "currentFont" } },
    { "fontFilters", { "fontFilters", "long", "setFontFilters", "fontFilters" } },
    { "writingSystem", { "writingSystem", "long", "setWritingSystem", "writingSystem" } },

};

QHash<QByteArray, long> PlastiQQFontComboBox::plastiqConstants = {

    /* QFontComboBox::FontFilter */
   { "AllFonts", QFontComboBox::AllFonts },
   { "ScalableFonts", QFontComboBox::ScalableFonts },
   { "NonScalableFonts", QFontComboBox::NonScalableFonts },
   { "MonospacedFonts", QFontComboBox::MonospacedFonts },
   { "ProportionalFonts", QFontComboBox::ProportionalFonts },

};

QVector<PlastiQMetaObject*> PlastiQQFontComboBox::plastiqInherits = { &PlastiQQComboBox::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFontComboBox::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQFontComboBox::plastiq_static_metaObject = {
    { &PlastiQQComboBox::plastiq_static_metaObject, &plastiqInherits, "QFontComboBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFontComboBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQFontComboBoxWrapper : public QFontComboBox {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQFontComboBoxWrapper(QWidget *parent = Q_NULLPTR)
         : QFontComboBox(parent),
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
        else return QFontComboBox::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QFontComboBox::event(e);
    }

    void hidePopup() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hidePopup()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::hidePopup();
    }

    void PlastiQParentCall_hidePopup() {
        return QFontComboBox::hidePopup();
    }

    void showPopup() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showPopup()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::showPopup();
    }

    void PlastiQParentCall_showPopup() {
        return QFontComboBox::showPopup();
    }

    void changeEvent(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QFontComboBox::changeEvent(e);
    }

    void contextMenuEvent(QContextMenuEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QFontComboBox::contextMenuEvent(e);
    }

    void focusInEvent(QFocusEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QFontComboBox::focusInEvent(e);
    }

    void focusOutEvent(QFocusEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QFontComboBox::focusOutEvent(e);
    }

    void hideEvent(QHideEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hideEvent(QHideEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QHideEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::hideEvent(e);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *e) {
        return QFontComboBox::hideEvent(e);
    }

    void inputMethodEvent(QInputMethodEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void inputMethodEvent(QInputMethodEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QInputMethodEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::inputMethodEvent(e);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *e) {
        return QFontComboBox::inputMethodEvent(e);
    }

    void keyPressEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QFontComboBox::keyPressEvent(e);
    }

    void keyReleaseEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QFontComboBox::keyReleaseEvent(e);
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
        else return QFontComboBox::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QFontComboBox::mousePressEvent(e);
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
        else return QFontComboBox::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QFontComboBox::mouseReleaseEvent(e);
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
        else return QFontComboBox::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QFontComboBox::paintEvent(e);
    }

    void resizeEvent(QResizeEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QFontComboBox::resizeEvent(e);
    }

    void showEvent(QShowEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::showEvent(e);
    }

    void PlastiQParentCall_showEvent(QShowEvent *e) {
        return QFontComboBox::showEvent(e);
    }

    void wheelEvent(QWheelEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontComboBox::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QFontComboBox::wheelEvent(e);
    }

};

void PlastiQQFontComboBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQFontComboBoxWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQFontComboBoxWrapper(); break;
        case 1: o = new PlastiQQFontComboBoxWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQFontComboBox *p = new PlastiQQFontComboBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFontComboBox *p = new PlastiQQFontComboBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQComboBox::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFontComboBox *o = sc ? Q_NULLPTR : reinterpret_cast<QFontComboBox*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QFont *_r = new QFont(o->currentFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->fontFilters(); // HACK for FontFilters 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: o->setFontFilters(QFontComboBox::FontFilters(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setWritingSystem(QFontDatabase::WritingSystem(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: { qint64 _r = o->writingSystem(); // HACK for QFontDatabase::WritingSystem 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { bool _r;
                if (isWrapper) _r = ((PlastiQQFontComboBoxWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->setCurrentFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQComboBox::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFontComboBox *o = reinterpret_cast<QFontComboBox*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QFontComboBox::currentFontChanged,
            [=](const QFont& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QFont(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QFont";
                PlastiQ_activate(sender, "currentFontChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFontComboBox *o = reinterpret_cast<QFontComboBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFontComboBox *o = reinterpret_cast<QFontComboBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFontComboBox *o = reinterpret_cast<QFontComboBox*>(object->plastiq_data());

        if(className == "QComboBox") {
            stack[0].s_voidp = static_cast<QComboBox*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFontComboBox::~PlastiQQFontComboBox() {
    QFontComboBox* o = reinterpret_cast<QFontComboBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
