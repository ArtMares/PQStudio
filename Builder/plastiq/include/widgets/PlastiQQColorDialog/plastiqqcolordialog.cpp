#include "plastiqmethod.h"
#include "plastiqqcolordialog.h"

#include "widgets/PlastiQQDialog/plastiqqdialog.h"
#include <QColorDialog> 
#include <QColor>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQColorDialog::plastiqConstructors = {
    { "QColorDialog()", { "QColorDialog", "", "QColorDialog*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColorDialog(QWidget*)", { "QColorDialog", "QWidget*", "QColorDialog*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColorDialog(QColor&)", { "QColorDialog", "QColor&", "QColorDialog*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColorDialog(QColor&,QWidget*)", { "QColorDialog", "QColor&,QWidget*", "QColorDialog*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQColorDialog::plastiqMethods = {
    { "currentColor()", { "currentColor", "", "QColor", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(QObject*,const char*)", { "open", "QObject*,char*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "options()", { "options", "", "ColorDialogOptions", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedColor()", { "selectedColor", "", "QColor", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentColor(QColor&)", { "setCurrentColor", "QColor&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum)", { "setOption", "ColorDialogOption", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum,bool)", { "setOption", "ColorDialogOption,bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptions(enum)", { "setOptions", "ColorDialogOptions", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testOption(enum)", { "testOption", "ColorDialogOption", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "customColor(int)", { "customColor", "int", "QColor", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "customCount()", { "customCount", "", "int", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getColor()", { "getColor", "", "QColor", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getColor(QColor&)", { "getColor", "QColor&", "QColor", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getColor(QColor&,QWidget*)", { "getColor", "QColor&,QWidget*", "QColor", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getColor(QColor&,QWidget*,QString)", { "getColor", "QColor&,QWidget*,QString&", "QColor", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getColor(QColor&,QWidget*,QString,enum)", { "getColor", "QColor&,QWidget*,QString&,ColorDialogOptions", "QColor", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setCustomColor(int,QColor)", { "setCustomColor", "int,QColor", "void", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setStandardColor(int,QColor)", { "setStandardColor", "int,QColor", "void", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "standardColor(int)", { "standardColor", "int", "QColor", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 19, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "done(int)", { "done", "int", "void", 20, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQColorDialog::plastiqSignals = {
    { "colorSelected(QColor&)", { "colorSelected", "QColor&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentColorChanged(QColor&)", { "currentColorChanged", "QColor&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQColorDialog::plastiqProperties = {
    { "currentColor", { "currentColor", "QColor", "setCurrentColor", "currentColor" } },
    { "options", { "options", "long", "setOptions", "options" } },

};

QHash<QByteArray, long> PlastiQQColorDialog::plastiqConstants = {

    /* QColorDialog::ColorDialogOption */
   { "ShowAlphaChannel", QColorDialog::ShowAlphaChannel },
   { "NoButtons", QColorDialog::NoButtons },
   { "DontUseNativeDialog", QColorDialog::DontUseNativeDialog },

};

QVector<PlastiQMetaObject*> PlastiQQColorDialog::plastiqInherits = { &PlastiQQDialog::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQColorDialog::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQColorDialog::plastiq_static_metaObject = {
    { &PlastiQQDialog::plastiq_static_metaObject, &plastiqInherits, "QColorDialog", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQColorDialog::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQColorDialogWrapper : public QColorDialog {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQColorDialogWrapper(QWidget *parent = Q_NULLPTR)
         : QColorDialog(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQColorDialogWrapper(const QColor &initial, QWidget *parent = Q_NULLPTR)
         : QColorDialog(initial,parent),
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
        else return QColorDialog::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QColorDialog::changeEvent(e);
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
        else return QColorDialog::done(result);
    }

    void PlastiQParentCall_done(int result) {
        return QColorDialog::done(result);
    }

};

void PlastiQQColorDialog::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQColorDialogWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQColorDialogWrapper(); break;
        case 1: o = new PlastiQQColorDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQColorDialogWrapper((*reinterpret_cast< QColor(*) >(stack[1].s_voidp))); break;
        case 3: o = new PlastiQQColorDialogWrapper((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQColorDialog *p = new PlastiQQColorDialog();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQColorDialog *p = new PlastiQQColorDialog();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QColorDialog *o = sc ? Q_NULLPTR : reinterpret_cast<QColorDialog*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QColor *_r = new QColor(o->currentColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->open(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { qint64 _r = o->options(); // HACK for ColorDialogOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QColor *_r = new QColor(o->selectedColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setCurrentColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setOption(QColorDialog::ColorDialogOption(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setOption(QColorDialog::ColorDialogOption(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setOptions(QColorDialog::ColorDialogOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: { bool _r = o->testOption(QColorDialog::ColorDialogOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColorDialog::customColor(stack[1].s_int)) : new QColor(o->customColor(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { int _r = sc ? QColorDialog::customCount() : o->customCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColorDialog::getColor()) : new QColor(o->getColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColorDialog::getColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)))) : new QColor(o->getColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColorDialog::getColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp))) : new QColor(o->getColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColorDialog::getColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_string)) : new QColor(o->getColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColorDialog::getColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_string,
                    QColorDialog::ColorDialogOptions(stack[4].s_int64))) : new QColor(o->getColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_string,
                    QColorDialog::ColorDialogOptions(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: if(sc) { QColorDialog::setCustomColor(stack[1].s_int,
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp))); } else { o->setCustomColor(stack[1].s_int,
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 17: if(sc) { QColorDialog::setStandardColor(stack[1].s_int,
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp))); } else { o->setStandardColor(stack[1].s_int,
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 18: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColorDialog::standardColor(stack[1].s_int)) : new QColor(o->standardColor(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: if (isWrapper) ((PlastiQQColorDialogWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 20: if (isWrapper) ((PlastiQQColorDialogWrapper*)o)->PlastiQParentCall_done(stack[1].s_int);
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

        QColorDialog *o = reinterpret_cast<QColorDialog*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QColorDialog::colorSelected,
            [=](const QColor& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "colorSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QColorDialog::currentColorChanged,
            [=](const QColor& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "currentColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QColorDialog *o = reinterpret_cast<QColorDialog*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QColorDialog *o = reinterpret_cast<QColorDialog*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QColorDialog *o = reinterpret_cast<QColorDialog*>(object->plastiq_data());

        if(className == "QDialog") {
            stack[0].s_voidp = static_cast<QDialog*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQColorDialog::~PlastiQQColorDialog() {
    QColorDialog* o = reinterpret_cast<QColorDialog*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
