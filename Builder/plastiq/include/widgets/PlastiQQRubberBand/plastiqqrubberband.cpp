#include "plastiqmethod.h"
#include "plastiqqrubberband.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QRubberBand> 
#include <QEvent>
#include <QMoveEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQRubberBand::plastiqConstructors = {
    { "QRubberBand(enum)", { "QRubberBand", "Shape", "QRubberBand*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRubberBand(enum,QWidget*)", { "QRubberBand", "Shape,QWidget*", "QRubberBand*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRubberBand::plastiqMethods = {
    { "move(int,int)", { "move", "int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "move(QPoint&)", { "move", "QPoint&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(int,int)", { "resize", "int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(QSize&)", { "resize", "QSize&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGeometry(QRect&)", { "setGeometry", "QRect&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGeometry(int,int,int,int)", { "setGeometry", "int,int,int,int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shape()", { "shape", "", "Shape", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionRubberBand*)", { "initStyleOption", "QStyleOptionRubberBand*", "void", 7, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveEvent(QMoveEvent*)", { "moveEvent", "QMoveEvent*", "void", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRubberBand::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRubberBand::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRubberBand::plastiqConstants = {

    /* QRubberBand::Shape */
   { "Line", QRubberBand::Line },
   { "Rectangle", QRubberBand::Rectangle },

};

QVector<PlastiQMetaObject*> PlastiQQRubberBand::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQRubberBand::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQRubberBand::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QRubberBand", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRubberBand::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQRubberBandWrapper : public QRubberBand {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQRubberBandWrapper(Shape s, QWidget *p = Q_NULLPTR)
         : QRubberBand(s,p),
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
        else return QRubberBand::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QRubberBand::changeEvent(e);
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
        else return QRubberBand::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QRubberBand::event(e);
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
        else return QRubberBand::showEvent(e);
    }

    void PlastiQParentCall_showEvent(QShowEvent *e) {
        return QRubberBand::showEvent(e);
    }

};

void PlastiQQRubberBand::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQRubberBandWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQRubberBandWrapper(QRubberBand::Shape(stack[1].s_int64)); break;
        case 1: o = new PlastiQQRubberBandWrapper(QRubberBand::Shape(stack[1].s_int64),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQRubberBand *p = new PlastiQQRubberBand();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRubberBand *p = new PlastiQQRubberBand();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRubberBand *o = sc ? Q_NULLPTR : reinterpret_cast<QRubberBand*>(object->plastiq_data());

        switch(id) {
        case 0: o->move(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->move((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->resize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->resize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setGeometry((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setGeometry(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: { qint64 _r = o->shape(); // HACK for Shape 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 8: if (isWrapper) ((PlastiQQRubberBandWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 9: { bool _r;
                if (isWrapper) _r = ((PlastiQQRubberBandWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 11: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 12: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 13: if (isWrapper) ((PlastiQQRubberBandWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QRubberBand *o = reinterpret_cast<QRubberBand*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QRubberBand *o = reinterpret_cast<QRubberBand*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QRubberBand *o = reinterpret_cast<QRubberBand*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QRubberBand *o = reinterpret_cast<QRubberBand*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQRubberBand::~PlastiQQRubberBand() {
    QRubberBand* o = reinterpret_cast<QRubberBand*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
