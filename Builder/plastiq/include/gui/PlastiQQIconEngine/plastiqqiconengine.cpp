#include "plastiqmethod.h"
#include "plastiqqiconengine.h"

#include <QIconEngine> 
#include <QSize>
#include <QString>
#include <QPixmap>
#include <QDataStream>

QHash<QByteArray, PlastiQMethod> PlastiQQIconEngine::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQIconEngine::plastiqMethods = {
    { "actualSize(QSize&,enum,enum)", { "actualSize", "QSize&,QIcon::Mode,QIcon::State", "QSize", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addFile(QString,QSize&,enum,enum)", { "addFile", "QString&,QSize&,QIcon::Mode,QIcon::State", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPixmap(QPixmap&,enum,enum)", { "addPixmap", "QPixmap&,QIcon::Mode,QIcon::State", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clone()", { "clone", "", "QIconEngine*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconName()", { "iconName", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "key()", { "key", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,QRect&,enum,enum)", { "paint", "QPainter*,QRect&,QIcon::Mode,QIcon::State", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(QSize&,enum,enum)", { "pixmap", "QSize&,QIcon::Mode,QIcon::State", "QPixmap", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(QDataStream&)", { "read", "QDataStream&", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "virtual_hook(int,void*)", { "virtual_hook", "int,void*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(QDataStream&)", { "write", "QDataStream&", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQIconEngine::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQIconEngine::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQIconEngine::plastiqConstants = {

    /* QIconEngine::IconEngineHook */
   { "AvailableSizesHook", QIconEngine::AvailableSizesHook },
   { "IconNameHook", QIconEngine::IconNameHook },
   { "IsNullHook", QIconEngine::IsNullHook },

};

QVector<PlastiQMetaObject*> PlastiQQIconEngine::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQIconEngine::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQIconEngine::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QIconEngine", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQIconEngine::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQIconEngineWrapper : public QIconEngine {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QSize actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize actualSize(const QSize&,QIcon::Mode,QIcon::State)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QSize(size) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QSize");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int64 = mode;
            stack[2].name = QByteArrayLiteral("QIcon::Mode");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_int64 = state;
            stack[3].name = QByteArrayLiteral("QIcon::State");
            stack[3].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QIconEngine::actualSize(size,mode,state);
    }

    QSize PlastiQParentCall_actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state) {
        return QIconEngine::actualSize(size,mode,state);
    }

    void addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void addFile(const QString&,const QSize&,QIcon::Mode,QIcon::State)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_string = const_cast<QString&>(fileName);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            stack[2].s_voidp = new QSize(size) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QSize");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_int64 = mode;
            stack[3].name = QByteArrayLiteral("QIcon::Mode");
            stack[3].type = PlastiQ::Enum;
            stack[4].s_int64 = state;
            stack[4].name = QByteArrayLiteral("QIcon::State");
            stack[4].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QIconEngine::addFile(fileName,size,mode,state);
    }

    void PlastiQParentCall_addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state) {
        return QIconEngine::addFile(fileName,size,mode,state);
    }

    void addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void addPixmap(const QPixmap&,QIcon::Mode,QIcon::State)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QPixmap(pixmap) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPixmap");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int64 = mode;
            stack[2].name = QByteArrayLiteral("QIcon::Mode");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_int64 = state;
            stack[3].name = QByteArrayLiteral("QIcon::State");
            stack[3].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QIconEngine::addPixmap(pixmap,mode,state);
    }

    void PlastiQParentCall_addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state) {
        return QIconEngine::addPixmap(pixmap,mode,state);
    }

    QString iconName() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString iconName()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QIconEngine::iconName();
    }

    QString PlastiQParentCall_iconName() const {
        return QIconEngine::iconName();
    }

    QString key() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString key()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QIconEngine::key();
    }

    QString PlastiQParentCall_key() const {
        return QIconEngine::key();
    }

    QPixmap pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QPixmap pixmap(const QSize&,QIcon::Mode,QIcon::State)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QSize(size) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QSize");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int64 = mode;
            stack[2].name = QByteArrayLiteral("QIcon::Mode");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_int64 = state;
            stack[3].name = QByteArrayLiteral("QIcon::State");
            stack[3].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QPixmap _r = QPixmap(*reinterpret_cast<QPixmap*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QIconEngine::pixmap(size,mode,state);
    }

    QPixmap PlastiQParentCall_pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state) {
        return QIconEngine::pixmap(size,mode,state);
    }

    void virtual_hook(int id, void *data) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void virtual_hook(int,void*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = id;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_voidp = reinterpret_cast<void*>(data);
            stack[2].name = QByteArrayLiteral("void");
            stack[2].type = PlastiQ::ObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QIconEngine::virtual_hook(id,data);
    }

    void PlastiQParentCall_virtual_hook(int id, void *data) {
        return QIconEngine::virtual_hook(id,data);
    }

};

void PlastiQQIconEngine::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQIconEngineWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQIconEngine *p = new PlastiQQIconEngine();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQIconEngine *p = new PlastiQQIconEngine();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QIconEngine *o = sc ? Q_NULLPTR : reinterpret_cast<QIconEngine*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQIconEngineWrapper*)o)->PlastiQParentCall_actualSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64)));
                else _r = new QSize(o->actualSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: if (isWrapper) ((PlastiQQIconEngineWrapper*)o)->PlastiQParentCall_addFile(stack[1].s_string,
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    QIcon::Mode(stack[3].s_int64),
                    QIcon::State(stack[4].s_int64));
                else o->addFile(stack[1].s_string,
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    QIcon::Mode(stack[3].s_int64),
                    QIcon::State(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: if (isWrapper) ((PlastiQQIconEngineWrapper*)o)->PlastiQParentCall_addPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64));
                else o->addPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: { QIconEngine* _r = o->clone();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QIconEngine"; } break;
        case 4: { QString _r;
                if (isWrapper) _r = ((PlastiQQIconEngineWrapper*)o)->PlastiQParentCall_iconName();
                else _r = o->iconName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { QString _r;
                if (isWrapper) _r = ((PlastiQQIconEngineWrapper*)o)->PlastiQParentCall_key();
                else _r = o->key();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    QIcon::Mode(stack[3].s_int64),
                    QIcon::State(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: { /* COPY OBJECT */
            QPixmap *_r;
                if (isWrapper) _r = new QPixmap(((PlastiQQIconEngineWrapper*)o)->PlastiQParentCall_pixmap((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64)));
                else _r = new QPixmap(o->pixmap((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QIcon::Mode(stack[2].s_int64),
                    QIcon::State(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { bool _r = o->read((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: if (isWrapper) ((PlastiQQIconEngineWrapper*)o)->PlastiQParentCall_virtual_hook(stack[1].s_int,
                    reinterpret_cast<void*>(stack[2].s_voidp));
                else o->virtual_hook(stack[1].s_int,
                    reinterpret_cast<void*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: { bool _r = o->write((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QIconEngine *o = reinterpret_cast<QIconEngine*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQIconEngine::~PlastiQQIconEngine() {
    QIconEngine* o = reinterpret_cast<QIconEngine*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
