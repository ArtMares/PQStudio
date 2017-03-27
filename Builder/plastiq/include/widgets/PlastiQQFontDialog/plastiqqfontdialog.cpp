#include "plastiqmethod.h"
#include "plastiqqfontdialog.h"

#include "widgets/PlastiQQDialog/plastiqqdialog.h"
#include <QFontDialog> 
#include <QFont>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQFontDialog::plastiqConstructors = {
    { "QFontDialog()", { "QFontDialog", "", "QFontDialog*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontDialog(QWidget*)", { "QFontDialog", "QWidget*", "QFontDialog*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontDialog(QFont&)", { "QFontDialog", "QFont&", "QFontDialog*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontDialog(QFont&,QWidget*)", { "QFontDialog", "QFont&,QWidget*", "QFontDialog*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontDialog::plastiqMethods = {
    { "currentFont()", { "currentFont", "", "QFont", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(QObject*,const char*)", { "open", "QObject*,char*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "options()", { "options", "", "FontDialogOptions", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedFont()", { "selectedFont", "", "QFont", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentFont(QFont&)", { "setCurrentFont", "QFont&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum)", { "setOption", "FontDialogOption", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum,bool)", { "setOption", "FontDialogOption,bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptions(enum)", { "setOptions", "FontDialogOptions", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testOption(enum)", { "testOption", "FontDialogOption", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getFont(bool*,QFont&)", { "getFont", "bool*,QFont&", "QFont", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getFont(bool*,QFont&,QWidget*)", { "getFont", "bool*,QFont&,QWidget*", "QFont", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getFont(bool*,QFont&,QWidget*,QString)", { "getFont", "bool*,QFont&,QWidget*,QString&", "QFont", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getFont(bool*,QFont&,QWidget*,QString,enum)", { "getFont", "bool*,QFont&,QWidget*,QString&,FontDialogOptions", "QFont", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getFont(bool*)", { "getFont", "bool*", "QFont", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getFont(bool*,QWidget*)", { "getFont", "bool*,QWidget*", "QFont", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "done(int)", { "done", "int", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontDialog::plastiqSignals = {
    { "currentFontChanged(QFont&)", { "currentFontChanged", "QFont&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "fontSelected(QFont&)", { "fontSelected", "QFont&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQFontDialog::plastiqProperties = {
    { "currentFont", { "currentFont", "QFont", "setCurrentFont", "currentFont" } },
    { "options", { "options", "long", "setOptions", "options" } },

};

QHash<QByteArray, long> PlastiQQFontDialog::plastiqConstants = {

    /* QFontDialog::FontDialogOption */
   { "NoButtons", QFontDialog::NoButtons },
   { "DontUseNativeDialog", QFontDialog::DontUseNativeDialog },
   { "ScalableFonts", QFontDialog::ScalableFonts },
   { "NonScalableFonts", QFontDialog::NonScalableFonts },
   { "MonospacedFonts", QFontDialog::MonospacedFonts },
   { "ProportionalFonts", QFontDialog::ProportionalFonts },

};

QVector<PlastiQMetaObject*> PlastiQQFontDialog::plastiqInherits = { &PlastiQQDialog::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFontDialog::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQFontDialog::plastiq_static_metaObject = {
    { &PlastiQQDialog::plastiq_static_metaObject, &plastiqInherits, "QFontDialog", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFontDialog::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQFontDialogWrapper : public QFontDialog {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQFontDialogWrapper(QWidget *parent = Q_NULLPTR)
         : QFontDialog(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQFontDialogWrapper(const QFont &initial, QWidget *parent = Q_NULLPTR)
         : QFontDialog(initial,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QFontDialog::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QFontDialog::changeEvent(e);
    }

    void done(int result) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void done(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = result;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontDialog::done(result);
    }

    void PlastiQParentCall_done(int result) {
        return QFontDialog::done(result);
    }

    void closeEvent(QCloseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontDialog::closeEvent(e);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *e) {
        return QFontDialog::closeEvent(e);
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
        else return QFontDialog::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QFontDialog::contextMenuEvent(e);
    }

    bool eventFilter(QObject *o, QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(o);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(e);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QFontDialog::eventFilter(o,e);
    }

    bool PlastiQParentCall_eventFilter(QObject *o, QEvent *e) {
        return QFontDialog::eventFilter(o,e);
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
        else return QFontDialog::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QFontDialog::keyPressEvent(e);
    }

    void showEvent(QShowEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFontDialog::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QFontDialog::showEvent(event);
    }

};

void PlastiQQFontDialog::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQFontDialogWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQFontDialogWrapper(); break;
        case 1: o = new PlastiQQFontDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQFontDialogWrapper((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); break;
        case 3: o = new PlastiQQFontDialogWrapper((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQFontDialog *p = new PlastiQQFontDialog();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFontDialog *p = new PlastiQQFontDialog();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFontDialog *o = sc ? Q_NULLPTR : reinterpret_cast<QFontDialog*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QFont *_r = new QFont(o->currentFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->open(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { qint64 _r = o->options(); // HACK for FontDialogOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QFont *_r = new QFont(o->selectedFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setCurrentFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setOption(QFontDialog::FontDialogOption(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setOption(QFontDialog::FontDialogOption(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setOptions(QFontDialog::FontDialogOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: { bool _r = o->testOption(QFontDialog::FontDialogOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QFontDialog::getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)))) : new QFont(o->getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QFontDialog::getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp))) : new QFont(o->getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QFontDialog::getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp),
                    stack[4].s_string)) : new QFont(o->getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp),
                    stack[4].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QFontDialog::getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp),
                    stack[4].s_string,
                    QFontDialog::FontDialogOptions(stack[5].s_int64))) : new QFont(o->getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp),
                    stack[4].s_string,
                    QFontDialog::FontDialogOptions(stack[5].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QFontDialog::getFont(reinterpret_cast<bool*>(stack[1].s_voidp))) : new QFont(o->getFont(reinterpret_cast<bool*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QFontDialog::getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp))) : new QFont(o->getFont(reinterpret_cast<bool*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: if (isWrapper) ((PlastiQQFontDialogWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 16: if (isWrapper) ((PlastiQQFontDialogWrapper*)o)->PlastiQParentCall_done(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFontDialog *o = reinterpret_cast<QFontDialog*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QFontDialog::currentFontChanged,
            [=](const QFont& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QFont(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QFont";
                PlastiQ_activate(sender, "currentFontChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QFontDialog::fontSelected,
            [=](const QFont& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QFont(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QFont";
                PlastiQ_activate(sender, "fontSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFontDialog *o = reinterpret_cast<QFontDialog*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFontDialog *o = reinterpret_cast<QFontDialog*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFontDialog *o = reinterpret_cast<QFontDialog*>(object->plastiq_data());

        if(className == "QDialog") {
            stack[0].s_voidp = static_cast<QDialog*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFontDialog::~PlastiQQFontDialog() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
