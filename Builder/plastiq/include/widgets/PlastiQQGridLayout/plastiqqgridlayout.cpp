#include "plastiqmethod.h"
#include "plastiqqgridlayout.h"

#include "widgets/PlastiQQLayout/plastiqqlayout.h"
#include <QGridLayout> 
#include <QRect>
#include <QLayoutItem>

QHash<QByteArray, PlastiQMethod> PlastiQQGridLayout::plastiqConstructors = {
    { "QGridLayout(QWidget*)", { "QGridLayout", "QWidget*", "QGridLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGridLayout()", { "QGridLayout", "", "QGridLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGridLayout::plastiqMethods = {
    { "addItem(QLayoutItem*,int,int)", { "addItem", "QLayoutItem*,int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QLayoutItem*,int,int,int)", { "addItem", "QLayoutItem*,int,int,int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QLayoutItem*,int,int,int,int)", { "addItem", "QLayoutItem*,int,int,int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QLayoutItem*,int,int,int,int,enum)", { "addItem", "QLayoutItem*,int,int,int,int,Qt::Alignment", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLayout(QLayout*,int,int)", { "addLayout", "QLayout*,int,int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLayout(QLayout*,int,int,enum)", { "addLayout", "QLayout*,int,int,Qt::Alignment", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLayout(QLayout*,int,int,int,int)", { "addLayout", "QLayout*,int,int,int,int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLayout(QLayout*,int,int,int,int,enum)", { "addLayout", "QLayout*,int,int,int,int,Qt::Alignment", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*,int,int)", { "addWidget", "QWidget*,int,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*,int,int,enum)", { "addWidget", "QWidget*,int,int,Qt::Alignment", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*,int,int,int,int)", { "addWidget", "QWidget*,int,int,int,int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*,int,int,int,int,enum)", { "addWidget", "QWidget*,int,int,int,int,Qt::Alignment", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cellRect(int,int)", { "cellRect", "int,int", "QRect", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnCount()", { "columnCount", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnMinimumWidth(int)", { "columnMinimumWidth", "int", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnStretch(int)", { "columnStretch", "int", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getItemPosition(int,int*,int*,int*,int*)", { "getItemPosition", "int,int*,int*,int*,int*", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalSpacing()", { "horizontalSpacing", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAtPosition(int,int)", { "itemAtPosition", "int,int", "QLayoutItem*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "originCorner()", { "originCorner", "", "Qt::Corner", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowMinimumHeight(int)", { "rowMinimumHeight", "int", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowStretch(int)", { "rowStretch", "int", "int", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnMinimumWidth(int,int)", { "setColumnMinimumWidth", "int,int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnStretch(int,int)", { "setColumnStretch", "int,int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalSpacing(int)", { "setHorizontalSpacing", "int", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOriginCorner(enum)", { "setOriginCorner", "Qt::Corner", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowMinimumHeight(int,int)", { "setRowMinimumHeight", "int,int", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowStretch(int,int)", { "setRowStretch", "int,int", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpacing(int)", { "setSpacing", "int", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalSpacing(int)", { "setVerticalSpacing", "int", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spacing()", { "spacing", "", "int", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalSpacing()", { "verticalSpacing", "", "int", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QLayoutItem*)", { "addItem", "QLayoutItem*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGridLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGridLayout::plastiqProperties = {
    { "horizontalSpacing", { "horizontalSpacing", "int", "setHorizontalSpacing", "horizontalSpacing" } },
    { "verticalSpacing", { "verticalSpacing", "int", "setVerticalSpacing", "verticalSpacing" } },

};

QHash<QByteArray, long> PlastiQQGridLayout::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGridLayout::plastiqInherits = { &PlastiQQLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGridLayout::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGridLayout::plastiq_static_metaObject = {
    { &PlastiQQLayout::plastiq_static_metaObject, &plastiqInherits, "QGridLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGridLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGridLayoutWrapper : public QGridLayout {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGridLayoutWrapper(QWidget *parent)
         : QGridLayout(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQGridLayoutWrapper()
         : QGridLayout(),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void addItem(QLayoutItem *item) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void addItem(QLayoutItem*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(item);
            stack[1].name = QByteArrayLiteral("QLayoutItem");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGridLayout::addItem(item);
    }

    void PlastiQParentCall_addItem(QLayoutItem *item) {
        return QGridLayout::addItem(item);
    }

};

void PlastiQQGridLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGridLayoutWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGridLayoutWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 1: o = new PlastiQQGridLayoutWrapper(); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGridLayout *p = new PlastiQQGridLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGridLayout *p = new PlastiQQGridLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 34) {
            id -= 34;
            PlastiQQLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGridLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QGridLayout*>(object->plastiq_data());

        switch(id) {
        case 0: o->addItem(reinterpret_cast<QLayoutItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addItem(reinterpret_cast<QLayoutItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addItem(reinterpret_cast<QLayoutItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->addItem(reinterpret_cast<QLayoutItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    Qt::Alignment(stack[6].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->addLayout(reinterpret_cast<QLayout*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->addLayout(reinterpret_cast<QLayout*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    Qt::Alignment(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->addLayout(reinterpret_cast<QLayout*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->addLayout(reinterpret_cast<QLayout*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    Qt::Alignment(stack[6].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    Qt::Alignment(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    Qt::Alignment(stack[6].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: { /* COPY OBJECT */
            QRect *_r = new QRect(o->cellRect(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->columnMinimumWidth(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { int _r = o->columnStretch(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: o->getItemPosition(stack[1].s_int,
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp),
                    reinterpret_cast<int*>(stack[5].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 17: { int _r = o->horizontalSpacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { QLayoutItem* _r = o->itemAtPosition(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QLayoutItem"; } break;
        case 19: { qint64 _r = o->originCorner(); // HACK for Qt::Corner 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { int _r = o->rowMinimumHeight(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { int _r = o->rowStretch(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 23: o->setColumnMinimumWidth(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setColumnStretch(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setHorizontalSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setOriginCorner(Qt::Corner(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setRowMinimumHeight(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setRowStretch(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setVerticalSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 31: { int _r = o->spacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 32: { int _r = o->verticalSpacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 33: if (isWrapper) ((PlastiQQGridLayoutWrapper*)o)->PlastiQParentCall_addItem(reinterpret_cast<QLayoutItem*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGridLayout *o = reinterpret_cast<QGridLayout*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGridLayout *o = reinterpret_cast<QGridLayout*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGridLayout *o = reinterpret_cast<QGridLayout*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGridLayout *o = reinterpret_cast<QGridLayout*>(object->plastiq_data());

        if(className == "QLayout") {
            stack[0].s_voidp = static_cast<QLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGridLayout::~PlastiQQGridLayout() {
    QGridLayout* o = reinterpret_cast<QGridLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
