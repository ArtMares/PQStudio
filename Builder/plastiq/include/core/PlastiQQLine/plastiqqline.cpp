#include "plastiqmethod.h"
#include "plastiqqline.h"

#include <QLine> 
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQLine::plastiqConstructors = {
    { "QLine()", { "QLine", "", "QLine*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLine(QPoint&,QPoint&)", { "QLine", "QPoint&,QPoint&", "QLine*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLine(int,int,int,int)", { "QLine", "int,int,int,int", "QLine*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLine::plastiqMethods = {
    { "p1()", { "p1", "", "QPoint", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "p2()", { "p2", "", "QPoint", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x1()", { "x1", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x2()", { "x2", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y1()", { "y1", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y2()", { "y2", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "center()", { "center", "", "QPoint", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dx()", { "dx", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dy()", { "dy", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setP1(QPoint&)", { "setP1", "QPoint&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setP2(QPoint&)", { "setP2", "QPoint&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLine(int,int,int,int)", { "setLine", "int,int,int,int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPoints(QPoint&,QPoint&)", { "setPoints", "QPoint&,QPoint&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(QPoint&)", { "translate", "QPoint&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(int,int)", { "translate", "int,int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(QPoint&)", { "translated", "QPoint&", "QLine", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(int,int)", { "translated", "int,int", "QLine", 17, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLine::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLine::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLine::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLine::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQLine::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQLine::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QLine", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLine::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLine::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLine *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLine(); break;
        case 1: o = new QLine((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))); break;
        case 2: o = new QLine(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLine *p = new PlastiQQLine();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLine *p = new PlastiQQLine();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLine *o = sc ? Q_NULLPTR : reinterpret_cast<QLine*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->p1());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->p2());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->x1();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->x2();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->y1();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->y2();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->center());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->dx();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->dy();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->setP1((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setP2((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setLine(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setPoints((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->translate((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->translate(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: { /* COPY OBJECT */
            QLine *_r = new QLine(o->translated((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLine";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QLine *_r = new QLine(o->translated(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLine";
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
        QLine *o = reinterpret_cast<QLine*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQLine::~PlastiQQLine() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
