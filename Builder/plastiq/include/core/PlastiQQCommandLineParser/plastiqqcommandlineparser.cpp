#include "plastiqmethod.h"
#include "plastiqqcommandlineparser.h"

#include <QCommandLineParser> 
#include <QCommandLineOption>
#include <QString>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQCommandLineParser::plastiqConstructors = {
    { "QCommandLineParser()", { "QCommandLineParser", "", "QCommandLineParser*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCommandLineParser::plastiqMethods = {
    { "addHelpOption()", { "addHelpOption", "", "QCommandLineOption", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addOption(QCommandLineOption&)", { "addOption", "QCommandLineOption&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addOptions(QList<QCommandLineOption>&)", { "addOptions", "QList<QCommandLineOption>&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPositionalArgument(QString,QString)", { "addPositionalArgument", "QString&,QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPositionalArgument(QString,QString,QString)", { "addPositionalArgument", "QString&,QString&,QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addVersionOption()", { "addVersionOption", "", "QCommandLineOption", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "applicationDescription()", { "applicationDescription", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearPositionalArguments()", { "clearPositionalArguments", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorText()", { "errorText", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "helpText()", { "helpText", "", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSet(QString)", { "isSet", "QString&", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSet(QCommandLineOption&)", { "isSet", "QCommandLineOption&", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "optionNames()", { "optionNames", "", "QStringList", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parse(QStringList&)", { "parse", "QStringList&", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "positionalArguments()", { "positionalArguments", "", "QStringList", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "process(QStringList&)", { "process", "QStringList&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "process(QCoreApplication&)", { "process", "QCoreApplication&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setApplicationDescription(QString)", { "setApplicationDescription", "QString&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptionsAfterPositionalArgumentsMode(enum)", { "setOptionsAfterPositionalArgumentsMode", "OptionsAfterPositionalArgumentsMode", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSingleDashWordOptionMode(enum)", { "setSingleDashWordOptionMode", "SingleDashWordOptionMode", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showHelp()", { "showHelp", "", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showHelp(int)", { "showHelp", "int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showVersion()", { "showVersion", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unknownOptionNames()", { "unknownOptionNames", "", "QStringList", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(QString)", { "value", "QString&", "QString", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(QCommandLineOption&)", { "value", "QCommandLineOption&", "QString", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "values(QString)", { "values", "QString&", "QStringList", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "values(QCommandLineOption&)", { "values", "QCommandLineOption&", "QStringList", 27, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCommandLineParser::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCommandLineParser::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCommandLineParser::plastiqConstants = {

    /* QCommandLineParser::OptionsAfterPositionalArgumentsMode */
   { "ParseAsOptions", QCommandLineParser::ParseAsOptions },
   { "ParseAsPositionalArguments", QCommandLineParser::ParseAsPositionalArguments },

    /* QCommandLineParser::SingleDashWordOptionMode */
   { "ParseAsCompactedShortOptions", QCommandLineParser::ParseAsCompactedShortOptions },
   { "ParseAsLongOptions", QCommandLineParser::ParseAsLongOptions },

};

QVector<PlastiQMetaObject*> PlastiQQCommandLineParser::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQCommandLineParser::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQCommandLineParser::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QCommandLineParser", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCommandLineParser::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCommandLineParser::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCommandLineParser *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCommandLineParser(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCommandLineParser *p = new PlastiQQCommandLineParser();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCommandLineParser *p = new PlastiQQCommandLineParser();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 28) {
            id -= 28;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCommandLineParser *o = sc ? Q_NULLPTR : reinterpret_cast<QCommandLineParser*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QCommandLineOption *_r = new QCommandLineOption(o->addHelpOption());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QCommandLineOption";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->addOption((*reinterpret_cast< QCommandLineOption(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->addOptions((*reinterpret_cast< QList<QCommandLineOption>(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->addPositionalArgument(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->addPositionalArgument(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: { /* COPY OBJECT */
            QCommandLineOption *_r = new QCommandLineOption(o->addVersionOption());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QCommandLineOption";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { QString _r = o->applicationDescription();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: o->clearPositionalArguments();
                stack[0].type = PlastiQ::Void; break;
        case 8: { QString _r = o->errorText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { QString _r = o->helpText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { bool _r = o->isSet(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isSet((*reinterpret_cast< QCommandLineOption(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->optionNames());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { bool _r = o->parse((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->positionalArguments());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: o->process((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->process((*reinterpret_cast< QCoreApplication(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setApplicationDescription(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setOptionsAfterPositionalArgumentsMode(QCommandLineParser::OptionsAfterPositionalArgumentsMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setSingleDashWordOptionMode(QCommandLineParser::SingleDashWordOptionMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->showHelp();
                stack[0].type = PlastiQ::Void; break;
        case 21: o->showHelp(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->showVersion();
                stack[0].type = PlastiQ::Void; break;
        case 23: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->unknownOptionNames());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { QString _r = o->value(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 25: { QString _r = o->value((*reinterpret_cast< QCommandLineOption(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 26: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->values(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->values((*reinterpret_cast< QCommandLineOption(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
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
        QCommandLineParser *o = reinterpret_cast<QCommandLineParser*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQCommandLineParser::~PlastiQQCommandLineParser() {
    QCommandLineParser* o = reinterpret_cast<QCommandLineParser*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
