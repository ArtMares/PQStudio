#include "plastiqpqscrollmessagebox.h"
#include "pqscrollmessagebox.h"
#include "plastiqmethod.h"
#include "widgets/PlastiQQDialog/plastiqqdialog.h"

#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQPQScrollMessageBox::plastiqConstructors = {
    { "PQScrollMessageBox(long,QString&,QString&)", { "PQScrollMessageBox", "long,QString&,QString&", "PQScrollMessageBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "PQScrollMessageBox(long,QString&,QString&,long)", { "PQScrollMessageBox", "long,QString&,QString&,long", "PQScrollMessageBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "PQScrollMessageBox(long,QString&,QString&,long,QWidget*)", { "PQScrollMessageBox", "long,QString&,QString&,long,QWidget*", "PQScrollMessageBox*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
};

QHash<QByteArray, PlastiQMethod> PlastiQPQScrollMessageBox::plastiqMethods = {
    { "critical(QWidget*,QString,QString)", { "critical", "QWidget*,QString&,QString&", "long", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "critical(QWidget*,QString,QString,long)", { "critical", "QWidget*,QString&,QString&,long", "long", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "critical(QWidget*,QString,QString,long,long)", { "critical", "QWidget*,QString&,QString&,long,long", "long", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "information(QWidget*,QString,QString)", { "information", "QWidget*,QString&,QString&", "long", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "information(QWidget*,QString,QString,long)", { "information", "QWidget*,QString&,QString&,long", "long", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "information(QWidget*,QString,QString,long,long)", { "information", "QWidget*,QString&,QString&,long,long", "long", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "question(QWidget*,QString,QString)", { "question", "QWidget*,QString&,QString&", "long", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "question(QWidget*,QString,QString,long)", { "question", "QWidget*,QString&,QString&,long", "long", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "question(QWidget*,QString,QString,long,long)", { "question", "QWidget*,QString&,QString&,long,long", "long", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "warning(QWidget*,QString,QString)", { "warning", "QWidget*,QString&,QString&", "long", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "warning(QWidget*,QString,QString,long)", { "warning", "QWidget*,QString&,QString&,long", "long", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "warning(QWidget*,QString,QString,long,long)", { "warning", "QWidget*,QString&,QString&,long,long", "long", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
};

QHash<QByteArray, PlastiQMethod> PlastiQPQScrollMessageBox::plastiqSignals = {
};

QHash<QByteArray, PlastiQProperty> PlastiQPQScrollMessageBox::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQPQScrollMessageBox::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQPQScrollMessageBox::plastiqInherits = { &PlastiQQDialog::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQPQScrollMessageBox::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQPQScrollMessageBox::plastiq_static_metaObject = {
    { &PlastiQQDialog::plastiq_static_metaObject, &plastiqInherits, "PQScrollMessageBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQPQScrollMessageBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQPQScrollMessageBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PQScrollMessageBox *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PQScrollMessageBox(QMessageBox::Icon(stack[1].s_long),stack[2].s_string,stack[3].s_string); break;
        case 1: o = new PQScrollMessageBox(QMessageBox::Icon(stack[1].s_long),stack[2].s_string,stack[3].s_string,QDialogButtonBox::StandardButtons(stack[4].s_long)); break;
        case 2: o = new PQScrollMessageBox(QMessageBox::Icon(stack[1].s_long),stack[2].s_string,stack[3].s_string,QDialogButtonBox::StandardButtons(stack[4].s_long),reinterpret_cast<QWidget*>(stack[5].s_voidp)); break;

        default: ;
        }

        PlastiQPQScrollMessageBox *p = new PlastiQPQScrollMessageBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQPQScrollMessageBox *p = new PlastiQPQScrollMessageBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        PQScrollMessageBox *o = sc ? Q_NULLPTR : reinterpret_cast<PQScrollMessageBox*>(object->plastiq_data());

        switch(id) {
        case 0: {
            long _r = sc ? PQScrollMessageBox::critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string);
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 1: {
            long _r = sc ? PQScrollMessageBox::critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QDialogButtonBox::StandardButtons(stack[4].s_long)) : o->critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string,
                QDialogButtonBox::StandardButtons(stack[4].s_long));
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 2: {
            long _r = sc ? PQScrollMessageBox::critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QDialogButtonBox::StandardButtons(stack[4].s_long),
                    QDialogButtonBox::StandardButton(stack[5].s_long)) : o->critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string,
                QDialogButtonBox::StandardButtons(stack[4].s_long),
                QDialogButtonBox::StandardButton(stack[5].s_long));
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 3: {
            long _r = sc ? PQScrollMessageBox::information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string);
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 4: {
            long _r = sc ? PQScrollMessageBox::information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QDialogButtonBox::StandardButtons(stack[4].s_long)) : o->information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string,
                QDialogButtonBox::StandardButtons(stack[4].s_long));
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 5: {
            long _r = sc ? PQScrollMessageBox::information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QDialogButtonBox::StandardButtons(stack[4].s_long),
                    QDialogButtonBox::StandardButton(stack[5].s_long)) : o->information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string,
                QDialogButtonBox::StandardButtons(stack[4].s_long),
                QDialogButtonBox::StandardButton(stack[5].s_long));
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 6: {
            long _r = sc ? PQScrollMessageBox::question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string);
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 7: {
            long _r = sc ? PQScrollMessageBox::question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QDialogButtonBox::StandardButtons(stack[4].s_long)) : o->question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string,
                QDialogButtonBox::StandardButtons(stack[4].s_long));
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 8: {
            long _r = sc ? PQScrollMessageBox::question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QDialogButtonBox::StandardButtons(stack[4].s_long),
                    QDialogButtonBox::StandardButton(stack[5].s_long)) : o->question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string,
                QDialogButtonBox::StandardButtons(stack[4].s_long),
                QDialogButtonBox::StandardButton(stack[5].s_long));
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 9: {
            long _r = sc ? PQScrollMessageBox::warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string);
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 10: {
            long _r = sc ? PQScrollMessageBox::warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QDialogButtonBox::StandardButtons(stack[4].s_long)) : o->warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string,
                QDialogButtonBox::StandardButtons(stack[4].s_long));
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        case 11: {
            long _r = sc ? PQScrollMessageBox::warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QDialogButtonBox::StandardButtons(stack[4].s_long),
                    QDialogButtonBox::StandardButton(stack[5].s_long)) : o->warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                stack[2].s_string,
                stack[3].s_string,
                QDialogButtonBox::StandardButtons(stack[4].s_long),
                QDialogButtonBox::StandardButton(stack[5].s_long));
            stack[0].s_long = _r; stack[0].type = PlastiQ::Long;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        PQScrollMessageBox *o = reinterpret_cast<PQScrollMessageBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        PQScrollMessageBox *o = reinterpret_cast<PQScrollMessageBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
}

PlastiQPQScrollMessageBox::~PlastiQPQScrollMessageBox() {
    PQScrollMessageBox* o = reinterpret_cast<PQScrollMessageBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
