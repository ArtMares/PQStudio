#include "plastiqmethod.h"
#include "plastiqqlegend.h"

#include "widgets/PlastiQQGraphicsWidget/plastiqqgraphicswidget.h"
#include <QLegend> 
#include <QColor>
#include <QBrush>
#include <QFont>
#include <QPen>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQLegend::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQLegend::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "attachToChart()", { "attachToChart", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "borderColor()", { "borderColor", "", "QColor", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "QBrush", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "color()", { "color", "", "QColor", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "detachFromChart()", { "detachFromChart", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAttachedToChart()", { "isAttachedToChart", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBackgroundVisible()", { "isBackgroundVisible", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelBrush()", { "labelBrush", "", "QBrush", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelColor()", { "labelColor", "", "QColor", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reverseMarkers()", { "reverseMarkers", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundVisible()", { "setBackgroundVisible", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundVisible(bool)", { "setBackgroundVisible", "bool", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBorderColor(QColor)", { "setBorderColor", "QColor", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(QColor)", { "setColor", "QColor", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelBrush(QBrush&)", { "setLabelBrush", "QBrush&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelColor(QColor)", { "setLabelColor", "QColor", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReverseMarkers()", { "setReverseMarkers", "", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReverseMarkers(bool)", { "setReverseMarkers", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShowToolTips(bool)", { "setShowToolTips", "bool", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showToolTips()", { "showToolTips", "", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLegend::plastiqSignals = {
    { "backgroundVisibleChanged(bool)", { "backgroundVisibleChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "borderColorChanged(QColor)", { "borderColorChanged", "QColor", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "colorChanged(QColor)", { "colorChanged", "QColor", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "fontChanged(QFont)", { "fontChanged", "QFont", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelColorChanged(QColor)", { "labelColorChanged", "QColor", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "reverseMarkersChanged(bool)", { "reverseMarkersChanged", "bool", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "showToolTipsChanged(bool)", { "showToolTipsChanged", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQLegend::plastiqProperties = {
    { "alignment", { "alignment", "long", "setAlignment", "alignment" } },
    { "backgroundVisible", { "backgroundVisible", "bool", "setBackgroundVisible", "isBackgroundVisible" } },
    { "borderColor", { "borderColor", "QColor", "setBorderColor", "borderColor" } },
    { "color", { "color", "QColor", "setColor", "color" } },
    { "font", { "font", "QFont", "", "font" } },
    { "labelColor", { "labelColor", "QColor", "setLabelColor", "labelColor" } },
    { "reverseMarkers", { "reverseMarkers", "bool", "setReverseMarkers", "reverseMarkers" } },
    { "showToolTips", { "showToolTips", "bool", "setShowToolTips", "showToolTips" } },

};

QHash<QByteArray, long> PlastiQQLegend::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLegend::plastiqInherits = { &PlastiQQGraphicsWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLegend::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQLegend::plastiq_static_metaObject = {
    { &PlastiQQGraphicsWidget::plastiq_static_metaObject, &plastiqInherits, "QLegend", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLegend::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLegend::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLegend *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLegend *p = new PlastiQQLegend();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLegend *p = new PlastiQQLegend();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 27) {
            id -= 27;
            PlastiQQGraphicsWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLegend *o = sc ? Q_NULLPTR : reinterpret_cast<QLegend*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: o->attachToChart();
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QColor *_r = new QColor(o->borderColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QColor *_r = new QColor(o->color());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: o->detachFromChart();
                stack[0].type = PlastiQ::Void; break;
        case 6: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { bool _r = o->isAttachedToChart();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isBackgroundVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->labelBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QColor *_r = new QColor(o->labelColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { bool _r = o->reverseMarkers();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setBackgroundVisible();
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setBackgroundVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setBorderColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setLabelBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setLabelColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setReverseMarkers();
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setReverseMarkers(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setShowToolTips(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 26: { bool _r = o->showToolTips();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQGraphicsWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLegend *o = reinterpret_cast<QLegend*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QLegend::backgroundVisibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "backgroundVisibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QLegend::borderColorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "borderColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QLegend::colorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "colorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QLegend::fontChanged,
            [=](QFont arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QFont(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QFont";
                PlastiQ_activate(sender, "fontChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QLegend::labelColorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "labelColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QLegend::reverseMarkersChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "reverseMarkersChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QLegend::showToolTipsChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "showToolTipsChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLegend *o = reinterpret_cast<QLegend*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLegend *o = reinterpret_cast<QLegend*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLegend *o = reinterpret_cast<QLegend*>(object->plastiq_data());

        if(className == "QGraphicsWidget") {
            stack[0].s_voidp = static_cast<QGraphicsWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLegend::~PlastiQQLegend() {
    QLegend* o = reinterpret_cast<QLegend*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
