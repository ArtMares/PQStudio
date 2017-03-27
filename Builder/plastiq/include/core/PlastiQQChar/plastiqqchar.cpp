#include "plastiqmethod.h"
#include "plastiqqchar.h"

#include <QChar> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQChar::plastiqConstructors = {
    { "QChar()", { "QChar", "", "QChar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChar(int)", { "QChar", "ushort", "QChar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChar(uchar,uchar)", { "QChar", "uchar,uchar", "QChar*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChar(int)", { "QChar", "short", "QChar*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChar(long)", { "QChar", "uint", "QChar*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChar(int)", { "QChar", "int", "QChar*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChar(enum)", { "QChar", "SpecialCharacter", "QChar*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChar(QLatin1Char)", { "QChar", "QLatin1Char", "QChar*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChar(char)", { "QChar", "char", "QChar*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChar(uchar)", { "QChar", "uchar", "QChar*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQChar::plastiqMethods = {
    { "category()", { "category", "", "Category", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cell()", { "cell", "", "uchar", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "charcombiningClass()", { "charcombiningClass", "", "unsigned", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "decomposition()", { "decomposition", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "decompositionTag()", { "decompositionTag", "", "Decomposition", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "digitValue()", { "digitValue", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "direction()", { "direction", "", "Direction", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasMirrored()", { "hasMirrored", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDigit()", { "isDigit", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isHighSurrogate()", { "isHighSurrogate", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLetter()", { "isLetter", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLetterOrNumber()", { "isLetterOrNumber", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLowSurrogate()", { "isLowSurrogate", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLower()", { "isLower", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMark()", { "isMark", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNonCharacter()", { "isNonCharacter", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNumber()", { "isNumber", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isPrint()", { "isPrint", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isPunct()", { "isPunct", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSpace()", { "isSpace", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSurrogate()", { "isSurrogate", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSymbol()", { "isSymbol", "", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTitleCase()", { "isTitleCase", "", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isUpper()", { "isUpper", "", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "joiningType()", { "joiningType", "", "JoiningType", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mirroredChar()", { "mirroredChar", "", "QChar", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "row()", { "row", "", "uchar", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "script()", { "script", "", "Script", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCaseFolded()", { "toCaseFolded", "", "QChar", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLatin1()", { "toLatin1", "", "char", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLower()", { "toLower", "", "QChar", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTitleCase()", { "toTitleCase", "", "QChar", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUpper()", { "toUpper", "", "QChar", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unicode()", { "unicode", "", "ushort", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unicodeVersion()", { "unicodeVersion", "", "UnicodeVersion", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "category(long)", { "category", "uint", "Category", 36, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "charcombiningClass(long)", { "charcombiningClass", "uint", "unsigned", 37, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "currentUnicodeVersion()", { "currentUnicodeVersion", "", "UnicodeVersion", 38, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "decomposition(long)", { "decomposition", "uint", "QString", 39, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "decompositionTag(long)", { "decompositionTag", "uint", "Decomposition", 40, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "digitValue(long)", { "digitValue", "uint", "int", 41, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "direction(long)", { "direction", "uint", "Direction", 42, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromLatin1(char)", { "fromLatin1", "char", "QChar", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "hasMirrored(long)", { "hasMirrored", "uint", "bool", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "highSurrogate(long)", { "highSurrogate", "uint", "ushort", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isDigit(long)", { "isDigit", "uint", "bool", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isHighSurrogate(long)", { "isHighSurrogate", "uint", "bool", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isLetter(long)", { "isLetter", "uint", "bool", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isLetterOrNumber(long)", { "isLetterOrNumber", "uint", "bool", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isLowSurrogate(long)", { "isLowSurrogate", "uint", "bool", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isLower(long)", { "isLower", "uint", "bool", 51, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isMark(long)", { "isMark", "uint", "bool", 52, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isNonCharacter(long)", { "isNonCharacter", "uint", "bool", 53, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isNumber(long)", { "isNumber", "uint", "bool", 54, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isPrint(long)", { "isPrint", "uint", "bool", 55, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isPunct(long)", { "isPunct", "uint", "bool", 56, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isSpace(long)", { "isSpace", "uint", "bool", 57, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isSurrogate(long)", { "isSurrogate", "uint", "bool", 58, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isSymbol(long)", { "isSymbol", "uint", "bool", 59, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isTitleCase(long)", { "isTitleCase", "uint", "bool", 60, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isUpper(long)", { "isUpper", "uint", "bool", 61, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "joiningType(long)", { "joiningType", "uint", "JoiningType", 62, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "lowSurrogate(long)", { "lowSurrogate", "uint", "ushort", 63, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "mirroredChar(long)", { "mirroredChar", "uint", "uint", 64, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "requiresSurrogates(long)", { "requiresSurrogates", "uint", "bool", 65, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "script(long)", { "script", "uint", "Script", 66, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "surrogateToUcs4(int,int)", { "surrogateToUcs4", "ushort,ushort", "uint", 67, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "surrogateToUcs4(QChar,QChar)", { "surrogateToUcs4", "QChar,QChar", "uint", 68, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toCaseFolded(long)", { "toCaseFolded", "uint", "uint", 69, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toLower(long)", { "toLower", "uint", "uint", 70, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toTitleCase(long)", { "toTitleCase", "uint", "uint", 71, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toUpper(long)", { "toUpper", "uint", "uint", 72, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "unicodeVersion(long)", { "unicodeVersion", "uint", "UnicodeVersion", 73, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQChar::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQChar::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQChar::plastiqConstants = {

    /* QChar::Category */
   { "Mark_NonSpacing", QChar::Mark_NonSpacing },
   { "Mark_SpacingCombining", QChar::Mark_SpacingCombining },
   { "Mark_Enclosing", QChar::Mark_Enclosing },
   { "Number_DecimalDigit", QChar::Number_DecimalDigit },
   { "Number_Letter", QChar::Number_Letter },
   { "Number_Other", QChar::Number_Other },
   { "Separator_Space", QChar::Separator_Space },
   { "Separator_Line", QChar::Separator_Line },
   { "Separator_Paragraph", QChar::Separator_Paragraph },
   { "Other_Control", QChar::Other_Control },
   { "Other_Format", QChar::Other_Format },
   { "Other_Surrogate", QChar::Other_Surrogate },
   { "Other_PrivateUse", QChar::Other_PrivateUse },
   { "Other_NotAssigned", QChar::Other_NotAssigned },
   { "Letter_Uppercase", QChar::Letter_Uppercase },
   { "Letter_Lowercase", QChar::Letter_Lowercase },
   { "Letter_Titlecase", QChar::Letter_Titlecase },
   { "Letter_Modifier", QChar::Letter_Modifier },
   { "Letter_Other", QChar::Letter_Other },
   { "Punctuation_Connector", QChar::Punctuation_Connector },
   { "Punctuation_Dash", QChar::Punctuation_Dash },
   { "Punctuation_Open", QChar::Punctuation_Open },
   { "Punctuation_Close", QChar::Punctuation_Close },
   { "Punctuation_InitialQuote", QChar::Punctuation_InitialQuote },
   { "Punctuation_FinalQuote", QChar::Punctuation_FinalQuote },
   { "Punctuation_Other", QChar::Punctuation_Other },
   { "Symbol_Math", QChar::Symbol_Math },
   { "Symbol_Currency", QChar::Symbol_Currency },
   { "Symbol_Modifier", QChar::Symbol_Modifier },
   { "Symbol_Other", QChar::Symbol_Other },

    /* QChar::Decomposition */
   { "NoDecomposition", QChar::NoDecomposition },
   { "Canonical", QChar::Canonical },
   { "Font", QChar::Font },
   { "NoBreak", QChar::NoBreak },
   { "Initial", QChar::Initial },
   { "Medial", QChar::Medial },
   { "Final", QChar::Final },
   { "Isolated", QChar::Isolated },
   { "Circle", QChar::Circle },
   { "Super", QChar::Super },
   { "Sub", QChar::Sub },
   { "Vertical", QChar::Vertical },
   { "Wide", QChar::Wide },
   { "Narrow", QChar::Narrow },
   { "Small", QChar::Small },
   { "Square", QChar::Square },
   { "Compat", QChar::Compat },
   { "Fraction", QChar::Fraction },

    /* QChar::Direction */
   { "DirL", QChar::DirL },
   { "DirR", QChar::DirR },
   { "DirEN", QChar::DirEN },
   { "DirES", QChar::DirES },
   { "DirET", QChar::DirET },
   { "DirAN", QChar::DirAN },
   { "DirCS", QChar::DirCS },
   { "DirB", QChar::DirB },
   { "DirS", QChar::DirS },
   { "DirWS", QChar::DirWS },
   { "DirON", QChar::DirON },
   { "DirLRE", QChar::DirLRE },
   { "DirLRO", QChar::DirLRO },
   { "DirAL", QChar::DirAL },
   { "DirRLE", QChar::DirRLE },
   { "DirRLO", QChar::DirRLO },
   { "DirPDF", QChar::DirPDF },
   { "DirNSM", QChar::DirNSM },
   { "DirBN", QChar::DirBN },
   { "DirLRI", QChar::DirLRI },
   { "DirRLI", QChar::DirRLI },
   { "DirFSI", QChar::DirFSI },
   { "DirPDI", QChar::DirPDI },

    /* QChar::JoiningType */
   { "Joining_None", QChar::Joining_None },
   { "Joining_Causing", QChar::Joining_Causing },
   { "Joining_Dual", QChar::Joining_Dual },
   { "Joining_Right", QChar::Joining_Right },
   { "Joining_Left", QChar::Joining_Left },
   { "Joining_Transparent", QChar::Joining_Transparent },

    /* QChar::Script */
   { "Script_Unknown", QChar::Script_Unknown },
   { "Script_Inherited", QChar::Script_Inherited },
   { "Script_Common", QChar::Script_Common },
   { "Script_Latin", QChar::Script_Latin },
   { "Script_Greek", QChar::Script_Greek },
   { "Script_Cyrillic", QChar::Script_Cyrillic },
   { "Script_Armenian", QChar::Script_Armenian },
   { "Script_Hebrew", QChar::Script_Hebrew },
   { "Script_Arabic", QChar::Script_Arabic },
   { "Script_Syriac", QChar::Script_Syriac },
   { "Script_Thaana", QChar::Script_Thaana },
   { "Script_Devanagari", QChar::Script_Devanagari },
   { "Script_Bengali", QChar::Script_Bengali },
   { "Script_Gurmukhi", QChar::Script_Gurmukhi },
   { "Script_Gujarati", QChar::Script_Gujarati },
   { "Script_Oriya", QChar::Script_Oriya },
   { "Script_Tamil", QChar::Script_Tamil },
   { "Script_Telugu", QChar::Script_Telugu },
   { "Script_Kannada", QChar::Script_Kannada },
   { "Script_Malayalam", QChar::Script_Malayalam },
   { "Script_Sinhala", QChar::Script_Sinhala },
   { "Script_Thai", QChar::Script_Thai },
   { "Script_Lao", QChar::Script_Lao },
   { "Script_Tibetan", QChar::Script_Tibetan },
   { "Script_Myanmar", QChar::Script_Myanmar },
   { "Script_Georgian", QChar::Script_Georgian },
   { "Script_Hangul", QChar::Script_Hangul },
   { "Script_Ethiopic", QChar::Script_Ethiopic },
   { "Script_Cherokee", QChar::Script_Cherokee },
   { "Script_CanadianAboriginal", QChar::Script_CanadianAboriginal },
   { "Script_Ogham", QChar::Script_Ogham },
   { "Script_Runic", QChar::Script_Runic },
   { "Script_Khmer", QChar::Script_Khmer },
   { "Script_Mongolian", QChar::Script_Mongolian },
   { "Script_Hiragana", QChar::Script_Hiragana },
   { "Script_Katakana", QChar::Script_Katakana },
   { "Script_Bopomofo", QChar::Script_Bopomofo },
   { "Script_Han", QChar::Script_Han },
   { "Script_Yi", QChar::Script_Yi },
   { "Script_OldItalic", QChar::Script_OldItalic },
   { "Script_Gothic", QChar::Script_Gothic },
   { "Script_Deseret", QChar::Script_Deseret },
   { "Script_Tagalog", QChar::Script_Tagalog },
   { "Script_Hanunoo", QChar::Script_Hanunoo },
   { "Script_Buhid", QChar::Script_Buhid },
   { "Script_Tagbanwa", QChar::Script_Tagbanwa },
   { "Script_Coptic", QChar::Script_Coptic },
   { "Script_Limbu", QChar::Script_Limbu },
   { "Script_TaiLe", QChar::Script_TaiLe },
   { "Script_LinearB", QChar::Script_LinearB },
   { "Script_Ugaritic", QChar::Script_Ugaritic },
   { "Script_Shavian", QChar::Script_Shavian },
   { "Script_Osmanya", QChar::Script_Osmanya },
   { "Script_Cypriot", QChar::Script_Cypriot },
   { "Script_Braille", QChar::Script_Braille },
   { "Script_Buginese", QChar::Script_Buginese },
   { "Script_NewTaiLue", QChar::Script_NewTaiLue },
   { "Script_Glagolitic", QChar::Script_Glagolitic },
   { "Script_Tifinagh", QChar::Script_Tifinagh },
   { "Script_SylotiNagri", QChar::Script_SylotiNagri },
   { "Script_OldPersian", QChar::Script_OldPersian },
   { "Script_Kharoshthi", QChar::Script_Kharoshthi },
   { "Script_Balinese", QChar::Script_Balinese },
   { "Script_Cuneiform", QChar::Script_Cuneiform },
   { "Script_Phoenician", QChar::Script_Phoenician },
   { "Script_PhagsPa", QChar::Script_PhagsPa },
   { "Script_Nko", QChar::Script_Nko },
   { "Script_Sundanese", QChar::Script_Sundanese },
   { "Script_Lepcha", QChar::Script_Lepcha },
   { "Script_OlChiki", QChar::Script_OlChiki },
   { "Script_Vai", QChar::Script_Vai },
   { "Script_Saurashtra", QChar::Script_Saurashtra },
   { "Script_KayahLi", QChar::Script_KayahLi },
   { "Script_Rejang", QChar::Script_Rejang },
   { "Script_Lycian", QChar::Script_Lycian },
   { "Script_Carian", QChar::Script_Carian },
   { "Script_Lydian", QChar::Script_Lydian },
   { "Script_Cham", QChar::Script_Cham },
   { "Script_TaiTham", QChar::Script_TaiTham },
   { "Script_TaiViet", QChar::Script_TaiViet },
   { "Script_Avestan", QChar::Script_Avestan },
   { "Script_EgyptianHieroglyphs", QChar::Script_EgyptianHieroglyphs },
   { "Script_Samaritan", QChar::Script_Samaritan },
   { "Script_Lisu", QChar::Script_Lisu },
   { "Script_Bamum", QChar::Script_Bamum },
   { "Script_Javanese", QChar::Script_Javanese },
   { "Script_MeeteiMayek", QChar::Script_MeeteiMayek },
   { "Script_ImperialAramaic", QChar::Script_ImperialAramaic },
   { "Script_OldSouthArabian", QChar::Script_OldSouthArabian },
   { "Script_InscriptionalParthian", QChar::Script_InscriptionalParthian },
   { "Script_InscriptionalPahlavi", QChar::Script_InscriptionalPahlavi },
   { "Script_OldTurkic", QChar::Script_OldTurkic },
   { "Script_Kaithi", QChar::Script_Kaithi },
   { "Script_Batak", QChar::Script_Batak },
   { "Script_Brahmi", QChar::Script_Brahmi },
   { "Script_Mandaic", QChar::Script_Mandaic },
   { "Script_Chakma", QChar::Script_Chakma },
   { "Script_MeroiticCursive", QChar::Script_MeroiticCursive },
   { "Script_MeroiticHieroglyphs", QChar::Script_MeroiticHieroglyphs },
   { "Script_Miao", QChar::Script_Miao },
   { "Script_Sharada", QChar::Script_Sharada },
   { "Script_SoraSompeng", QChar::Script_SoraSompeng },
   { "Script_Takri", QChar::Script_Takri },
   { "Script_CaucasianAlbanian", QChar::Script_CaucasianAlbanian },
   { "Script_BassaVah", QChar::Script_BassaVah },
   { "Script_Duployan", QChar::Script_Duployan },
   { "Script_Elbasan", QChar::Script_Elbasan },
   { "Script_Grantha", QChar::Script_Grantha },
   { "Script_PahawhHmong", QChar::Script_PahawhHmong },
   { "Script_Khojki", QChar::Script_Khojki },
   { "Script_LinearA", QChar::Script_LinearA },
   { "Script_Mahajani", QChar::Script_Mahajani },
   { "Script_Manichaean", QChar::Script_Manichaean },
   { "Script_MendeKikakui", QChar::Script_MendeKikakui },
   { "Script_Modi", QChar::Script_Modi },
   { "Script_Mro", QChar::Script_Mro },
   { "Script_OldNorthArabian", QChar::Script_OldNorthArabian },
   { "Script_Nabataean", QChar::Script_Nabataean },
   { "Script_Palmyrene", QChar::Script_Palmyrene },
   { "Script_PauCinHau", QChar::Script_PauCinHau },
   { "Script_OldPermic", QChar::Script_OldPermic },
   { "Script_PsalterPahlavi", QChar::Script_PsalterPahlavi },
   { "Script_Siddham", QChar::Script_Siddham },
   { "Script_Khudawadi", QChar::Script_Khudawadi },
   { "Script_Tirhuta", QChar::Script_Tirhuta },
   { "Script_WarangCiti", QChar::Script_WarangCiti },
   { "Script_Ahom", QChar::Script_Ahom },
   { "Script_AnatolianHieroglyphs", QChar::Script_AnatolianHieroglyphs },
   { "Script_Hatran", QChar::Script_Hatran },
   { "Script_Multani", QChar::Script_Multani },
   { "Script_OldHungarian", QChar::Script_OldHungarian },
   { "Script_SignWriting", QChar::Script_SignWriting },
   { "ScriptCount", QChar::ScriptCount },

    /* QChar::SpecialCharacter */
   { "Null", QChar::Null },
   { "Tabulation", QChar::Tabulation },
   { "LineFeed", QChar::LineFeed },
   { "CarriageReturn", QChar::CarriageReturn },
   { "Space", QChar::Space },
   { "Nbsp", QChar::Nbsp },
   { "SoftHyphen", QChar::SoftHyphen },
   { "ReplacementCharacter", QChar::ReplacementCharacter },
   { "ObjectReplacementCharacter", QChar::ObjectReplacementCharacter },
   { "ByteOrderMark", QChar::ByteOrderMark },
   { "ByteOrderSwapped", QChar::ByteOrderSwapped },
   { "ParagraphSeparator", QChar::ParagraphSeparator },
   { "LineSeparator", QChar::LineSeparator },
   { "LastValidCodePoint", QChar::LastValidCodePoint },

    /* QChar::UnicodeVersion */
   { "Unicode_Unassigned", QChar::Unicode_Unassigned },
   { "Unicode_1_1", QChar::Unicode_1_1 },
   { "Unicode_2_0", QChar::Unicode_2_0 },
   { "Unicode_2_1_2", QChar::Unicode_2_1_2 },
   { "Unicode_3_0", QChar::Unicode_3_0 },
   { "Unicode_3_1", QChar::Unicode_3_1 },
   { "Unicode_3_2", QChar::Unicode_3_2 },
   { "Unicode_4_0", QChar::Unicode_4_0 },
   { "Unicode_4_1", QChar::Unicode_4_1 },
   { "Unicode_5_0", QChar::Unicode_5_0 },
   { "Unicode_5_1", QChar::Unicode_5_1 },
   { "Unicode_5_2", QChar::Unicode_5_2 },
   { "Unicode_6_0", QChar::Unicode_6_0 },
   { "Unicode_6_1", QChar::Unicode_6_1 },
   { "Unicode_6_2", QChar::Unicode_6_2 },
   { "Unicode_6_3", QChar::Unicode_6_3 },
   { "Unicode_7_0", QChar::Unicode_7_0 },
   { "Unicode_8_0", QChar::Unicode_8_0 },

};

QVector<PlastiQMetaObject*> PlastiQQChar::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQChar::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQChar::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QChar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQChar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQChar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QChar *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QChar(); break;
        case 1: o = new QChar(stack[1].s_int); break;
        /*case 2: o = new QChar(UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar); break;*/
        case 3: o = new QChar(stack[1].s_int); break;
        case 4: o = new QChar(stack[1].s_long); break;
        case 5: o = new QChar(stack[1].s_int); break;
        case 6: o = new QChar(QChar::SpecialCharacter(stack[1].s_int64)); break;
        case 7: o = new QChar((*reinterpret_cast< QLatin1Char(*) >(stack[1].s_voidp))); break;
        case 8: o = new QChar(stack[1].s_char); break;
        /*case 9: o = new QChar(UNSUPPORTED_TYPE_uchar); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQChar *p = new PlastiQQChar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQChar *p = new PlastiQQChar();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 74) {
            id -= 74;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QChar *o = sc ? Q_NULLPTR : reinterpret_cast<QChar*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->category(); // HACK for Category 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->cell() | ret: `uchar` */ break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->charcombiningClass() | ret: `unsigned` */ break;
        case 3: { QString _r = o->decomposition();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { qint64 _r = o->decompositionTag(); // HACK for Decomposition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { int _r = o->digitValue();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { qint64 _r = o->direction(); // HACK for Direction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { bool _r = o->hasMirrored();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isDigit();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isHighSurrogate();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isLetter();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isLetterOrNumber();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isLowSurrogate();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->isLower();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isMark();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isNonCharacter();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->isNumber();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->isPrint();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isPunct();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->isSpace();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->isSurrogate();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = o->isSymbol();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = o->isTitleCase();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { bool _r = o->isUpper();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { qint64 _r = o->joiningType(); // HACK for JoiningType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 26: { /* COPY OBJECT */
            QChar *_r = new QChar(o->mirroredChar());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: /* UNSUPPORTED_RETURN_VALUE o->row() | ret: `uchar` */ break;
        case 28: { qint64 _r = o->script(); // HACK for Script 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 29: { /* COPY OBJECT */
            QChar *_r = new QChar(o->toCaseFolded());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { char _r = o->toLatin1();
                  stack[0].s_char = _r; stack[0].type = PlastiQ::Char; } break;
        case 31: { /* COPY OBJECT */
            QChar *_r = new QChar(o->toLower());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { /* COPY OBJECT */
            QChar *_r = new QChar(o->toTitleCase());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { /* COPY OBJECT */
            QChar *_r = new QChar(o->toUpper());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { int _r = o->unicode();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 35: { qint64 _r = o->unicodeVersion(); // HACK for UnicodeVersion 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 36: { qint64 _r = sc ? QChar::category(stack[1].s_long) : o->category(stack[1].s_long); // HACK for Category 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 37: /* UNSUPPORTED_RETURN_VALUE o->charcombiningClass(stack[1].s_long) | ret: `unsigned` */ break;
        case 38: { qint64 _r = sc ? QChar::currentUnicodeVersion() : o->currentUnicodeVersion(); // HACK for UnicodeVersion 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 39: { QString _r = sc ? QChar::decomposition(stack[1].s_long) : o->decomposition(stack[1].s_long);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 40: { qint64 _r = sc ? QChar::decompositionTag(stack[1].s_long) : o->decompositionTag(stack[1].s_long); // HACK for Decomposition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 41: { int _r = sc ? QChar::digitValue(stack[1].s_long) : o->digitValue(stack[1].s_long);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 42: { qint64 _r = sc ? QChar::direction(stack[1].s_long) : o->direction(stack[1].s_long); // HACK for Direction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 43: { /* COPY OBJECT */
            QChar *_r = sc ? new QChar(QChar::fromLatin1(stack[1].s_char)) : new QChar(o->fromLatin1(stack[1].s_char));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { bool _r = sc ? QChar::hasMirrored(stack[1].s_long) : o->hasMirrored(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 45: { int _r = sc ? QChar::highSurrogate(stack[1].s_long) : o->highSurrogate(stack[1].s_long);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 46: { bool _r = sc ? QChar::isDigit(stack[1].s_long) : o->isDigit(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: { bool _r = sc ? QChar::isHighSurrogate(stack[1].s_long) : o->isHighSurrogate(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 48: { bool _r = sc ? QChar::isLetter(stack[1].s_long) : o->isLetter(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 49: { bool _r = sc ? QChar::isLetterOrNumber(stack[1].s_long) : o->isLetterOrNumber(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: { bool _r = sc ? QChar::isLowSurrogate(stack[1].s_long) : o->isLowSurrogate(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 51: { bool _r = sc ? QChar::isLower(stack[1].s_long) : o->isLower(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 52: { bool _r = sc ? QChar::isMark(stack[1].s_long) : o->isMark(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 53: { bool _r = sc ? QChar::isNonCharacter(stack[1].s_long) : o->isNonCharacter(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 54: { bool _r = sc ? QChar::isNumber(stack[1].s_long) : o->isNumber(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 55: { bool _r = sc ? QChar::isPrint(stack[1].s_long) : o->isPrint(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 56: { bool _r = sc ? QChar::isPunct(stack[1].s_long) : o->isPunct(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 57: { bool _r = sc ? QChar::isSpace(stack[1].s_long) : o->isSpace(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 58: { bool _r = sc ? QChar::isSurrogate(stack[1].s_long) : o->isSurrogate(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 59: { bool _r = sc ? QChar::isSymbol(stack[1].s_long) : o->isSymbol(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 60: { bool _r = sc ? QChar::isTitleCase(stack[1].s_long) : o->isTitleCase(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 61: { bool _r = sc ? QChar::isUpper(stack[1].s_long) : o->isUpper(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 62: { qint64 _r = sc ? QChar::joiningType(stack[1].s_long) : o->joiningType(stack[1].s_long); // HACK for JoiningType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 63: { int _r = sc ? QChar::lowSurrogate(stack[1].s_long) : o->lowSurrogate(stack[1].s_long);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 64: { long _r = sc ? QChar::mirroredChar(stack[1].s_long) : o->mirroredChar(stack[1].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 65: { bool _r = sc ? QChar::requiresSurrogates(stack[1].s_long) : o->requiresSurrogates(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 66: { qint64 _r = sc ? QChar::script(stack[1].s_long) : o->script(stack[1].s_long); // HACK for Script 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 67: { long _r = sc ? QChar::surrogateToUcs4(stack[1].s_int,
                    stack[2].s_int) : o->surrogateToUcs4(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 68: { long _r = sc ? QChar::surrogateToUcs4((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp))) : o->surrogateToUcs4((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 69: { long _r = sc ? QChar::toCaseFolded(stack[1].s_long) : o->toCaseFolded(stack[1].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 70: { long _r = sc ? QChar::toLower(stack[1].s_long) : o->toLower(stack[1].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 71: { long _r = sc ? QChar::toTitleCase(stack[1].s_long) : o->toTitleCase(stack[1].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 72: { long _r = sc ? QChar::toUpper(stack[1].s_long) : o->toUpper(stack[1].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 73: { qint64 _r = sc ? QChar::unicodeVersion(stack[1].s_long) : o->unicodeVersion(stack[1].s_long); // HACK for UnicodeVersion 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QChar *o = reinterpret_cast<QChar*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQChar::~PlastiQQChar() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
