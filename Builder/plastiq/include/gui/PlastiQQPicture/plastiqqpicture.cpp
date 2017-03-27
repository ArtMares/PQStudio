#include "plastiqmethod.h"
#include "plastiqqpicture.h"

#include "gui/PlastiQQPaintDevice/plastiqqpaintdevice.h"
#include <QPicture> 
#include <QRect>

QHash<QByteArray, PlastiQMethod> PlastiQQPicture::plastiqConstructors = {
    { "QPicture()", { "QPicture", "", "QPicture*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPicture(int)", { "QPicture", "int", "QPicture*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPicture(QPicture&)", { "QPicture", "QPicture&", "QPicture*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPicture::plastiqMethods = {
    { "boundingRect()", { "boundingRect", "", "QRect", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "const char*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString)", { "load", "QString&", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString,const char*)", { "load", "QString&,char*", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QIODevice*)", { "load", "QIODevice*", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QIODevice*,const char*)", { "load", "QIODevice*,char*", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "play(QPainter*)", { "play", "QPainter*", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString)", { "save", "QString&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString,const char*)", { "save", "QString&,char*", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QIODevice*)", { "save", "QIODevice*", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QIODevice*,const char*)", { "save", "QIODevice*,char*", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBoundingRect(QRect&)", { "setBoundingRect", "QRect&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(const char*,long)", { "setData", "char*,uint", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "uint", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QPicture&)", { "swap", "QPicture&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPicture::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPicture::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPicture::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPicture::plastiqInherits = { &PlastiQQPaintDevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPicture::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPicture::plastiq_static_metaObject = {
    { &PlastiQQPaintDevice::plastiq_static_metaObject, &plastiqInherits, "QPicture", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPicture::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPictureWrapper : public QPicture {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQPictureWrapper(int formatVersion = -1)
         : QPicture(formatVersion),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQPictureWrapper(const QPicture &pic)
         : QPicture(pic),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void setData(const char *data, uint size) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setData(const char*,uint)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<char*>(data));
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = size;
            stack[2].name = QByteArrayLiteral("uint");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPicture::setData(data,size);
    }

    void PlastiQParentCall_setData(const char *data, uint size) {
        return QPicture::setData(data,size);
    }

    int metric(PaintDeviceMetric metric) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int metric(PaintDeviceMetric)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = metric;
            stack[1].name = QByteArrayLiteral("PaintDeviceMetric");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QPicture::metric(metric);
    }

    int PlastiQParentCall_metric(PaintDeviceMetric metric) const {
        return QPicture::metric(metric);
    }

};

void PlastiQQPicture::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPictureWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQPictureWrapper(); break;
        case 1: o = new PlastiQQPictureWrapper(stack[1].s_int); break;
        case 2: o = new PlastiQQPictureWrapper((*reinterpret_cast< QPicture(*) >(stack[1].s_voidp))); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPicture *p = new PlastiQQPicture();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPicture *p = new PlastiQQPicture();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            PlastiQQPaintDevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPicture *o = sc ? Q_NULLPTR : reinterpret_cast<QPicture*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { char* _r = const_cast<char*>(o->data());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;
        case 2: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->load(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->load(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->load(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->load(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->play(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->save(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->save(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->save(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->save(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: o->setBoundingRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: if (isWrapper) ((PlastiQQPictureWrapper*)o)->PlastiQParentCall_setData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else o->setData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 14: { long _r = o->size();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 15: o->swap((*reinterpret_cast< QPicture(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

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
        QPicture *o = reinterpret_cast<QPicture*>(object->plastiq_data());

        if(className == "QPaintDevice") {
            stack[0].s_voidp = static_cast<QPaintDevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPicture::~PlastiQQPicture() {
    QPicture* o = reinterpret_cast<QPicture*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
