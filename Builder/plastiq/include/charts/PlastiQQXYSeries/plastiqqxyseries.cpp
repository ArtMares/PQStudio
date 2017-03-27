#include "plastiqmethod.h"
#include "plastiqqxyseries.h"

#include "charts/PlastiQQAbstractSeries/plastiqqabstractseries.h"
#include <QXYSeries> 
#include <QPointF>
#include <QBrush>
#include <QColor>
#include <QPen>
#include <QFont>
#include <QString>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQXYSeries::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQXYSeries::plastiqMethods = {
    { "append(double,double)", { "append", "qreal,qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QPointF&)", { "append", "QPointF&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QList<QPointF>&)", { "append", "QList<QPointF>&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "at(int)", { "at", "int", "const QPointF&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "QBrush", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "color()", { "color", "", "QColor", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QPointF&)", { "insert", "int,QPointF&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointLabelsClipping()", { "pointLabelsClipping", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointLabelsColor()", { "pointLabelsColor", "", "QColor", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointLabelsFont()", { "pointLabelsFont", "", "QFont", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointLabelsFormat()", { "pointLabelsFormat", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointLabelsVisible()", { "pointLabelsVisible", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointsVisible()", { "pointsVisible", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(double,double)", { "remove", "qreal,qreal", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QPointF&)", { "remove", "QPointF&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(int)", { "remove", "int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removePoints(int,int)", { "removePoints", "int,int", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(double,double,double,double)", { "replace", "qreal,qreal,qreal,qreal", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QPointF&,QPointF&)", { "replace", "QPointF&,QPointF&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(int,double,double)", { "replace", "int,qreal,qreal", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(int,QPointF&)", { "replace", "int,QPointF&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QList<QPointF>)", { "replace", "QList<QPointF>", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QVector<QPointF>)", { "replace", "QVector<QPointF>", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(QColor&)", { "setColor", "QColor&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointLabelsClipping()", { "setPointLabelsClipping", "", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointLabelsClipping(bool)", { "setPointLabelsClipping", "bool", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointLabelsColor(QColor&)", { "setPointLabelsColor", "QColor&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointLabelsFont(QFont&)", { "setPointLabelsFont", "QFont&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointLabelsFormat(QString)", { "setPointLabelsFormat", "QString&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointLabelsVisible()", { "setPointLabelsVisible", "", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointLabelsVisible(bool)", { "setPointLabelsVisible", "bool", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointsVisible()", { "setPointsVisible", "", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointsVisible(bool)", { "setPointsVisible", "bool", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQXYSeries::plastiqSignals = {
    { "clicked(QPointF&)", { "clicked", "QPointF&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "colorChanged(QColor)", { "colorChanged", "QColor", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked(QPointF&)", { "doubleClicked", "QPointF&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(QPointF&,bool)", { "hovered", "QPointF&,bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "penChanged(QPen&)", { "penChanged", "QPen&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointAdded(int)", { "pointAdded", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointLabelsClippingChanged(bool)", { "pointLabelsClippingChanged", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointLabelsColorChanged(QColor&)", { "pointLabelsColorChanged", "QColor&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointLabelsFontChanged(QFont&)", { "pointLabelsFontChanged", "QFont&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointLabelsFormatChanged(QString)", { "pointLabelsFormatChanged", "QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointLabelsVisibilityChanged(bool)", { "pointLabelsVisibilityChanged", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointRemoved(int)", { "pointRemoved", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointReplaced(int)", { "pointReplaced", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointsRemoved(int,int)", { "pointsRemoved", "int,int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pointsReplaced()", { "pointsReplaced", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed(QPointF&)", { "pressed", "QPointF&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released(QPointF&)", { "released", "QPointF&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQXYSeries::plastiqProperties = {
    { "color", { "color", "QColor", "setColor", "color" } },
    { "pointLabelsClipping", { "pointLabelsClipping", "bool", "setPointLabelsClipping", "pointLabelsClipping" } },
    { "pointLabelsColor", { "pointLabelsColor", "QColor", "setPointLabelsColor", "pointLabelsColor" } },
    { "pointLabelsFont", { "pointLabelsFont", "QFont", "setPointLabelsFont", "pointLabelsFont" } },
    { "pointLabelsFormat", { "pointLabelsFormat", "QString", "setPointLabelsFormat", "pointLabelsFormat" } },
    { "pointLabelsVisible", { "pointLabelsVisible", "bool", "setPointLabelsVisible", "pointLabelsVisible" } },
    { "pointsVisible", { "pointsVisible", "bool", "setPointsVisible", "pointsVisible" } },

};

QHash<QByteArray, long> PlastiQQXYSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQXYSeries::plastiqInherits = { &PlastiQQAbstractSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQXYSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQXYSeries::plastiq_static_metaObject = {
    { &PlastiQQAbstractSeries::plastiq_static_metaObject, &plastiqInherits, "QXYSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQXYSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQXYSeriesWrapper : public QXYSeries {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QColor color() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QColor color()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QColor _r = QColor(*reinterpret_cast<QColor*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QXYSeries::color();
    }

    QColor PlastiQParentCall_color() const {
        return QXYSeries::color();
    }

    void setBrush(const QBrush &brush) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setBrush(const QBrush&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QBrush(brush) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QBrush");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QXYSeries::setBrush(brush);
    }

    void PlastiQParentCall_setBrush(const QBrush &brush) {
        return QXYSeries::setBrush(brush);
    }

    void setColor(const QColor &color) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setColor(const QColor&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QColor(color) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QColor");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QXYSeries::setColor(color);
    }

    void PlastiQParentCall_setColor(const QColor &color) {
        return QXYSeries::setColor(color);
    }

    void setPen(const QPen &pen) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setPen(const QPen&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QPen(pen) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPen");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QXYSeries::setPen(pen);
    }

    void PlastiQParentCall_setPen(const QPen &pen) {
        return QXYSeries::setPen(pen);
    }

};

void PlastiQQXYSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQXYSeriesWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQXYSeries *p = new PlastiQQXYSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQXYSeries *p = new PlastiQQXYSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 38) {
            id -= 38;
            PlastiQQAbstractSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QXYSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QXYSeries*>(object->plastiq_data());

        switch(id) {
        case 0: o->append(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->append((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->append((*reinterpret_cast< QList<QPointF>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->at(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 6: { /* COPY OBJECT */
            QColor *_r;
                if (isWrapper) _r = new QColor(((PlastiQQXYSeriesWrapper*)o)->PlastiQParentCall_color());
                else _r = new QColor(o->color());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: o->insert(stack[1].s_int,
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { bool _r = o->pointLabelsClipping();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { /* COPY OBJECT */
            QColor *_r = new QColor(o->pointLabelsColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QFont *_r = new QFont(o->pointLabelsFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { QString _r = o->pointLabelsFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { bool _r = o->pointLabelsVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->pointsVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: o->remove(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->remove((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->remove(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->removePoints(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->replace(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->replace((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->replace(stack[1].s_int,
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->replace(stack[1].s_int,
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: /* o->replace(UNSUPPORTED_TYPE_QList<QPointF>) | ret: `void` */ break;
        case 25: /* o->replace(UNSUPPORTED_TYPE_QVector<QPointF>) | ret: `void` */ break;
        case 26: if (isWrapper) ((PlastiQQXYSeriesWrapper*)o)->PlastiQParentCall_setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                else o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: if (isWrapper) ((PlastiQQXYSeriesWrapper*)o)->PlastiQParentCall_setColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                else o->setColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQXYSeriesWrapper*)o)->PlastiQParentCall_setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                else o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setPointLabelsClipping();
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setPointLabelsClipping(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setPointLabelsColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setPointLabelsFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setPointLabelsFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setPointLabelsVisible();
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setPointLabelsVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setPointsVisible();
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setPointsVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 17) {
            id -= 17;
            PlastiQQAbstractSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QXYSeries *o = reinterpret_cast<QXYSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QXYSeries::clicked,
            [=](const QPointF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPointF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPointF";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QXYSeries::colorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "colorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QXYSeries::doubleClicked,
            [=](const QPointF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPointF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPointF";
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QXYSeries::hovered,
            [=](const QPointF& arg0, bool arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = new QPointF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPointF";
                    cstack[1].s_bool = arg1;
                    cstack[1].type = PlastiQ::Bool; cstack[1].name = "bool";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QXYSeries::penChanged,
            [=](const QPen& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPen(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPen";
                PlastiQ_activate(sender, "penChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QXYSeries::pointAdded,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "pointAdded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QXYSeries::pointLabelsClippingChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "pointLabelsClippingChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QXYSeries::pointLabelsColorChanged,
            [=](const QColor& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "pointLabelsColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QXYSeries::pointLabelsFontChanged,
            [=](const QFont& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QFont(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QFont";
                PlastiQ_activate(sender, "pointLabelsFontChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QXYSeries::pointLabelsFormatChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "pointLabelsFormatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QXYSeries::pointLabelsVisibilityChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "pointLabelsVisibilityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QXYSeries::pointRemoved,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "pointRemoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QXYSeries::pointReplaced,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "pointReplaced", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QXYSeries::pointsRemoved,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "pointsRemoved", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 14: QObject::connect(o, &QXYSeries::pointsReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "pointsReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 15: QObject::connect(o, &QXYSeries::pressed,
            [=](const QPointF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPointF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPointF";
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 16: QObject::connect(o, &QXYSeries::released,
            [=](const QPointF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPointF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPointF";
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QXYSeries *o = reinterpret_cast<QXYSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QXYSeries *o = reinterpret_cast<QXYSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QXYSeries *o = reinterpret_cast<QXYSeries*>(object->plastiq_data());

        if(className == "QAbstractSeries") {
            stack[0].s_voidp = static_cast<QAbstractSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQXYSeries::~PlastiQQXYSeries() {
    QXYSeries* o = reinterpret_cast<QXYSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
