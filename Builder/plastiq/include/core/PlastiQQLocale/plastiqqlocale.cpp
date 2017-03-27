#include "plastiqmethod.h"
#include "plastiqqlocale.h"

#include <QLocale> 
#include <QString>
#include <QChar>
#include <QDate>
#include <QDateTime>
#include <QTime>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQLocale::plastiqConstructors = {
    { "QLocale()", { "QLocale", "", "QLocale*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLocale(QString)", { "QLocale", "QString&", "QLocale*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLocale(enum)", { "QLocale", "Language", "QLocale*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLocale(enum,enum)", { "QLocale", "Language,Country", "QLocale*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLocale(enum,enum,enum)", { "QLocale", "Language,Script,Country", "QLocale*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLocale(QLocale&)", { "QLocale", "QLocale&", "QLocale*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLocale::plastiqMethods = {
    { "amText()", { "amText", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bcp47Name()", { "bcp47Name", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "country()", { "country", "", "Country", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createSeparatedList(QStringList&)", { "createSeparatedList", "QStringList&", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currencySymbol()", { "currencySymbol", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currencySymbol(enum)", { "currencySymbol", "CurrencySymbolFormat", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dateFormat()", { "dateFormat", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dateFormat(enum)", { "dateFormat", "FormatType", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dateTimeFormat()", { "dateTimeFormat", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dateTimeFormat(enum)", { "dateTimeFormat", "FormatType", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dayName(int)", { "dayName", "int", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dayName(int,enum)", { "dayName", "int,FormatType", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "decimalPoint()", { "decimalPoint", "", "QChar", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exponential()", { "exponential", "", "QChar", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstDayOfWeek()", { "firstDayOfWeek", "", "Qt::DayOfWeek", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "groupSeparator()", { "groupSeparator", "", "QChar", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "language()", { "language", "", "Language", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "measurementSystem()", { "measurementSystem", "", "MeasurementSystem", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "monthName(int)", { "monthName", "int", "QString", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "monthName(int,enum)", { "monthName", "int,FormatType", "QString", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeCountryName()", { "nativeCountryName", "", "QString", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeLanguageName()", { "nativeLanguageName", "", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "negativeSign()", { "negativeSign", "", "QChar", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "numberOptions()", { "numberOptions", "", "NumberOptions", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "percent()", { "percent", "", "QChar", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pmText()", { "pmText", "", "QString", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "positiveSign()", { "positiveSign", "", "QChar", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quoteString(QString)", { "quoteString", "QString&", "QString", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quoteString(QString,enum)", { "quoteString", "QString&,QuotationStyle", "QString", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quoteString(QStringRef&)", { "quoteString", "QStringRef&", "QString", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quoteString(QStringRef&,enum)", { "quoteString", "QStringRef&,QuotationStyle", "QString", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "script()", { "script", "", "Script", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNumberOptions(enum)", { "setNumberOptions", "NumberOptions", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standaloneDayName(int)", { "standaloneDayName", "int", "QString", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standaloneDayName(int,enum)", { "standaloneDayName", "int,FormatType", "QString", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standaloneMonthName(int)", { "standaloneMonthName", "int", "QString", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standaloneMonthName(int,enum)", { "standaloneMonthName", "int,FormatType", "QString", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QLocale&)", { "swap", "QLocale&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textDirection()", { "textDirection", "", "Qt::LayoutDirection", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeFormat()", { "timeFormat", "", "QString", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeFormat(enum)", { "timeFormat", "FormatType", "QString", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCurrencyString(long)", { "toCurrencyString", "qlonglong", "QString", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCurrencyString(long,QString)", { "toCurrencyString", "qlonglong,QString&", "QString", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCurrencyString(int)", { "toCurrencyString", "short", "QString", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCurrencyString(int,QString)", { "toCurrencyString", "short,QString&", "QString", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCurrencyString(double)", { "toCurrencyString", "double", "QString", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCurrencyString(double,QString)", { "toCurrencyString", "double,QString&", "QString", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCurrencyString(double,QString,int)", { "toCurrencyString", "double,QString&,int", "QString", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCurrencyString(double,QString,int)", { "toCurrencyString", "float,QString&,int", "QString", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDate(QString)", { "toDate", "QString&", "QDate", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDate(QString,enum)", { "toDate", "QString&,FormatType", "QDate", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDate(QString,QString)", { "toDate", "QString&,QString&", "QDate", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDateTime(QString)", { "toDateTime", "QString&", "QDateTime", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDateTime(QString,enum)", { "toDateTime", "QString&,FormatType", "QDateTime", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDateTime(QString,QString)", { "toDateTime", "QString&,QString&", "QDateTime", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble(QString)", { "toDouble", "QString&", "double", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble(QString,bool*)", { "toDouble", "QString&,bool*", "double", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble(QStringRef&)", { "toDouble", "QStringRef&", "double", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble(QStringRef&,bool*)", { "toDouble", "QStringRef&,bool*", "double", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat(QString)", { "toFloat", "QString&", "float", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat(QString,bool*)", { "toFloat", "QString&,bool*", "float", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat(QStringRef&)", { "toFloat", "QStringRef&", "float", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFloat(QStringRef&,bool*)", { "toFloat", "QStringRef&,bool*", "float", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(QString)", { "toInt", "QString&", "int", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(QString,bool*)", { "toInt", "QString&,bool*", "int", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(QStringRef&)", { "toInt", "QStringRef&", "int", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(QStringRef&,bool*)", { "toInt", "QStringRef&,bool*", "int", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(QString)", { "toLongLong", "QString&", "qlonglong", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(QString,bool*)", { "toLongLong", "QString&,bool*", "qlonglong", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(QStringRef&)", { "toLongLong", "QStringRef&", "qlonglong", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLongLong(QStringRef&,bool*)", { "toLongLong", "QStringRef&,bool*", "qlonglong", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLower(QString)", { "toLower", "QString&", "QString", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(QString)", { "toShort", "QString&", "short", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(QString,bool*)", { "toShort", "QString&,bool*", "short", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(QStringRef&)", { "toShort", "QStringRef&", "short", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toShort(QStringRef&,bool*)", { "toShort", "QStringRef&,bool*", "short", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(long)", { "toString", "qlonglong", "QString", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(long)", { "toString", "qulonglong", "QString", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(int)", { "toString", "short", "QString", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(int)", { "toString", "ushort", "QString", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(long)", { "toString", "uint", "QString", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(double)", { "toString", "double", "QString", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(double,char)", { "toString", "double,char", "QString", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(double,char,int)", { "toString", "double,char,int", "QString", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QDate&,QString)", { "toString", "QDate&,QString&", "QString", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QDate&)", { "toString", "QDate&", "QString", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QDate&,enum)", { "toString", "QDate&,FormatType", "QString", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QTime&,QString)", { "toString", "QTime&,QString&", "QString", 88, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QTime&)", { "toString", "QTime&", "QString", 89, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QTime&,enum)", { "toString", "QTime&,FormatType", "QString", 90, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QDateTime&)", { "toString", "QDateTime&", "QString", 91, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QDateTime&,enum)", { "toString", "QDateTime&,FormatType", "QString", 92, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QDateTime&,QString)", { "toString", "QDateTime&,QString&", "QString", 93, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTime(QString)", { "toTime", "QString&", "QTime", 94, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTime(QString,enum)", { "toTime", "QString&,FormatType", "QTime", 95, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTime(QString,QString)", { "toTime", "QString&,QString&", "QTime", 96, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(QString)", { "toUInt", "QString&", "uint", 97, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(QString,bool*)", { "toUInt", "QString&,bool*", "uint", 98, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(QStringRef&)", { "toUInt", "QStringRef&", "uint", 99, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUInt(QStringRef&,bool*)", { "toUInt", "QStringRef&,bool*", "uint", 100, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(QString)", { "toULongLong", "QString&", "qulonglong", 101, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(QString,bool*)", { "toULongLong", "QString&,bool*", "qulonglong", 102, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(QStringRef&)", { "toULongLong", "QStringRef&", "qulonglong", 103, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toULongLong(QStringRef&,bool*)", { "toULongLong", "QStringRef&,bool*", "qulonglong", 104, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(QString)", { "toUShort", "QString&", "ushort", 105, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(QString,bool*)", { "toUShort", "QString&,bool*", "ushort", 106, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(QStringRef&)", { "toUShort", "QStringRef&", "ushort", 107, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUShort(QStringRef&,bool*)", { "toUShort", "QStringRef&,bool*", "ushort", 108, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUpper(QString)", { "toUpper", "QString&", "QString", 109, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "uiLanguages()", { "uiLanguages", "", "QStringList", 110, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zeroDigit()", { "zeroDigit", "", "QChar", 111, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "c()", { "c", "", "QLocale", 112, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "countryToString(enum)", { "countryToString", "Country", "QString", 113, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "languageToString(enum)", { "languageToString", "Language", "QString", 114, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "scriptToString(enum)", { "scriptToString", "Script", "QString", 115, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setDefault(QLocale&)", { "setDefault", "QLocale&", "void", 116, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "system()", { "system", "", "QLocale", 117, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLocale::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLocale::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLocale::plastiqConstants = {

    /* QLocale::Country */
   { "AnyCountry", QLocale::AnyCountry },
   { "Afghanistan", QLocale::Afghanistan },
   { "Albania", QLocale::Albania },
   { "Algeria", QLocale::Algeria },
   { "AmericanSamoa", QLocale::AmericanSamoa },
   { "Andorra", QLocale::Andorra },
   { "Angola", QLocale::Angola },
   { "Anguilla", QLocale::Anguilla },
   { "Antarctica", QLocale::Antarctica },
   { "AntiguaAndBarbuda", QLocale::AntiguaAndBarbuda },
   { "Argentina", QLocale::Argentina },
   { "Armenia", QLocale::Armenia },
   { "Aruba", QLocale::Aruba },
   { "Australia", QLocale::Australia },
   { "Austria", QLocale::Austria },
   { "Azerbaijan", QLocale::Azerbaijan },
   { "Bahamas", QLocale::Bahamas },
   { "Bahrain", QLocale::Bahrain },
   { "Bangladesh", QLocale::Bangladesh },
   { "Barbados", QLocale::Barbados },
   { "Belarus", QLocale::Belarus },
   { "Belgium", QLocale::Belgium },
   { "Belize", QLocale::Belize },
   { "Benin", QLocale::Benin },
   { "Bermuda", QLocale::Bermuda },
   { "Bhutan", QLocale::Bhutan },
   { "Bolivia", QLocale::Bolivia },
   { "BosniaAndHerzegowina", QLocale::BosniaAndHerzegowina },
   { "Botswana", QLocale::Botswana },
   { "BouvetIsland", QLocale::BouvetIsland },
   { "Brazil", QLocale::Brazil },
   { "BritishIndianOceanTerritory", QLocale::BritishIndianOceanTerritory },
   { "Brunei", QLocale::Brunei },
   { "Bulgaria", QLocale::Bulgaria },
   { "BurkinaFaso", QLocale::BurkinaFaso },
   { "Burundi", QLocale::Burundi },
   { "Cambodia", QLocale::Cambodia },
   { "Cameroon", QLocale::Cameroon },
   { "Canada", QLocale::Canada },
   { "CapeVerde", QLocale::CapeVerde },
   { "CaymanIslands", QLocale::CaymanIslands },
   { "CentralAfricanRepublic", QLocale::CentralAfricanRepublic },
   { "Chad", QLocale::Chad },
   { "Chile", QLocale::Chile },
   { "China", QLocale::China },
   { "ChristmasIsland", QLocale::ChristmasIsland },
   { "CocosIslands", QLocale::CocosIslands },
   { "Colombia", QLocale::Colombia },
   { "Comoros", QLocale::Comoros },
   { "CongoKinshasa", QLocale::CongoKinshasa },
   { "CongoBrazzaville", QLocale::CongoBrazzaville },
   { "CookIslands", QLocale::CookIslands },
   { "CostaRica", QLocale::CostaRica },
   { "IvoryCoast", QLocale::IvoryCoast },
   { "Croatia", QLocale::Croatia },
   { "Cuba", QLocale::Cuba },
   { "Cyprus", QLocale::Cyprus },
   { "CzechRepublic", QLocale::CzechRepublic },
   { "Denmark", QLocale::Denmark },
   { "Djibouti", QLocale::Djibouti },
   { "Dominica", QLocale::Dominica },
   { "DominicanRepublic", QLocale::DominicanRepublic },
   { "EastTimor", QLocale::EastTimor },
   { "Ecuador", QLocale::Ecuador },
   { "Egypt", QLocale::Egypt },
   { "ElSalvador", QLocale::ElSalvador },
   { "EquatorialGuinea", QLocale::EquatorialGuinea },
   { "Eritrea", QLocale::Eritrea },
   { "Estonia", QLocale::Estonia },
   { "Ethiopia", QLocale::Ethiopia },
   { "FalklandIslands", QLocale::FalklandIslands },
   { "FaroeIslands", QLocale::FaroeIslands },
   { "Fiji", QLocale::Fiji },
   { "Finland", QLocale::Finland },
   { "France", QLocale::France },
   { "Guernsey", QLocale::Guernsey },
   { "FrenchGuiana", QLocale::FrenchGuiana },
   { "FrenchPolynesia", QLocale::FrenchPolynesia },
   { "FrenchSouthernTerritories", QLocale::FrenchSouthernTerritories },
   { "Gabon", QLocale::Gabon },
   { "Gambia", QLocale::Gambia },
   { "Georgia", QLocale::Georgia },
   { "Germany", QLocale::Germany },
   { "Ghana", QLocale::Ghana },
   { "Gibraltar", QLocale::Gibraltar },
   { "Greece", QLocale::Greece },
   { "Greenland", QLocale::Greenland },
   { "Grenada", QLocale::Grenada },
   { "Guadeloupe", QLocale::Guadeloupe },
   { "Guam", QLocale::Guam },
   { "Guatemala", QLocale::Guatemala },
   { "Guinea", QLocale::Guinea },
   { "GuineaBissau", QLocale::GuineaBissau },
   { "Guyana", QLocale::Guyana },
   { "Haiti", QLocale::Haiti },
   { "HeardAndMcDonaldIslands", QLocale::HeardAndMcDonaldIslands },
   { "Honduras", QLocale::Honduras },
   { "HongKong", QLocale::HongKong },
   { "Hungary", QLocale::Hungary },
   { "Iceland", QLocale::Iceland },
   { "India", QLocale::India },
   { "Indonesia", QLocale::Indonesia },
   { "Iran", QLocale::Iran },
   { "Iraq", QLocale::Iraq },
   { "Ireland", QLocale::Ireland },
   { "Israel", QLocale::Israel },
   { "Italy", QLocale::Italy },
   { "Jamaica", QLocale::Jamaica },
   { "Japan", QLocale::Japan },
   { "Jordan", QLocale::Jordan },
   { "Kazakhstan", QLocale::Kazakhstan },
   { "Kenya", QLocale::Kenya },
   { "Kiribati", QLocale::Kiribati },
   { "NorthKorea", QLocale::NorthKorea },
   { "SouthKorea", QLocale::SouthKorea },
   { "Kuwait", QLocale::Kuwait },
   { "Kyrgyzstan", QLocale::Kyrgyzstan },
   { "Laos", QLocale::Laos },
   { "Latvia", QLocale::Latvia },
   { "Lebanon", QLocale::Lebanon },
   { "Lesotho", QLocale::Lesotho },
   { "Liberia", QLocale::Liberia },
   { "Libya", QLocale::Libya },
   { "Liechtenstein", QLocale::Liechtenstein },
   { "Lithuania", QLocale::Lithuania },
   { "Luxembourg", QLocale::Luxembourg },
   { "Macau", QLocale::Macau },
   { "Macedonia", QLocale::Macedonia },
   { "Madagascar", QLocale::Madagascar },
   { "Malawi", QLocale::Malawi },
   { "Malaysia", QLocale::Malaysia },
   { "Maldives", QLocale::Maldives },
   { "Mali", QLocale::Mali },
   { "Malta", QLocale::Malta },
   { "MarshallIslands", QLocale::MarshallIslands },
   { "Martinique", QLocale::Martinique },
   { "Mauritania", QLocale::Mauritania },
   { "Mauritius", QLocale::Mauritius },
   { "Mayotte", QLocale::Mayotte },
   { "Mexico", QLocale::Mexico },
   { "Micronesia", QLocale::Micronesia },
   { "Moldova", QLocale::Moldova },
   { "Monaco", QLocale::Monaco },
   { "Mongolia", QLocale::Mongolia },
   { "Montserrat", QLocale::Montserrat },
   { "Morocco", QLocale::Morocco },
   { "Mozambique", QLocale::Mozambique },
   { "Myanmar", QLocale::Myanmar },
   { "Namibia", QLocale::Namibia },
   { "NauruCountry", QLocale::NauruCountry },
   { "Nepal", QLocale::Nepal },
   { "Netherlands", QLocale::Netherlands },
   { "CuraSao", QLocale::CuraSao },
   { "NewCaledonia", QLocale::NewCaledonia },
   { "NewZealand", QLocale::NewZealand },
   { "Nicaragua", QLocale::Nicaragua },
   { "Niger", QLocale::Niger },
   { "Nigeria", QLocale::Nigeria },
   { "Niue", QLocale::Niue },
   { "NorfolkIsland", QLocale::NorfolkIsland },
   { "NorthernMarianaIslands", QLocale::NorthernMarianaIslands },
   { "Norway", QLocale::Norway },
   { "Oman", QLocale::Oman },
   { "Pakistan", QLocale::Pakistan },
   { "Palau", QLocale::Palau },
   { "PalestinianTerritories", QLocale::PalestinianTerritories },
   { "Panama", QLocale::Panama },
   { "PapuaNewGuinea", QLocale::PapuaNewGuinea },
   { "Paraguay", QLocale::Paraguay },
   { "Peru", QLocale::Peru },
   { "Philippines", QLocale::Philippines },
   { "Pitcairn", QLocale::Pitcairn },
   { "Poland", QLocale::Poland },
   { "Portugal", QLocale::Portugal },
   { "PuertoRico", QLocale::PuertoRico },
   { "Qatar", QLocale::Qatar },
   { "Reunion", QLocale::Reunion },
   { "Romania", QLocale::Romania },
   { "Russia", QLocale::Russia },
   { "Rwanda", QLocale::Rwanda },
   { "SaintKittsAndNevis", QLocale::SaintKittsAndNevis },
   { "SaintLucia", QLocale::SaintLucia },
   { "SaintVincentAndTheGrenadines", QLocale::SaintVincentAndTheGrenadines },
   { "Samoa", QLocale::Samoa },
   { "SanMarino", QLocale::SanMarino },
   { "SaoTomeAndPrincipe", QLocale::SaoTomeAndPrincipe },
   { "SaudiArabia", QLocale::SaudiArabia },
   { "Senegal", QLocale::Senegal },
   { "Seychelles", QLocale::Seychelles },
   { "SierraLeone", QLocale::SierraLeone },
   { "Singapore", QLocale::Singapore },
   { "Slovakia", QLocale::Slovakia },
   { "Slovenia", QLocale::Slovenia },
   { "SolomonIslands", QLocale::SolomonIslands },
   { "Somalia", QLocale::Somalia },
   { "SouthAfrica", QLocale::SouthAfrica },
   { "SouthGeorgiaAndTheSouthSandwichIslands", QLocale::SouthGeorgiaAndTheSouthSandwichIslands },
   { "Spain", QLocale::Spain },
   { "SriLanka", QLocale::SriLanka },
   { "SaintHelena", QLocale::SaintHelena },
   { "SaintPierreAndMiquelon", QLocale::SaintPierreAndMiquelon },
   { "Sudan", QLocale::Sudan },
   { "Suriname", QLocale::Suriname },
   { "SvalbardAndJanMayenIslands", QLocale::SvalbardAndJanMayenIslands },
   { "Swaziland", QLocale::Swaziland },
   { "Sweden", QLocale::Sweden },
   { "Switzerland", QLocale::Switzerland },
   { "Syria", QLocale::Syria },
   { "Taiwan", QLocale::Taiwan },
   { "Tajikistan", QLocale::Tajikistan },
   { "Tanzania", QLocale::Tanzania },
   { "Thailand", QLocale::Thailand },
   { "Togo", QLocale::Togo },
   { "TokelauCountry", QLocale::TokelauCountry },
   { "Tonga", QLocale::Tonga },
   { "TrinidadAndTobago", QLocale::TrinidadAndTobago },
   { "Tunisia", QLocale::Tunisia },
   { "Turkey", QLocale::Turkey },
   { "Turkmenistan", QLocale::Turkmenistan },
   { "TurksAndCaicosIslands", QLocale::TurksAndCaicosIslands },
   { "TuvaluCountry", QLocale::TuvaluCountry },
   { "Uganda", QLocale::Uganda },
   { "Ukraine", QLocale::Ukraine },
   { "UnitedArabEmirates", QLocale::UnitedArabEmirates },
   { "UnitedKingdom", QLocale::UnitedKingdom },
   { "UnitedStates", QLocale::UnitedStates },
   { "UnitedStatesMinorOutlyingIslands", QLocale::UnitedStatesMinorOutlyingIslands },
   { "Uruguay", QLocale::Uruguay },
   { "Uzbekistan", QLocale::Uzbekistan },
   { "Vanuatu", QLocale::Vanuatu },
   { "VaticanCityState", QLocale::VaticanCityState },
   { "Venezuela", QLocale::Venezuela },
   { "Vietnam", QLocale::Vietnam },
   { "BritishVirginIslands", QLocale::BritishVirginIslands },
   { "UnitedStatesVirginIslands", QLocale::UnitedStatesVirginIslands },
   { "WallisAndFutunaIslands", QLocale::WallisAndFutunaIslands },
   { "WesternSahara", QLocale::WesternSahara },
   { "Yemen", QLocale::Yemen },
   { "CanaryIslands", QLocale::CanaryIslands },
   { "Zambia", QLocale::Zambia },
   { "Zimbabwe", QLocale::Zimbabwe },
   { "ClippertonIsland", QLocale::ClippertonIsland },
   { "Montenegro", QLocale::Montenegro },
   { "Serbia", QLocale::Serbia },
   { "SaintBarthelemy", QLocale::SaintBarthelemy },
   { "SaintMartin", QLocale::SaintMartin },
   { "LatinAmericaAndTheCaribbean", QLocale::LatinAmericaAndTheCaribbean },
   { "AscensionIsland", QLocale::AscensionIsland },
   { "AlandIslands", QLocale::AlandIslands },
   { "DiegoGarcia", QLocale::DiegoGarcia },
   { "CeutaAndMelilla", QLocale::CeutaAndMelilla },
   { "IsleOfMan", QLocale::IsleOfMan },
   { "Jersey", QLocale::Jersey },
   { "TristanDaCunha", QLocale::TristanDaCunha },
   { "SouthSudan", QLocale::SouthSudan },
   { "Bonaire", QLocale::Bonaire },
   { "SintMaarten", QLocale::SintMaarten },
   { "Kosovo", QLocale::Kosovo },
   { "EuropeanUnion", QLocale::EuropeanUnion },
   { "OutlyingOceania", QLocale::OutlyingOceania },
   { "Tokelau", QLocale::Tokelau },
   { "Tuvalu", QLocale::Tuvalu },
   { "DemocraticRepublicOfCongo", QLocale::DemocraticRepublicOfCongo },
   { "PeoplesRepublicOfCongo", QLocale::PeoplesRepublicOfCongo },
   { "DemocraticRepublicOfKorea", QLocale::DemocraticRepublicOfKorea },
   { "RepublicOfKorea", QLocale::RepublicOfKorea },
   { "RussianFederation", QLocale::RussianFederation },
   { "SyrianArabRepublic", QLocale::SyrianArabRepublic },
   { "LastCountry", QLocale::LastCountry },

    /* QLocale::CurrencySymbolFormat */
   { "CurrencyIsoCode", QLocale::CurrencyIsoCode },
   { "CurrencySymbol", QLocale::CurrencySymbol },
   { "CurrencyDisplayName", QLocale::CurrencyDisplayName },

    /* QLocale::FloatingPointPrecisionOption */
   { "FloatingPointShortest", QLocale::FloatingPointShortest },

    /* QLocale::FormatType */
   { "LongFormat", QLocale::LongFormat },
   { "ShortFormat", QLocale::ShortFormat },
   { "NarrowFormat", QLocale::NarrowFormat },

    /* QLocale::Language */
   { "AnyLanguage", QLocale::AnyLanguage },
   { "C", QLocale::C },
   { "Abkhazian", QLocale::Abkhazian },
   { "Oromo", QLocale::Oromo },
   { "Afar", QLocale::Afar },
   { "Afrikaans", QLocale::Afrikaans },
   { "Albanian", QLocale::Albanian },
   { "Amharic", QLocale::Amharic },
   { "Arabic", QLocale::Arabic },
   { "Armenian", QLocale::Armenian },
   { "Assamese", QLocale::Assamese },
   { "Aymara", QLocale::Aymara },
   { "Azerbaijani", QLocale::Azerbaijani },
   { "Bashkir", QLocale::Bashkir },
   { "Basque", QLocale::Basque },
   { "Bengali", QLocale::Bengali },
   { "Dzongkha", QLocale::Dzongkha },
   { "Bihari", QLocale::Bihari },
   { "Bislama", QLocale::Bislama },
   { "Breton", QLocale::Breton },
   { "Bulgarian", QLocale::Bulgarian },
   { "Burmese", QLocale::Burmese },
   { "Belarusian", QLocale::Belarusian },
   { "Khmer", QLocale::Khmer },
   { "Catalan", QLocale::Catalan },
   { "Chinese", QLocale::Chinese },
   { "Corsican", QLocale::Corsican },
   { "Croatian", QLocale::Croatian },
   { "Czech", QLocale::Czech },
   { "Danish", QLocale::Danish },
   { "Dutch", QLocale::Dutch },
   { "English", QLocale::English },
   { "Esperanto", QLocale::Esperanto },
   { "Estonian", QLocale::Estonian },
   { "Faroese", QLocale::Faroese },
   { "Fijian", QLocale::Fijian },
   { "Finnish", QLocale::Finnish },
   { "French", QLocale::French },
   { "WesternFrisian", QLocale::WesternFrisian },
   { "Gaelic", QLocale::Gaelic },
   { "Galician", QLocale::Galician },
   { "Georgian", QLocale::Georgian },
   { "German", QLocale::German },
   { "Greek", QLocale::Greek },
   { "Greenlandic", QLocale::Greenlandic },
   { "Guarani", QLocale::Guarani },
   { "Gujarati", QLocale::Gujarati },
   { "Hausa", QLocale::Hausa },
   { "Hebrew", QLocale::Hebrew },
   { "Hindi", QLocale::Hindi },
   { "Hungarian", QLocale::Hungarian },
   { "Icelandic", QLocale::Icelandic },
   { "Indonesian", QLocale::Indonesian },
   { "Interlingua", QLocale::Interlingua },
   { "Interlingue", QLocale::Interlingue },
   { "Inuktitut", QLocale::Inuktitut },
   { "Inupiak", QLocale::Inupiak },
   { "Irish", QLocale::Irish },
   { "Italian", QLocale::Italian },
   { "Japanese", QLocale::Japanese },
   { "Javanese", QLocale::Javanese },
   { "Kannada", QLocale::Kannada },
   { "Kashmiri", QLocale::Kashmiri },
   { "Kazakh", QLocale::Kazakh },
   { "Kinyarwanda", QLocale::Kinyarwanda },
   { "Kirghiz", QLocale::Kirghiz },
   { "Korean", QLocale::Korean },
   { "Kurdish", QLocale::Kurdish },
   { "Rundi", QLocale::Rundi },
   { "Lao", QLocale::Lao },
   { "Latin", QLocale::Latin },
   { "Latvian", QLocale::Latvian },
   { "Lingala", QLocale::Lingala },
   { "Lithuanian", QLocale::Lithuanian },
   { "Macedonian", QLocale::Macedonian },
   { "Malagasy", QLocale::Malagasy },
   { "Malay", QLocale::Malay },
   { "Malayalam", QLocale::Malayalam },
   { "Maltese", QLocale::Maltese },
   { "Maori", QLocale::Maori },
   { "Marathi", QLocale::Marathi },
   { "Marshallese", QLocale::Marshallese },
   { "Mongolian", QLocale::Mongolian },
   { "NauruLanguage", QLocale::NauruLanguage },
   { "Nepali", QLocale::Nepali },
   { "NorwegianBokmal", QLocale::NorwegianBokmal },
   { "Occitan", QLocale::Occitan },
   { "Oriya", QLocale::Oriya },
   { "Pashto", QLocale::Pashto },
   { "Persian", QLocale::Persian },
   { "Polish", QLocale::Polish },
   { "Portuguese", QLocale::Portuguese },
   { "Punjabi", QLocale::Punjabi },
   { "Quechua", QLocale::Quechua },
   { "Romansh", QLocale::Romansh },
   { "Romanian", QLocale::Romanian },
   { "Russian", QLocale::Russian },
   { "Samoan", QLocale::Samoan },
   { "Sango", QLocale::Sango },
   { "Sanskrit", QLocale::Sanskrit },
   { "Serbian", QLocale::Serbian },
   { "Ossetic", QLocale::Ossetic },
   { "SouthernSotho", QLocale::SouthernSotho },
   { "Tswana", QLocale::Tswana },
   { "Shona", QLocale::Shona },
   { "Sindhi", QLocale::Sindhi },
   { "Sinhala", QLocale::Sinhala },
   { "Swati", QLocale::Swati },
   { "Slovak", QLocale::Slovak },
   { "Slovenian", QLocale::Slovenian },
   { "Somali", QLocale::Somali },
   { "Spanish", QLocale::Spanish },
   { "Sundanese", QLocale::Sundanese },
   { "Swahili", QLocale::Swahili },
   { "Swedish", QLocale::Swedish },
   { "Sardinian", QLocale::Sardinian },
   { "Tajik", QLocale::Tajik },
   { "Tamil", QLocale::Tamil },
   { "Tatar", QLocale::Tatar },
   { "Telugu", QLocale::Telugu },
   { "Thai", QLocale::Thai },
   { "Tibetan", QLocale::Tibetan },
   { "Tigrinya", QLocale::Tigrinya },
   { "Tongan", QLocale::Tongan },
   { "Tsonga", QLocale::Tsonga },
   { "Turkish", QLocale::Turkish },
   { "Turkmen", QLocale::Turkmen },
   { "Tahitian", QLocale::Tahitian },
   { "Uighur", QLocale::Uighur },
   { "Ukrainian", QLocale::Ukrainian },
   { "Urdu", QLocale::Urdu },
   { "Uzbek", QLocale::Uzbek },
   { "Vietnamese", QLocale::Vietnamese },
   { "Volapuk", QLocale::Volapuk },
   { "Welsh", QLocale::Welsh },
   { "Wolof", QLocale::Wolof },
   { "Xhosa", QLocale::Xhosa },
   { "Yiddish", QLocale::Yiddish },
   { "Yoruba", QLocale::Yoruba },
   { "Zhuang", QLocale::Zhuang },
   { "Zulu", QLocale::Zulu },
   { "NorwegianNynorsk", QLocale::NorwegianNynorsk },
   { "Bosnian", QLocale::Bosnian },
   { "Divehi", QLocale::Divehi },
   { "Manx", QLocale::Manx },
   { "Cornish", QLocale::Cornish },
   { "Akan", QLocale::Akan },
   { "Konkani", QLocale::Konkani },
   { "Ga", QLocale::Ga },
   { "Igbo", QLocale::Igbo },
   { "Kamba", QLocale::Kamba },
   { "Syriac", QLocale::Syriac },
   { "Blin", QLocale::Blin },
   { "Geez", QLocale::Geez },
   { "Koro", QLocale::Koro },
   { "Sidamo", QLocale::Sidamo },
   { "Atsam", QLocale::Atsam },
   { "Tigre", QLocale::Tigre },
   { "Jju", QLocale::Jju },
   { "Friulian", QLocale::Friulian },
   { "Venda", QLocale::Venda },
   { "Ewe", QLocale::Ewe },
   { "Walamo", QLocale::Walamo },
   { "Hawaiian", QLocale::Hawaiian },
   { "Tyap", QLocale::Tyap },
   { "Nyanja", QLocale::Nyanja },
   { "Filipino", QLocale::Filipino },
   { "SwissGerman", QLocale::SwissGerman },
   { "SichuanYi", QLocale::SichuanYi },
   { "Kpelle", QLocale::Kpelle },
   { "LowGerman", QLocale::LowGerman },
   { "SouthNdebele", QLocale::SouthNdebele },
   { "NorthernSotho", QLocale::NorthernSotho },
   { "NorthernSami", QLocale::NorthernSami },
   { "Taroko", QLocale::Taroko },
   { "Gusii", QLocale::Gusii },
   { "Taita", QLocale::Taita },
   { "Fulah", QLocale::Fulah },
   { "Kikuyu", QLocale::Kikuyu },
   { "Samburu", QLocale::Samburu },
   { "Sena", QLocale::Sena },
   { "NorthNdebele", QLocale::NorthNdebele },
   { "Rombo", QLocale::Rombo },
   { "Tachelhit", QLocale::Tachelhit },
   { "Kabyle", QLocale::Kabyle },
   { "Nyankole", QLocale::Nyankole },
   { "Bena", QLocale::Bena },
   { "Vunjo", QLocale::Vunjo },
   { "Bambara", QLocale::Bambara },
   { "Embu", QLocale::Embu },
   { "Cherokee", QLocale::Cherokee },
   { "Morisyen", QLocale::Morisyen },
   { "Makonde", QLocale::Makonde },
   { "Langi", QLocale::Langi },
   { "Ganda", QLocale::Ganda },
   { "Bemba", QLocale::Bemba },
   { "Kabuverdianu", QLocale::Kabuverdianu },
   { "Meru", QLocale::Meru },
   { "Kalenjin", QLocale::Kalenjin },
   { "Nama", QLocale::Nama },
   { "Machame", QLocale::Machame },
   { "Colognian", QLocale::Colognian },
   { "Masai", QLocale::Masai },
   { "Soga", QLocale::Soga },
   { "Luyia", QLocale::Luyia },
   { "Asu", QLocale::Asu },
   { "Teso", QLocale::Teso },
   { "Saho", QLocale::Saho },
   { "KoyraChiini", QLocale::KoyraChiini },
   { "Rwa", QLocale::Rwa },
   { "Luo", QLocale::Luo },
   { "Chiga", QLocale::Chiga },
   { "CentralMoroccoTamazight", QLocale::CentralMoroccoTamazight },
   { "KoyraboroSenni", QLocale::KoyraboroSenni },
   { "Shambala", QLocale::Shambala },
   { "Bodo", QLocale::Bodo },
   { "Avaric", QLocale::Avaric },
   { "Chamorro", QLocale::Chamorro },
   { "Chechen", QLocale::Chechen },
   { "Church", QLocale::Church },
   { "Chuvash", QLocale::Chuvash },
   { "Cree", QLocale::Cree },
   { "Haitian", QLocale::Haitian },
   { "Herero", QLocale::Herero },
   { "HiriMotu", QLocale::HiriMotu },
   { "Kanuri", QLocale::Kanuri },
   { "Komi", QLocale::Komi },
   { "Kongo", QLocale::Kongo },
   { "Kwanyama", QLocale::Kwanyama },
   { "Limburgish", QLocale::Limburgish },
   { "LubaKatanga", QLocale::LubaKatanga },
   { "Luxembourgish", QLocale::Luxembourgish },
   { "Navaho", QLocale::Navaho },
   { "Ndonga", QLocale::Ndonga },
   { "Ojibwa", QLocale::Ojibwa },
   { "Pali", QLocale::Pali },
   { "Walloon", QLocale::Walloon },
   { "Aghem", QLocale::Aghem },
   { "Basaa", QLocale::Basaa },
   { "Zarma", QLocale::Zarma },
   { "Duala", QLocale::Duala },
   { "JolaFonyi", QLocale::JolaFonyi },
   { "Ewondo", QLocale::Ewondo },
   { "Bafia", QLocale::Bafia },
   { "MakhuwaMeetto", QLocale::MakhuwaMeetto },
   { "Mundang", QLocale::Mundang },
   { "Kwasio", QLocale::Kwasio },
   { "Nuer", QLocale::Nuer },
   { "Sakha", QLocale::Sakha },
   { "Sangu", QLocale::Sangu },
   { "CongoSwahili", QLocale::CongoSwahili },
   { "Tasawaq", QLocale::Tasawaq },
   { "Vai", QLocale::Vai },
   { "Walser", QLocale::Walser },
   { "Yangben", QLocale::Yangben },
   { "Avestan", QLocale::Avestan },
   { "Asturian", QLocale::Asturian },
   { "Ngomba", QLocale::Ngomba },
   { "Kako", QLocale::Kako },
   { "Meta", QLocale::Meta },
   { "Ngiemboon", QLocale::Ngiemboon },
   { "Aragonese", QLocale::Aragonese },
   { "Akkadian", QLocale::Akkadian },
   { "AncientEgyptian", QLocale::AncientEgyptian },
   { "AncientGreek", QLocale::AncientGreek },
   { "Aramaic", QLocale::Aramaic },
   { "Balinese", QLocale::Balinese },
   { "Bamun", QLocale::Bamun },
   { "BatakToba", QLocale::BatakToba },
   { "Buginese", QLocale::Buginese },
   { "Buhid", QLocale::Buhid },
   { "Carian", QLocale::Carian },
   { "Chakma", QLocale::Chakma },
   { "ClassicalMandaic", QLocale::ClassicalMandaic },
   { "Coptic", QLocale::Coptic },
   { "Dogri", QLocale::Dogri },
   { "EasternCham", QLocale::EasternCham },
   { "EasternKayah", QLocale::EasternKayah },
   { "Etruscan", QLocale::Etruscan },
   { "Gothic", QLocale::Gothic },
   { "Hanunoo", QLocale::Hanunoo },
   { "Ingush", QLocale::Ingush },
   { "LargeFloweryMiao", QLocale::LargeFloweryMiao },
   { "Lepcha", QLocale::Lepcha },
   { "Limbu", QLocale::Limbu },
   { "Lisu", QLocale::Lisu },
   { "Lu", QLocale::Lu },
   { "Lycian", QLocale::Lycian },
   { "Lydian", QLocale::Lydian },
   { "Mandingo", QLocale::Mandingo },
   { "Manipuri", QLocale::Manipuri },
   { "Meroitic", QLocale::Meroitic },
   { "NorthernThai", QLocale::NorthernThai },
   { "OldIrish", QLocale::OldIrish },
   { "OldNorse", QLocale::OldNorse },
   { "OldPersian", QLocale::OldPersian },
   { "OldTurkish", QLocale::OldTurkish },
   { "Pahlavi", QLocale::Pahlavi },
   { "Parthian", QLocale::Parthian },
   { "Phoenician", QLocale::Phoenician },
   { "PrakritLanguage", QLocale::PrakritLanguage },
   { "Rejang", QLocale::Rejang },
   { "Sabaean", QLocale::Sabaean },
   { "Samaritan", QLocale::Samaritan },
   { "Santali", QLocale::Santali },
   { "Saurashtra", QLocale::Saurashtra },
   { "Sora", QLocale::Sora },
   { "Sylheti", QLocale::Sylheti },
   { "Tagbanwa", QLocale::Tagbanwa },
   { "TaiDam", QLocale::TaiDam },
   { "TaiNua", QLocale::TaiNua },
   { "Ugaritic", QLocale::Ugaritic },
   { "Akoose", QLocale::Akoose },
   { "Lakota", QLocale::Lakota },
   { "StandardMoroccanTamazight", QLocale::StandardMoroccanTamazight },
   { "Mapuche", QLocale::Mapuche },
   { "CentralKurdish", QLocale::CentralKurdish },
   { "LowerSorbian", QLocale::LowerSorbian },
   { "UpperSorbian", QLocale::UpperSorbian },
   { "Kenyang", QLocale::Kenyang },
   { "Mohawk", QLocale::Mohawk },
   { "Nko", QLocale::Nko },
   { "Prussian", QLocale::Prussian },
   { "Kiche", QLocale::Kiche },
   { "SouthernSami", QLocale::SouthernSami },
   { "LuleSami", QLocale::LuleSami },
   { "InariSami", QLocale::InariSami },
   { "SkoltSami", QLocale::SkoltSami },
   { "Warlpiri", QLocale::Warlpiri },
   { "ManichaeanMiddlePersian", QLocale::ManichaeanMiddlePersian },
   { "Mende", QLocale::Mende },
   { "AncientNorthArabian", QLocale::AncientNorthArabian },
   { "LinearA", QLocale::LinearA },
   { "HmongNjua", QLocale::HmongNjua },
   { "Ho", QLocale::Ho },
   { "Lezghian", QLocale::Lezghian },
   { "Bassa", QLocale::Bassa },
   { "Mono", QLocale::Mono },
   { "TedimChin", QLocale::TedimChin },
   { "Maithili", QLocale::Maithili },
   { "Ahom", QLocale::Ahom },
   { "AmericanSignLanguage", QLocale::AmericanSignLanguage },
   { "ArdhamagadhiPrakrit", QLocale::ArdhamagadhiPrakrit },
   { "Bhojpuri", QLocale::Bhojpuri },
   { "HieroglyphicLuwian", QLocale::HieroglyphicLuwian },
   { "LiteraryChinese", QLocale::LiteraryChinese },
   { "Mazanderani", QLocale::Mazanderani },
   { "Mru", QLocale::Mru },
   { "Newari", QLocale::Newari },
   { "NorthernLuri", QLocale::NorthernLuri },
   { "Palauan", QLocale::Palauan },
   { "Papiamento", QLocale::Papiamento },
   { "Saraiki", QLocale::Saraiki },
   { "TokelauLanguage", QLocale::TokelauLanguage },
   { "TokPisin", QLocale::TokPisin },
   { "TuvaluLanguage", QLocale::TuvaluLanguage },
   { "UncodedLanguages", QLocale::UncodedLanguages },
   { "Cantonese", QLocale::Cantonese },
   { "Osage", QLocale::Osage },
   { "Tangut", QLocale::Tangut },
   { "Norwegian", QLocale::Norwegian },
   { "Moldavian", QLocale::Moldavian },
   { "SerboCroatian", QLocale::SerboCroatian },
   { "Tagalog", QLocale::Tagalog },
   { "Twi", QLocale::Twi },
   { "Afan", QLocale::Afan },
   { "Byelorussian", QLocale::Byelorussian },
   { "Bhutani", QLocale::Bhutani },
   { "Cambodian", QLocale::Cambodian },
   { "Kurundi", QLocale::Kurundi },
   { "RhaetoRomance", QLocale::RhaetoRomance },
   { "Chewa", QLocale::Chewa },
   { "Frisian", QLocale::Frisian },
   { "Uigur", QLocale::Uigur },
   { "LastLanguage", QLocale::LastLanguage },

    /* QLocale::MeasurementSystem */
   { "MetricSystem", QLocale::MetricSystem },
   { "ImperialUSSystem", QLocale::ImperialUSSystem },
   { "ImperialUKSystem", QLocale::ImperialUKSystem },
   { "ImperialSystem", QLocale::ImperialSystem },

    /* QLocale::NumberOption */
   { "DefaultNumberOptions", QLocale::DefaultNumberOptions },
   { "OmitGroupSeparator", QLocale::OmitGroupSeparator },
   { "RejectGroupSeparator", QLocale::RejectGroupSeparator },
   { "OmitLeadingZeroInExponent", QLocale::OmitLeadingZeroInExponent },
   { "RejectLeadingZeroInExponent", QLocale::RejectLeadingZeroInExponent },

    /* QLocale::QuotationStyle */
   { "StandardQuotation", QLocale::StandardQuotation },
   { "AlternateQuotation", QLocale::AlternateQuotation },

    /* QLocale::Script */
   { "AnyScript", QLocale::AnyScript },
   { "ArabicScript", QLocale::ArabicScript },
   { "CyrillicScript", QLocale::CyrillicScript },
   { "DeseretScript", QLocale::DeseretScript },
   { "GurmukhiScript", QLocale::GurmukhiScript },
   { "SimplifiedHanScript", QLocale::SimplifiedHanScript },
   { "TraditionalHanScript", QLocale::TraditionalHanScript },
   { "LatinScript", QLocale::LatinScript },
   { "MongolianScript", QLocale::MongolianScript },
   { "TifinaghScript", QLocale::TifinaghScript },
   { "ArmenianScript", QLocale::ArmenianScript },
   { "BengaliScript", QLocale::BengaliScript },
   { "CherokeeScript", QLocale::CherokeeScript },
   { "DevanagariScript", QLocale::DevanagariScript },
   { "EthiopicScript", QLocale::EthiopicScript },
   { "GeorgianScript", QLocale::GeorgianScript },
   { "GreekScript", QLocale::GreekScript },
   { "GujaratiScript", QLocale::GujaratiScript },
   { "HebrewScript", QLocale::HebrewScript },
   { "JapaneseScript", QLocale::JapaneseScript },
   { "KhmerScript", QLocale::KhmerScript },
   { "KannadaScript", QLocale::KannadaScript },
   { "KoreanScript", QLocale::KoreanScript },
   { "LaoScript", QLocale::LaoScript },
   { "MalayalamScript", QLocale::MalayalamScript },
   { "MyanmarScript", QLocale::MyanmarScript },
   { "OriyaScript", QLocale::OriyaScript },
   { "TamilScript", QLocale::TamilScript },
   { "TeluguScript", QLocale::TeluguScript },
   { "ThaanaScript", QLocale::ThaanaScript },
   { "ThaiScript", QLocale::ThaiScript },
   { "TibetanScript", QLocale::TibetanScript },
   { "SinhalaScript", QLocale::SinhalaScript },
   { "SyriacScript", QLocale::SyriacScript },
   { "YiScript", QLocale::YiScript },
   { "VaiScript", QLocale::VaiScript },
   { "AvestanScript", QLocale::AvestanScript },
   { "BalineseScript", QLocale::BalineseScript },
   { "BamumScript", QLocale::BamumScript },
   { "BatakScript", QLocale::BatakScript },
   { "BopomofoScript", QLocale::BopomofoScript },
   { "BrahmiScript", QLocale::BrahmiScript },
   { "BugineseScript", QLocale::BugineseScript },
   { "BuhidScript", QLocale::BuhidScript },
   { "CanadianAboriginalScript", QLocale::CanadianAboriginalScript },
   { "CarianScript", QLocale::CarianScript },
   { "ChakmaScript", QLocale::ChakmaScript },
   { "ChamScript", QLocale::ChamScript },
   { "CopticScript", QLocale::CopticScript },
   { "CypriotScript", QLocale::CypriotScript },
   { "EgyptianHieroglyphsScript", QLocale::EgyptianHieroglyphsScript },
   { "FraserScript", QLocale::FraserScript },
   { "GlagoliticScript", QLocale::GlagoliticScript },
   { "GothicScript", QLocale::GothicScript },
   { "HanScript", QLocale::HanScript },
   { "HangulScript", QLocale::HangulScript },
   { "HanunooScript", QLocale::HanunooScript },
   { "ImperialAramaicScript", QLocale::ImperialAramaicScript },
   { "InscriptionalPahlaviScript", QLocale::InscriptionalPahlaviScript },
   { "InscriptionalParthianScript", QLocale::InscriptionalParthianScript },
   { "JavaneseScript", QLocale::JavaneseScript },
   { "KaithiScript", QLocale::KaithiScript },
   { "KatakanaScript", QLocale::KatakanaScript },
   { "KayahLiScript", QLocale::KayahLiScript },
   { "KharoshthiScript", QLocale::KharoshthiScript },
   { "LannaScript", QLocale::LannaScript },
   { "LepchaScript", QLocale::LepchaScript },
   { "LimbuScript", QLocale::LimbuScript },
   { "LinearBScript", QLocale::LinearBScript },
   { "LycianScript", QLocale::LycianScript },
   { "LydianScript", QLocale::LydianScript },
   { "MandaeanScript", QLocale::MandaeanScript },
   { "MeiteiMayekScript", QLocale::MeiteiMayekScript },
   { "MeroiticScript", QLocale::MeroiticScript },
   { "MeroiticCursiveScript", QLocale::MeroiticCursiveScript },
   { "NkoScript", QLocale::NkoScript },
   { "NewTaiLueScript", QLocale::NewTaiLueScript },
   { "OghamScript", QLocale::OghamScript },
   { "OlChikiScript", QLocale::OlChikiScript },
   { "OldItalicScript", QLocale::OldItalicScript },
   { "OldPersianScript", QLocale::OldPersianScript },
   { "OldSouthArabianScript", QLocale::OldSouthArabianScript },
   { "OrkhonScript", QLocale::OrkhonScript },
   { "OsmanyaScript", QLocale::OsmanyaScript },
   { "PhagsPaScript", QLocale::PhagsPaScript },
   { "PhoenicianScript", QLocale::PhoenicianScript },
   { "PollardPhoneticScript", QLocale::PollardPhoneticScript },
   { "RejangScript", QLocale::RejangScript },
   { "RunicScript", QLocale::RunicScript },
   { "SamaritanScript", QLocale::SamaritanScript },
   { "SaurashtraScript", QLocale::SaurashtraScript },
   { "SharadaScript", QLocale::SharadaScript },
   { "ShavianScript", QLocale::ShavianScript },
   { "SoraSompengScript", QLocale::SoraSompengScript },
   { "CuneiformScript", QLocale::CuneiformScript },
   { "SundaneseScript", QLocale::SundaneseScript },
   { "SylotiNagriScript", QLocale::SylotiNagriScript },
   { "TagalogScript", QLocale::TagalogScript },
   { "TagbanwaScript", QLocale::TagbanwaScript },
   { "TaiLeScript", QLocale::TaiLeScript },
   { "TaiVietScript", QLocale::TaiVietScript },
   { "TakriScript", QLocale::TakriScript },
   { "UgariticScript", QLocale::UgariticScript },
   { "BrailleScript", QLocale::BrailleScript },
   { "HiraganaScript", QLocale::HiraganaScript },
   { "CaucasianAlbanianScript", QLocale::CaucasianAlbanianScript },
   { "BassaVahScript", QLocale::BassaVahScript },
   { "DuployanScript", QLocale::DuployanScript },
   { "ElbasanScript", QLocale::ElbasanScript },
   { "GranthaScript", QLocale::GranthaScript },
   { "PahawhHmongScript", QLocale::PahawhHmongScript },
   { "KhojkiScript", QLocale::KhojkiScript },
   { "LinearAScript", QLocale::LinearAScript },
   { "MahajaniScript", QLocale::MahajaniScript },
   { "ManichaeanScript", QLocale::ManichaeanScript },
   { "MendeKikakuiScript", QLocale::MendeKikakuiScript },
   { "ModiScript", QLocale::ModiScript },
   { "MroScript", QLocale::MroScript },
   { "OldNorthArabianScript", QLocale::OldNorthArabianScript },
   { "NabataeanScript", QLocale::NabataeanScript },
   { "PalmyreneScript", QLocale::PalmyreneScript },
   { "PauCinHauScript", QLocale::PauCinHauScript },
   { "OldPermicScript", QLocale::OldPermicScript },
   { "PsalterPahlaviScript", QLocale::PsalterPahlaviScript },
   { "SiddhamScript", QLocale::SiddhamScript },
   { "KhudawadiScript", QLocale::KhudawadiScript },
   { "TirhutaScript", QLocale::TirhutaScript },
   { "VarangKshitiScript", QLocale::VarangKshitiScript },
   { "AhomScript", QLocale::AhomScript },
   { "AnatolianHieroglyphsScript", QLocale::AnatolianHieroglyphsScript },
   { "HatranScript", QLocale::HatranScript },
   { "MultaniScript", QLocale::MultaniScript },
   { "OldHungarianScript", QLocale::OldHungarianScript },
   { "SignWritingScript", QLocale::SignWritingScript },
   { "AdlamScript", QLocale::AdlamScript },
   { "BhaiksukiScript", QLocale::BhaiksukiScript },
   { "MarchenScript", QLocale::MarchenScript },
   { "NewaScript", QLocale::NewaScript },
   { "OsageScript", QLocale::OsageScript },
   { "TangutScript", QLocale::TangutScript },
   { "HanWithBopomofoScript", QLocale::HanWithBopomofoScript },
   { "JamoScript", QLocale::JamoScript },
   { "SimplifiedChineseScript", QLocale::SimplifiedChineseScript },
   { "TraditionalChineseScript", QLocale::TraditionalChineseScript },
   { "LastScript", QLocale::LastScript },

};

QVector<PlastiQMetaObject*> PlastiQQLocale::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQLocale::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQLocale::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QLocale", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLocale::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLocale::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLocale *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLocale(); break;
        case 1: o = new QLocale(stack[1].s_string); break;
        case 2: o = new QLocale(QLocale::Language(stack[1].s_int64)); break;
        case 3: o = new QLocale(QLocale::Language(stack[1].s_int64),
                    QLocale::Country(stack[2].s_int64)); break;
        case 4: o = new QLocale(QLocale::Language(stack[1].s_int64),
                    QLocale::Script(stack[2].s_int64),
                    QLocale::Country(stack[3].s_int64)); break;
        case 5: o = new QLocale((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLocale *p = new PlastiQQLocale();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLocale *p = new PlastiQQLocale();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 118) {
            id -= 118;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLocale *o = sc ? Q_NULLPTR : reinterpret_cast<QLocale*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->amText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->bcp47Name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { qint64 _r = o->country(); // HACK for Country 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { QString _r = o->createSeparatedList((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { QString _r = o->currencySymbol();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { QString _r = o->currencySymbol(QLocale::CurrencySymbolFormat(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = o->dateFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { QString _r = o->dateFormat(QLocale::FormatType(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { QString _r = o->dateTimeFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { QString _r = o->dateTimeFormat(QLocale::FormatType(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { QString _r = o->dayName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { QString _r = o->dayName(stack[1].s_int,
                    QLocale::FormatType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { /* COPY OBJECT */
            QChar *_r = new QChar(o->decimalPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QChar *_r = new QChar(o->exponential());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { qint64 _r = o->firstDayOfWeek(); // HACK for Qt::DayOfWeek 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { /* COPY OBJECT */
            QChar *_r = new QChar(o->groupSeparator());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { qint64 _r = o->language(); // HACK for Language 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { qint64 _r = o->measurementSystem(); // HACK for MeasurementSystem 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 18: { QString _r = o->monthName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 19: { QString _r = o->monthName(stack[1].s_int,
                    QLocale::FormatType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 20: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 21: { QString _r = o->nativeCountryName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 22: { QString _r = o->nativeLanguageName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: { /* COPY OBJECT */
            QChar *_r = new QChar(o->negativeSign());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { qint64 _r = o->numberOptions(); // HACK for NumberOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 25: { /* COPY OBJECT */
            QChar *_r = new QChar(o->percent());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { QString _r = o->pmText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 27: { /* COPY OBJECT */
            QChar *_r = new QChar(o->positiveSign());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { QString _r = o->quoteString(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 29: { QString _r = o->quoteString(stack[1].s_string,
                    QLocale::QuotationStyle(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 30: { QString _r = o->quoteString((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 31: { QString _r = o->quoteString((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    QLocale::QuotationStyle(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 32: { qint64 _r = o->script(); // HACK for Script 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 33: o->setNumberOptions(QLocale::NumberOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 34: { QString _r = o->standaloneDayName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 35: { QString _r = o->standaloneDayName(stack[1].s_int,
                    QLocale::FormatType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 36: { QString _r = o->standaloneMonthName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 37: { QString _r = o->standaloneMonthName(stack[1].s_int,
                    QLocale::FormatType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 38: o->swap((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 39: { qint64 _r = o->textDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 40: { QString _r = o->timeFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 41: { QString _r = o->timeFormat(QLocale::FormatType(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 42: { QString _r = o->toCurrencyString(stack[1].s_long);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 43: { QString _r = o->toCurrencyString(stack[1].s_long,
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 44: { QString _r = o->toCurrencyString(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 45: { QString _r = o->toCurrencyString(stack[1].s_int,
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 46: { QString _r = o->toCurrencyString(stack[1].s_double);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 47: { QString _r = o->toCurrencyString(stack[1].s_double,
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 48: { QString _r = o->toCurrencyString(stack[1].s_double,
                    stack[2].s_string,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 49: { QString _r = o->toCurrencyString(stack[1].s_double,
                    stack[2].s_string,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 50: { /* COPY OBJECT */
            QDate *_r = new QDate(o->toDate(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 51: { /* COPY OBJECT */
            QDate *_r = new QDate(o->toDate(stack[1].s_string,
                    QLocale::FormatType(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 52: { /* COPY OBJECT */
            QDate *_r = new QDate(o->toDate(stack[1].s_string,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 53: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->toDateTime(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 54: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->toDateTime(stack[1].s_string,
                    QLocale::FormatType(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 55: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->toDateTime(stack[1].s_string,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: { double _r = o->toDouble(stack[1].s_string);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 57: { double _r = o->toDouble(stack[1].s_string,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 58: { double _r = o->toDouble((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 59: { double _r = o->toDouble((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 60: { double _r = o->toFloat(stack[1].s_string);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 61: { double _r = o->toFloat(stack[1].s_string,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 62: { double _r = o->toFloat((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 63: { double _r = o->toFloat((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 64: { int _r = o->toInt(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 65: { int _r = o->toInt(stack[1].s_string,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 66: { int _r = o->toInt((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 67: { int _r = o->toInt((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 68: { long _r = o->toLongLong(stack[1].s_string);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 69: { long _r = o->toLongLong(stack[1].s_string,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 70: { long _r = o->toLongLong((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 71: { long _r = o->toLongLong((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 72: { QString _r = o->toLower(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 73: { int _r = o->toShort(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 74: { int _r = o->toShort(stack[1].s_string,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 75: { int _r = o->toShort((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 76: { int _r = o->toShort((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 77: { QString _r = o->toString(stack[1].s_long);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 78: { QString _r = o->toString(stack[1].s_long);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 79: { QString _r = o->toString(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 80: { QString _r = o->toString(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 81: { QString _r = o->toString(stack[1].s_long);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 82: { QString _r = o->toString(stack[1].s_double);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 83: { QString _r = o->toString(stack[1].s_double,
                    stack[2].s_char);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 84: { QString _r = o->toString(stack[1].s_double,
                    stack[2].s_char,
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 85: { QString _r = o->toString((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 86: { QString _r = o->toString((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 87: { QString _r = o->toString((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    QLocale::FormatType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 88: { QString _r = o->toString((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 89: { QString _r = o->toString((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 90: { QString _r = o->toString((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)),
                    QLocale::FormatType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 91: { QString _r = o->toString((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 92: { QString _r = o->toString((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)),
                    QLocale::FormatType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 93: { QString _r = o->toString((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 94: { /* COPY OBJECT */
            QTime *_r = new QTime(o->toTime(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 95: { /* COPY OBJECT */
            QTime *_r = new QTime(o->toTime(stack[1].s_string,
                    QLocale::FormatType(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 96: { /* COPY OBJECT */
            QTime *_r = new QTime(o->toTime(stack[1].s_string,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 97: { long _r = o->toUInt(stack[1].s_string);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 98: { long _r = o->toUInt(stack[1].s_string,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 99: { long _r = o->toUInt((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 100: { long _r = o->toUInt((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 101: { long _r = o->toULongLong(stack[1].s_string);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 102: { long _r = o->toULongLong(stack[1].s_string,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 103: { long _r = o->toULongLong((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 104: { long _r = o->toULongLong((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 105: { int _r = o->toUShort(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 106: { int _r = o->toUShort(stack[1].s_string,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 107: { int _r = o->toUShort((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 108: { int _r = o->toUShort((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 109: { QString _r = o->toUpper(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 110: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->uiLanguages());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 111: { /* COPY OBJECT */
            QChar *_r = new QChar(o->zeroDigit());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 112: { /* COPY OBJECT */
            QLocale *_r = sc ? new QLocale(QLocale::c()) : new QLocale(o->c());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLocale";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 113: { QString _r = sc ? QLocale::countryToString(QLocale::Country(stack[1].s_int64)) : o->countryToString(QLocale::Country(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 114: { QString _r = sc ? QLocale::languageToString(QLocale::Language(stack[1].s_int64)) : o->languageToString(QLocale::Language(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 115: { QString _r = sc ? QLocale::scriptToString(QLocale::Script(stack[1].s_int64)) : o->scriptToString(QLocale::Script(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 116: if(sc) { QLocale::setDefault((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp))); } else { o->setDefault((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 117: { /* COPY OBJECT */
            QLocale *_r = sc ? new QLocale(QLocale::system()) : new QLocale(o->system());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLocale";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QLocale *o = reinterpret_cast<QLocale*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQLocale::~PlastiQQLocale() {
    QLocale* o = reinterpret_cast<QLocale*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
