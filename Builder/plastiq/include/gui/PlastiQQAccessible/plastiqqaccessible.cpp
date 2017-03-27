#include "plastiqmethod.h"
#include "plastiqqaccessible.h"

#include <QAccessible> 
#include <QAccessibleInterface>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessible::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessible::plastiqMethods = {
    { "accessibleInterface(Id)", { "accessibleInterface", "Id", "QAccessibleInterface*", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "deleteAccessibleInterface(Id)", { "deleteAccessibleInterface", "Id", "void", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "installFactory(InterfaceFactory)", { "installFactory", "InterfaceFactory", "void", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "queryAccessibleInterface(QObject*)", { "queryAccessibleInterface", "QObject*", "QAccessibleInterface*", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "registerAccessibleInterface(QAccessibleInterface*)", { "registerAccessibleInterface", "QAccessibleInterface*", "Id", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "removeFactory(InterfaceFactory)", { "removeFactory", "InterfaceFactory", "void", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setRootObject(QObject*)", { "setRootObject", "QObject*", "void", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "uniqueId(QAccessibleInterface*)", { "uniqueId", "QAccessibleInterface*", "Id", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "updateAccessibility(QAccessibleEvent*)", { "updateAccessibility", "QAccessibleEvent*", "void", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessible::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessible::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessible::plastiqConstants = {

    /* QAccessible::Event */
   { "SoundPlayed", QAccessible::SoundPlayed },
   { "Alert", QAccessible::Alert },
   { "ForegroundChanged", QAccessible::ForegroundChanged },
   { "MenuStart", QAccessible::MenuStart },
   { "MenuEnd", QAccessible::MenuEnd },
   { "PopupMenuStart", QAccessible::PopupMenuStart },
   { "PopupMenuEnd", QAccessible::PopupMenuEnd },
   { "ContextHelpStart", QAccessible::ContextHelpStart },
   { "ContextHelpEnd", QAccessible::ContextHelpEnd },
   { "DragDropStart", QAccessible::DragDropStart },
   { "DragDropEnd", QAccessible::DragDropEnd },
   { "DialogStart", QAccessible::DialogStart },
   { "DialogEnd", QAccessible::DialogEnd },
   { "ScrollingStart", QAccessible::ScrollingStart },
   { "ScrollingEnd", QAccessible::ScrollingEnd },
   { "MenuCommand", QAccessible::MenuCommand },
   { "ActionChanged", QAccessible::ActionChanged },
   { "ActiveDescendantChanged", QAccessible::ActiveDescendantChanged },
   { "AttributeChanged", QAccessible::AttributeChanged },
   { "DocumentContentChanged", QAccessible::DocumentContentChanged },
   { "DocumentLoadComplete", QAccessible::DocumentLoadComplete },
   { "DocumentLoadStopped", QAccessible::DocumentLoadStopped },
   { "DocumentReload", QAccessible::DocumentReload },
   { "HyperlinkEndIndexChanged", QAccessible::HyperlinkEndIndexChanged },
   { "HyperlinkNumberOfAnchorsChanged", QAccessible::HyperlinkNumberOfAnchorsChanged },
   { "HyperlinkSelectedLinkChanged", QAccessible::HyperlinkSelectedLinkChanged },
   { "HypertextLinkActivated", QAccessible::HypertextLinkActivated },
   { "HypertextLinkSelected", QAccessible::HypertextLinkSelected },
   { "HyperlinkStartIndexChanged", QAccessible::HyperlinkStartIndexChanged },
   { "HypertextChanged", QAccessible::HypertextChanged },
   { "HypertextNLinksChanged", QAccessible::HypertextNLinksChanged },
   { "ObjectAttributeChanged", QAccessible::ObjectAttributeChanged },
   { "PageChanged", QAccessible::PageChanged },
   { "SectionChanged", QAccessible::SectionChanged },
   { "TableCaptionChanged", QAccessible::TableCaptionChanged },
   { "TableColumnDescriptionChanged", QAccessible::TableColumnDescriptionChanged },
   { "TableColumnHeaderChanged", QAccessible::TableColumnHeaderChanged },
   { "TableModelChanged", QAccessible::TableModelChanged },
   { "TableRowDescriptionChanged", QAccessible::TableRowDescriptionChanged },
   { "TableRowHeaderChanged", QAccessible::TableRowHeaderChanged },
   { "TableSummaryChanged", QAccessible::TableSummaryChanged },
   { "TextAttributeChanged", QAccessible::TextAttributeChanged },
   { "TextCaretMoved", QAccessible::TextCaretMoved },
   { "TextColumnChanged", QAccessible::TextColumnChanged },
   { "TextInserted", QAccessible::TextInserted },
   { "TextRemoved", QAccessible::TextRemoved },
   { "TextUpdated", QAccessible::TextUpdated },
   { "TextSelectionChanged", QAccessible::TextSelectionChanged },
   { "VisibleDataChanged", QAccessible::VisibleDataChanged },
   { "ObjectCreated", QAccessible::ObjectCreated },
   { "ObjectDestroyed", QAccessible::ObjectDestroyed },
   { "ObjectShow", QAccessible::ObjectShow },
   { "ObjectHide", QAccessible::ObjectHide },
   { "ObjectReorder", QAccessible::ObjectReorder },
   { "Focus", QAccessible::Focus },
   { "Selection", QAccessible::Selection },
   { "SelectionAdd", QAccessible::SelectionAdd },
   { "SelectionRemove", QAccessible::SelectionRemove },
   { "SelectionWithin", QAccessible::SelectionWithin },
   { "StateChanged", QAccessible::StateChanged },
   { "LocationChanged", QAccessible::LocationChanged },
   { "NameChanged", QAccessible::NameChanged },
   { "DescriptionChanged", QAccessible::DescriptionChanged },
   { "ValueChanged", QAccessible::ValueChanged },
   { "ParentChanged", QAccessible::ParentChanged },
   { "HelpChanged", QAccessible::HelpChanged },
   { "DefaultActionChanged", QAccessible::DefaultActionChanged },
   { "AcceleratorChanged", QAccessible::AcceleratorChanged },
   { "InvalidEvent", QAccessible::InvalidEvent },

    /* QAccessible::InterfaceType */
   { "TextInterface", QAccessible::TextInterface },
   { "EditableTextInterface", QAccessible::EditableTextInterface },
   { "ValueInterface", QAccessible::ValueInterface },
   { "ActionInterface", QAccessible::ActionInterface },
   { "ImageInterface", QAccessible::ImageInterface },
   { "TableInterface", QAccessible::TableInterface },
   { "TableCellInterface", QAccessible::TableCellInterface },

    /* QAccessible::RelationFlag */
   { "Label", QAccessible::Label },
   { "Labelled", QAccessible::Labelled },
   { "Controller", QAccessible::Controller },
   { "Controlled", QAccessible::Controlled },
   { "AllRelations", QAccessible::AllRelations },

    /* QAccessible::Role */
   { "NoRole", QAccessible::NoRole },
   { "TitleBar", QAccessible::TitleBar },
   { "MenuBar", QAccessible::MenuBar },
   { "ScrollBar", QAccessible::ScrollBar },
   { "Grip", QAccessible::Grip },
   { "Sound", QAccessible::Sound },
   { "Cursor", QAccessible::Cursor },
   { "Caret", QAccessible::Caret },
   { "AlertMessage", QAccessible::AlertMessage },
   { "Window", QAccessible::Window },
   { "Client", QAccessible::Client },
   { "PopupMenu", QAccessible::PopupMenu },
   { "MenuItem", QAccessible::MenuItem },
   { "ToolTip", QAccessible::ToolTip },
   { "Application", QAccessible::Application },
   { "Document", QAccessible::Document },
   { "Pane", QAccessible::Pane },
   { "Chart", QAccessible::Chart },
   { "Dialog", QAccessible::Dialog },
   { "Border", QAccessible::Border },
   { "Grouping", QAccessible::Grouping },
   { "Separator", QAccessible::Separator },
   { "ToolBar", QAccessible::ToolBar },
   { "StatusBar", QAccessible::StatusBar },
   { "Table", QAccessible::Table },
   { "ColumnHeader", QAccessible::ColumnHeader },
   { "RowHeader", QAccessible::RowHeader },
   { "Column", QAccessible::Column },
   { "Row", QAccessible::Row },
   { "Cell", QAccessible::Cell },
   { "Link", QAccessible::Link },
   { "HelpBalloon", QAccessible::HelpBalloon },
   { "Assistant", QAccessible::Assistant },
   { "List", QAccessible::List },
   { "ListItem", QAccessible::ListItem },
   { "Tree", QAccessible::Tree },
   { "TreeItem", QAccessible::TreeItem },
   { "PageTab", QAccessible::PageTab },
   { "PropertyPage", QAccessible::PropertyPage },
   { "Indicator", QAccessible::Indicator },
   { "Graphic", QAccessible::Graphic },
   { "StaticText", QAccessible::StaticText },
   { "EditableText", QAccessible::EditableText },
   { "Button", QAccessible::Button },
   { "CheckBox", QAccessible::CheckBox },
   { "RadioButton", QAccessible::RadioButton },
   { "ComboBox", QAccessible::ComboBox },
   { "ProgressBar", QAccessible::ProgressBar },
   { "Dial", QAccessible::Dial },
   { "HotkeyField", QAccessible::HotkeyField },
   { "Slider", QAccessible::Slider },
   { "SpinBox", QAccessible::SpinBox },
   { "Canvas", QAccessible::Canvas },
   { "Animation", QAccessible::Animation },
   { "Equation", QAccessible::Equation },
   { "ButtonDropDown", QAccessible::ButtonDropDown },
   { "ButtonMenu", QAccessible::ButtonMenu },
   { "ButtonDropGrid", QAccessible::ButtonDropGrid },
   { "Whitespace", QAccessible::Whitespace },
   { "PageTabList", QAccessible::PageTabList },
   { "Clock", QAccessible::Clock },
   { "Splitter", QAccessible::Splitter },
   { "LayeredPane", QAccessible::LayeredPane },
   { "Terminal", QAccessible::Terminal },
   { "Desktop", QAccessible::Desktop },
   { "Paragraph", QAccessible::Paragraph },
   { "WebDocument", QAccessible::WebDocument },
   { "Section", QAccessible::Section },
   { "ColorChooser", QAccessible::ColorChooser },
   { "Footer", QAccessible::Footer },
   { "Form", QAccessible::Form },
   { "Heading", QAccessible::Heading },
   { "Note", QAccessible::Note },
   { "ComplementaryContent", QAccessible::ComplementaryContent },
   { "UserRole", QAccessible::UserRole },

    /* QAccessible::Text */
   { "Name", QAccessible::Name },
   { "Description", QAccessible::Description },
   { "Value", QAccessible::Value },
   { "Help", QAccessible::Help },
   { "Accelerator", QAccessible::Accelerator },
   { "DebugDescription", QAccessible::DebugDescription },
   { "UserText", QAccessible::UserText },

    /* QAccessible::TextBoundaryType */
   { "CharBoundary", QAccessible::CharBoundary },
   { "WordBoundary", QAccessible::WordBoundary },
   { "SentenceBoundary", QAccessible::SentenceBoundary },
   { "ParagraphBoundary", QAccessible::ParagraphBoundary },
   { "LineBoundary", QAccessible::LineBoundary },
   { "NoBoundary", QAccessible::NoBoundary },

};

QVector<PlastiQMetaObject*> PlastiQQAccessible::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAccessible::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAccessible::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAccessible", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessible::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessible::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessible *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessible *p = new PlastiQQAccessible();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessible *p = new PlastiQQAccessible();
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
        QAccessible *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessible*>(object->plastiq_data());

        switch(id) {
        case 0: { QAccessibleInterface* _r = sc ? QAccessible::accessibleInterface((*reinterpret_cast< QAccessible::Id(*) >(stack[1].s_voidp))) : o->accessibleInterface((*reinterpret_cast< QAccessible::Id(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleInterface"; } break;
        case 1: if(sc) { QAccessible::deleteAccessibleInterface((*reinterpret_cast< QAccessible::Id(*) >(stack[1].s_voidp))); } else { o->deleteAccessibleInterface((*reinterpret_cast< QAccessible::Id(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 2: if(sc) { QAccessible::installFactory((*reinterpret_cast< QAccessible::InterfaceFactory(*) >(stack[1].s_voidp))); } else { o->installFactory((*reinterpret_cast< QAccessible::InterfaceFactory(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 3: { bool _r = sc ? QAccessible::isActive() : o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { QAccessibleInterface* _r = sc ? QAccessible::queryAccessibleInterface(reinterpret_cast<QObject*>(stack[1].s_voidp)) : o->queryAccessibleInterface(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleInterface"; } break;
        case 5: /* o->registerAccessibleInterface(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp)) | ret: `Id` (INTERNAL CLASS) */ break;
        case 6: if(sc) { QAccessible::removeFactory((*reinterpret_cast< QAccessible::InterfaceFactory(*) >(stack[1].s_voidp))); } else { o->removeFactory((*reinterpret_cast< QAccessible::InterfaceFactory(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 7: if(sc) { QAccessible::setRootObject(reinterpret_cast<QObject*>(stack[1].s_voidp)); } else { o->setRootObject(reinterpret_cast<QObject*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 8: /* o->uniqueId(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp)) | ret: `Id` (INTERNAL CLASS) */ break;
        case 9: if(sc) { QAccessible::updateAccessibility(reinterpret_cast<QAccessibleEvent*>(stack[1].s_voidp)); } else { o->updateAccessibility(reinterpret_cast<QAccessibleEvent*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;

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
        QAccessible *o = reinterpret_cast<QAccessible*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAccessible::~PlastiQQAccessible() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
