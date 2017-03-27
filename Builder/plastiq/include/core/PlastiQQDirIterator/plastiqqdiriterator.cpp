#include "plastiqmethod.h"
#include "plastiqqdiriterator.h"

#include <QDirIterator> 
#include <QFileInfo>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQDirIterator::plastiqConstructors = {
    { "QDirIterator(QDir&)", { "QDirIterator", "QDir&", "QDirIterator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDirIterator(QDir&,enum)", { "QDirIterator", "QDir&,IteratorFlags", "QDirIterator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDirIterator(QString)", { "QDirIterator", "QString&", "QDirIterator*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDirIterator(QString,enum)", { "QDirIterator", "QString&,IteratorFlags", "QDirIterator*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDirIterator(QString,enum,enum)", { "QDirIterator", "QString&,QDir::Filters,IteratorFlags", "QDirIterator*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDirIterator(QString,QStringList&)", { "QDirIterator", "QString&,QStringList&", "QDirIterator*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDirIterator(QString,QStringList&,enum)", { "QDirIterator", "QString&,QStringList&,QDir::Filters", "QDirIterator*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDirIterator(QString,QStringList&,enum,enum)", { "QDirIterator", "QString&,QStringList&,QDir::Filters,IteratorFlags", "QDirIterator*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDirIterator::plastiqMethods = {
    { "fileInfo()", { "fileInfo", "", "QFileInfo", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filePath()", { "filePath", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasNext()", { "hasNext", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "next()", { "next", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "path()", { "path", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDirIterator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDirIterator::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDirIterator::plastiqConstants = {

    /* QDirIterator::IteratorFlag */
   { "NoIteratorFlags", QDirIterator::NoIteratorFlags },
   { "FollowSymlinks", QDirIterator::FollowSymlinks },
   { "Subdirectories", QDirIterator::Subdirectories },

};

QVector<PlastiQMetaObject*> PlastiQQDirIterator::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDirIterator::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDirIterator::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDirIterator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDirIterator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDirIterator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDirIterator *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDirIterator((*reinterpret_cast< QDir(*) >(stack[1].s_voidp))); break;
        case 1: o = new QDirIterator((*reinterpret_cast< QDir(*) >(stack[1].s_voidp)),
                    QDirIterator::IteratorFlags(stack[2].s_int64)); break;
        case 2: o = new QDirIterator(stack[1].s_string); break;
        case 3: o = new QDirIterator(stack[1].s_string,
                    QDirIterator::IteratorFlags(stack[2].s_int64)); break;
        case 4: o = new QDirIterator(stack[1].s_string,
                    QDir::Filters(stack[2].s_int64),
                    QDirIterator::IteratorFlags(stack[3].s_int64)); break;
        case 5: o = new QDirIterator(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))); break;
        case 6: o = new QDirIterator(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    QDir::Filters(stack[3].s_int64)); break;
        case 7: o = new QDirIterator(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    QDir::Filters(stack[3].s_int64),
                    QDirIterator::IteratorFlags(stack[4].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDirIterator *p = new PlastiQQDirIterator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDirIterator *p = new PlastiQQDirIterator();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDirIterator *o = sc ? Q_NULLPTR : reinterpret_cast<QDirIterator*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QFileInfo *_r = new QFileInfo(o->fileInfo());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFileInfo";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->filePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { bool _r = o->hasNext();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { QString _r = o->next();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { QString _r = o->path();
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
        QDirIterator *o = reinterpret_cast<QDirIterator*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDirIterator::~PlastiQQDirIterator() {
    QDirIterator* o = reinterpret_cast<QDirIterator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
