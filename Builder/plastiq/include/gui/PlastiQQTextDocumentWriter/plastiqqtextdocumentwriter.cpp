#include "plastiqmethod.h"
#include "plastiqqtextdocumentwriter.h"

#include <QTextDocumentWriter> 
#include <QTextCodec>
#include <QIODevice>
#include <QString>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQTextDocumentWriter::plastiqConstructors = {
    { "QTextDocumentWriter()", { "QTextDocumentWriter", "", "QTextDocumentWriter*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDocumentWriter(QIODevice*,QByteArray)", { "QTextDocumentWriter", "QIODevice*,QByteArray&", "QTextDocumentWriter*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDocumentWriter(QString)", { "QTextDocumentWriter", "QString&", "QTextDocumentWriter*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDocumentWriter(QString,QByteArray)", { "QTextDocumentWriter", "QString&,QByteArray&", "QTextDocumentWriter*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextDocumentWriter::plastiqMethods = {
    { "codec()", { "codec", "", "QTextCodec*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "QIODevice*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QByteArray", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCodec(QTextCodec*)", { "setCodec", "QTextCodec*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDevice(QIODevice*)", { "setDevice", "QIODevice*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileName(QString)", { "setFileName", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QByteArray)", { "setFormat", "QByteArray&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(const QTextDocument*)", { "write", "QTextDocument*", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(QTextDocumentFragment&)", { "write", "QTextDocumentFragment&", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextDocumentWriter::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextDocumentWriter::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextDocumentWriter::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextDocumentWriter::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextDocumentWriter::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextDocumentWriter::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextDocumentWriter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextDocumentWriter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextDocumentWriter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextDocumentWriter *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextDocumentWriter(); break;
        case 1: o = new QTextDocumentWriter(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    stack[2].s_bytearray); break;
        case 2: o = new QTextDocumentWriter(stack[1].s_string); break;
        case 3: o = new QTextDocumentWriter(stack[1].s_string,
                    stack[2].s_bytearray); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextDocumentWriter *p = new PlastiQQTextDocumentWriter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextDocumentWriter *p = new PlastiQQTextDocumentWriter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextDocumentWriter *o = sc ? Q_NULLPTR : reinterpret_cast<QTextDocumentWriter*>(object->plastiq_data());

        switch(id) {
        case 0: { QTextCodec* _r = o->codec();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QTextCodec"; } break;
        case 1: { QIODevice* _r = o->device();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 2: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QByteArray _r = o->format();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 4: o->setCodec(reinterpret_cast<QTextCodec*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setFileName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFormat(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 8: { bool _r = o->write(reinterpret_cast<const QTextDocument*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->write((*reinterpret_cast< QTextDocumentFragment(*) >(stack[1].s_voidp)));
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
        QTextDocumentWriter *o = reinterpret_cast<QTextDocumentWriter*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextDocumentWriter::~PlastiQQTextDocumentWriter() {
    QTextDocumentWriter* o = reinterpret_cast<QTextDocumentWriter*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
