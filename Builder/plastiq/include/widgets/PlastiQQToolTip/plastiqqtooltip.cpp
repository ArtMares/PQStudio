#include "plastiqmethod.h"
#include "plastiqqtooltip.h"

#include <QToolTip> 
#include <QFont>
#include <QPalette>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQToolTip::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQToolTip::plastiqMethods = {
    { "font()", { "font", "", "QFont", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "hideText()", { "hideText", "", "void", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "palette()", { "palette", "", "QPalette", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPalette(QPalette&)", { "setPalette", "QPalette&", "void", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "showText(QPoint&,QString,QWidget*,QRect&)", { "showText", "QPoint&,QString&,QWidget*,QRect&", "void", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "showText(QPoint&,QString)", { "showText", "QPoint&,QString&", "void", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "showText(QPoint&,QString,QWidget*)", { "showText", "QPoint&,QString&,QWidget*", "void", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "showText(QPoint&,QString,QWidget*,QRect&,int)", { "showText", "QPoint&,QString&,QWidget*,QRect&,int", "void", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQToolTip::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQToolTip::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQToolTip::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQToolTip::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQToolTip::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQToolTip::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QToolTip", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQToolTip::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQToolTip::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QToolTip *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQToolTip *p = new PlastiQQToolTip();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQToolTip *p = new PlastiQQToolTip();
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
        QToolTip *o = sc ? Q_NULLPTR : reinterpret_cast<QToolTip*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QToolTip::font()) : new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: if(sc) { QToolTip::hideText(); } else { o->hideText(); }
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = sc ? QToolTip::isVisible() : o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QPalette *_r = sc ? new QPalette(QToolTip::palette()) : new QPalette(o->palette());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPalette";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: if(sc) { QToolTip::setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); } else { o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 5: if(sc) { QToolTip::setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp))); } else { o->setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 6: if(sc) { QToolTip::showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[4].s_voidp))); } else { o->showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[4].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 7: if(sc) { QToolTip::showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string); } else { o->showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 8: if(sc) { QToolTip::showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp)); } else { o->showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 9: if(sc) { QToolTip::showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[4].s_voidp)),
                    stack[5].s_int); } else { o->showText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[4].s_voidp)),
                    stack[5].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 10: { QString _r = sc ? QToolTip::text() : o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QToolTip *o = reinterpret_cast<QToolTip*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQToolTip::~PlastiQQToolTip() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
