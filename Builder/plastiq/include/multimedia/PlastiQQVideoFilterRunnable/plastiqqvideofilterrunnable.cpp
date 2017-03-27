#include "plastiqmethod.h"
#include "plastiqqvideofilterrunnable.h"

#include <QVideoFilterRunnable> 
#include <QVideoFrame>

QHash<QByteArray, PlastiQMethod> PlastiQQVideoFilterRunnable::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoFilterRunnable::plastiqMethods = {
    { "run(QVideoFrame*,QVideoSurfaceFormat&,enum)", { "run", "QVideoFrame*,QVideoSurfaceFormat&,RunFlags", "QVideoFrame", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoFilterRunnable::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVideoFilterRunnable::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVideoFilterRunnable::plastiqConstants = {

    /* QVideoFilterRunnable::RunFlag */
   { "LastInChain", QVideoFilterRunnable::LastInChain },

};

QVector<PlastiQMetaObject*> PlastiQQVideoFilterRunnable::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVideoFilterRunnable::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQVideoFilterRunnable::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVideoFilterRunnable", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVideoFilterRunnable::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVideoFilterRunnable::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVideoFilterRunnable *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVideoFilterRunnable *p = new PlastiQQVideoFilterRunnable();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVideoFilterRunnable *p = new PlastiQQVideoFilterRunnable();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVideoFilterRunnable *o = sc ? Q_NULLPTR : reinterpret_cast<QVideoFilterRunnable*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVideoFrame *_r = new QVideoFrame(o->run(reinterpret_cast<QVideoFrame*>(stack[1].s_voidp),
                    (*reinterpret_cast< QVideoSurfaceFormat(*) >(stack[2].s_voidp)),
                    QVideoFilterRunnable::RunFlags(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVideoFrame";
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
        QVideoFilterRunnable *o = reinterpret_cast<QVideoFilterRunnable*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVideoFilterRunnable::~PlastiQQVideoFilterRunnable() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
