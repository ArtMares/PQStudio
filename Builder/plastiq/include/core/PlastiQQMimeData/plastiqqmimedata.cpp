#include "plastiqmethod.h"
#include "plastiqqmimedata.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QMimeData> 
#include <QVariant>
#include <QByteArray>
#include <QStringList>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMimeData::plastiqConstructors = {
    { "QMimeData()", { "QMimeData", "", "QMimeData*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMimeData::plastiqMethods = {
    { "clear()", { "clear", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "colorData()", { "colorData", "", "QVariant", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(QString)", { "data", "QString&", "QByteArray", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "formats()", { "formats", "", "QStringList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasColor()", { "hasColor", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasFormat(QString)", { "hasFormat", "QString&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasHtml()", { "hasHtml", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasImage()", { "hasImage", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasText()", { "hasText", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasUrls()", { "hasUrls", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "html()", { "html", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "imageData()", { "imageData", "", "QVariant", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeFormat(QString)", { "removeFormat", "QString&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColorData(QVariant)", { "setColorData", "QVariant&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(QString,QByteArray)", { "setData", "QString&,QByteArray&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHtml(QString)", { "setHtml", "QString&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setImageData(QVariant)", { "setImageData", "QVariant&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUrls(QList<QUrl>&)", { "setUrls", "QList<QUrl>&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "retrieveData(QString,QVariant::Type)", { "retrieveData", "QString&,QVariant::Type", "QVariant", 20, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMimeData::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMimeData::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMimeData::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMimeData::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMimeData::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMimeData::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QMimeData", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMimeData::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQMimeDataWrapper : public QMimeData {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQMimeDataWrapper()
         : QMimeData(),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QStringList formats() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QStringList formats()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QStringList _r = QStringList(*reinterpret_cast<QStringList*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QMimeData::formats();
    }

    QStringList PlastiQParentCall_formats() const {
        return QMimeData::formats();
    }

    bool hasFormat(const QString &mimeType) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool hasFormat(const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_string = const_cast<QString&>(mimeType);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QMimeData::hasFormat(mimeType);
    }

    bool PlastiQParentCall_hasFormat(const QString &mimeType) const {
        return QMimeData::hasFormat(mimeType);
    }

    QVariant retrieveData(const QString &mimeType, QVariant::Type type) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant retrieveData(const QString&,QVariant::Type)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_string = const_cast<QString&>(mimeType);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            stack[2].s_voidp = reinterpret_cast<void*>(&type);
            stack[2].name = QByteArrayLiteral("QVariant::Type");
            stack[2].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QMimeData::retrieveData(mimeType,type);
    }

    QVariant PlastiQParentCall_retrieveData(const QString &mimeType, QVariant::Type type) const {
        return QMimeData::retrieveData(mimeType,type);
    }

};

void PlastiQQMimeData::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQMimeDataWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQMimeDataWrapper(); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQMimeData *p = new PlastiQQMimeData();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMimeData *p = new PlastiQQMimeData();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMimeData *o = sc ? Q_NULLPTR : reinterpret_cast<QMimeData*>(object->plastiq_data());

        switch(id) {
        case 0: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->colorData());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QByteArray _r = o->data(stack[1].s_string);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 3: { /* COPY OBJECT */
            QStringList *_r;
                if (isWrapper) _r = new QStringList(((PlastiQQMimeDataWrapper*)o)->PlastiQParentCall_formats());
                else _r = new QStringList(o->formats());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r = o->hasColor();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r;
                if (isWrapper) _r = ((PlastiQQMimeDataWrapper*)o)->PlastiQParentCall_hasFormat(stack[1].s_string);
                else _r = o->hasFormat(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->hasHtml();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->hasImage();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->hasText();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->hasUrls();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { QString _r = o->html();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->imageData());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: o->removeFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setColorData(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setData(stack[1].s_string,
                    stack[2].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setHtml(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setImageData(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setUrls((*reinterpret_cast< QList<QUrl>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 19: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 20: /* o->retrieveData(stack[1].s_string,
                    UNSUPPORTED_TYPE_QVariant::Type) | ret: `QVariant` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMimeData *o = reinterpret_cast<QMimeData*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMimeData *o = reinterpret_cast<QMimeData*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMimeData *o = reinterpret_cast<QMimeData*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMimeData *o = reinterpret_cast<QMimeData*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMimeData::~PlastiQQMimeData() {
    QMimeData* o = reinterpret_cast<QMimeData*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
