#include "plastiqmethod.h"
#include "plastiqqbytearray.h"

#include <QByteArray> 

QHash<QByteArray, PlastiQMethod> PlastiQQByteArray::plastiqConstructors = {
    { "QByteArray()", { "QByteArray", "", "QByteArray*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QByteArray(const char*)", { "QByteArray", "char*", "QByteArray*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QByteArray(const char*,int)", { "QByteArray", "char*,int", "QByteArray*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QByteArray(int,char)", { "QByteArray", "int,char", "QByteArray*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QByteArray(QByteArray)", { "QByteArray", "QByteArray&", "QByteArray*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QByteArray(QByteArray&&)", { "QByteArray", "QByteArray&&", "QByteArray*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQByteArray::plastiqMethods = {
    { "append(QByteArray)", { "append", "QByteArray&", "QByteArray&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(int,char)", { "append", "int,char", "QByteArray&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(const char*)", { "append", "char*", "QByteArray&", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(const char*,int)", { "append", "char*,int", "QByteArray&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(char)", { "append", "char", "QByteArray&", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QString)", { "append", "QString&", "QByteArray&", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "at(int)", { "at", "int", "char", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "begin()", { "begin", "", "iterator", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capacity()", { "capacity", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cbegin()", { "cbegin", "", "const_iterator", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cend()", { "cend", "", "const_iterator", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "chop(int)", { "chop", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constBegin()", { "constBegin", "", "const_iterator", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constData()", { "constData", "", "const char*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constEnd()", { "constEnd", "", "const_iterator", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QByteArray)", { "contains", "QByteArray&", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(const char*)", { "contains", "char*", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(char)", { "contains", "char", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(QByteArray)", { "count", "QByteArray&", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(const char*)", { "count", "char*", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(char)", { "count", "char", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "crbegin()", { "crbegin", "", "const_reverse_iterator", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "crend()", { "crend", "", "const_reverse_iterator", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "char*", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "iterator", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(QByteArray)", { "endsWith", "QByteArray&", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(char)", { "endsWith", "char", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endsWith(const char*)", { "endsWith", "char*", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(char)", { "fill", "char", "QByteArray&", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(char,int)", { "fill", "char,int", "QByteArray&", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QByteArray)", { "indexOf", "QByteArray&", "int", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QByteArray,int)", { "indexOf", "QByteArray&,int", "int", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(const char*)", { "indexOf", "char*", "int", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(const char*,int)", { "indexOf", "char*,int", "int", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(char)", { "indexOf", "char", "int", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(char,int)", { "indexOf", "char,int", "int", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QString)", { "indexOf", "QString&", "int", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QString,int)", { "indexOf", "QString&,int", "int", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QByteArray)", { "insert", "int,QByteArray&", "QByteArray&", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,int,char)", { "insert", "int,int,char", "QByteArray&", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,const char*)", { "insert", "int,char*", "QByteArray&", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,const char*,int)", { "insert", "int,char*,int", "QByteArray&", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,char)", { "insert", "int,char", "QByteArray&", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QString)", { "insert", "int,QString&", "QByteArray&", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QByteArray)", { "lastIndexOf", "QByteArray&", "int", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QByteArray,int)", { "lastIndexOf", "QByteArray&,int", "int", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(const char*)", { "lastIndexOf", "char*", "int", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(const char*,int)", { "lastIndexOf", "char*,int", "int", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(char)", { "lastIndexOf", "char", "int", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(char,int)", { "lastIndexOf", "char,int", "int", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QString)", { "lastIndexOf", "QString&", "int", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QString,int)", { "lastIndexOf", "QString&,int", "int", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "left(int)", { "left", "int", "QByteArray", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftJustified(int)", { "leftJustified", "int", "QByteArray", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftJustified(int,char)", { "leftJustified", "int,char", "QByteArray", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftJustified(int,char,bool)", { "leftJustified", "int,char,bool", "QByteArray", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "int", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mid(int)", { "mid", "int", "QByteArray", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mid(int,int)", { "mid", "int,int", "QByteArray", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(QByteArray)", { "prepend", "QByteArray&", "QByteArray&", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(int,char)", { "prepend", "int,char", "QByteArray&", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(const char*)", { "prepend", "char*", "QByteArray&", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(const char*,int)", { "prepend", "char*,int", "QByteArray&", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(char)", { "prepend", "char", "QByteArray&", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_back(QByteArray)", { "push_back", "QByteArray&", "void", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_back(const char*)", { "push_back", "char*", "void", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_back(char)", { "push_back", "char", "void", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_front(QByteArray)", { "push_front", "QByteArray&", "void", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_front(const char*)", { "push_front", "char*", "void", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_front(char)", { "push_front", "char", "void", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rbegin()", { "rbegin", "", "reverse_iterator", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(int,int)", { "remove", "int,int", "QByteArray&", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rend()", { "rend", "", "reverse_iterator", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "repeated(int)", { "repeated", "int", "QByteArray", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(int,int,QByteArray)", { "replace", "int,int,QByteArray&", "QByteArray&", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(int,int,const char*,int)", { "replace", "int,int,char*,int", "QByteArray&", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(int,int,const char*)", { "replace", "int,int,char*", "QByteArray&", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(char,const char*)", { "replace", "char,char*", "QByteArray&", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(char,QByteArray)", { "replace", "char,QByteArray&", "QByteArray&", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(const char*,const char*)", { "replace", "char*,char*", "QByteArray&", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(const char*,int,const char*,int)", { "replace", "char*,int,char*,int", "QByteArray&", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QByteArray,QByteArray)", { "replace", "QByteArray&,QByteArray&", "QByteArray&", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QByteArray,const char*)", { "replace", "QByteArray&,char*", "QByteArray&", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(const char*,QByteArray)", { "replace", "char*,QByteArray&", "QByteArray&", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(char,char)", { "replace", "char,char", "QByteArray&", 88, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QString,const char*)", { "replace", "QString&,char*", "QByteArray&", 89, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(char,QString)", { "replace", "char,QString&", "QByteArray&", 90, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QString,QByteArray)", { "replace", "QString&,QByteArray&", "QByteArray&", 91, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reserve(int)", { "reserve", "int", "void", 92, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(int)", { "resize", "int", "void", 93, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "right(int)", { "right", "int", "QByteArray", 94, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightJustified(int)", { "rightJustified", "int", "QByteArray", 95, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightJustified(int,char)", { "rightJustified", "int,char", "QByteArray", 96, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightJustified(int,char,bool)", { "rightJustified", "int,char,bool", "QByteArray", 97, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(int)", { "setNum", "int", "QByteArray&", 98, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(int,int)", { "setNum", "int,int", "QByteArray&", 99, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(long)", { "setNum", "uint", "QByteArray&", 100, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(long,int)", { "setNum", "uint,int", "QByteArray&", 101, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(double)", { "setNum", "float", "QByteArray&", 102, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(double,char)", { "setNum", "float,char", "QByteArray&", 103, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNum(double,char,int)", { "setNum", "float,char,int", "QByteArray&", 104, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRawData(const char*,long)", { "setRawData", "char*,uint", "QByteArray&", 105, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "simplified()", { "simplified", "", "QByteArray", 106, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 107, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "squeeze()", { "squeeze", "", "void", 108, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(QByteArray)", { "startsWith", "QByteArray&", "bool", 109, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(char)", { "startsWith", "char", "bool", 110, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startsWith(const char*)", { "startsWith", "char*", "bool", 111, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QByteArray&)", { "swap", "QByteArray&", "void", 112, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toBase64()", { "toBase64", "", "QByteArray", 113, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toBase64(enum)", { "toBase64", "Base64Options", "QByteArray", 114, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCFData()", { "toCFData", "", "CFDataRef", 115, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble()", { "toDouble", "", "double", 116, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble(bool*)", { "toDouble", "bool*", "double", 117, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat()", { "toFloat", "", "float", 118, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat(bool*)", { "toFloat", "bool*", "float", 119, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHex()", { "toHex", "", "QByteArray", 120, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt()", { "toInt", "", "int", 121, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(bool*)", { "toInt", "bool*", "int", 122, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(bool*,int)", { "toInt", "bool*,int", "int", 123, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLong()", { "toLong", "", "long", 124, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLong(bool*)", { "toLong", "bool*", "long", 125, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLong(bool*,int)", { "toLong", "bool*,int", "long", 126, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong()", { "toLongLong", "", "qlonglong", 127, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(bool*)", { "toLongLong", "bool*", "qlonglong", 128, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(bool*,int)", { "toLongLong", "bool*,int", "qlonglong", 129, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLower()", { "toLower", "", "QByteArray", 130, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPercentEncoding()", { "toPercentEncoding", "", "QByteArray", 131, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPercentEncoding(QByteArray)", { "toPercentEncoding", "QByteArray&", "QByteArray", 132, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPercentEncoding(QByteArray,QByteArray)", { "toPercentEncoding", "QByteArray&,QByteArray&", "QByteArray", 133, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPercentEncoding(QByteArray,QByteArray,char)", { "toPercentEncoding", "QByteArray&,QByteArray&,char", "QByteArray", 134, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRawCFData()", { "toRawCFData", "", "CFDataRef", 135, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort()", { "toShort", "", "short", 136, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(bool*)", { "toShort", "bool*", "short", 137, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(bool*,int)", { "toShort", "bool*,int", "short", 138, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toStdString()", { "toStdString", "", "std::string", 139, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt()", { "toUInt", "", "uint", 140, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(bool*)", { "toUInt", "bool*", "uint", 141, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(bool*,int)", { "toUInt", "bool*,int", "uint", 142, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULong()", { "toULong", "", "ulong", 143, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULong(bool*)", { "toULong", "bool*", "ulong", 144, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULong(bool*,int)", { "toULong", "bool*,int", "ulong", 145, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong()", { "toULongLong", "", "qulonglong", 146, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(bool*)", { "toULongLong", "bool*", "qulonglong", 147, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(bool*,int)", { "toULongLong", "bool*,int", "qulonglong", 148, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort()", { "toUShort", "", "ushort", 149, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(bool*)", { "toUShort", "bool*", "ushort", 150, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(bool*,int)", { "toUShort", "bool*,int", "ushort", 151, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUpper()", { "toUpper", "", "QByteArray", 152, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "trimmed()", { "trimmed", "", "QByteArray", 153, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "truncate(int)", { "truncate", "int", "void", 154, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromBase64(QByteArray)", { "fromBase64", "QByteArray&", "QByteArray", 155, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromBase64(QByteArray,enum)", { "fromBase64", "QByteArray&,Base64Options", "QByteArray", 156, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCFData(CFDataRef)", { "fromCFData", "CFDataRef", "QByteArray", 157, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHex(QByteArray)", { "fromHex", "QByteArray&", "QByteArray", 158, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromPercentEncoding(QByteArray)", { "fromPercentEncoding", "QByteArray&", "QByteArray", 159, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromPercentEncoding(QByteArray,char)", { "fromPercentEncoding", "QByteArray&,char", "QByteArray", 160, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRawCFData(CFDataRef)", { "fromRawCFData", "CFDataRef", "QByteArray", 161, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRawData(const char*,int)", { "fromRawData", "char*,int", "QByteArray", 162, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromStdString(std::string&)", { "fromStdString", "std::string&", "QByteArray", 163, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(int)", { "number", "int", "QByteArray", 164, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(int,int)", { "number", "int,int", "QByteArray", 165, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(long)", { "number", "uint", "QByteArray", 166, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(long,int)", { "number", "uint,int", "QByteArray", 167, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(double)", { "number", "double", "QByteArray", 168, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(double,char)", { "number", "double,char", "QByteArray", 169, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "number(double,char,int)", { "number", "double,char,int", "QByteArray", 170, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQByteArray::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQByteArray::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQByteArray::plastiqConstants = {

    /* QByteArray::Base64Option */
   { "Base64Encoding", QByteArray::Base64Encoding },
   { "Base64UrlEncoding", QByteArray::Base64UrlEncoding },
   { "KeepTrailingEquals", QByteArray::KeepTrailingEquals },
   { "OmitTrailingEquals", QByteArray::OmitTrailingEquals },

};

QVector<PlastiQMetaObject*> PlastiQQByteArray::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQByteArray::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQByteArray::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QByteArray", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQByteArray::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQByteArray::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QByteArray *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QByteArray(); break;
        case 1: o = new QByteArray(reinterpret_cast<const char*>(stack[1].s_voidp)); break;
        case 2: o = new QByteArray(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int); break;
        case 3: o = new QByteArray(stack[1].s_int,
                    stack[2].s_char); break;
        case 4: o = new QByteArray(stack[1].s_bytearray); break;
        case 5: o = new QByteArray((*reinterpret_cast< QByteArray(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQByteArray *p = new PlastiQQByteArray();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQByteArray *p = new PlastiQQByteArray();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 171) {
            id -= 171;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QByteArray *o = sc ? Q_NULLPTR : reinterpret_cast<QByteArray*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->append(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->append(stack[1].s_int,
                    stack[2].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->append(reinterpret_cast<const char*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->append(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->append(stack[1].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->append(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { char _r = o->at(stack[1].s_int);
                  stack[0].s_char = _r; stack[0].type = PlastiQ::Char; } break;
        case 7: /* o->begin() | ret: `iterator` (INTERNAL CLASS) */ break;
        case 8: { int _r = o->capacity();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: /* o->cbegin() | ret: `const_iterator` */ break;
        case 10: /* o->cend() | ret: `const_iterator` */ break;
        case 11: o->chop(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 13: /* o->constBegin() | ret: `const_iterator` */ break;
        case 14: { char* _r = const_cast<char*>(o->constData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;
        case 15: /* o->constEnd() | ret: `const_iterator` */ break;
        case 16: { bool _r = o->contains(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->contains(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->contains(stack[1].s_char);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { int _r = o->count(stack[1].s_bytearray);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { int _r = o->count(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { int _r = o->count(stack[1].s_char);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 23: /* o->crbegin() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 24: /* o->crend() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 25: { char* _r = o->data();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;
        case 26: /* o->end() | ret: `iterator` (INTERNAL CLASS) */ break;
        case 27: { bool _r = o->endsWith(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { bool _r = o->endsWith(stack[1].s_char);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: { bool _r = o->endsWith(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->fill(stack[1].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->fill(stack[1].s_char,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { int _r = o->indexOf(stack[1].s_bytearray);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 33: { int _r = o->indexOf(stack[1].s_bytearray,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 34: { int _r = o->indexOf(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 35: { int _r = o->indexOf(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 36: { int _r = o->indexOf(stack[1].s_char);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 37: { int _r = o->indexOf(stack[1].s_char,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 38: { int _r = o->indexOf(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 39: { int _r = o->indexOf(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 40: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->insert(stack[1].s_int,
                    stack[2].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 41: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->insert(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->insert(stack[1].s_int,
                    reinterpret_cast<const char*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 43: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->insert(stack[1].s_int,
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->insert(stack[1].s_int,
                    stack[2].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->insert(stack[1].s_int,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 46: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 48: { int _r = o->lastIndexOf(stack[1].s_bytearray);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 49: { int _r = o->lastIndexOf(stack[1].s_bytearray,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 50: { int _r = o->lastIndexOf(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 51: { int _r = o->lastIndexOf(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 52: { int _r = o->lastIndexOf(stack[1].s_char);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 53: { int _r = o->lastIndexOf(stack[1].s_char,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 54: { int _r = o->lastIndexOf(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 55: { int _r = o->lastIndexOf(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 56: { QByteArray _r = o->left(stack[1].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 57: { QByteArray _r = o->leftJustified(stack[1].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 58: { QByteArray _r = o->leftJustified(stack[1].s_int,
                    stack[2].s_char);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 59: { QByteArray _r = o->leftJustified(stack[1].s_int,
                    stack[2].s_char,
                    stack[3].s_bool);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 60: { int _r = o->length();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 61: { QByteArray _r = o->mid(stack[1].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 62: { QByteArray _r = o->mid(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 63: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->prepend(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 64: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->prepend(stack[1].s_int,
                    stack[2].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 65: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->prepend(reinterpret_cast<const char*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 66: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->prepend(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 67: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->prepend(stack[1].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 68: o->push_back(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 69: o->push_back(reinterpret_cast<const char*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 70: o->push_back(stack[1].s_char);
                stack[0].type = PlastiQ::Void; break;
        case 71: o->push_front(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 72: o->push_front(reinterpret_cast<const char*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 73: o->push_front(stack[1].s_char);
                stack[0].type = PlastiQ::Void; break;
        case 74: /* o->rbegin() | ret: `reverse_iterator` (INTERNAL CLASS) */ break;
        case 75: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->remove(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 76: /* o->rend() | ret: `reverse_iterator` (INTERNAL CLASS) */ break;
        case 77: { QByteArray _r = o->repeated(stack[1].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 78: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 79: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 80: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<const char*>(stack[3].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 81: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_char,
                    reinterpret_cast<const char*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 82: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_char,
                    stack[2].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 83: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 84: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 85: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_bytearray,
                    stack[2].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 86: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_bytearray,
                    reinterpret_cast<const char*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 87: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 88: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_char,
                    stack[2].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 89: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 90: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_char,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 91: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->replace(stack[1].s_string,
                    stack[2].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 92: o->reserve(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 93: o->resize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 94: { QByteArray _r = o->right(stack[1].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 95: { QByteArray _r = o->rightJustified(stack[1].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 96: { QByteArray _r = o->rightJustified(stack[1].s_int,
                    stack[2].s_char);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 97: { QByteArray _r = o->rightJustified(stack[1].s_int,
                    stack[2].s_char,
                    stack[3].s_bool);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 98: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->setNum(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 99: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->setNum(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 100: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->setNum(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 101: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->setNum(stack[1].s_long,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 102: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->setNum(stack[1].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 103: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->setNum(stack[1].s_double,
                    stack[2].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 104: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->setNum(stack[1].s_double,
                    stack[2].s_char,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 105: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->setRawData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 106: { QByteArray _r = o->simplified();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 107: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 108: o->squeeze();
                stack[0].type = PlastiQ::Void; break;
        case 109: { bool _r = o->startsWith(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 110: { bool _r = o->startsWith(stack[1].s_char);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 111: { bool _r = o->startsWith(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 112: o->swap((*reinterpret_cast< QByteArray(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 113: { QByteArray _r = o->toBase64();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 114: { QByteArray _r = o->toBase64(QByteArray::Base64Options(stack[1].s_int64));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 115: /* UNSUPPORTED_RETURN_VALUE o->toCFData() | ret: `CFDataRef` */ break;
        case 116: { double _r = o->toDouble();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 117: { double _r = o->toDouble(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 118: { double _r = o->toFloat();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 119: { double _r = o->toFloat(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 120: { QByteArray _r = o->toHex();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 121: { int _r = o->toInt();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 122: { int _r = o->toInt(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 123: { int _r = o->toInt(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 124: { long _r = o->toLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 125: { long _r = o->toLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 126: { long _r = o->toLong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 127: { long _r = o->toLongLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 128: { long _r = o->toLongLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 129: { long _r = o->toLongLong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 130: { QByteArray _r = o->toLower();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 131: { QByteArray _r = o->toPercentEncoding();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 132: { QByteArray _r = o->toPercentEncoding(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 133: { QByteArray _r = o->toPercentEncoding(stack[1].s_bytearray,
                    stack[2].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 134: { QByteArray _r = o->toPercentEncoding(stack[1].s_bytearray,
                    stack[2].s_bytearray,
                    stack[3].s_char);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 135: /* UNSUPPORTED_RETURN_VALUE o->toRawCFData() | ret: `CFDataRef` */ break;
        case 136: { int _r = o->toShort();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 137: { int _r = o->toShort(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 138: { int _r = o->toShort(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 139: /* o->toStdString() | ret: `std::string` */ break;
        case 140: { long _r = o->toUInt();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 141: { long _r = o->toUInt(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 142: { long _r = o->toUInt(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 143: { long _r = o->toULong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 144: { long _r = o->toULong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 145: { long _r = o->toULong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 146: { long _r = o->toULongLong();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 147: { long _r = o->toULongLong(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 148: { long _r = o->toULongLong(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 149: { int _r = o->toUShort();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 150: { int _r = o->toUShort(reinterpret_cast<bool*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 151: { int _r = o->toUShort(reinterpret_cast<bool*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 152: { QByteArray _r = o->toUpper();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 153: { QByteArray _r = o->trimmed();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 154: o->truncate(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 155: { QByteArray _r = sc ? QByteArray::fromBase64(stack[1].s_bytearray) : o->fromBase64(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 156: { QByteArray _r = sc ? QByteArray::fromBase64(stack[1].s_bytearray,
                    QByteArray::Base64Options(stack[2].s_int64)) : o->fromBase64(stack[1].s_bytearray,
                    QByteArray::Base64Options(stack[2].s_int64));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 157: /* o->fromCFData(UNSUPPORTED_TYPE_CFDataRef) | ret: `QByteArray` */ break;
        case 158: { QByteArray _r = sc ? QByteArray::fromHex(stack[1].s_bytearray) : o->fromHex(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 159: { QByteArray _r = sc ? QByteArray::fromPercentEncoding(stack[1].s_bytearray) : o->fromPercentEncoding(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 160: { QByteArray _r = sc ? QByteArray::fromPercentEncoding(stack[1].s_bytearray,
                    stack[2].s_char) : o->fromPercentEncoding(stack[1].s_bytearray,
                    stack[2].s_char);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 161: /* o->fromRawCFData(UNSUPPORTED_TYPE_CFDataRef) | ret: `QByteArray` */ break;
        case 162: { QByteArray _r = sc ? QByteArray::fromRawData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int) : o->fromRawData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 163: { QByteArray _r = sc ? QByteArray::fromStdString((*reinterpret_cast< std::string(*) >(stack[1].s_voidp))) : o->fromStdString((*reinterpret_cast< std::string(*) >(stack[1].s_voidp)));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 164: { QByteArray _r = sc ? QByteArray::number(stack[1].s_int) : o->number(stack[1].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 165: { QByteArray _r = sc ? QByteArray::number(stack[1].s_int,
                    stack[2].s_int) : o->number(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 166: { QByteArray _r = sc ? QByteArray::number(stack[1].s_long) : o->number(stack[1].s_long);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 167: { QByteArray _r = sc ? QByteArray::number(stack[1].s_long,
                    stack[2].s_int) : o->number(stack[1].s_long,
                    stack[2].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 168: { QByteArray _r = sc ? QByteArray::number(stack[1].s_double) : o->number(stack[1].s_double);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 169: { QByteArray _r = sc ? QByteArray::number(stack[1].s_double,
                    stack[2].s_char) : o->number(stack[1].s_double,
                    stack[2].s_char);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 170: { QByteArray _r = sc ? QByteArray::number(stack[1].s_double,
                    stack[2].s_char,
                    stack[3].s_int) : o->number(stack[1].s_double,
                    stack[2].s_char,
                    stack[3].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;

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
        QByteArray *o = reinterpret_cast<QByteArray*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQByteArray::~PlastiQQByteArray() {
    QByteArray* o = reinterpret_cast<QByteArray*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
