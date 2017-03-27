#include "plastiqmethod.h"
#include "plastiqqfileiconprovider.h"

#include <QFileIconProvider> 
#include <QIcon>
#include <QFileInfo>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQFileIconProvider::plastiqConstructors = {
    { "QFileIconProvider()", { "QFileIconProvider", "", "QFileIconProvider*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileIconProvider::plastiqMethods = {
    { "icon(enum)", { "icon", "IconType", "QIcon", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon(QFileInfo&)", { "icon", "QFileInfo&", "QIcon", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "options()", { "options", "", "Options", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptions(enum)", { "setOptions", "Options", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type(QFileInfo&)", { "type", "QFileInfo&", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileIconProvider::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFileIconProvider::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFileIconProvider::plastiqConstants = {

    /* QFileIconProvider::IconType */
   { "Computer", QFileIconProvider::Computer },
   { "Desktop", QFileIconProvider::Desktop },
   { "Trashcan", QFileIconProvider::Trashcan },
   { "Network", QFileIconProvider::Network },
   { "Drive", QFileIconProvider::Drive },
   { "Folder", QFileIconProvider::Folder },
   { "File", QFileIconProvider::File },

    /* QFileIconProvider::Option */
   { "DontUseCustomDirectoryIcons", QFileIconProvider::DontUseCustomDirectoryIcons },

};

QVector<PlastiQMetaObject*> PlastiQQFileIconProvider::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQFileIconProvider::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQFileIconProvider::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QFileIconProvider", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFileIconProvider::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQFileIconProviderWrapper : public QFileIconProvider {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQFileIconProviderWrapper()
         : QFileIconProvider(),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QIcon icon(IconType type) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QIcon icon(IconType)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = type;
            stack[1].name = QByteArrayLiteral("IconType");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QIcon _r = QIcon(*reinterpret_cast<QIcon*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QFileIconProvider::icon(type);
    }

    QIcon PlastiQParentCall_icon(IconType type) const {
        return QFileIconProvider::icon(type);
    }

    QIcon icon(const QFileInfo &info) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QIcon icon(const QFileInfo&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QFileInfo(info) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QFileInfo");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QIcon _r = QIcon(*reinterpret_cast<QIcon*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QFileIconProvider::icon(info);
    }

    QIcon PlastiQParentCall_icon(const QFileInfo &info) const {
        return QFileIconProvider::icon(info);
    }

    QString type(const QFileInfo &info) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString type(const QFileInfo&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QFileInfo(info) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QFileInfo");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QFileIconProvider::type(info);
    }

    QString PlastiQParentCall_type(const QFileInfo &info) const {
        return QFileIconProvider::type(info);
    }

};

void PlastiQQFileIconProvider::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQFileIconProviderWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQFileIconProviderWrapper(); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQFileIconProvider *p = new PlastiQQFileIconProvider();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFileIconProvider *p = new PlastiQQFileIconProvider();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFileIconProvider *o = sc ? Q_NULLPTR : reinterpret_cast<QFileIconProvider*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QIcon *_r;
                if (isWrapper) _r = new QIcon(((PlastiQQFileIconProviderWrapper*)o)->PlastiQParentCall_icon(QFileIconProvider::IconType(stack[1].s_int64)));
                else _r = new QIcon(o->icon(QFileIconProvider::IconType(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QIcon *_r;
                if (isWrapper) _r = new QIcon(((PlastiQQFileIconProviderWrapper*)o)->PlastiQParentCall_icon((*reinterpret_cast< QFileInfo(*) >(stack[1].s_voidp))));
                else _r = new QIcon(o->icon((*reinterpret_cast< QFileInfo(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->options(); // HACK for Options 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: o->setOptions(QFileIconProvider::Options(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: { QString _r;
                if (isWrapper) _r = ((PlastiQQFileIconProviderWrapper*)o)->PlastiQParentCall_type((*reinterpret_cast< QFileInfo(*) >(stack[1].s_voidp)));
                else _r = o->type((*reinterpret_cast< QFileInfo(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QFileIconProvider *o = reinterpret_cast<QFileIconProvider*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQFileIconProvider::~PlastiQQFileIconProvider() {
    QFileIconProvider* o = reinterpret_cast<QFileIconProvider*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
