#include "plastiqmethod.h"
#include "plastiqqmimedatabase.h"

#include <QMimeDatabase> 
#include <QMimeType>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMimeDatabase::plastiqConstructors = {
    { "QMimeDatabase()", { "QMimeDatabase", "", "QMimeDatabase*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMimeDatabase::plastiqMethods = {
    { "mimeTypeForData(QByteArray)", { "mimeTypeForData", "QByteArray&", "QMimeType", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeForData(QIODevice*)", { "mimeTypeForData", "QIODevice*", "QMimeType", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeForFile(QFileInfo&)", { "mimeTypeForFile", "QFileInfo&", "QMimeType", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeForFile(QFileInfo&,enum)", { "mimeTypeForFile", "QFileInfo&,MatchMode", "QMimeType", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeForFile(QString)", { "mimeTypeForFile", "QString&", "QMimeType", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeForFile(QString,enum)", { "mimeTypeForFile", "QString&,MatchMode", "QMimeType", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeForFileNameAndData(QString,QIODevice*)", { "mimeTypeForFileNameAndData", "QString&,QIODevice*", "QMimeType", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeForFileNameAndData(QString,QByteArray)", { "mimeTypeForFileNameAndData", "QString&,QByteArray&", "QMimeType", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeForName(QString)", { "mimeTypeForName", "QString&", "QMimeType", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypeForUrl(QUrl&)", { "mimeTypeForUrl", "QUrl&", "QMimeType", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "suffixForFileName(QString)", { "suffixForFileName", "QString&", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMimeDatabase::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMimeDatabase::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMimeDatabase::plastiqConstants = {

    /* QMimeDatabase::MatchMode */
   { "MatchDefault", QMimeDatabase::MatchDefault },
   { "MatchExtension", QMimeDatabase::MatchExtension },
   { "MatchContent", QMimeDatabase::MatchContent },

};

QVector<PlastiQMetaObject*> PlastiQQMimeDatabase::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMimeDatabase::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMimeDatabase::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMimeDatabase", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMimeDatabase::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMimeDatabase::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMimeDatabase *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMimeDatabase(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMimeDatabase *p = new PlastiQQMimeDatabase();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMimeDatabase *p = new PlastiQQMimeDatabase();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMimeDatabase *o = sc ? Q_NULLPTR : reinterpret_cast<QMimeDatabase*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForData(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForData(reinterpret_cast<QIODevice*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForFile((*reinterpret_cast< QFileInfo(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForFile((*reinterpret_cast< QFileInfo(*) >(stack[1].s_voidp)),
                    QMimeDatabase::MatchMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForFile(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForFile(stack[1].s_string,
                    QMimeDatabase::MatchMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForFileNameAndData(stack[1].s_string,
                    reinterpret_cast<QIODevice*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForFileNameAndData(stack[1].s_string,
                    stack[2].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForName(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QMimeType *_r = new QMimeType(o->mimeTypeForUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMimeType";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { QString _r = o->suffixForFileName(stack[1].s_string);
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
        QMimeDatabase *o = reinterpret_cast<QMimeDatabase*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMimeDatabase::~PlastiQQMimeDatabase() {
    QMimeDatabase* o = reinterpret_cast<QMimeDatabase*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
