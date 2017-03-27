#include "plastiqmethod.h"
#include "plastiqqcalendarwidget.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QCalendarWidget> 
#include <QTextCharFormat>
#include <QDate>
#include <QPainter>
#include <QRect>
#include <QEvent>
#include <QObject>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QResizeEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQCalendarWidget::plastiqConstructors = {
    { "QCalendarWidget()", { "QCalendarWidget", "", "QCalendarWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCalendarWidget(QWidget*)", { "QCalendarWidget", "QWidget*", "QCalendarWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCalendarWidget::plastiqMethods = {
    { "dateEditAcceptDelay()", { "dateEditAcceptDelay", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dateTextFormat(QDate&)", { "dateTextFormat", "QDate&", "QTextCharFormat", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstDayOfWeek()", { "firstDayOfWeek", "", "Qt::DayOfWeek", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "headerTextFormat()", { "headerTextFormat", "", "QTextCharFormat", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalHeaderFormat()", { "horizontalHeaderFormat", "", "HorizontalHeaderFormat", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDateEditEnabled()", { "isDateEditEnabled", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isGridVisible()", { "isGridVisible", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNavigationBarVisible()", { "isNavigationBarVisible", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumDate()", { "maximumDate", "", "QDate", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumDate()", { "minimumDate", "", "QDate", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "monthShown()", { "monthShown", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedDate()", { "selectedDate", "", "QDate", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionMode()", { "selectionMode", "", "SelectionMode", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDateEditAcceptDelay(int)", { "setDateEditAcceptDelay", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDateEditEnabled(bool)", { "setDateEditEnabled", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDateTextFormat(QDate&,QTextCharFormat&)", { "setDateTextFormat", "QDate&,QTextCharFormat&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstDayOfWeek(enum)", { "setFirstDayOfWeek", "Qt::DayOfWeek", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeaderTextFormat(QTextCharFormat&)", { "setHeaderTextFormat", "QTextCharFormat&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalHeaderFormat(enum)", { "setHorizontalHeaderFormat", "HorizontalHeaderFormat", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumDate(QDate&)", { "setMaximumDate", "QDate&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumDate(QDate&)", { "setMinimumDate", "QDate&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionMode(enum)", { "setSelectionMode", "SelectionMode", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalHeaderFormat(enum)", { "setVerticalHeaderFormat", "VerticalHeaderFormat", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWeekdayTextFormat(enum,QTextCharFormat&)", { "setWeekdayTextFormat", "Qt::DayOfWeek,QTextCharFormat&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalHeaderFormat()", { "verticalHeaderFormat", "", "VerticalHeaderFormat", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "weekdayTextFormat(enum)", { "weekdayTextFormat", "Qt::DayOfWeek", "QTextCharFormat", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yearShown()", { "yearShown", "", "int", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintCell(QPainter*,QRect&,QDate&)", { "paintCell", "QPainter*,QRect&,QDate&", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateCell(QDate&)", { "updateCell", "QDate&", "void", 28, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "updateCells()", { "updateCells", "", "void", 29, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setCurrentPage(int,int)", { "setCurrentPage", "int,int", "void", 35, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setDateRange(QDate&,QDate&)", { "setDateRange", "QDate&,QDate&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setGridVisible(bool)", { "setGridVisible", "bool", "void", 37, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setNavigationBarVisible(bool)", { "setNavigationBarVisible", "bool", "void", 38, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setSelectedDate(QDate&)", { "setSelectedDate", "QDate&", "void", 39, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showNextMonth()", { "showNextMonth", "", "void", 40, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showNextYear()", { "showNextYear", "", "void", 41, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showPreviousMonth()", { "showPreviousMonth", "", "void", 42, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showPreviousYear()", { "showPreviousYear", "", "void", 43, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showSelectedDate()", { "showSelectedDate", "", "void", 44, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showToday()", { "showToday", "", "void", 45, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCalendarWidget::plastiqSignals = {
    { "activated(QDate&)", { "activated", "QDate&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked(QDate&)", { "clicked", "QDate&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentPageChanged(int,int)", { "currentPageChanged", "int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectionChanged()", { "selectionChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCalendarWidget::plastiqProperties = {
    { "dateEditAcceptDelay", { "dateEditAcceptDelay", "int", "setDateEditAcceptDelay", "dateEditAcceptDelay" } },
    { "dateEditEnabled", { "dateEditEnabled", "bool", "setDateEditEnabled", "isDateEditEnabled" } },
    { "firstDayOfWeek", { "firstDayOfWeek", "long", "setFirstDayOfWeek", "firstDayOfWeek" } },
    { "gridVisible", { "gridVisible", "bool", "setGridVisible", "isGridVisible" } },
    { "horizontalHeaderFormat", { "horizontalHeaderFormat", "long", "setHorizontalHeaderFormat", "horizontalHeaderFormat" } },
    { "maximumDate", { "maximumDate", "QDate", "setMaximumDate", "maximumDate" } },
    { "minimumDate", { "minimumDate", "QDate", "setMinimumDate", "minimumDate" } },
    { "navigationBarVisible", { "navigationBarVisible", "bool", "setNavigationBarVisible", "isNavigationBarVisible" } },
    { "selectedDate", { "selectedDate", "QDate", "setSelectedDate", "selectedDate" } },
    { "selectionMode", { "selectionMode", "long", "setSelectionMode", "selectionMode" } },
    { "verticalHeaderFormat", { "verticalHeaderFormat", "long", "setVerticalHeaderFormat", "verticalHeaderFormat" } },

};

QHash<QByteArray, long> PlastiQQCalendarWidget::plastiqConstants = {

    /* QCalendarWidget::HorizontalHeaderFormat */
   { "NoHorizontalHeader", QCalendarWidget::NoHorizontalHeader },
   { "SingleLetterDayNames", QCalendarWidget::SingleLetterDayNames },
   { "ShortDayNames", QCalendarWidget::ShortDayNames },
   { "LongDayNames", QCalendarWidget::LongDayNames },

    /* QCalendarWidget::SelectionMode */
   { "NoSelection", QCalendarWidget::NoSelection },
   { "SingleSelection", QCalendarWidget::SingleSelection },

    /* QCalendarWidget::VerticalHeaderFormat */
   { "NoVerticalHeader", QCalendarWidget::NoVerticalHeader },
   { "ISOWeekNumbers", QCalendarWidget::ISOWeekNumbers },

};

QVector<PlastiQMetaObject*> PlastiQQCalendarWidget::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCalendarWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQCalendarWidget::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QCalendarWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCalendarWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQCalendarWidgetWrapper : public QCalendarWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQCalendarWidgetWrapper(QWidget *parent = Q_NULLPTR)
         : QCalendarWidget(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void paintCell(QPainter *painter, const QRect &rect, const QDate &date) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintCell(QPainter*,const QRect&,const QDate&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRect");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_voidp = new QDate(date) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QDate");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCalendarWidget::paintCell(painter,rect,date);
    }

    void PlastiQParentCall_paintCell(QPainter *painter, const QRect &rect, const QDate &date) const {
        return QCalendarWidget::paintCell(painter,rect,date);
    }

    bool event(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QCalendarWidget::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QCalendarWidget::event(event);
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
        else return QCalendarWidget::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QCalendarWidget::eventFilter(watched,event);
    }

    void keyPressEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCalendarWidget::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QCalendarWidget::keyPressEvent(event);
    }

    void mousePressEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCalendarWidget::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QCalendarWidget::mousePressEvent(event);
    }

    void resizeEvent(QResizeEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCalendarWidget::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QCalendarWidget::resizeEvent(event);
    }

};

void PlastiQQCalendarWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQCalendarWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQCalendarWidgetWrapper(); break;
        case 1: o = new PlastiQQCalendarWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQCalendarWidget *p = new PlastiQQCalendarWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCalendarWidget *p = new PlastiQQCalendarWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 46) {
            id -= 46;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCalendarWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QCalendarWidget*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->dateEditAcceptDelay();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->dateTextFormat((*reinterpret_cast< QDate(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->firstDayOfWeek(); // HACK for Qt::DayOfWeek 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->headerTextFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->horizontalHeaderFormat(); // HACK for HorizontalHeaderFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { bool _r = o->isDateEditEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isGridVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isNavigationBarVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { /* COPY OBJECT */
            QDate *_r = new QDate(o->maximumDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QDate *_r = new QDate(o->minimumDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { int _r = o->monthShown();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { /* COPY OBJECT */
            QDate *_r = new QDate(o->selectedDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { qint64 _r = o->selectionMode(); // HACK for SelectionMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: o->setDateEditAcceptDelay(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setDateEditEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setDateTextFormat((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTextCharFormat(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setFirstDayOfWeek(Qt::DayOfWeek(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setHeaderTextFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setMaximumDate((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setMinimumDate((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setSelectionMode(QCalendarWidget::SelectionMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setWeekdayTextFormat(Qt::DayOfWeek(stack[1].s_int64),
                    (*reinterpret_cast< QTextCharFormat(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: { qint64 _r = o->verticalHeaderFormat(); // HACK for VerticalHeaderFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 25: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->weekdayTextFormat(Qt::DayOfWeek(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { int _r = o->yearShown();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 27: if (isWrapper) ((PlastiQQCalendarWidgetWrapper*)o)->PlastiQParentCall_paintCell(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QDate(*) >(stack[3].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 28: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 29: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 30: { bool _r;
                if (isWrapper) _r = ((PlastiQQCalendarWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 31: { bool _r;
                if (isWrapper) _r = ((PlastiQQCalendarWidgetWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: if (isWrapper) ((PlastiQQCalendarWidgetWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: if (isWrapper) ((PlastiQQCalendarWidgetWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 34: if (isWrapper) ((PlastiQQCalendarWidgetWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setCurrentPage(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setDateRange((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QDate(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setGridVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setNavigationBarVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setSelectedDate((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->showNextMonth();
                stack[0].type = PlastiQ::Void; break;
        case 41: o->showNextYear();
                stack[0].type = PlastiQ::Void; break;
        case 42: o->showPreviousMonth();
                stack[0].type = PlastiQ::Void; break;
        case 43: o->showPreviousYear();
                stack[0].type = PlastiQ::Void; break;
        case 44: o->showSelectedDate();
                stack[0].type = PlastiQ::Void; break;
        case 45: o->showToday();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCalendarWidget *o = reinterpret_cast<QCalendarWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCalendarWidget::activated,
            [=](const QDate& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QDate(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QDate";
                PlastiQ_activate(sender, "activated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCalendarWidget::clicked,
            [=](const QDate& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QDate(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QDate";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCalendarWidget::currentPageChanged,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "currentPageChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QCalendarWidget::selectionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "selectionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCalendarWidget *o = reinterpret_cast<QCalendarWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCalendarWidget *o = reinterpret_cast<QCalendarWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCalendarWidget *o = reinterpret_cast<QCalendarWidget*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCalendarWidget::~PlastiQQCalendarWidget() {
    QCalendarWidget* o = reinterpret_cast<QCalendarWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
