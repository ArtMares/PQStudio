#include "plastiqmethod.h"
#include "plastiqqkeysequence.h"

#include <QKeySequence> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQKeySequence::plastiqConstructors = {
    { "QKeySequence()", { "QKeySequence", "", "QKeySequence*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequence(QString)", { "QKeySequence", "QString&", "QKeySequence*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequence(QString,enum)", { "QKeySequence", "QString&,SequenceFormat", "QKeySequence*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequence(int)", { "QKeySequence", "int", "QKeySequence*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequence(int,int)", { "QKeySequence", "int,int", "QKeySequence*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequence(int,int,int)", { "QKeySequence", "int,int,int", "QKeySequence*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequence(int,int,int,int)", { "QKeySequence", "int,int,int,int", "QKeySequence*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequence(QKeySequence&)", { "QKeySequence", "QKeySequence&", "QKeySequence*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequence(enum)", { "QKeySequence", "StandardKey", "QKeySequence*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQKeySequence::plastiqMethods = {
    { "count()", { "count", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matches(QKeySequence&)", { "matches", "QKeySequence&", "SequenceMatch", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QKeySequence&)", { "swap", "QKeySequence&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(enum)", { "toString", "SequenceFormat", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromString(QString)", { "fromString", "QString&", "QKeySequence", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString,enum)", { "fromString", "QString&,SequenceFormat", "QKeySequence", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "listToString(QList<QKeySequence>&)", { "listToString", "QList<QKeySequence>&", "QString", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "listToString(QList<QKeySequence>&,enum)", { "listToString", "QList<QKeySequence>&,SequenceFormat", "QString", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "mnemonic(QString)", { "mnemonic", "QString&", "QKeySequence", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQKeySequence::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQKeySequence::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQKeySequence::plastiqConstants = {

    /* QKeySequence::SequenceFormat */
   { "NativeText", QKeySequence::NativeText },
   { "PortableText", QKeySequence::PortableText },

    /* QKeySequence::SequenceMatch */
   { "NoMatch", QKeySequence::NoMatch },
   { "PartialMatch", QKeySequence::PartialMatch },
   { "ExactMatch", QKeySequence::ExactMatch },

    /* QKeySequence::StandardKey */
   { "UnknownKey", QKeySequence::UnknownKey },
   { "HelpContents", QKeySequence::HelpContents },
   { "WhatsThis", QKeySequence::WhatsThis },
   { "Open", QKeySequence::Open },
   { "Close", QKeySequence::Close },
   { "Save", QKeySequence::Save },
   { "New", QKeySequence::New },
   { "Delete", QKeySequence::Delete },
   { "Cut", QKeySequence::Cut },
   { "Copy", QKeySequence::Copy },
   { "Paste", QKeySequence::Paste },
   { "Undo", QKeySequence::Undo },
   { "Redo", QKeySequence::Redo },
   { "Back", QKeySequence::Back },
   { "Forward", QKeySequence::Forward },
   { "Refresh", QKeySequence::Refresh },
   { "ZoomIn", QKeySequence::ZoomIn },
   { "ZoomOut", QKeySequence::ZoomOut },
   { "Print", QKeySequence::Print },
   { "AddTab", QKeySequence::AddTab },
   { "NextChild", QKeySequence::NextChild },
   { "PreviousChild", QKeySequence::PreviousChild },
   { "Find", QKeySequence::Find },
   { "FindNext", QKeySequence::FindNext },
   { "FindPrevious", QKeySequence::FindPrevious },
   { "Replace", QKeySequence::Replace },
   { "SelectAll", QKeySequence::SelectAll },
   { "Bold", QKeySequence::Bold },
   { "Italic", QKeySequence::Italic },
   { "Underline", QKeySequence::Underline },
   { "MoveToNextChar", QKeySequence::MoveToNextChar },
   { "MoveToPreviousChar", QKeySequence::MoveToPreviousChar },
   { "MoveToNextWord", QKeySequence::MoveToNextWord },
   { "MoveToPreviousWord", QKeySequence::MoveToPreviousWord },
   { "MoveToNextLine", QKeySequence::MoveToNextLine },
   { "MoveToPreviousLine", QKeySequence::MoveToPreviousLine },
   { "MoveToNextPage", QKeySequence::MoveToNextPage },
   { "MoveToPreviousPage", QKeySequence::MoveToPreviousPage },
   { "MoveToStartOfLine", QKeySequence::MoveToStartOfLine },
   { "MoveToEndOfLine", QKeySequence::MoveToEndOfLine },
   { "MoveToStartOfBlock", QKeySequence::MoveToStartOfBlock },
   { "MoveToEndOfBlock", QKeySequence::MoveToEndOfBlock },
   { "MoveToStartOfDocument", QKeySequence::MoveToStartOfDocument },
   { "MoveToEndOfDocument", QKeySequence::MoveToEndOfDocument },
   { "SelectNextChar", QKeySequence::SelectNextChar },
   { "SelectPreviousChar", QKeySequence::SelectPreviousChar },
   { "SelectNextWord", QKeySequence::SelectNextWord },
   { "SelectPreviousWord", QKeySequence::SelectPreviousWord },
   { "SelectNextLine", QKeySequence::SelectNextLine },
   { "SelectPreviousLine", QKeySequence::SelectPreviousLine },
   { "SelectNextPage", QKeySequence::SelectNextPage },
   { "SelectPreviousPage", QKeySequence::SelectPreviousPage },
   { "SelectStartOfLine", QKeySequence::SelectStartOfLine },
   { "SelectEndOfLine", QKeySequence::SelectEndOfLine },
   { "SelectStartOfBlock", QKeySequence::SelectStartOfBlock },
   { "SelectEndOfBlock", QKeySequence::SelectEndOfBlock },
   { "SelectStartOfDocument", QKeySequence::SelectStartOfDocument },
   { "SelectEndOfDocument", QKeySequence::SelectEndOfDocument },
   { "DeleteStartOfWord", QKeySequence::DeleteStartOfWord },
   { "DeleteEndOfWord", QKeySequence::DeleteEndOfWord },
   { "DeleteEndOfLine", QKeySequence::DeleteEndOfLine },
   { "InsertParagraphSeparator", QKeySequence::InsertParagraphSeparator },
   { "InsertLineSeparator", QKeySequence::InsertLineSeparator },
   { "SaveAs", QKeySequence::SaveAs },
   { "Preferences", QKeySequence::Preferences },
   { "Quit", QKeySequence::Quit },
   { "FullScreen", QKeySequence::FullScreen },
   { "Deselect", QKeySequence::Deselect },
   { "DeleteCompleteLine", QKeySequence::DeleteCompleteLine },
   { "Backspace", QKeySequence::Backspace },
   { "Cancel", QKeySequence::Cancel },

};

QVector<PlastiQMetaObject*> PlastiQQKeySequence::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQKeySequence::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQKeySequence::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QKeySequence", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQKeySequence::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQKeySequence::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QKeySequence *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QKeySequence(); break;
        case 1: o = new QKeySequence(stack[1].s_string); break;
        case 2: o = new QKeySequence(stack[1].s_string,
                    QKeySequence::SequenceFormat(stack[2].s_int64)); break;
        case 3: o = new QKeySequence(stack[1].s_int); break;
        case 4: o = new QKeySequence(stack[1].s_int,
                    stack[2].s_int); break;
        case 5: o = new QKeySequence(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int); break;
        case 6: o = new QKeySequence(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int); break;
        case 7: o = new QKeySequence((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp))); break;
        case 8: o = new QKeySequence(QKeySequence::StandardKey(stack[1].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQKeySequence *p = new PlastiQQKeySequence();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQKeySequence *p = new PlastiQQKeySequence();
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
        QKeySequence *o = sc ? Q_NULLPTR : reinterpret_cast<QKeySequence*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { qint64 _r = o->matches((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp))); // HACK for SequenceMatch 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: o->swap((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { QString _r = o->toString(QKeySequence::SequenceFormat(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { /* COPY OBJECT */
            QKeySequence *_r = sc ? new QKeySequence(QKeySequence::fromString(stack[1].s_string)) : new QKeySequence(o->fromString(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QKeySequence";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QKeySequence *_r = sc ? new QKeySequence(QKeySequence::fromString(stack[1].s_string,
                    QKeySequence::SequenceFormat(stack[2].s_int64))) : new QKeySequence(o->fromString(stack[1].s_string,
                    QKeySequence::SequenceFormat(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QKeySequence";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { QString _r = sc ? QKeySequence::listToString((*reinterpret_cast< QList<QKeySequence>(*) >(stack[1].s_voidp))) : o->listToString((*reinterpret_cast< QList<QKeySequence>(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { QString _r = sc ? QKeySequence::listToString((*reinterpret_cast< QList<QKeySequence>(*) >(stack[1].s_voidp)),
                    QKeySequence::SequenceFormat(stack[2].s_int64)) : o->listToString((*reinterpret_cast< QList<QKeySequence>(*) >(stack[1].s_voidp)),
                    QKeySequence::SequenceFormat(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { /* COPY OBJECT */
            QKeySequence *_r = sc ? new QKeySequence(QKeySequence::mnemonic(stack[1].s_string)) : new QKeySequence(o->mnemonic(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QKeySequence";
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
        QKeySequence *o = reinterpret_cast<QKeySequence*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQKeySequence::~PlastiQQKeySequence() {
    QKeySequence* o = reinterpret_cast<QKeySequence*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
