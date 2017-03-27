#include "plastiqmethod.h"
#include "plastiqqpalette.h"

#include <QPalette> 
#include <QBrush>
#include <QColor>

QHash<QByteArray, PlastiQMethod> PlastiQQPalette::plastiqConstructors = {
    { "QPalette()", { "QPalette", "", "QPalette*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPalette(QColor&)", { "QPalette", "QColor&", "QPalette*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPalette(enum)", { "QPalette", "Qt::GlobalColor", "QPalette*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPalette(QColor&,QColor&)", { "QPalette", "QColor&,QColor&", "QPalette*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPalette(QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&)", { "QPalette", "QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&", "QPalette*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPalette(QPalette&)", { "QPalette", "QPalette&", "QPalette*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPalette(QPalette&&)", { "QPalette", "QPalette&&", "QPalette*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPalette::plastiqMethods = {
    { "alternateBase()", { "alternateBase", "", "const QBrush&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "base()", { "base", "", "const QBrush&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brightText()", { "brightText", "", "const QBrush&", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush(enum,enum)", { "brush", "ColorGroup,ColorRole", "const QBrush&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush(enum)", { "brush", "ColorRole", "const QBrush&", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "button()", { "button", "", "const QBrush&", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttonText()", { "buttonText", "", "const QBrush&", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cacheKey()", { "cacheKey", "", "qint64", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "color(enum,enum)", { "color", "ColorGroup,ColorRole", "const QColor&", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "color(enum)", { "color", "ColorRole", "const QColor&", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentColorGroup()", { "currentColorGroup", "", "ColorGroup", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dark()", { "dark", "", "const QBrush&", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "highlight()", { "highlight", "", "const QBrush&", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "highlightedText()", { "highlightedText", "", "const QBrush&", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBrushSet(enum,enum)", { "isBrushSet", "ColorGroup,ColorRole", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCopyOf(QPalette&)", { "isCopyOf", "QPalette&", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEqual(enum,enum)", { "isEqual", "ColorGroup,ColorGroup", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "light()", { "light", "", "const QBrush&", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "link()", { "link", "", "const QBrush&", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "linkVisited()", { "linkVisited", "", "const QBrush&", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mid()", { "mid", "", "const QBrush&", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "midlight()", { "midlight", "", "const QBrush&", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolve(QPalette&)", { "resolve", "QPalette&", "QPalette", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(enum,QBrush&)", { "setBrush", "ColorRole,QBrush&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(enum,enum,QBrush&)", { "setBrush", "ColorGroup,ColorRole,QBrush&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(enum,enum,QColor&)", { "setColor", "ColorGroup,ColorRole,QColor&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(enum,QColor&)", { "setColor", "ColorRole,QColor&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColorGroup(enum,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&)", { "setColorGroup", "ColorGroup,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&,QBrush&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentColorGroup(enum)", { "setCurrentColorGroup", "ColorGroup", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shadow()", { "shadow", "", "const QBrush&", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QPalette&)", { "swap", "QPalette&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "const QBrush&", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTipBase()", { "toolTipBase", "", "const QBrush&", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTipText()", { "toolTipText", "", "const QBrush&", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "window()", { "window", "", "const QBrush&", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowText()", { "windowText", "", "const QBrush&", 35, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPalette::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPalette::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPalette::plastiqConstants = {

    /* QPalette::ColorGroup */
   { "Active", QPalette::Active },
   { "Disabled", QPalette::Disabled },
   { "Inactive", QPalette::Inactive },
   { "NColorGroups", QPalette::NColorGroups },
   { "Current", QPalette::Current },
   { "All", QPalette::All },
   { "Normal", QPalette::Normal },

    /* QPalette::ColorRole */
   { "WindowText", QPalette::WindowText },
   { "Button", QPalette::Button },
   { "Light", QPalette::Light },
   { "Midlight", QPalette::Midlight },
   { "Dark", QPalette::Dark },
   { "Mid", QPalette::Mid },
   { "Text", QPalette::Text },
   { "BrightText", QPalette::BrightText },
   { "ButtonText", QPalette::ButtonText },
   { "Base", QPalette::Base },
   { "Window", QPalette::Window },
   { "Shadow", QPalette::Shadow },
   { "Highlight", QPalette::Highlight },
   { "HighlightedText", QPalette::HighlightedText },
   { "Link", QPalette::Link },
   { "LinkVisited", QPalette::LinkVisited },
   { "AlternateBase", QPalette::AlternateBase },
   { "NoRole", QPalette::NoRole },
   { "ToolTipBase", QPalette::ToolTipBase },
   { "ToolTipText", QPalette::ToolTipText },
   { "NColorRoles", QPalette::NColorRoles },
   { "Foreground", QPalette::Foreground },
   { "Background", QPalette::Background },

};

QVector<PlastiQMetaObject*> PlastiQQPalette::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPalette::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPalette::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPalette", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPalette::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPalette::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPalette *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPalette(); break;
        case 1: o = new QPalette((*reinterpret_cast< QColor(*) >(stack[1].s_voidp))); break;
        case 2: o = new QPalette(Qt::GlobalColor(stack[1].s_int64)); break;
        case 3: o = new QPalette((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp))); break;
        case 4: o = new QPalette((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[4].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[5].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[6].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[7].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[8].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[9].s_voidp))); break;
        case 5: o = new QPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp))); break;
        case 6: o = new QPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPalette *p = new PlastiQQPalette();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPalette *p = new PlastiQQPalette();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 36) {
            id -= 36;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPalette *o = sc ? Q_NULLPTR : reinterpret_cast<QPalette*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->alternateBase());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->base());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brightText());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush(QPalette::ColorGroup(stack[1].s_int64),
                    QPalette::ColorRole(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush(QPalette::ColorRole(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->button());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->buttonText());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { long _r = o->cacheKey();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 8: { /* COPY OBJECT */
            QColor *_r = new QColor(o->color(QPalette::ColorGroup(stack[1].s_int64),
                    QPalette::ColorRole(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QColor *_r = new QColor(o->color(QPalette::ColorRole(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { qint64 _r = o->currentColorGroup(); // HACK for ColorGroup 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->dark());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->highlight());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->highlightedText());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { bool _r = o->isBrushSet(QPalette::ColorGroup(stack[1].s_int64),
                    QPalette::ColorRole(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isCopyOf((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->isEqual(QPalette::ColorGroup(stack[1].s_int64),
                    QPalette::ColorGroup(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->light());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->link());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->linkVisited());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->mid());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->midlight());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { /* COPY OBJECT */
            QPalette *_r = new QPalette(o->resolve((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPalette";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: o->setBrush(QPalette::ColorRole(stack[1].s_int64),
                    (*reinterpret_cast< QBrush(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setBrush(QPalette::ColorGroup(stack[1].s_int64),
                    QPalette::ColorRole(stack[2].s_int64),
                    (*reinterpret_cast< QBrush(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setColor(QPalette::ColorGroup(stack[1].s_int64),
                    QPalette::ColorRole(stack[2].s_int64),
                    (*reinterpret_cast< QColor(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setColor(QPalette::ColorRole(stack[1].s_int64),
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setColorGroup(QPalette::ColorGroup(stack[1].s_int64),
                    (*reinterpret_cast< QBrush(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[4].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[5].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[6].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[7].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[8].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[9].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[10].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setCurrentColorGroup(QPalette::ColorGroup(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 29: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->shadow());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: o->swap((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->text());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->toolTipBase());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->toolTipText());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->window());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->windowText());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
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
        QPalette *o = reinterpret_cast<QPalette*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPalette::~PlastiQQPalette() {
    QPalette* o = reinterpret_cast<QPalette*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
