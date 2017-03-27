#include "plastiqmethod.h"
#include "plastiqqtextblockgroup.h"

#include "gui/PlastiQQTextObject/plastiqqtextobject.h"
#include <QTextBlockGroup> 
#include <QTextBlock>

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlockGroup::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlockGroup::plastiqMethods = {
    { "blockFormatChanged(QTextBlock&)", { "blockFormatChanged", "QTextBlock&", "void", 0, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "blockInserted(QTextBlock&)", { "blockInserted", "QTextBlock&", "void", 1, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "blockRemoved(QTextBlock&)", { "blockRemoved", "QTextBlock&", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlockGroup::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextBlockGroup::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextBlockGroup::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextBlockGroup::plastiqInherits = { &PlastiQQTextObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextBlockGroup::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextBlockGroup::plastiq_static_metaObject = {
    { &PlastiQQTextObject::plastiq_static_metaObject, &plastiqInherits, "QTextBlockGroup", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextBlockGroup::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTextBlockGroupWrapper : public QTextBlockGroup {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void blockFormatChanged(const QTextBlock &block) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void blockFormatChanged(const QTextBlock&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QTextBlock(block) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QTextBlock");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextBlockGroup::blockFormatChanged(block);
    }

    void PlastiQParentCall_blockFormatChanged(const QTextBlock &block) {
        return QTextBlockGroup::blockFormatChanged(block);
    }

    void blockInserted(const QTextBlock &block) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void blockInserted(const QTextBlock&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QTextBlock(block) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QTextBlock");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextBlockGroup::blockInserted(block);
    }

    void PlastiQParentCall_blockInserted(const QTextBlock &block) {
        return QTextBlockGroup::blockInserted(block);
    }

    void blockRemoved(const QTextBlock &block) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void blockRemoved(const QTextBlock&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QTextBlock(block) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QTextBlock");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextBlockGroup::blockRemoved(block);
    }

    void PlastiQParentCall_blockRemoved(const QTextBlock &block) {
        return QTextBlockGroup::blockRemoved(block);
    }

};

void PlastiQQTextBlockGroup::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTextBlockGroupWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTextBlockGroup *p = new PlastiQQTextBlockGroup();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextBlockGroup *p = new PlastiQQTextBlockGroup();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQTextObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextBlockGroup *o = sc ? Q_NULLPTR : reinterpret_cast<QTextBlockGroup*>(object->plastiq_data());

        switch(id) {
        case 0: if (isWrapper) ((PlastiQQTextBlockGroupWrapper*)o)->PlastiQParentCall_blockFormatChanged((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 1: if (isWrapper) ((PlastiQQTextBlockGroupWrapper*)o)->PlastiQParentCall_blockInserted((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 2: if (isWrapper) ((PlastiQQTextBlockGroupWrapper*)o)->PlastiQParentCall_blockRemoved((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
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
        QTextBlockGroup *o = reinterpret_cast<QTextBlockGroup*>(object->plastiq_data());

        if(className == "QTextObject") {
            stack[0].s_voidp = static_cast<QTextObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextBlockGroup::~PlastiQQTextBlockGroup() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
