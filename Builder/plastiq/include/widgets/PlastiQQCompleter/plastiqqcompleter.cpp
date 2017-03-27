#include "plastiqmethod.h"
#include "plastiqqcompleter.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QCompleter> 
#include <QAbstractItemModel>
#include <QString>
#include <QModelIndex>
#include <QAbstractItemView>
#include <QStringList>
#include <QWidget>
#include <QEvent>
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQCompleter::plastiqConstructors = {
    { "QCompleter()", { "QCompleter", "", "QCompleter*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCompleter(QObject*)", { "QCompleter", "QObject*", "QCompleter*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCompleter(QAbstractItemModel*)", { "QCompleter", "QAbstractItemModel*", "QCompleter*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCompleter(QAbstractItemModel*,QObject*)", { "QCompleter", "QAbstractItemModel*,QObject*", "QCompleter*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCompleter(QStringList&)", { "QCompleter", "QStringList&", "QCompleter*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCompleter(QStringList&,QObject*)", { "QCompleter", "QStringList&,QObject*", "QCompleter*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCompleter::plastiqMethods = {
    { "caseSensitivity()", { "caseSensitivity", "", "Qt::CaseSensitivity", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completionColumn()", { "completionColumn", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completionCount()", { "completionCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completionMode()", { "completionMode", "", "CompletionMode", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completionModel()", { "completionModel", "", "QAbstractItemModel*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completionPrefix()", { "completionPrefix", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completionRole()", { "completionRole", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentCompletion()", { "currentCompletion", "", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "QModelIndex", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentRow()", { "currentRow", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filterMode()", { "filterMode", "", "Qt::MatchFlags", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxVisibleItems()", { "maxVisibleItems", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modelSorting()", { "modelSorting", "", "ModelSorting", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pathFromIndex(QModelIndex&)", { "pathFromIndex", "QModelIndex&", "QString", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "popup()", { "popup", "", "QAbstractItemView*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCaseSensitivity(enum)", { "setCaseSensitivity", "Qt::CaseSensitivity", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCompletionColumn(int)", { "setCompletionColumn", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCompletionMode(enum)", { "setCompletionMode", "CompletionMode", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCompletionRole(int)", { "setCompletionRole", "int", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentRow(int)", { "setCurrentRow", "int", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilterMode(enum)", { "setFilterMode", "Qt::MatchFlags", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaxVisibleItems(int)", { "setMaxVisibleItems", "int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModelSorting(enum)", { "setModelSorting", "ModelSorting", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPopup(QAbstractItemView*)", { "setPopup", "QAbstractItemView*", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidget(QWidget*)", { "setWidget", "QWidget*", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "splitPath(QString)", { "splitPath", "QString&", "QStringList", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget()", { "widget", "", "QWidget*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wrapAround()", { "wrapAround", "", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "complete()", { "complete", "", "void", 32, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "complete(QRect&)", { "complete", "QRect&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCompletionPrefix(QString)", { "setCompletionPrefix", "QString&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setWrapAround(bool)", { "setWrapAround", "bool", "void", 35, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCompleter::plastiqSignals = {
    { "activated(QString)", { "activated", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "activated(QModelIndex&)", { "activated", "QModelIndex&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "highlighted(QString)", { "highlighted", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "highlighted(QModelIndex&)", { "highlighted", "QModelIndex&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCompleter::plastiqProperties = {
    { "caseSensitivity", { "caseSensitivity", "long", "setCaseSensitivity", "caseSensitivity" } },
    { "completionColumn", { "completionColumn", "int", "setCompletionColumn", "completionColumn" } },
    { "completionMode", { "completionMode", "long", "setCompletionMode", "completionMode" } },
    { "completionPrefix", { "completionPrefix", "QString", "setCompletionPrefix", "completionPrefix" } },
    { "completionRole", { "completionRole", "int", "setCompletionRole", "completionRole" } },
    { "filterMode", { "filterMode", "long", "setFilterMode", "filterMode" } },
    { "maxVisibleItems", { "maxVisibleItems", "int", "setMaxVisibleItems", "maxVisibleItems" } },
    { "modelSorting", { "modelSorting", "long", "setModelSorting", "modelSorting" } },
    { "wrapAround", { "wrapAround", "bool", "setWrapAround", "wrapAround" } },

};

QHash<QByteArray, long> PlastiQQCompleter::plastiqConstants = {

    /* QCompleter::CompletionMode */
   { "PopupCompletion", QCompleter::PopupCompletion },
   { "UnfilteredPopupCompletion", QCompleter::UnfilteredPopupCompletion },
   { "InlineCompletion", QCompleter::InlineCompletion },

    /* QCompleter::ModelSorting */
   { "UnsortedModel", QCompleter::UnsortedModel },
   { "CaseSensitivelySortedModel", QCompleter::CaseSensitivelySortedModel },
   { "CaseInsensitivelySortedModel", QCompleter::CaseInsensitivelySortedModel },

};

QVector<PlastiQMetaObject*> PlastiQQCompleter::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCompleter::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCompleter::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QCompleter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCompleter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQCompleterWrapper : public QCompleter {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQCompleterWrapper(QObject *parent = Q_NULLPTR)
         : QCompleter(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQCompleterWrapper(QAbstractItemModel *model, QObject *parent = Q_NULLPTR)
         : QCompleter(model,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQCompleterWrapper(const QStringList &list, QObject *parent = Q_NULLPTR)
         : QCompleter(list,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QString pathFromIndex(const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString pathFromIndex(const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QCompleter::pathFromIndex(index);
    }

    QString PlastiQParentCall_pathFromIndex(const QModelIndex &index) const {
        return QCompleter::pathFromIndex(index);
    }

    QStringList splitPath(const QString &path) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QStringList splitPath(const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_string = const_cast<QString&>(path);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QStringList _r = QStringList(*reinterpret_cast<QStringList*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QCompleter::splitPath(path);
    }

    QStringList PlastiQParentCall_splitPath(const QString &path) const {
        return QCompleter::splitPath(path);
    }

    bool event(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QCompleter::event(ev);
    }

    bool PlastiQParentCall_event(QEvent *ev) {
        return QCompleter::event(ev);
    }

    bool eventFilter(QObject *o, QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(o);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(e);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QCompleter::eventFilter(o,e);
    }

    bool PlastiQParentCall_eventFilter(QObject *o, QEvent *e) {
        return QCompleter::eventFilter(o,e);
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
        else return QCompleter::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QCompleter::metaObject();
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
        else return QCompleter::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QCompleter::childEvent(event);
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
        else return QCompleter::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QCompleter::connectNotify(signal);
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
        else return QCompleter::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QCompleter::customEvent(event);
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
        else return QCompleter::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QCompleter::disconnectNotify(signal);
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
        else return QCompleter::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QCompleter::timerEvent(event);
    }

};

void PlastiQQCompleter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQCompleterWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQCompleterWrapper(); break;
        case 1: o = new PlastiQQCompleterWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQCompleterWrapper(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp)); break;
        case 3: o = new PlastiQQCompleterWrapper(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 4: o = new PlastiQQCompleterWrapper((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); break;
        case 5: o = new PlastiQQCompleterWrapper((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQCompleter *p = new PlastiQQCompleter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCompleter *p = new PlastiQQCompleter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 36) {
            id -= 36;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCompleter *o = sc ? Q_NULLPTR : reinterpret_cast<QCompleter*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->caseSensitivity(); // HACK for Qt::CaseSensitivity 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { int _r = o->completionColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->completionCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { qint64 _r = o->completionMode(); // HACK for CompletionMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { QAbstractItemModel* _r = o->completionModel();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 5: { QString _r = o->completionPrefix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { int _r = o->completionRole();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { QString _r = o->currentCompletion();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->currentIndex());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { int _r = o->currentRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { qint64 _r = o->filterMode(); // HACK for Qt::MatchFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { int _r = o->maxVisibleItems();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 13: { qint64 _r = o->modelSorting(); // HACK for ModelSorting 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { QString _r;
                if (isWrapper) _r = ((PlastiQQCompleterWrapper*)o)->PlastiQParentCall_pathFromIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else _r = o->pathFromIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 15: { QAbstractItemView* _r = o->popup();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemView"; } break;
        case 16: o->setCaseSensitivity(Qt::CaseSensitivity(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setCompletionColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setCompletionMode(QCompleter::CompletionMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setCompletionRole(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 20: { bool _r = o->setCurrentRow(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: o->setFilterMode(Qt::MatchFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setMaxVisibleItems(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setModelSorting(QCompleter::ModelSorting(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setPopup(reinterpret_cast<QAbstractItemView*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 27: { /* COPY OBJECT */
            QStringList *_r;
                if (isWrapper) _r = new QStringList(((PlastiQQCompleterWrapper*)o)->PlastiQParentCall_splitPath(stack[1].s_string));
                else _r = new QStringList(o->splitPath(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { QWidget* _r = o->widget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 29: { bool _r = o->wrapAround();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: { bool _r;
                if (isWrapper) _r = ((PlastiQQCompleterWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 31: { bool _r;
                if (isWrapper) _r = ((PlastiQQCompleterWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: o->complete();
                stack[0].type = PlastiQ::Void; break;
        case 33: o->complete((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setCompletionPrefix(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setWrapAround(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCompleter *o = reinterpret_cast<QCompleter*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::activated),
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "activated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::activated),
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "activated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::highlighted),
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "highlighted", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::highlighted),
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "highlighted", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCompleter *o = reinterpret_cast<QCompleter*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCompleter *o = reinterpret_cast<QCompleter*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCompleter *o = reinterpret_cast<QCompleter*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCompleter::~PlastiQQCompleter() {
    QCompleter* o = reinterpret_cast<QCompleter*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
