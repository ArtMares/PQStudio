#include "plastiqmethod.h"
#include "plastiqqlayoutitem.h"

#include <QLayoutItem> 
#include <QRect>
#include <QLayout>
#include <QSize>
#include <QSpacerItem>
#include <QWidget>

QHash<QByteArray, PlastiQMethod> PlastiQQLayoutItem::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQLayoutItem::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "controlTypes()", { "controlTypes", "", "QSizePolicy::ControlTypes", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expandingDirections()", { "expandingDirections", "", "Qt::Orientations", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "geometry()", { "geometry", "", "QRect", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasHeightForWidth()", { "hasHeightForWidth", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "heightForWidth(int)", { "heightForWidth", "int", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invalidate()", { "invalidate", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layout()", { "layout", "", "QLayout*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumSize()", { "maximumSize", "", "QSize", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumHeightForWidth(int)", { "minimumHeightForWidth", "int", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumSize()", { "minimumSize", "", "QSize", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGeometry(QRect&)", { "setGeometry", "QRect&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHint()", { "sizeHint", "", "QSize", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spacerItem()", { "spacerItem", "", "QSpacerItem*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget()", { "widget", "", "QWidget*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLayoutItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLayoutItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLayoutItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLayoutItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQLayoutItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQLayoutItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QLayoutItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLayoutItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQLayoutItemWrapper : public QLayoutItem {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    ~PlastiQQLayoutItemWrapper() { PlastiQ_self_destroy(pqObjectWPtr); }

    QSizePolicy::ControlTypes controlTypes() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSizePolicy::ControlTypes controlTypes()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSizePolicy::ControlTypes _r = QSizePolicy::ControlTypes(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QLayoutItem::controlTypes();
    }

    QSizePolicy::ControlTypes PlastiQParentCall_controlTypes() const {
        return QLayoutItem::controlTypes();
    }

    bool hasHeightForWidth() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool hasHeightForWidth()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLayoutItem::hasHeightForWidth();
    }

    bool PlastiQParentCall_hasHeightForWidth() const {
        return QLayoutItem::hasHeightForWidth();
    }

    int heightForWidth(int w) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int heightForWidth(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = w;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QLayoutItem::heightForWidth(w);
    }

    int PlastiQParentCall_heightForWidth(int w) const {
        return QLayoutItem::heightForWidth(w);
    }

    void invalidate() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void invalidate()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLayoutItem::invalidate();
    }

    void PlastiQParentCall_invalidate() {
        return QLayoutItem::invalidate();
    }

    QLayout* layout() override {
        static const QByteArray methodSignature = QByteArrayLiteral("QLayout* layout()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QLayout* _r = reinterpret_cast<QLayout*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QLayoutItem::layout();
    }

    QLayout* PlastiQParentCall_layout() {
        return QLayoutItem::layout();
    }

    int minimumHeightForWidth(int w) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int minimumHeightForWidth(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = w;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QLayoutItem::minimumHeightForWidth(w);
    }

    int PlastiQParentCall_minimumHeightForWidth(int w) const {
        return QLayoutItem::minimumHeightForWidth(w);
    }

    QSpacerItem* spacerItem() override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSpacerItem* spacerItem()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSpacerItem* _r = reinterpret_cast<QSpacerItem*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QLayoutItem::spacerItem();
    }

    QSpacerItem* PlastiQParentCall_spacerItem() {
        return QLayoutItem::spacerItem();
    }

    QWidget* widget() override {
        static const QByteArray methodSignature = QByteArrayLiteral("QWidget* widget()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QWidget* _r = reinterpret_cast<QWidget*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QLayoutItem::widget();
    }

    QWidget* PlastiQParentCall_widget() {
        return QLayoutItem::widget();
    }

};

void PlastiQQLayoutItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQLayoutItemWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQLayoutItem *p = new PlastiQQLayoutItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLayoutItem *p = new PlastiQQLayoutItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLayoutItem *o = sc ? Q_NULLPTR : reinterpret_cast<QLayoutItem*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQLayoutItemWrapper*)o)->PlastiQParentCall_controlTypes();
                else _r = o->controlTypes(); // HACK for QSizePolicy::ControlTypes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->expandingDirections(); // HACK for Qt::Orientations 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QRect *_r = new QRect(o->geometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r;
                if (isWrapper) _r = ((PlastiQQLayoutItemWrapper*)o)->PlastiQParentCall_hasHeightForWidth();
                else _r = o->hasHeightForWidth();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { int _r;
                if (isWrapper) _r = ((PlastiQQLayoutItemWrapper*)o)->PlastiQParentCall_heightForWidth(stack[1].s_int);
                else _r = o->heightForWidth(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: if (isWrapper) ((PlastiQQLayoutItemWrapper*)o)->PlastiQParentCall_invalidate();
                else o->invalidate();
                stack[0].type = PlastiQ::Void; break;
        case 7: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { QLayout* _r;
                if (isWrapper) _r = ((PlastiQQLayoutItemWrapper*)o)->PlastiQParentCall_layout();
                else _r = o->layout();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QLayout"; } break;
        case 9: { /* COPY OBJECT */
            QSize *_r = new QSize(o->maximumSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { int _r;
                if (isWrapper) _r = ((PlastiQQLayoutItemWrapper*)o)->PlastiQParentCall_minimumHeightForWidth(stack[1].s_int);
                else _r = o->minimumHeightForWidth(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { /* COPY OBJECT */
            QSize *_r = new QSize(o->minimumSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setGeometry((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeHint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { QSpacerItem* _r;
                if (isWrapper) _r = ((PlastiQQLayoutItemWrapper*)o)->PlastiQParentCall_spacerItem();
                else _r = o->spacerItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QSpacerItem"; } break;
        case 16: { QWidget* _r;
                if (isWrapper) _r = ((PlastiQQLayoutItemWrapper*)o)->PlastiQParentCall_widget();
                else _r = o->widget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;

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
        QLayoutItem *o = reinterpret_cast<QLayoutItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQLayoutItem::~PlastiQQLayoutItem() {
    QLayoutItem* o = reinterpret_cast<QLayoutItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
