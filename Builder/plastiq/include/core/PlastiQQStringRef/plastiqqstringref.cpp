#include "plastiqmethod.h"
#include "plastiqqstringref.h"

#include <QStringRef> 
#include <QChar>
#include <QString>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQStringRef::plastiqConstructors = {
    { "QStringRef()", { "QStringRef", "", "QStringRef*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringRef(const QString*,int,int)", { "QStringRef", "QString*,int,int", "QStringRef*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringRef(const QString*)", { "QStringRef", "QString*", "QStringRef*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringRef(QStringRef&)", { "QStringRef", "QStringRef&", "QStringRef*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringRef(QStringRef&&)", { "QStringRef", "QStringRef&&", "QStringRef*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStringRef::plastiqMethods = {
    { "appendTo(QString*)", { "appendTo", "QString*", "QStringRef", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "at(int)", { "at", "int", "const QChar", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "begin()", { "begin", "", "const_iterator", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cbegin()", { "cbegin", "", "const_iterator", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cend()", { "cend", "", "const_iterator", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "chop(int)", { "chop", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QStringRef&)", { "compare", "QStringRef&", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QStringRef&,enum)", { "compare", "QStringRef&,Qt::CaseSensitivity", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QLatin1String)", { "compare", "QLatin1String", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QLatin1String,enum)", { "compare", "QLatin1String,Qt::CaseSensitivity", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QByteArray)", { "compare", "QByteArray&", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QByteArray,enum)", { "compare", "QByteArray&,Qt::CaseSensitivity", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QString)", { "compare", "QString&", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QString,enum)", { "compare", "QString&,Qt::CaseSensitivity", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constData()", { "constData", "", "const QChar*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QString)", { "contains", "QString&", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QString,enum)", { "contains", "QString&,Qt::CaseSensitivity", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QChar)", { "contains", "QChar", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QChar,enum)", { "contains", "QChar,Qt::CaseSensitivity", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QLatin1String)", { "contains", "QLatin1String", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QLatin1String,enum)", { "contains", "QLatin1String,Qt::CaseSensitivity", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QStringRef&)", { "contains", "QStringRef&", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QStringRef&,enum)", { "contains", "QStringRef&,Qt::CaseSensitivity", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QString)", { "count", "QString&", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QString,enum)", { "count", "QString&,Qt::CaseSensitivity", "int", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QChar)", { "count", "QChar", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QChar,enum)", { "count", "QChar,Qt::CaseSensitivity", "int", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QStringRef&)", { "count", "QStringRef&", "int", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QStringRef&,enum)", { "count", "QStringRef&,Qt::CaseSensitivity", "int", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "crbegin()", { "crbegin", "", "const_reverse_iterator", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "crend()", { "crend", "", "const_reverse_iterator", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "const QChar*", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "const_iterator", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QString)", { "endsWith", "QString&", "bool", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QString,enum)", { "endsWith", "QString&,Qt::CaseSensitivity", "bool", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QLatin1String)", { "endsWith", "QLatin1String", "bool", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QLatin1String,enum)", { "endsWith", "QLatin1String,Qt::CaseSensitivity", "bool", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QChar)", { "endsWith", "QChar", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QChar,enum)", { "endsWith", "QChar,Qt::CaseSensitivity", "bool", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QStringRef&)", { "endsWith", "QStringRef&", "bool", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QStringRef&,enum)", { "endsWith", "QStringRef&,Qt::CaseSensitivity", "bool", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QString)", { "indexOf", "QString&", "int", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QString,int)", { "indexOf", "QString&,int", "int", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QString,int,enum)", { "indexOf", "QString&,int,Qt::CaseSensitivity", "int", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QChar)", { "indexOf", "QChar", "int", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QChar,int)", { "indexOf", "QChar,int", "int", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QChar,int,enum)", { "indexOf", "QChar,int,Qt::CaseSensitivity", "int", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QLatin1String)", { "indexOf", "QLatin1String", "int", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QLatin1String,int)", { "indexOf", "QLatin1String,int", "int", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QLatin1String,int,enum)", { "indexOf", "QLatin1String,int,Qt::CaseSensitivity", "int", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QStringRef&)", { "indexOf", "QStringRef&", "int", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QStringRef&,int)", { "indexOf", "QStringRef&,int", "int", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QStringRef&,int,enum)", { "indexOf", "QStringRef&,int,Qt::CaseSensitivity", "int", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QString)", { "lastIndexOf", "QString&", "int", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QString,int)", { "lastIndexOf", "QString&,int", "int", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QString,int,enum)", { "lastIndexOf", "QString&,int,Qt::CaseSensitivity", "int", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QChar)", { "lastIndexOf", "QChar", "int", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QChar,int)", { "lastIndexOf", "QChar,int", "int", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QChar,int,enum)", { "lastIndexOf", "QChar,int,Qt::CaseSensitivity", "int", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QLatin1String)", { "lastIndexOf", "QLatin1String", "int", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QLatin1String,int)", { "lastIndexOf", "QLatin1String,int", "int", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QLatin1String,int,enum)", { "lastIndexOf", "QLatin1String,int,Qt::CaseSensitivity", "int", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QStringRef&)", { "lastIndexOf", "QStringRef&", "int", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QStringRef&,int)", { "lastIndexOf", "QStringRef&,int", "int", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QStringRef&,int,enum)", { "lastIndexOf", "QStringRef&,int,Qt::CaseSensitivity", "int", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "left(int)", { "left", "int", "QStringRef", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "int", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localeAwareCompare(QStringRef&)", { "localeAwareCompare", "QStringRef&", "int", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localeAwareCompare(QString)", { "localeAwareCompare", "QString&", "int", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mid(int)", { "mid", "int", "QStringRef", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mid(int,int)", { "mid", "int,int", "QStringRef", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "int", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rbegin()", { "rbegin", "", "const_reverse_iterator", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rend()", { "rend", "", "const_reverse_iterator", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "right(int)", { "right", "int", "QStringRef", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QString)", { "startsWith", "QString&", "bool", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QString,enum)", { "startsWith", "QString&,Qt::CaseSensitivity", "bool", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QLatin1String)", { "startsWith", "QLatin1String", "bool", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QLatin1String,enum)", { "startsWith", "QLatin1String,Qt::CaseSensitivity", "bool", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QChar)", { "startsWith", "QChar", "bool", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QChar,enum)", { "startsWith", "QChar,Qt::CaseSensitivity", "bool", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QStringRef&)", { "startsWith", "QStringRef&", "bool", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QStringRef&,enum)", { "startsWith", "QStringRef&,Qt::CaseSensitivity", "bool", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "string()", { "string", "", "const QString*", 88, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble()", { "toDouble", "", "double", 89, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble(bool*)", { "toDouble", "bool*", "double", 90, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat()", { "toFloat", "", "float", 91, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat(bool*)", { "toFloat", "bool*", "float", 92, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt()", { "toInt", "", "int", 93, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(bool*)", { "toInt", "bool*", "int", 94, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(bool*,int)", { "toInt", "bool*,int", "int", 95, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLatin1()", { "toLatin1", "", "QByteArray", 96, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLocal8Bit()", { "toLocal8Bit", "", "QByteArray", 97, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLong()", { "toLong", "", "long", 98, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLong(bool*)", { "toLong", "bool*", "long", 99, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLong(bool*,int)", { "toLong", "bool*,int", "long", 100, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong()", { "toLongLong", "", "qlonglong", 101, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(bool*)", { "toLongLong", "bool*", "qlonglong", 102, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(bool*,int)", { "toLongLong", "bool*,int", "qlonglong", 103, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort()", { "toShort", "", "short", 104, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(bool*)", { "toShort", "bool*", "short", 105, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(bool*,int)", { "toShort", "bool*,int", "short", 106, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 107, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt()", { "toUInt", "", "uint", 108, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(bool*)", { "toUInt", "bool*", "uint", 109, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(bool*,int)", { "toUInt", "bool*,int", "uint", 110, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULong()", { "toULong", "", "ulong", 111, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULong(bool*)", { "toULong", "bool*", "ulong", 112, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULong(bool*,int)", { "toULong", "bool*,int", "ulong", 113, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong()", { "toULongLong", "", "qulonglong", 114, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(bool*)", { "toULongLong", "bool*", "qulonglong", 115, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(bool*,int)", { "toULongLong", "bool*,int", "qulonglong", 116, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort()", { "toUShort", "", "ushort", 117, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(bool*)", { "toUShort", "bool*", "ushort", 118, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(bool*,int)", { "toUShort", "bool*,int", "ushort", 119, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUtf8()", { "toUtf8", "", "QByteArray", 120, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "trimmed()", { "trimmed", "", "QStringRef", 121, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "truncate(int)", { "truncate", "int", "void", 122, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unicode()", { "unicode", "", "const QChar*", 123, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QStringRef&,QString)", { "compare", "QStringRef&,QString&", "int", 124, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QStringRef&,QString,enum)", { "compare", "QStringRef&,QString&,Qt::CaseSensitivity", "int", 125, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QStringRef&,QStringRef&)", { "compare", "QStringRef&,QStringRef&", "int", 126, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QStringRef&,QStringRef&,enum)", { "compare", "QStringRef&,QStringRef&,Qt::CaseSensitivity", "int", 127, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QStringRef&,QLatin1String)", { "compare", "QStringRef&,QLatin1String", "int", 128, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QStringRef&,QLatin1String,enum)", { "compare", "QStringRef&,QLatin1String,Qt::CaseSensitivity", "int", 129, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "localeAwareCompare(QStringRef&,QString)", { "localeAwareCompare", "QStringRef&,QString&", "int", 130, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "localeAwareCompare(QStringRef&,QStringRef&)", { "localeAwareCompare", "QStringRef&,QStringRef&", "int", 131, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStringRef::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStringRef::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStringRef::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStringRef::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStringRef::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStringRef::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStringRef", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStringRef::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStringRef::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStringRef *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStringRef(); break;
        case 1: o = new QStringRef(reinterpret_cast<const QString*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int); break;
        case 2: o = new QStringRef(reinterpret_cast<const QString*>(stack[1].s_voidp)); break;
        case 3: o = new QStringRef((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp))); break;
        case 4: o = new QStringRef((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStringRef *p = new PlastiQQStringRef();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStringRef *p = new PlastiQQStringRef();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 132) {
            id -= 132;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStringRef *o = sc ? Q_NULLPTR : reinterpret_cast<QStringRef*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->appendTo(reinterpret_cast<QString*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QChar *_r = new QChar(o->at(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: /* o->begin() | ret: `const_iterator` */ break;
        case 3: /* o->cbegin() | ret: `const_iterator` */ break;
        case 4: /* o->cend() | ret: `const_iterator` */ break;
        case 5: o->chop(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 7: { int _r = o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r = o->compare((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { int _r = o->compare((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { int _r = o->compare(stack[1].s_bytearray);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->compare(stack[1].s_bytearray,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->compare(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->compare(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { QChar* _r = const_cast<QChar*>(o->constData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QChar"; } break;
        case 16: { bool _r = o->contains(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->contains(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->contains((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->contains((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->contains((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->contains((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = o->contains((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = o->contains((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { int _r = o->count(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: { int _r = o->count(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 27: { int _r = o->count((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 28: { int _r = o->count((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 29: { int _r = o->count((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 30: { int _r = o->count((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 31: /* o->crbegin() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 32: /* o->crend() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 33: { QChar* _r = const_cast<QChar*>(o->data());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QChar"; } break;
        case 34: /* o->end() | ret: `const_iterator` */ break;
        case 35: { bool _r = o->endsWith(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 36: { bool _r = o->endsWith(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 37: { bool _r = o->endsWith((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 38: { bool _r = o->endsWith((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: { bool _r = o->endsWith((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: { bool _r = o->endsWith((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { bool _r = o->endsWith((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 42: { bool _r = o->endsWith((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 43: { int _r = o->indexOf(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 44: { int _r = o->indexOf(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 45: { int _r = o->indexOf(stack[1].s_string,
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 46: { int _r = o->indexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 47: { int _r = o->indexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 48: { int _r = o->indexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 49: { int _r = o->indexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 50: { int _r = o->indexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 51: { int _r = o->indexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 52: { int _r = o->indexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 53: { int _r = o->indexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 54: { int _r = o->indexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 55: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 56: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 57: { int _r = o->lastIndexOf(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 58: { int _r = o->lastIndexOf(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 59: { int _r = o->lastIndexOf(stack[1].s_string,
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 60: { int _r = o->lastIndexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 61: { int _r = o->lastIndexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 62: { int _r = o->lastIndexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 63: { int _r = o->lastIndexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 64: { int _r = o->lastIndexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 65: { int _r = o->lastIndexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 66: { int _r = o->lastIndexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 67: { int _r = o->lastIndexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 68: { int _r = o->lastIndexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 69: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->left(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 70: { int _r = o->length();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 71: { int _r = o->localeAwareCompare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 72: { int _r = o->localeAwareCompare(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 73: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->mid(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 74: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->mid(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 75: { int _r = o->position();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 76: /* o->rbegin() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 77: /* o->rend() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 78: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->right(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 79: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 80: { bool _r = o->startsWith(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 81: { bool _r = o->startsWith(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 82: { bool _r = o->startsWith((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 83: { bool _r = o->startsWith((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 84: { bool _r = o->startsWith((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 85: { bool _r = o->startsWith((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 86: { bool _r = o->startsWith((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 87: { bool _r = o->startsWith((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 88: { QString* _r = const_cast<QString*>(o->string());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QString"; } break;
        case 89: { double _r = o->toDouble();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 90: { double _r = o->toDouble(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 91: { double _r = o->toFloat();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 92: { double _r = o->toFloat(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 93: { int _r = o->toInt();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 94: { int _r = o->toInt(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 95: { int _r = o->toInt(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 96: { QByteArray _r = o->toLatin1();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 97: { QByteArray _r = o->toLocal8Bit();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 98: { long _r = o->toLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 99: { long _r = o->toLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 100: { long _r = o->toLong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 101: { long _r = o->toLongLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 102: { long _r = o->toLongLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 103: { long _r = o->toLongLong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 104: { int _r = o->toShort();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 105: { int _r = o->toShort(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 106: { int _r = o->toShort(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 107: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 108: { long _r = o->toUInt();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 109: { long _r = o->toUInt(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 110: { long _r = o->toUInt(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 111: { long _r = o->toULong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 112: { long _r = o->toULong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 113: { long _r = o->toULong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 114: { long _r = o->toULongLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 115: { long _r = o->toULongLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 116: { long _r = o->toULongLong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 117: { int _r = o->toUShort();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 118: { int _r = o->toUShort(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 119: { int _r = o->toUShort(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 120: { QByteArray _r = o->toUtf8();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 121: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->trimmed());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 122: o->truncate(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 123: { QChar* _r = const_cast<QChar*>(o->unicode());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QChar"; } break;
        case 124: { int _r = sc ? QStringRef::compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_string) : o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 125: { int _r = sc ? QStringRef::compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64)) : o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 126: { int _r = sc ? QStringRef::compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp))) : o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 127: { int _r = sc ? QStringRef::compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64)) : o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 128: { int _r = sc ? QStringRef::compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp))) : o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 129: { int _r = sc ? QStringRef::compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64)) : o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 130: { int _r = sc ? QStringRef::localeAwareCompare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_string) : o->localeAwareCompare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 131: { int _r = sc ? QStringRef::localeAwareCompare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp))) : o->localeAwareCompare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QStringRef *o = reinterpret_cast<QStringRef*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStringRef::~PlastiQQStringRef() {
    QStringRef* o = reinterpret_cast<QStringRef*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
