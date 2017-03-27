#include "plastiqmethod.h"
#include "plastiqqstring.h"

#include <QString> 
#include <QChar>
#include <QStringRef>
#include <QStringList>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQString::plastiqConstructors = {
    { "QString()", { "QString", "", "QString*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QString(const QChar*)", { "QString", "QChar*", "QString*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QString(const QChar*,int)", { "QString", "QChar*,int", "QString*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QString(QChar)", { "QString", "QChar", "QString*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QString(int,QChar)", { "QString", "int,QChar", "QString*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QString(QLatin1String)", { "QString", "QLatin1String", "QString*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QString(QString)", { "QString", "QString&", "QString*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QString(QString&&)", { "QString", "QString&&", "QString*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QString(const char*)", { "QString", "char*", "QString*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QString(QByteArray)", { "QString", "QByteArray&", "QString*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQString::plastiqMethods = {
    { "append(QString)", { "append", "QString&", "QString&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(const QChar*,int)", { "append", "QChar*,int", "QString&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QChar)", { "append", "QChar", "QString&", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QStringRef&)", { "append", "QStringRef&", "QString&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QLatin1String)", { "append", "QLatin1String", "QString&", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(const char*)", { "append", "char*", "QString&", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QByteArray)", { "append", "QByteArray&", "QString&", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString)", { "arg", "QString&", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,int)", { "arg", "QString&,int", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,int,QChar)", { "arg", "QString&,int,QChar", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(long)", { "arg", "qulonglong", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(long,int)", { "arg", "qulonglong,int", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(long,int,int)", { "arg", "qulonglong,int,int", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(long,int,int,QChar)", { "arg", "qulonglong,int,int,QChar", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(ulong)", { "arg", "ulong", "QString", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(ulong,int)", { "arg", "ulong,int", "QString", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(ulong,int,int)", { "arg", "ulong,int,int", "QString", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(ulong,int,int,QChar)", { "arg", "ulong,int,int,QChar", "QString", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(int)", { "arg", "int", "QString", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(int,int)", { "arg", "int,int", "QString", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(int,int,int)", { "arg", "int,int,int", "QString", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(int,int,int,QChar)", { "arg", "int,int,int,QChar", "QString", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(double)", { "arg", "double", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(double,int)", { "arg", "double,int", "QString", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(double,int,char)", { "arg", "double,int,char", "QString", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(double,int,char,int)", { "arg", "double,int,char,int", "QString", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(double,int,char,int,QChar)", { "arg", "double,int,char,int,QChar", "QString", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(char)", { "arg", "char", "QString", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(char,int)", { "arg", "char,int", "QString", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(char,int,QChar)", { "arg", "char,int,QChar", "QString", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QChar)", { "arg", "QChar", "QString", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QChar,int)", { "arg", "QChar,int", "QString", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QChar,int,QChar)", { "arg", "QChar,int,QChar", "QString", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,QString)", { "arg", "QString&,QString&", "QString", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,QString,QString)", { "arg", "QString&,QString&,QString&", "QString", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,QString,QString,QString)", { "arg", "QString&,QString&,QString&,QString&", "QString", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,QString,QString,QString,QString)", { "arg", "QString&,QString&,QString&,QString&,QString&", "QString", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,QString,QString,QString,QString,QString)", { "arg", "QString&,QString&,QString&,QString&,QString&,QString&", "QString", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,QString,QString,QString,QString,QString,QString)", { "arg", "QString&,QString&,QString&,QString&,QString&,QString&,QString&", "QString", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,QString,QString,QString,QString,QString,QString,QString)", { "arg", "QString&,QString&,QString&,QString&,QString&,QString&,QString&,QString&", "QString", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arg(QString,QString,QString,QString,QString,QString,QString,QString,QString)", { "arg", "QString&,QString&,QString&,QString&,QString&,QString&,QString&,QString&,QString&", "QString", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "at(int)", { "at", "int", "const QChar", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "begin()", { "begin", "", "iterator", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capacity()", { "capacity", "", "int", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cbegin()", { "cbegin", "", "const_iterator", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cend()", { "cend", "", "const_iterator", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "chop(int)", { "chop", "int", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QLatin1String)", { "compare", "QLatin1String", "int", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QLatin1String,enum)", { "compare", "QLatin1String,Qt::CaseSensitivity", "int", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QString)", { "compare", "QString&", "int", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QString,enum)", { "compare", "QString&,Qt::CaseSensitivity", "int", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QStringRef&)", { "compare", "QStringRef&", "int", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QStringRef&,enum)", { "compare", "QStringRef&,Qt::CaseSensitivity", "int", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constBegin()", { "constBegin", "", "const_iterator", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constData()", { "constData", "", "const QChar*", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constEnd()", { "constEnd", "", "const_iterator", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QString)", { "contains", "QString&", "bool", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QString,enum)", { "contains", "QString&,Qt::CaseSensitivity", "bool", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QChar)", { "contains", "QChar", "bool", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QChar,enum)", { "contains", "QChar,Qt::CaseSensitivity", "bool", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QLatin1String)", { "contains", "QLatin1String", "bool", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QLatin1String,enum)", { "contains", "QLatin1String,Qt::CaseSensitivity", "bool", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QStringRef&)", { "contains", "QStringRef&", "bool", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QStringRef&,enum)", { "contains", "QStringRef&,Qt::CaseSensitivity", "bool", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QRegExp&)", { "contains", "QRegExp&", "bool", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QRegExp&)", { "contains", "QRegExp&", "bool", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QRegularExpression&)", { "contains", "QRegularExpression&", "bool", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QRegularExpression&,QRegularExpressionMatch*)", { "contains", "QRegularExpression&,QRegularExpressionMatch*", "bool", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QString)", { "count", "QString&", "int", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QString,enum)", { "count", "QString&,Qt::CaseSensitivity", "int", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QChar)", { "count", "QChar", "int", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QChar,enum)", { "count", "QChar,Qt::CaseSensitivity", "int", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QStringRef&)", { "count", "QStringRef&", "int", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QStringRef&,enum)", { "count", "QStringRef&,Qt::CaseSensitivity", "int", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QRegExp&)", { "count", "QRegExp&", "int", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QRegularExpression&)", { "count", "QRegularExpression&", "int", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "crbegin()", { "crbegin", "", "const_reverse_iterator", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "crend()", { "crend", "", "const_reverse_iterator", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "QChar*", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "iterator", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QString)", { "endsWith", "QString&", "bool", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QString,enum)", { "endsWith", "QString&,Qt::CaseSensitivity", "bool", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QStringRef&)", { "endsWith", "QStringRef&", "bool", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QStringRef&,enum)", { "endsWith", "QStringRef&,Qt::CaseSensitivity", "bool", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QLatin1String)", { "endsWith", "QLatin1String", "bool", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QLatin1String,enum)", { "endsWith", "QLatin1String,Qt::CaseSensitivity", "bool", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QChar)", { "endsWith", "QChar", "bool", 88, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QChar,enum)", { "endsWith", "QChar,Qt::CaseSensitivity", "bool", 89, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(QChar)", { "fill", "QChar", "QString&", 90, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(QChar,int)", { "fill", "QChar,int", "QString&", 91, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QString)", { "indexOf", "QString&", "int", 92, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QString,int)", { "indexOf", "QString&,int", "int", 93, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QString,int,enum)", { "indexOf", "QString&,int,Qt::CaseSensitivity", "int", 94, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QChar)", { "indexOf", "QChar", "int", 95, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QChar,int)", { "indexOf", "QChar,int", "int", 96, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QChar,int,enum)", { "indexOf", "QChar,int,Qt::CaseSensitivity", "int", 97, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QLatin1String)", { "indexOf", "QLatin1String", "int", 98, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QLatin1String,int)", { "indexOf", "QLatin1String,int", "int", 99, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QLatin1String,int,enum)", { "indexOf", "QLatin1String,int,Qt::CaseSensitivity", "int", 100, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QStringRef&)", { "indexOf", "QStringRef&", "int", 101, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QStringRef&,int)", { "indexOf", "QStringRef&,int", "int", 102, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QStringRef&,int,enum)", { "indexOf", "QStringRef&,int,Qt::CaseSensitivity", "int", 103, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QRegExp&)", { "indexOf", "QRegExp&", "int", 104, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QRegExp&,int)", { "indexOf", "QRegExp&,int", "int", 105, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QRegularExpression&)", { "indexOf", "QRegularExpression&", "int", 106, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QRegularExpression&,int)", { "indexOf", "QRegularExpression&,int", "int", 107, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QRegularExpression&,int,QRegularExpressionMatch*)", { "indexOf", "QRegularExpression&,int,QRegularExpressionMatch*", "int", 108, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QString)", { "insert", "int,QString&", "QString&", 109, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,const QChar*,int)", { "insert", "int,QChar*,int", "QString&", 110, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QChar)", { "insert", "int,QChar", "QString&", 111, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QStringRef&)", { "insert", "int,QStringRef&", "QString&", 112, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QLatin1String)", { "insert", "int,QLatin1String", "QString&", 113, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,const char*)", { "insert", "int,char*", "QString&", 114, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QByteArray)", { "insert", "int,QByteArray&", "QString&", 115, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 116, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 117, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRightToLeft()", { "isRightToLeft", "", "bool", 118, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QString)", { "lastIndexOf", "QString&", "int", 119, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QString,int)", { "lastIndexOf", "QString&,int", "int", 120, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QString,int,enum)", { "lastIndexOf", "QString&,int,Qt::CaseSensitivity", "int", 121, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QChar)", { "lastIndexOf", "QChar", "int", 122, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QChar,int)", { "lastIndexOf", "QChar,int", "int", 123, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QChar,int,enum)", { "lastIndexOf", "QChar,int,Qt::CaseSensitivity", "int", 124, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QLatin1String)", { "lastIndexOf", "QLatin1String", "int", 125, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QLatin1String,int)", { "lastIndexOf", "QLatin1String,int", "int", 126, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QLatin1String,int,enum)", { "lastIndexOf", "QLatin1String,int,Qt::CaseSensitivity", "int", 127, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QStringRef&)", { "lastIndexOf", "QStringRef&", "int", 128, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QStringRef&,int)", { "lastIndexOf", "QStringRef&,int", "int", 129, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QStringRef&,int,enum)", { "lastIndexOf", "QStringRef&,int,Qt::CaseSensitivity", "int", 130, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QRegExp&)", { "lastIndexOf", "QRegExp&", "int", 131, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QRegExp&,int)", { "lastIndexOf", "QRegExp&,int", "int", 132, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QRegularExpression&)", { "lastIndexOf", "QRegularExpression&", "int", 133, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QRegularExpression&,int)", { "lastIndexOf", "QRegularExpression&,int", "int", 134, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QRegularExpression&,int,QRegularExpressionMatch*)", { "lastIndexOf", "QRegularExpression&,int,QRegularExpressionMatch*", "int", 135, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "left(int)", { "left", "int", "QString", 136, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftJustified(int)", { "leftJustified", "int", "QString", 137, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftJustified(int,QChar)", { "leftJustified", "int,QChar", "QString", 138, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftJustified(int,QChar,bool)", { "leftJustified", "int,QChar,bool", "QString", 139, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftRef(int)", { "leftRef", "int", "QStringRef", 140, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "int", 141, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localeAwareCompare(QString)", { "localeAwareCompare", "QString&", "int", 142, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localeAwareCompare(QStringRef&)", { "localeAwareCompare", "QStringRef&", "int", 143, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mid(int)", { "mid", "int", "QString", 144, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mid(int,int)", { "mid", "int,int", "QString", 145, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "midRef(int)", { "midRef", "int", "QStringRef", 146, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "midRef(int,int)", { "midRef", "int,int", "QStringRef", 147, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized(enum)", { "normalized", "NormalizationForm", "QString", 148, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized(enum,enum)", { "normalized", "NormalizationForm,QChar::UnicodeVersion", "QString", 149, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(QString)", { "prepend", "QString&", "QString&", 150, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(const QChar*,int)", { "prepend", "QChar*,int", "QString&", 151, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(QChar)", { "prepend", "QChar", "QString&", 152, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(QStringRef&)", { "prepend", "QStringRef&", "QString&", 153, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(QLatin1String)", { "prepend", "QLatin1String", "QString&", 154, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(const char*)", { "prepend", "char*", "QString&", 155, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(QByteArray)", { "prepend", "QByteArray&", "QString&", 156, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_back(QString)", { "push_back", "QString&", "void", 157, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_back(QChar)", { "push_back", "QChar", "void", 158, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_front(QString)", { "push_front", "QString&", "void", 159, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_front(QChar)", { "push_front", "QChar", "void", 160, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rbegin()", { "rbegin", "", "reverse_iterator", 161, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(int,int)", { "remove", "int,int", "QString&", 162, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QChar)", { "remove", "QChar", "QString&", 163, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QChar,enum)", { "remove", "QChar,Qt::CaseSensitivity", "QString&", 164, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QString)", { "remove", "QString&", "QString&", 165, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QString,enum)", { "remove", "QString&,Qt::CaseSensitivity", "QString&", 166, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QRegExp&)", { "remove", "QRegExp&", "QString&", 167, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QRegularExpression&)", { "remove", "QRegularExpression&", "QString&", 168, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rend()", { "rend", "", "reverse_iterator", 169, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "repeated(int)", { "repeated", "int", "QString", 170, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(int,int,QString)", { "replace", "int,int,QString&", "QString&", 171, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(int,int,const QChar*,int)", { "replace", "int,int,QChar*,int", "QString&", 172, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(int,int,QChar)", { "replace", "int,int,QChar", "QString&", 173, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QChar,QChar)", { "replace", "QChar,QChar", "QString&", 174, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QChar,QChar,enum)", { "replace", "QChar,QChar,Qt::CaseSensitivity", "QString&", 175, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(const QChar*,int,const QChar*,int)", { "replace", "QChar*,int,QChar*,int", "QString&", 176, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(const QChar*,int,const QChar*,int,enum)", { "replace", "QChar*,int,QChar*,int,Qt::CaseSensitivity", "QString&", 177, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QLatin1String,QLatin1String)", { "replace", "QLatin1String,QLatin1String", "QString&", 178, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QLatin1String,QLatin1String,enum)", { "replace", "QLatin1String,QLatin1String,Qt::CaseSensitivity", "QString&", 179, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QLatin1String,QString)", { "replace", "QLatin1String,QString&", "QString&", 180, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QLatin1String,QString,enum)", { "replace", "QLatin1String,QString&,Qt::CaseSensitivity", "QString&", 181, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QString,QLatin1String)", { "replace", "QString&,QLatin1String", "QString&", 182, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QString,QLatin1String,enum)", { "replace", "QString&,QLatin1String,Qt::CaseSensitivity", "QString&", 183, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QString,QString)", { "replace", "QString&,QString&", "QString&", 184, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QString,QString,enum)", { "replace", "QString&,QString&,Qt::CaseSensitivity", "QString&", 185, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QChar,QString)", { "replace", "QChar,QString&", "QString&", 186, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QChar,QString,enum)", { "replace", "QChar,QString&,Qt::CaseSensitivity", "QString&", 187, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QChar,QLatin1String)", { "replace", "QChar,QLatin1String", "QString&", 188, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QChar,QLatin1String,enum)", { "replace", "QChar,QLatin1String,Qt::CaseSensitivity", "QString&", 189, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QRegExp&,QString)", { "replace", "QRegExp&,QString&", "QString&", 190, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QRegularExpression&,QString)", { "replace", "QRegularExpression&,QString&", "QString&", 191, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reserve(int)", { "reserve", "int", "void", 192, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(int)", { "resize", "int", "void", 193, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(int,QChar)", { "resize", "int,QChar", "void", 194, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "right(int)", { "right", "int", "QString", 195, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightJustified(int)", { "rightJustified", "int", "QString", 196, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightJustified(int,QChar)", { "rightJustified", "int,QChar", "QString", 197, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightJustified(int,QChar,bool)", { "rightJustified", "int,QChar,bool", "QString", 198, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightRef(int)", { "rightRef", "int", "QStringRef", 199, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QChar,int)", { "section", "QChar,int", "QString", 200, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QChar,int,int)", { "section", "QChar,int,int", "QString", 201, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QChar,int,int,enum)", { "section", "QChar,int,int,SectionFlags", "QString", 202, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QString,int)", { "section", "QString&,int", "QString", 203, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QString,int,int)", { "section", "QString&,int,int", "QString", 204, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QString,int,int,enum)", { "section", "QString&,int,int,SectionFlags", "QString", 205, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QRegExp&,int)", { "section", "QRegExp&,int", "QString", 206, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QRegExp&,int,int)", { "section", "QRegExp&,int,int", "QString", 207, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QRegExp&,int,int,enum)", { "section", "QRegExp&,int,int,SectionFlags", "QString", 208, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QRegularExpression&,int)", { "section", "QRegularExpression&,int", "QString", 209, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QRegularExpression&,int,int)", { "section", "QRegularExpression&,int,int", "QString", 210, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "section(QRegularExpression&,int,int,enum)", { "section", "QRegularExpression&,int,int,SectionFlags", "QString", 211, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(int)", { "setNum", "int", "QString&", 212, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(int,int)", { "setNum", "int,int", "QString&", 213, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(long)", { "setNum", "uint", "QString&", 214, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(long,int)", { "setNum", "uint,int", "QString&", 215, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(ulong)", { "setNum", "ulong", "QString&", 216, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(ulong,int)", { "setNum", "ulong,int", "QString&", 217, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(double)", { "setNum", "float", "QString&", 218, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(double,char)", { "setNum", "float,char", "QString&", 219, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(double,char,int)", { "setNum", "float,char,int", "QString&", 220, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRawData(const QChar*,int)", { "setRawData", "QChar*,int", "QString&", 221, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUnicode(const QChar*,int)", { "setUnicode", "QChar*,int", "QString&", 222, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUtf16(const ushort*,int)", { "setUtf16", "ushort*,int", "QString&", 223, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "simplified()", { "simplified", "", "QString", 224, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 225, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QString)", { "split", "QString&", "QStringList", 226, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QString,enum)", { "split", "QString&,SplitBehavior", "QStringList", 227, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QString,enum,enum)", { "split", "QString&,SplitBehavior,Qt::CaseSensitivity", "QStringList", 228, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QChar)", { "split", "QChar", "QStringList", 229, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QChar,enum)", { "split", "QChar,SplitBehavior", "QStringList", 230, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QChar,enum,enum)", { "split", "QChar,SplitBehavior,Qt::CaseSensitivity", "QStringList", 231, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QRegExp&)", { "split", "QRegExp&", "QStringList", 232, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QRegExp&,enum)", { "split", "QRegExp&,SplitBehavior", "QStringList", 233, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QRegularExpression&)", { "split", "QRegularExpression&", "QStringList", 234, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "split(QRegularExpression&,enum)", { "split", "QRegularExpression&,SplitBehavior", "QStringList", 235, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "squeeze()", { "squeeze", "", "void", 236, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QString)", { "startsWith", "QString&", "bool", 237, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QString,enum)", { "startsWith", "QString&,Qt::CaseSensitivity", "bool", 238, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QStringRef&)", { "startsWith", "QStringRef&", "bool", 239, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QStringRef&,enum)", { "startsWith", "QStringRef&,Qt::CaseSensitivity", "bool", 240, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QLatin1String)", { "startsWith", "QLatin1String", "bool", 241, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QLatin1String,enum)", { "startsWith", "QLatin1String,Qt::CaseSensitivity", "bool", 242, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QChar)", { "startsWith", "QChar", "bool", 243, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QChar,enum)", { "startsWith", "QChar,Qt::CaseSensitivity", "bool", 244, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QString&)", { "swap", "QString&", "void", 245, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCFString()", { "toCFString", "", "CFStringRef", 246, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCaseFolded()", { "toCaseFolded", "", "QString", 247, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble()", { "toDouble", "", "double", 248, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble(bool*)", { "toDouble", "bool*", "double", 249, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat()", { "toFloat", "", "float", 250, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat(bool*)", { "toFloat", "bool*", "float", 251, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHtmlEscaped()", { "toHtmlEscaped", "", "QString", 252, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt()", { "toInt", "", "int", 253, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(bool*)", { "toInt", "bool*", "int", 254, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(bool*,int)", { "toInt", "bool*,int", "int", 255, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLatin1()", { "toLatin1", "", "QByteArray", 256, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLocal8Bit()", { "toLocal8Bit", "", "QByteArray", 257, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLong()", { "toLong", "", "long", 258, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLong(bool*)", { "toLong", "bool*", "long", 259, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLong(bool*,int)", { "toLong", "bool*,int", "long", 260, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong()", { "toLongLong", "", "qlonglong", 261, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(bool*)", { "toLongLong", "bool*", "qlonglong", 262, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(bool*,int)", { "toLongLong", "bool*,int", "qlonglong", 263, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLower()", { "toLower", "", "QString", 264, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort()", { "toShort", "", "short", 265, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(bool*)", { "toShort", "bool*", "short", 266, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(bool*,int)", { "toShort", "bool*,int", "short", 267, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toStdString()", { "toStdString", "", "std::string", 268, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toStdU16String()", { "toStdU16String", "", "std::u16string", 269, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toStdU32String()", { "toStdU32String", "", "std::u32string", 270, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toStdWString()", { "toStdWString", "", "std::wstring", 271, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt()", { "toUInt", "", "uint", 272, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(bool*)", { "toUInt", "bool*", "uint", 273, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(bool*,int)", { "toUInt", "bool*,int", "uint", 274, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULong()", { "toULong", "", "ulong", 275, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULong(bool*)", { "toULong", "bool*", "ulong", 276, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULong(bool*,int)", { "toULong", "bool*,int", "ulong", 277, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong()", { "toULongLong", "", "qulonglong", 278, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(bool*)", { "toULongLong", "bool*", "qulonglong", 279, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(bool*,int)", { "toULongLong", "bool*,int", "qulonglong", 280, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort()", { "toUShort", "", "ushort", 281, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(bool*)", { "toUShort", "bool*", "ushort", 282, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(bool*,int)", { "toUShort", "bool*,int", "ushort", 283, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUpper()", { "toUpper", "", "QString", 284, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUtf8()", { "toUtf8", "", "QByteArray", 285, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toWCharArray(wchar_t*)", { "toWCharArray", "wchar_t*", "int", 286, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "trimmed()", { "trimmed", "", "QString", 287, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "truncate(int)", { "truncate", "int", "void", 288, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unicode()", { "unicode", "", "const QChar*", 289, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "utf16()", { "utf16", "", "const ushort*", 290, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "asprintf(const char*,...)", { "asprintf", "char*,...", "QString", 291, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QString,QString)", { "compare", "QString&,QString&", "int", 292, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QString,QString,enum)", { "compare", "QString&,QString&,Qt::CaseSensitivity", "int", 293, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QString,QLatin1String)", { "compare", "QString&,QLatin1String", "int", 294, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QString,QLatin1String,enum)", { "compare", "QString&,QLatin1String,Qt::CaseSensitivity", "int", 295, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QLatin1String,QString)", { "compare", "QLatin1String,QString&", "int", 296, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QLatin1String,QString,enum)", { "compare", "QLatin1String,QString&,Qt::CaseSensitivity", "int", 297, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QString,QStringRef&)", { "compare", "QString&,QStringRef&", "int", 298, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QString,QStringRef&,enum)", { "compare", "QString&,QStringRef&,Qt::CaseSensitivity", "int", 299, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCFString(CFStringRef)", { "fromCFString", "CFStringRef", "QString", 300, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromLatin1(const char*)", { "fromLatin1", "char*", "QString", 301, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromLatin1(const char*,int)", { "fromLatin1", "char*,int", "QString", 302, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromLatin1(QByteArray)", { "fromLatin1", "QByteArray&", "QString", 303, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromLocal8Bit(const char*)", { "fromLocal8Bit", "char*", "QString", 304, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromLocal8Bit(const char*,int)", { "fromLocal8Bit", "char*,int", "QString", 305, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromLocal8Bit(QByteArray)", { "fromLocal8Bit", "QByteArray&", "QString", 306, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRawData(const QChar*,int)", { "fromRawData", "QChar*,int", "QString", 307, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromStdString(std::string&)", { "fromStdString", "std::string&", "QString", 308, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromStdU16String(std::u16string&)", { "fromStdU16String", "std::u16string&", "QString", 309, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromStdU32String(std::u32string&)", { "fromStdU32String", "std::u32string&", "QString", 310, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromStdWString(std::wstring&)", { "fromStdWString", "std::wstring&", "QString", 311, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUcs4(const uint*)", { "fromUcs4", "uint*", "QString", 312, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUcs4(const uint*,int)", { "fromUcs4", "uint*,int", "QString", 313, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUcs4(const char32_t*)", { "fromUcs4", "char32_t*", "QString", 314, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUcs4(const char32_t*,int)", { "fromUcs4", "char32_t*,int", "QString", 315, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUtf8(const char*)", { "fromUtf8", "char*", "QString", 316, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUtf8(const char*,int)", { "fromUtf8", "char*,int", "QString", 317, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUtf8(QByteArray)", { "fromUtf8", "QByteArray&", "QString", 318, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUtf16(const ushort*)", { "fromUtf16", "ushort*", "QString", 319, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUtf16(const ushort*,int)", { "fromUtf16", "ushort*,int", "QString", 320, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUtf16(const char16_t*)", { "fromUtf16", "char16_t*", "QString", 321, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUtf16(const char16_t*,int)", { "fromUtf16", "char16_t*,int", "QString", 322, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromWCharArray(const wchar_t*)", { "fromWCharArray", "wchar_t*", "QString", 323, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromWCharArray(const wchar_t*,int)", { "fromWCharArray", "wchar_t*,int", "QString", 324, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "localeAwareCompare(QString,QString)", { "localeAwareCompare", "QString&,QString&", "int", 325, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "localeAwareCompare(QString,QStringRef&)", { "localeAwareCompare", "QString&,QStringRef&", "int", 326, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(long)", { "number", "long", "QString", 327, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(long,int)", { "number", "long,int", "QString", 328, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(int)", { "number", "int", "QString", 329, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(int,int)", { "number", "int,int", "QString", 330, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(ulong)", { "number", "ulong", "QString", 331, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(ulong,int)", { "number", "ulong,int", "QString", 332, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(double)", { "number", "double", "QString", 333, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(double,char)", { "number", "double,char", "QString", 334, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(double,char,int)", { "number", "double,char,int", "QString", 335, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "vasprintf(const char*,va_list)", { "vasprintf", "char*,va_list", "QString", 336, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQString::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQString::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQString::plastiqConstants = {

    /* QString::NormalizationForm */
   { "NormalizationForm_D", QString::NormalizationForm_D },
   { "NormalizationForm_C", QString::NormalizationForm_C },
   { "NormalizationForm_KD", QString::NormalizationForm_KD },
   { "NormalizationForm_KC", QString::NormalizationForm_KC },

    /* QString::SectionFlag */
   { "SectionDefault", QString::SectionDefault },
   { "SectionSkipEmpty", QString::SectionSkipEmpty },
   { "SectionIncludeLeadingSep", QString::SectionIncludeLeadingSep },
   { "SectionIncludeTrailingSep", QString::SectionIncludeTrailingSep },
   { "SectionCaseInsensitiveSeps", QString::SectionCaseInsensitiveSeps },

    /* QString::SplitBehavior */
   { "KeepEmptyParts", QString::KeepEmptyParts },
   { "SkipEmptyParts", QString::SkipEmptyParts },

};

QVector<PlastiQMetaObject*> PlastiQQString::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQString::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQString::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QString", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQString::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQString::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QString *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QString(); break;
        case 1: o = new QString(reinterpret_cast<const QChar*>(stack[1].s_voidp)); break;
        case 2: o = new QString(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int); break;
        case 3: o = new QString((*reinterpret_cast< QChar(*) >(stack[1].s_voidp))); break;
        case 4: o = new QString(stack[1].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp))); break;
        case 5: o = new QString((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))); break;
        case 6: o = new QString(stack[1].s_string); break;
        case 7: o = new QString((*reinterpret_cast< QString(*) >(stack[1].s_voidp))); break;
        case 8: o = new QString(reinterpret_cast<const char*>(stack[1].s_voidp)); break;
        case 9: o = new QString(stack[1].s_bytearray); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQString *p = new PlastiQQString();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQString *p = new PlastiQQString();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 337) {
            id -= 337;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QString *o = sc ? Q_NULLPTR : reinterpret_cast<QString*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QString *_r = new QString(o->append(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QString *_r = new QString(o->append(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QString *_r = new QString(o->append((*reinterpret_cast< QChar(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QString *_r = new QString(o->append((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QString *_r = new QString(o->append((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QString *_r = new QString(o->append(reinterpret_cast<const char*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QString *_r = new QString(o->append(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { QString _r = o->arg(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[3].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { QString _r = o->arg(stack[1].s_long);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { QString _r = o->arg(stack[1].s_long,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { QString _r = o->arg(stack[1].s_long,
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { QString _r = o->arg(stack[1].s_long,
                    stack[2].s_int,
                    stack[3].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[4].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: /* o->arg(UNSUPPORTED_TYPE_ulong) | ret: `QString` */ break;
        case 15: /* o->arg(UNSUPPORTED_TYPE_ulong,
                    stack[2].s_int) | ret: `QString` */ break;
        case 16: /* o->arg(UNSUPPORTED_TYPE_ulong,
                    stack[2].s_int,
                    stack[3].s_int) | ret: `QString` */ break;
        case 17: /* o->arg(UNSUPPORTED_TYPE_ulong,
                    stack[2].s_int,
                    stack[3].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[4].s_voidp))) | ret: `QString` */ break;
        case 18: { QString _r = o->arg(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 19: { QString _r = o->arg(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 20: { QString _r = o->arg(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 21: { QString _r = o->arg(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[4].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 22: { QString _r = o->arg(stack[1].s_double);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: { QString _r = o->arg(stack[1].s_double,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 24: { QString _r = o->arg(stack[1].s_double,
                    stack[2].s_int,
                    stack[3].s_char);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 25: { QString _r = o->arg(stack[1].s_double,
                    stack[2].s_int,
                    stack[3].s_char,
                    stack[4].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 26: { QString _r = o->arg(stack[1].s_double,
                    stack[2].s_int,
                    stack[3].s_char,
                    stack[4].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[5].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 27: { QString _r = o->arg(stack[1].s_char);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 28: { QString _r = o->arg(stack[1].s_char,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 29: { QString _r = o->arg(stack[1].s_char,
                    stack[2].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[3].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 30: { QString _r = o->arg((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 31: { QString _r = o->arg((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 32: { QString _r = o->arg((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[3].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 33: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 34: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 35: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 36: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    stack[5].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 37: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    stack[5].s_string,
                    stack[6].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 38: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    stack[5].s_string,
                    stack[6].s_string,
                    stack[7].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 39: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    stack[5].s_string,
                    stack[6].s_string,
                    stack[7].s_string,
                    stack[8].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 40: { QString _r = o->arg(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    stack[5].s_string,
                    stack[6].s_string,
                    stack[7].s_string,
                    stack[8].s_string,
                    stack[9].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 41: { /* COPY OBJECT */
            QChar *_r = new QChar(o->at(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: /* o->begin() | ret: `iterator` (INTERNAL CLASS) */ break;
        case 43: { int _r = o->capacity();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 44: /* o->cbegin() | ret: `const_iterator` */ break;
        case 45: /* o->cend() | ret: `const_iterator` */ break;
        case 46: o->chop(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 48: { int _r = o->compare((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 49: { int _r = o->compare((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 50: { int _r = o->compare(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 51: { int _r = o->compare(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 52: { int _r = o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 53: { int _r = o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 54: /* o->constBegin() | ret: `const_iterator` */ break;
        case 55: { QChar* _r = const_cast<QChar*>(o->constData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QChar"; } break;
        case 56: /* o->constEnd() | ret: `const_iterator` */ break;
        case 57: { bool _r = o->contains(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 58: { bool _r = o->contains(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 59: { bool _r = o->contains((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 60: { bool _r = o->contains((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 61: { bool _r = o->contains((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 62: { bool _r = o->contains((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 63: { bool _r = o->contains((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 64: { bool _r = o->contains((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 65: { bool _r = o->contains((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 66: { bool _r = o->contains((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 67: { bool _r = o->contains((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 68: { bool _r = o->contains((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QRegularExpressionMatch*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 69: { int _r = o->count(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 70: { int _r = o->count(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 71: { int _r = o->count((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 72: { int _r = o->count((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 73: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 74: { int _r = o->count((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 75: { int _r = o->count((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 76: { int _r = o->count((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 77: { int _r = o->count((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 78: /* o->crbegin() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 79: /* o->crend() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 80: { QChar* _r = o->data();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QChar"; } break;
        case 81: /* o->end() | ret: `iterator` (INTERNAL CLASS) */ break;
        case 82: { bool _r = o->endsWith(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 83: { bool _r = o->endsWith(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 84: { bool _r = o->endsWith((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 85: { bool _r = o->endsWith((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 86: { bool _r = o->endsWith((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 87: { bool _r = o->endsWith((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 88: { bool _r = o->endsWith((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 89: { bool _r = o->endsWith((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 90: { /* COPY OBJECT */
            QString *_r = new QString(o->fill((*reinterpret_cast< QChar(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 91: { /* COPY OBJECT */
            QString *_r = new QString(o->fill((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 92: { int _r = o->indexOf(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 93: { int _r = o->indexOf(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 94: { int _r = o->indexOf(stack[1].s_string,
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 95: { int _r = o->indexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 96: { int _r = o->indexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 97: { int _r = o->indexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 98: { int _r = o->indexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 99: { int _r = o->indexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 100: { int _r = o->indexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 101: { int _r = o->indexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 102: { int _r = o->indexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 103: { int _r = o->indexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 104: { int _r = o->indexOf((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 105: { int _r = o->indexOf((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 106: { int _r = o->indexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 107: { int _r = o->indexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 108: { int _r = o->indexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    reinterpret_cast<QRegularExpressionMatch*>(stack[3].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 109: { /* COPY OBJECT */
            QString *_r = new QString(o->insert(stack[1].s_int,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 110: { /* COPY OBJECT */
            QString *_r = new QString(o->insert(stack[1].s_int,
                    reinterpret_cast<const QChar*>(stack[2].s_voidp),
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 111: { /* COPY OBJECT */
            QString *_r = new QString(o->insert(stack[1].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 112: { /* COPY OBJECT */
            QString *_r = new QString(o->insert(stack[1].s_int,
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 113: { /* COPY OBJECT */
            QString *_r = new QString(o->insert(stack[1].s_int,
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 114: { /* COPY OBJECT */
            QString *_r = new QString(o->insert(stack[1].s_int,
                    reinterpret_cast<const char*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 115: { /* COPY OBJECT */
            QString *_r = new QString(o->insert(stack[1].s_int,
                    stack[2].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 116: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 117: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 118: { bool _r = o->isRightToLeft();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 119: { int _r = o->lastIndexOf(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 120: { int _r = o->lastIndexOf(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 121: { int _r = o->lastIndexOf(stack[1].s_string,
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 122: { int _r = o->lastIndexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 123: { int _r = o->lastIndexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 124: { int _r = o->lastIndexOf((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 125: { int _r = o->lastIndexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 126: { int _r = o->lastIndexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 127: { int _r = o->lastIndexOf((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 128: { int _r = o->lastIndexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 129: { int _r = o->lastIndexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 130: { int _r = o->lastIndexOf((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 131: { int _r = o->lastIndexOf((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 132: { int _r = o->lastIndexOf((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 133: { int _r = o->lastIndexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 134: { int _r = o->lastIndexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 135: { int _r = o->lastIndexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    reinterpret_cast<QRegularExpressionMatch*>(stack[3].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 136: { QString _r = o->left(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 137: { QString _r = o->leftJustified(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 138: { QString _r = o->leftJustified(stack[1].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 139: { QString _r = o->leftJustified(stack[1].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp)),
                    stack[3].s_bool);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 140: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->leftRef(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 141: { int _r = o->length();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 142: { int _r = o->localeAwareCompare(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 143: { int _r = o->localeAwareCompare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 144: { QString _r = o->mid(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 145: { QString _r = o->mid(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 146: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->midRef(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 147: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->midRef(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 148: { QString _r = o->normalized(QString::NormalizationForm(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 149: { QString _r = o->normalized(QString::NormalizationForm(stack[1].s_int64),
                    QChar::UnicodeVersion(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 150: { /* COPY OBJECT */
            QString *_r = new QString(o->prepend(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 151: { /* COPY OBJECT */
            QString *_r = new QString(o->prepend(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 152: { /* COPY OBJECT */
            QString *_r = new QString(o->prepend((*reinterpret_cast< QChar(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 153: { /* COPY OBJECT */
            QString *_r = new QString(o->prepend((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 154: { /* COPY OBJECT */
            QString *_r = new QString(o->prepend((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 155: { /* COPY OBJECT */
            QString *_r = new QString(o->prepend(reinterpret_cast<const char*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 156: { /* COPY OBJECT */
            QString *_r = new QString(o->prepend(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 157: o->push_back(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 158: o->push_back((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 159: o->push_front(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 160: o->push_front((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 161: /* o->rbegin() | ret: `reverse_iterator` (INTERNAL CLASS) */ break;
        case 162: { /* COPY OBJECT */
            QString *_r = new QString(o->remove(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 163: { /* COPY OBJECT */
            QString *_r = new QString(o->remove((*reinterpret_cast< QChar(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 164: { /* COPY OBJECT */
            QString *_r = new QString(o->remove((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 165: { /* COPY OBJECT */
            QString *_r = new QString(o->remove(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 166: { /* COPY OBJECT */
            QString *_r = new QString(o->remove(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 167: { /* COPY OBJECT */
            QString *_r = new QString(o->remove((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 168: { /* COPY OBJECT */
            QString *_r = new QString(o->remove((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 169: /* o->rend() | ret: `reverse_iterator` (INTERNAL CLASS) */ break;
        case 170: { QString _r = o->repeated(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 171: { /* COPY OBJECT */
            QString *_r = new QString(o->replace(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 172: { /* COPY OBJECT */
            QString *_r = new QString(o->replace(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<const QChar*>(stack[3].s_voidp),
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 173: { /* COPY OBJECT */
            QString *_r = new QString(o->replace(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 174: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 175: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 176: { /* COPY OBJECT */
            QString *_r = new QString(o->replace(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<const QChar*>(stack[3].s_voidp),
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 177: { /* COPY OBJECT */
            QString *_r = new QString(o->replace(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<const QChar*>(stack[3].s_voidp),
                    stack[4].s_int,
                    Qt::CaseSensitivity(stack[5].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 178: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 179: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 180: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 181: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 182: { /* COPY OBJECT */
            QString *_r = new QString(o->replace(stack[1].s_string,
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 183: { /* COPY OBJECT */
            QString *_r = new QString(o->replace(stack[1].s_string,
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 184: { /* COPY OBJECT */
            QString *_r = new QString(o->replace(stack[1].s_string,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 185: { /* COPY OBJECT */
            QString *_r = new QString(o->replace(stack[1].s_string,
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 186: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 187: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 188: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 189: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 190: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 191: { /* COPY OBJECT */
            QString *_r = new QString(o->replace((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 192: o->reserve(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 193: o->resize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 194: o->resize(stack[1].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 195: { QString _r = o->right(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 196: { QString _r = o->rightJustified(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 197: { QString _r = o->rightJustified(stack[1].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 198: { QString _r = o->rightJustified(stack[1].s_int,
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp)),
                    stack[3].s_bool);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 199: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->rightRef(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 200: { QString _r = o->section((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 201: { QString _r = o->section((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 202: { QString _r = o->section((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int,
                    QString::SectionFlags(stack[4].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 203: { QString _r = o->section(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 204: { QString _r = o->section(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 205: { QString _r = o->section(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_int,
                    QString::SectionFlags(stack[4].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 206: { QString _r = o->section((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 207: { QString _r = o->section((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 208: { QString _r = o->section((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int,
                    QString::SectionFlags(stack[4].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 209: { QString _r = o->section((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 210: { QString _r = o->section((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 211: { QString _r = o->section((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int,
                    QString::SectionFlags(stack[4].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 212: { /* COPY OBJECT */
            QString *_r = new QString(o->setNum(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 213: { /* COPY OBJECT */
            QString *_r = new QString(o->setNum(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 214: { /* COPY OBJECT */
            QString *_r = new QString(o->setNum(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 215: { /* COPY OBJECT */
            QString *_r = new QString(o->setNum(stack[1].s_long,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 216: /* o->setNum(UNSUPPORTED_TYPE_ulong) | ret: `QString&` */ break;
        case 217: /* o->setNum(UNSUPPORTED_TYPE_ulong,
                    stack[2].s_int) | ret: `QString&` */ break;
        case 218: { /* COPY OBJECT */
            QString *_r = new QString(o->setNum(stack[1].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 219: { /* COPY OBJECT */
            QString *_r = new QString(o->setNum(stack[1].s_double,
                    stack[2].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 220: { /* COPY OBJECT */
            QString *_r = new QString(o->setNum(stack[1].s_double,
                    stack[2].s_char,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 221: { /* COPY OBJECT */
            QString *_r = new QString(o->setRawData(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 222: { /* COPY OBJECT */
            QString *_r = new QString(o->setUnicode(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 223: { /* COPY OBJECT */
            QString *_r = new QString(o->setUtf16(reinterpret_cast<const ushort*>(stack[1].s_voidp),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 224: { QString _r = o->simplified();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 225: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 226: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 227: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split(stack[1].s_string,
                    QString::SplitBehavior(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 228: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split(stack[1].s_string,
                    QString::SplitBehavior(stack[2].s_int64),
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 229: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split((*reinterpret_cast< QChar(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 230: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    QString::SplitBehavior(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 231: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    QString::SplitBehavior(stack[2].s_int64),
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 232: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 233: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    QString::SplitBehavior(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 234: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 235: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->split((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    QString::SplitBehavior(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 236: o->squeeze();
                stack[0].type = PlastiQ::Void; break;
        case 237: { bool _r = o->startsWith(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 238: { bool _r = o->startsWith(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 239: { bool _r = o->startsWith((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 240: { bool _r = o->startsWith((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 241: { bool _r = o->startsWith((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 242: { bool _r = o->startsWith((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 243: { bool _r = o->startsWith((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 244: { bool _r = o->startsWith((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 245: o->swap((*reinterpret_cast< QString(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 246: /* UNSUPPORTED_RETURN_VALUE o->toCFString() | ret: `CFStringRef` */ break;
        case 247: { QString _r = o->toCaseFolded();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 248: { double _r = o->toDouble();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 249: { double _r = o->toDouble(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 250: { double _r = o->toFloat();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 251: { double _r = o->toFloat(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 252: { QString _r = o->toHtmlEscaped();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 253: { int _r = o->toInt();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 254: { int _r = o->toInt(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 255: { int _r = o->toInt(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 256: { QByteArray _r = o->toLatin1();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 257: { QByteArray _r = o->toLocal8Bit();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 258: { long _r = o->toLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 259: { long _r = o->toLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 260: { long _r = o->toLong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 261: { long _r = o->toLongLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 262: { long _r = o->toLongLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 263: { long _r = o->toLongLong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 264: { QString _r = o->toLower();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 265: { int _r = o->toShort();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 266: { int _r = o->toShort(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 267: { int _r = o->toShort(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 268: /* o->toStdString() | ret: `std::string` */ break;
        case 269: /* o->toStdU16String() | ret: `std::u16string` */ break;
        case 270: /* o->toStdU32String() | ret: `std::u32string` */ break;
        case 271: /* o->toStdWString() | ret: `std::wstring` */ break;
        case 272: { long _r = o->toUInt();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 273: { long _r = o->toUInt(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 274: { long _r = o->toUInt(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 275: { long _r = o->toULong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 276: { long _r = o->toULong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 277: { long _r = o->toULong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 278: { long _r = o->toULongLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 279: { long _r = o->toULongLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 280: { long _r = o->toULongLong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 281: { int _r = o->toUShort();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 282: { int _r = o->toUShort(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 283: { int _r = o->toUShort(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 284: { QString _r = o->toUpper();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 285: { QByteArray _r = o->toUtf8();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 286: { int _r = o->toWCharArray(reinterpret_cast<wchar_t*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 287: { QString _r = o->trimmed();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 288: o->truncate(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 289: { QChar* _r = const_cast<QChar*>(o->unicode());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QChar"; } break;
        case 290: { ushort* _r = const_cast<ushort*>(o->utf16());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "ushort"; } break;
        case 291: /* o->asprintf(reinterpret_cast<const char*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_...) | ret: `QString` */ break;
        case 292: { int _r = sc ? QString::compare(stack[1].s_string,
                    stack[2].s_string) : o->compare(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 293: { int _r = sc ? QString::compare(stack[1].s_string,
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64)) : o->compare(stack[1].s_string,
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 294: { int _r = sc ? QString::compare(stack[1].s_string,
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp))) : o->compare(stack[1].s_string,
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 295: { int _r = sc ? QString::compare(stack[1].s_string,
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64)) : o->compare(stack[1].s_string,
                    (*reinterpret_cast< QLatin1String(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 296: { int _r = sc ? QString::compare((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_string) : o->compare((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 297: { int _r = sc ? QString::compare((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64)) : o->compare((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 298: { int _r = sc ? QString::compare(stack[1].s_string,
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp))) : o->compare(stack[1].s_string,
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 299: { int _r = sc ? QString::compare(stack[1].s_string,
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64)) : o->compare(stack[1].s_string,
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp)),
                    Qt::CaseSensitivity(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 300: /* o->fromCFString(UNSUPPORTED_TYPE_CFStringRef) | ret: `QString` */ break;
        case 301: { QString _r = sc ? QString::fromLatin1(reinterpret_cast<const char*>(stack[1].s_voidp)) : o->fromLatin1(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 302: { QString _r = sc ? QString::fromLatin1(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromLatin1(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 303: { QString _r = sc ? QString::fromLatin1(stack[1].s_bytearray) : o->fromLatin1(stack[1].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 304: { QString _r = sc ? QString::fromLocal8Bit(reinterpret_cast<const char*>(stack[1].s_voidp)) : o->fromLocal8Bit(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 305: { QString _r = sc ? QString::fromLocal8Bit(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromLocal8Bit(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 306: { QString _r = sc ? QString::fromLocal8Bit(stack[1].s_bytearray) : o->fromLocal8Bit(stack[1].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 307: { QString _r = sc ? QString::fromRawData(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromRawData(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 308: { QString _r = sc ? QString::fromStdString((*reinterpret_cast< std::string(*) >(stack[1].s_voidp))) : o->fromStdString((*reinterpret_cast< std::string(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 309: { QString _r = sc ? QString::fromStdU16String((*reinterpret_cast< std::u16string(*) >(stack[1].s_voidp))) : o->fromStdU16String((*reinterpret_cast< std::u16string(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 310: { QString _r = sc ? QString::fromStdU32String((*reinterpret_cast< std::u32string(*) >(stack[1].s_voidp))) : o->fromStdU32String((*reinterpret_cast< std::u32string(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 311: { QString _r = sc ? QString::fromStdWString((*reinterpret_cast< std::wstring(*) >(stack[1].s_voidp))) : o->fromStdWString((*reinterpret_cast< std::wstring(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 312: { QString _r = sc ? QString::fromUcs4(reinterpret_cast<const uint*>(stack[1].s_voidp)) : o->fromUcs4(reinterpret_cast<const uint*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 313: { QString _r = sc ? QString::fromUcs4(reinterpret_cast<const uint*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromUcs4(reinterpret_cast<const uint*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 314: { QString _r = sc ? QString::fromUcs4(reinterpret_cast<const char32_t*>(stack[1].s_voidp)) : o->fromUcs4(reinterpret_cast<const char32_t*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 315: { QString _r = sc ? QString::fromUcs4(reinterpret_cast<const char32_t*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromUcs4(reinterpret_cast<const char32_t*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 316: { QString _r = sc ? QString::fromUtf8(reinterpret_cast<const char*>(stack[1].s_voidp)) : o->fromUtf8(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 317: { QString _r = sc ? QString::fromUtf8(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromUtf8(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 318: { QString _r = sc ? QString::fromUtf8(stack[1].s_bytearray) : o->fromUtf8(stack[1].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 319: { QString _r = sc ? QString::fromUtf16(reinterpret_cast<const ushort*>(stack[1].s_voidp)) : o->fromUtf16(reinterpret_cast<const ushort*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 320: { QString _r = sc ? QString::fromUtf16(reinterpret_cast<const ushort*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromUtf16(reinterpret_cast<const ushort*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 321: { QString _r = sc ? QString::fromUtf16(reinterpret_cast<const char16_t*>(stack[1].s_voidp)) : o->fromUtf16(reinterpret_cast<const char16_t*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 322: { QString _r = sc ? QString::fromUtf16(reinterpret_cast<const char16_t*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromUtf16(reinterpret_cast<const char16_t*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 323: { QString _r = sc ? QString::fromWCharArray(reinterpret_cast<const wchar_t*>(stack[1].s_voidp)) : o->fromWCharArray(reinterpret_cast<const wchar_t*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 324: { QString _r = sc ? QString::fromWCharArray(reinterpret_cast<const wchar_t*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromWCharArray(reinterpret_cast<const wchar_t*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 325: { int _r = sc ? QString::localeAwareCompare(stack[1].s_string,
                    stack[2].s_string) : o->localeAwareCompare(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 326: { int _r = sc ? QString::localeAwareCompare(stack[1].s_string,
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp))) : o->localeAwareCompare(stack[1].s_string,
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 327: { QString _r = sc ? QString::number(stack[1].s_long) : o->number(stack[1].s_long);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 328: { QString _r = sc ? QString::number(stack[1].s_long,
                    stack[2].s_int) : o->number(stack[1].s_long,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 329: { QString _r = sc ? QString::number(stack[1].s_int) : o->number(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 330: { QString _r = sc ? QString::number(stack[1].s_int,
                    stack[2].s_int) : o->number(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 331: /* o->number(UNSUPPORTED_TYPE_ulong) | ret: `QString` */ break;
        case 332: /* o->number(UNSUPPORTED_TYPE_ulong,
                    stack[2].s_int) | ret: `QString` */ break;
        case 333: { QString _r = sc ? QString::number(stack[1].s_double) : o->number(stack[1].s_double);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 334: { QString _r = sc ? QString::number(stack[1].s_double,
                    stack[2].s_char) : o->number(stack[1].s_double,
                    stack[2].s_char);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 335: { QString _r = sc ? QString::number(stack[1].s_double,
                    stack[2].s_char,
                    stack[3].s_int) : o->number(stack[1].s_double,
                    stack[2].s_char,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 336: /* o->vasprintf(reinterpret_cast<const char*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_va_list) | ret: `QString` */ break;

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
        QString *o = reinterpret_cast<QString*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQString::~PlastiQQString() {
    QString* o = reinterpret_cast<QString*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
