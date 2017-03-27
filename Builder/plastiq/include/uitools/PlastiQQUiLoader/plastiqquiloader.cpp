#include "plastiqmethod.h"
#include "plastiqquiloader.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QUiLoader> 
#include <QStringList>
#include <QAction>
#include <QObject>
#include <QString>
#include <QActionGroup>
#include <QLayout>
#include <QWidget>
#include <QDir>

QHash<QByteArray, PlastiQMethod> PlastiQQUiLoader::plastiqConstructors = {
    { "QUiLoader()", { "QUiLoader", "", "QUiLoader*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUiLoader(QObject*)", { "QUiLoader", "QObject*", "QUiLoader*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUiLoader::plastiqMethods = {
    { "addPluginPath(QString)", { "addPluginPath", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableLayouts()", { "availableLayouts", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableWidgets()", { "availableWidgets", "", "QStringList", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearPluginPaths()", { "clearPluginPaths", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createAction()", { "createAction", "", "QAction*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createAction(QObject*)", { "createAction", "QObject*", "QAction*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createAction(QObject*,QString)", { "createAction", "QObject*,QString&", "QAction*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createActionGroup()", { "createActionGroup", "", "QActionGroup*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createActionGroup(QObject*)", { "createActionGroup", "QObject*", "QActionGroup*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createActionGroup(QObject*,QString)", { "createActionGroup", "QObject*,QString&", "QActionGroup*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createLayout(QString)", { "createLayout", "QString&", "QLayout*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createLayout(QString,QObject*)", { "createLayout", "QString&,QObject*", "QLayout*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createLayout(QString,QObject*,QString)", { "createLayout", "QString&,QObject*,QString&", "QLayout*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createWidget(QString)", { "createWidget", "QString&", "QWidget*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createWidget(QString,QWidget*)", { "createWidget", "QString&,QWidget*", "QWidget*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createWidget(QString,QWidget*,QString)", { "createWidget", "QString&,QWidget*,QString&", "QWidget*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLanguageChangeEnabled()", { "isLanguageChangeEnabled", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QIODevice*)", { "load", "QIODevice*", "QWidget*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QIODevice*,QWidget*)", { "load", "QIODevice*,QWidget*", "QWidget*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pluginPaths()", { "pluginPaths", "", "QStringList", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLanguageChangeEnabled(bool)", { "setLanguageChangeEnabled", "bool", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWorkingDirectory(QDir&)", { "setWorkingDirectory", "QDir&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "workingDirectory()", { "workingDirectory", "", "QDir", 23, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUiLoader::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQUiLoader::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQUiLoader::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQUiLoader::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQUiLoader::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQUiLoader::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QUiLoader", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQUiLoader::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQUiLoaderWrapper : public QUiLoader {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQUiLoaderWrapper(QObject *parent = Q_NULLPTR)
         : QUiLoader(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QAction* createAction(QObject *parent = Q_NULLPTR, const QString &name = QString()) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QAction* createAction(QObject*=,const QString&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(parent);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_string = const_cast<QString&>(name);
            stack[2].name = QByteArrayLiteral("QString");
            stack[2].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QAction* _r = reinterpret_cast<QAction*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QUiLoader::createAction(parent,name);
    }

    QAction* PlastiQParentCall_createAction(QObject *parent = Q_NULLPTR, const QString &name = QString()) {
        return QUiLoader::createAction(parent,name);
    }

    QActionGroup* createActionGroup(QObject *parent = Q_NULLPTR, const QString &name = QString()) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QActionGroup* createActionGroup(QObject*=,const QString&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(parent);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_string = const_cast<QString&>(name);
            stack[2].name = QByteArrayLiteral("QString");
            stack[2].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QActionGroup* _r = reinterpret_cast<QActionGroup*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QUiLoader::createActionGroup(parent,name);
    }

    QActionGroup* PlastiQParentCall_createActionGroup(QObject *parent = Q_NULLPTR, const QString &name = QString()) {
        return QUiLoader::createActionGroup(parent,name);
    }

    QLayout* createLayout(const QString &className, QObject *parent = Q_NULLPTR, const QString &name = QString()) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QLayout* createLayout(const QString&,QObject*=,const QString&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_string = const_cast<QString&>(className);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            stack[2].s_voidp = reinterpret_cast<void*>(parent);
            stack[2].name = QByteArrayLiteral("QObject");
            stack[2].type = PlastiQ::QtObjectStar;
            stack[3].s_string = const_cast<QString&>(name);
            stack[3].name = QByteArrayLiteral("QString");
            stack[3].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QLayout* _r = reinterpret_cast<QLayout*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QUiLoader::createLayout(className,parent,name);
    }

    QLayout* PlastiQParentCall_createLayout(const QString &className, QObject *parent = Q_NULLPTR, const QString &name = QString()) {
        return QUiLoader::createLayout(className,parent,name);
    }

    QWidget* createWidget(const QString &className, QWidget *parent = Q_NULLPTR, const QString &name = QString()) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QWidget* createWidget(const QString&,QWidget*=,const QString&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_string = const_cast<QString&>(className);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            stack[2].s_voidp = reinterpret_cast<void*>(parent);
            stack[2].name = QByteArrayLiteral("QWidget");
            stack[2].type = PlastiQ::QtObjectStar;
            stack[3].s_string = const_cast<QString&>(name);
            stack[3].name = QByteArrayLiteral("QString");
            stack[3].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QWidget* _r = reinterpret_cast<QWidget*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QUiLoader::createWidget(className,parent,name);
    }

    QWidget* PlastiQParentCall_createWidget(const QString &className, QWidget *parent = Q_NULLPTR, const QString &name = QString()) {
        return QUiLoader::createWidget(className,parent,name);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QUiLoader::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QUiLoader::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QUiLoader::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QUiLoader::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QUiLoader::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QUiLoader::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QUiLoader::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QUiLoader::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QUiLoader::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QUiLoader::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QUiLoader::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QUiLoader::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QUiLoader::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QUiLoader::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QUiLoader::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QUiLoader::timerEvent(event);
    }

};

void PlastiQQUiLoader::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQUiLoaderWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQUiLoaderWrapper(); break;
        case 1: o = new PlastiQQUiLoaderWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQUiLoader *p = new PlastiQQUiLoader();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQUiLoader *p = new PlastiQQUiLoader();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 24) {
            id -= 24;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QUiLoader *o = sc ? Q_NULLPTR : reinterpret_cast<QUiLoader*>(object->plastiq_data());

        switch(id) {
        case 0: o->addPluginPath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->availableLayouts());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->availableWidgets());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->clearPluginPaths();
                stack[0].type = PlastiQ::Void; break;
        case 4: { QAction* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createAction();
                else _r = o->createAction();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 5: { QAction* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createAction(reinterpret_cast<QObject*>(stack[1].s_voidp));
                else _r = o->createAction(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 6: { QAction* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createAction(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_string);
                else _r = o->createAction(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 7: { QActionGroup* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createActionGroup();
                else _r = o->createActionGroup();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QActionGroup"; } break;
        case 8: { QActionGroup* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createActionGroup(reinterpret_cast<QObject*>(stack[1].s_voidp));
                else _r = o->createActionGroup(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QActionGroup"; } break;
        case 9: { QActionGroup* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createActionGroup(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_string);
                else _r = o->createActionGroup(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QActionGroup"; } break;
        case 10: { QLayout* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createLayout(stack[1].s_string);
                else _r = o->createLayout(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QLayout"; } break;
        case 11: { QLayout* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createLayout(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp));
                else _r = o->createLayout(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QLayout"; } break;
        case 12: { QLayout* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createLayout(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp),
                    stack[3].s_string);
                else _r = o->createLayout(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp),
                    stack[3].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QLayout"; } break;
        case 13: { QWidget* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createWidget(stack[1].s_string);
                else _r = o->createWidget(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 14: { QWidget* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createWidget(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                else _r = o->createWidget(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 15: { QWidget* _r;
                if (isWrapper) _r = ((PlastiQQUiLoaderWrapper*)o)->PlastiQParentCall_createWidget(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_string);
                else _r = o->createWidget(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 16: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 17: { bool _r = o->isLanguageChangeEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { QWidget* _r = o->load(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 19: { QWidget* _r = o->load(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 20: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->pluginPaths());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: o->setLanguageChangeEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setWorkingDirectory((*reinterpret_cast< QDir(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: { /* COPY OBJECT */
            QDir *_r = new QDir(o->workingDirectory());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDir";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QUiLoader *o = reinterpret_cast<QUiLoader*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QUiLoader *o = reinterpret_cast<QUiLoader*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QUiLoader *o = reinterpret_cast<QUiLoader*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QUiLoader *o = reinterpret_cast<QUiLoader*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQUiLoader::~PlastiQQUiLoader() {
    QUiLoader* o = reinterpret_cast<QUiLoader*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
