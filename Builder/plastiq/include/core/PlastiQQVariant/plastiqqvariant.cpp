#include "plastiqmethod.h"
#include "plastiqqvariant.h"

#include <QVariant> 
#include <QBitArray>
#include <QByteArray>
#include <QChar>
#include <QDate>
#include <QDateTime>
#include <QEasingCurve>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QLine>
#include <QLineF>
#include <QLocale>
#include <QModelIndex>
#include <QPersistentModelIndex>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegExp>
#include <QRegularExpression>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QStringList>
#include <QTime>
#include <QUrl>
#include <QUuid>

QHash<QByteArray, PlastiQMethod> PlastiQQVariant::plastiqConstructors = {
    { "QVariant()", { "QVariant", "", "QVariant*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(Type)", { "QVariant", "Type", "QVariant*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QRegularExpression&)", { "QVariant", "QRegularExpression&", "QVariant*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QUrl&)", { "QVariant", "QUrl&", "QVariant*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QEasingCurve&)", { "QVariant", "QEasingCurve&", "QVariant*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QUuid&)", { "QVariant", "QUuid&", "QVariant*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QModelIndex&)", { "QVariant", "QModelIndex&", "QVariant*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QPersistentModelIndex&)", { "QVariant", "QPersistentModelIndex&", "QVariant*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QJsonValue&)", { "QVariant", "QJsonValue&", "QVariant*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QJsonObject&)", { "QVariant", "QJsonObject&", "QVariant*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QJsonArray&)", { "QVariant", "QJsonArray&", "QVariant*", 10, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QJsonDocument&)", { "QVariant", "QJsonDocument&", "QVariant*", 11, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QVariant&&)", { "QVariant", "QVariant&&", "QVariant*", 12, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(int,const void*)", { "QVariant", "int,void*", "QVariant*", 13, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QVariant)", { "QVariant", "QVariant&", "QVariant*", 14, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QDataStream&)", { "QVariant", "QDataStream&", "QVariant*", 15, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(int)", { "QVariant", "int", "QVariant*", 16, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(long)", { "QVariant", "uint", "QVariant*", 17, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(long)", { "QVariant", "qlonglong", "QVariant*", 18, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(long)", { "QVariant", "qulonglong", "QVariant*", 19, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(bool)", { "QVariant", "bool", "QVariant*", 20, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(double)", { "QVariant", "double", "QVariant*", 21, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(double)", { "QVariant", "float", "QVariant*", 22, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(const char*)", { "QVariant", "char*", "QVariant*", 23, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QByteArray)", { "QVariant", "QByteArray&", "QVariant*", 24, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QBitArray&)", { "QVariant", "QBitArray&", "QVariant*", 25, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QString)", { "QVariant", "QString&", "QVariant*", 26, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QLatin1String)", { "QVariant", "QLatin1String", "QVariant*", 27, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QStringList&)", { "QVariant", "QStringList&", "QVariant*", 28, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QChar)", { "QVariant", "QChar", "QVariant*", 29, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QDate&)", { "QVariant", "QDate&", "QVariant*", 30, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QTime&)", { "QVariant", "QTime&", "QVariant*", 31, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QDateTime&)", { "QVariant", "QDateTime&", "QVariant*", 32, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QList<QVariant>&)", { "QVariant", "QList<QVariant>&", "QVariant*", 33, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(const QMap<QString,QVariant>&)", { "QVariant", "QMap<QString,QVariant>&", "QVariant*", 34, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(const QHash<QString,QVariant>&)", { "QVariant", "QHash<QString,QVariant>&", "QVariant*", 35, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QSize&)", { "QVariant", "QSize&", "QVariant*", 36, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QSizeF&)", { "QVariant", "QSizeF&", "QVariant*", 37, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QPoint&)", { "QVariant", "QPoint&", "QVariant*", 38, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QPointF&)", { "QVariant", "QPointF&", "QVariant*", 39, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QLine&)", { "QVariant", "QLine&", "QVariant*", 40, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QLineF&)", { "QVariant", "QLineF&", "QVariant*", 41, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QRect&)", { "QVariant", "QRect&", "QVariant*", 42, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QRectF&)", { "QVariant", "QRectF&", "QVariant*", 43, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QLocale&)", { "QVariant", "QLocale&", "QVariant*", 44, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariant(QRegExp&)", { "QVariant", "QRegExp&", "QVariant*", 45, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVariant::plastiqMethods = {
    { "canConvert(int)", { "canConvert", "int", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convert(int)", { "convert", "int", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QVariant&)", { "swap", "QVariant&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toBitArray()", { "toBitArray", "", "QBitArray", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toBool()", { "toBool", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toByteArray()", { "toByteArray", "", "QByteArray", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toChar()", { "toChar", "", "QChar", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDate()", { "toDate", "", "QDate", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDateTime()", { "toDateTime", "", "QDateTime", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble()", { "toDouble", "", "double", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble(bool*)", { "toDouble", "bool*", "double", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toEasingCurve()", { "toEasingCurve", "", "QEasingCurve", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat()", { "toFloat", "", "float", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat(bool*)", { "toFloat", "bool*", "float", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt()", { "toInt", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(bool*)", { "toInt", "bool*", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toJsonArray()", { "toJsonArray", "", "QJsonArray", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toJsonDocument()", { "toJsonDocument", "", "QJsonDocument", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toJsonObject()", { "toJsonObject", "", "QJsonObject", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toJsonValue()", { "toJsonValue", "", "QJsonValue", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLine()", { "toLine", "", "QLine", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLineF()", { "toLineF", "", "QLineF", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLocale()", { "toLocale", "", "QLocale", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong()", { "toLongLong", "", "qlonglong", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(bool*)", { "toLongLong", "bool*", "qlonglong", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toModelIndex()", { "toModelIndex", "", "QModelIndex", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPersistentModelIndex()", { "toPersistentModelIndex", "", "QPersistentModelIndex", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPoint()", { "toPoint", "", "QPoint", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPointF()", { "toPointF", "", "QPointF", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toReal()", { "toReal", "", "qreal", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toReal(bool*)", { "toReal", "bool*", "qreal", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRect()", { "toRect", "", "QRect", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRectF()", { "toRectF", "", "QRectF", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRegExp()", { "toRegExp", "", "QRegExp", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRegularExpression()", { "toRegularExpression", "", "QRegularExpression", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toSize()", { "toSize", "", "QSize", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toSizeF()", { "toSizeF", "", "QSizeF", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toStringList()", { "toStringList", "", "QStringList", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTime()", { "toTime", "", "QTime", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt()", { "toUInt", "", "uint", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(bool*)", { "toUInt", "bool*", "uint", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong()", { "toULongLong", "", "qulonglong", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(bool*)", { "toULongLong", "bool*", "qulonglong", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUrl()", { "toUrl", "", "QUrl", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUuid()", { "toUuid", "", "QUuid", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "typeName()", { "typeName", "", "const char*", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "userType()", { "userType", "", "int", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nameToType(const char*)", { "nameToType", "char*", "Type", 52, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "typeToName(int)", { "typeToName", "int", "const char*", 53, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVariant::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVariant::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVariant::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVariant::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVariant::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQVariant::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVariant", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVariant::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVariant::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVariant *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVariant(); break;
        /*case 1: o = new QVariant(UNSUPPORTED_TYPE_Type); break;*/
        case 2: o = new QVariant((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp))); break;
        case 3: o = new QVariant((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))); break;
        case 4: o = new QVariant((*reinterpret_cast< QEasingCurve(*) >(stack[1].s_voidp))); break;
        case 5: o = new QVariant((*reinterpret_cast< QUuid(*) >(stack[1].s_voidp))); break;
        case 6: o = new QVariant((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))); break;
        case 7: o = new QVariant((*reinterpret_cast< QPersistentModelIndex(*) >(stack[1].s_voidp))); break;
        case 8: o = new QVariant((*reinterpret_cast< QJsonValue(*) >(stack[1].s_voidp))); break;
        case 9: o = new QVariant((*reinterpret_cast< QJsonObject(*) >(stack[1].s_voidp))); break;
        case 10: o = new QVariant((*reinterpret_cast< QJsonArray(*) >(stack[1].s_voidp))); break;
        case 11: o = new QVariant((*reinterpret_cast< QJsonDocument(*) >(stack[1].s_voidp))); break;
        case 12: o = new QVariant((*reinterpret_cast< QVariant(*) >(stack[1].s_voidp))); break;
        case 13: o = new QVariant(stack[1].s_int,
                    reinterpret_cast<const void*>(stack[2].s_voidp)); break;
        case 14: o = new QVariant(stack[1].s_variant); break;
        case 15: o = new QVariant((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp))); break;
        case 16: o = new QVariant(stack[1].s_int); break;
        case 17: o = new QVariant(stack[1].s_long); break;
        case 18: o = new QVariant(stack[1].s_long); break;
        case 19: o = new QVariant(stack[1].s_long); break;
        case 20: o = new QVariant(stack[1].s_bool); break;
        case 21: o = new QVariant(stack[1].s_double); break;
        case 22: o = new QVariant(stack[1].s_double); break;
        case 23: o = new QVariant(reinterpret_cast<const char*>(stack[1].s_voidp)); break;
        case 24: o = new QVariant(stack[1].s_bytearray); break;
        case 25: o = new QVariant((*reinterpret_cast< QBitArray(*) >(stack[1].s_voidp))); break;
        case 26: o = new QVariant(stack[1].s_string); break;
        case 27: o = new QVariant((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))); break;
        case 28: o = new QVariant((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); break;
        case 29: o = new QVariant((*reinterpret_cast< QChar(*) >(stack[1].s_voidp))); break;
        case 30: o = new QVariant((*reinterpret_cast< QDate(*) >(stack[1].s_voidp))); break;
        case 31: o = new QVariant((*reinterpret_cast< QTime(*) >(stack[1].s_voidp))); break;
        case 32: o = new QVariant((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp))); break;
        case 33: o = new QVariant((*reinterpret_cast< QList<QVariant>(*) >(stack[1].s_voidp))); break;
        /*case 34: o = new QVariant(UNSUPPORTED_TYPE_const QMap<QString,
                    (*reinterpret_cast< QVariant>(*) >(stack[2].s_voidp))); break;*/
        /*case 35: o = new QVariant(UNSUPPORTED_TYPE_const QHash<QString,
                    (*reinterpret_cast< QVariant>(*) >(stack[2].s_voidp))); break;*/
        case 36: o = new QVariant((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))); break;
        case 37: o = new QVariant((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp))); break;
        case 38: o = new QVariant((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))); break;
        case 39: o = new QVariant((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))); break;
        case 40: o = new QVariant((*reinterpret_cast< QLine(*) >(stack[1].s_voidp))); break;
        case 41: o = new QVariant((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp))); break;
        case 42: o = new QVariant((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))); break;
        case 43: o = new QVariant((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))); break;
        case 44: o = new QVariant((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp))); break;
        case 45: o = new QVariant((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVariant *p = new PlastiQQVariant();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVariant *p = new PlastiQQVariant();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 54) {
            id -= 54;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVariant *o = sc ? Q_NULLPTR : reinterpret_cast<QVariant*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->canConvert(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->convert(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: o->swap((*reinterpret_cast< QVariant(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: { /* COPY OBJECT */
            QBitArray *_r = new QBitArray(o->toBitArray());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { bool _r = o->toBool();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { QByteArray _r = o->toByteArray();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 9: { /* COPY OBJECT */
            QChar *_r = new QChar(o->toChar());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QDate *_r = new QDate(o->toDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->toDateTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { double _r = o->toDouble();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { double _r = o->toDouble(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 14: { /* COPY OBJECT */
            QEasingCurve *_r = new QEasingCurve(o->toEasingCurve());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QEasingCurve";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { double _r = o->toFloat();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { double _r = o->toFloat(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 17: { int _r = o->toInt();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { int _r = o->toInt(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { /* COPY OBJECT */
            QJsonArray *_r = new QJsonArray(o->toJsonArray());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { /* COPY OBJECT */
            QJsonDocument *_r = new QJsonDocument(o->toJsonDocument());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonDocument";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { /* COPY OBJECT */
            QJsonObject *_r = new QJsonObject(o->toJsonObject());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonObject";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { /* COPY OBJECT */
            QJsonValue *_r = new QJsonValue(o->toJsonValue());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonValue";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { /* COPY OBJECT */
            QLine *_r = new QLine(o->toLine());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLine";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QLineF *_r = new QLineF(o->toLineF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLineF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { /* COPY OBJECT */
            QLocale *_r = new QLocale(o->toLocale());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLocale";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { long _r = o->toLongLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 27: { long _r = o->toLongLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 28: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->toModelIndex());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { /* COPY OBJECT */
            QPersistentModelIndex *_r = new QPersistentModelIndex(o->toPersistentModelIndex());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPersistentModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->toPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->toPointF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { double _r = o->toReal();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 33: { double _r = o->toReal(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 34: { /* COPY OBJECT */
            QRect *_r = new QRect(o->toRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->toRectF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: { /* COPY OBJECT */
            QRegExp *_r = new QRegExp(o->toRegExp());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegExp";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 37: { /* COPY OBJECT */
            QRegularExpression *_r = new QRegularExpression(o->toRegularExpression());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpression";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { /* COPY OBJECT */
            QSize *_r = new QSize(o->toSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 39: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->toSizeF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 41: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->toStringList());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: { /* COPY OBJECT */
            QTime *_r = new QTime(o->toTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 43: { long _r = o->toUInt();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 44: { long _r = o->toUInt(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 45: { long _r = o->toULongLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 46: { long _r = o->toULongLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 47: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->toUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 48: { /* COPY OBJECT */
            QUuid *_r = new QUuid(o->toUuid());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUuid";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 49: /* UNSUPPORTED_RETURN_VALUE o->type() | ret: `Type` */ break;
        case 50: { char* _r = const_cast<char*>(o->typeName());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;
        case 51: { int _r = o->userType();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 52: /* UNSUPPORTED_RETURN_VALUE o->nameToType(reinterpret_cast<const char*>(stack[1].s_voidp)) | ret: `Type` */ break;
        case 53: { char* _r = sc ? const_cast<char*>(QVariant::typeToName(stack[1].s_int)) : const_cast<char*>(o->typeToName(stack[1].s_int));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;

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
        QVariant *o = reinterpret_cast<QVariant*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVariant::~PlastiQQVariant() {
    QVariant* o = reinterpret_cast<QVariant*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
