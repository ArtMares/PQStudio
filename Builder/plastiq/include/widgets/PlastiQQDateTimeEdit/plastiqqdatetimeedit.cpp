#include "plastiqmethod.h"
#include "plastiqqdatetimeedit.h"

#include "widgets/PlastiQQAbstractSpinBox/plastiqqabstractspinbox.h"
#include <QDateTimeEdit> 
#include <QCalendarWidget>
#include <QDate>
#include <QDateTime>
#include <QString>
#include <QTime>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQDateTimeEdit::plastiqConstructors = {
    { "QDateTimeEdit()", { "QDateTimeEdit", "", "QDateTimeEdit*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTimeEdit(QWidget*)", { "QDateTimeEdit", "QWidget*", "QDateTimeEdit*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTimeEdit(QDateTime&)", { "QDateTimeEdit", "QDateTime&", "QDateTimeEdit*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTimeEdit(QDateTime&,QWidget*)", { "QDateTimeEdit", "QDateTime&,QWidget*", "QDateTimeEdit*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTimeEdit(QDate&)", { "QDateTimeEdit", "QDate&", "QDateTimeEdit*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTimeEdit(QDate&,QWidget*)", { "QDateTimeEdit", "QDate&,QWidget*", "QDateTimeEdit*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTimeEdit(QTime&)", { "QDateTimeEdit", "QTime&", "QDateTimeEdit*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTimeEdit(QTime&,QWidget*)", { "QDateTimeEdit", "QTime&,QWidget*", "QDateTimeEdit*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDateTimeEdit::plastiqMethods = {
    { "calendarPopup()", { "calendarPopup", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "calendarWidget()", { "calendarWidget", "", "QCalendarWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearMaximumDate()", { "clearMaximumDate", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearMaximumDateTime()", { "clearMaximumDateTime", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearMaximumTime()", { "clearMaximumTime", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearMinimumDate()", { "clearMinimumDate", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearMinimumDateTime()", { "clearMinimumDateTime", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearMinimumTime()", { "clearMinimumTime", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentSection()", { "currentSection", "", "Section", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentSectionIndex()", { "currentSectionIndex", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "date()", { "date", "", "QDate", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dateTime()", { "dateTime", "", "QDateTime", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayFormat()", { "displayFormat", "", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayedSections()", { "displayedSections", "", "Sections", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumDate()", { "maximumDate", "", "QDate", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumDateTime()", { "maximumDateTime", "", "QDateTime", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumTime()", { "maximumTime", "", "QTime", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumDate()", { "minimumDate", "", "QDate", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumDateTime()", { "minimumDateTime", "", "QDateTime", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumTime()", { "minimumTime", "", "QTime", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionAt(int)", { "sectionAt", "int", "Section", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionCount()", { "sectionCount", "", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionText(enum)", { "sectionText", "Section", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCalendarPopup(bool)", { "setCalendarPopup", "bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCalendarWidget(QCalendarWidget*)", { "setCalendarWidget", "QCalendarWidget*", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentSection(enum)", { "setCurrentSection", "Section", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentSectionIndex(int)", { "setCurrentSectionIndex", "int", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDateRange(QDate&,QDate&)", { "setDateRange", "QDate&,QDate&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDateTimeRange(QDateTime&,QDateTime&)", { "setDateTimeRange", "QDateTime&,QDateTime&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDisplayFormat(QString)", { "setDisplayFormat", "QString&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumDate(QDate&)", { "setMaximumDate", "QDate&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumDateTime(QDateTime&)", { "setMaximumDateTime", "QDateTime&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumTime(QTime&)", { "setMaximumTime", "QTime&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumDate(QDate&)", { "setMinimumDate", "QDate&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumDateTime(QDateTime&)", { "setMinimumDateTime", "QDateTime&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumTime(QTime&)", { "setMinimumTime", "QTime&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectedSection(enum)", { "setSelectedSection", "Section", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTimeRange(QTime&,QTime&)", { "setTimeRange", "QTime&,QTime&", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTimeSpec(enum)", { "setTimeSpec", "Qt::TimeSpec", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "time()", { "time", "", "QTime", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeSpec()", { "timeSpec", "", "Qt::TimeSpec", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dateTimeFromText(QString)", { "dateTimeFromText", "QString&", "QDateTime", 41, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionSpinBox*)", { "initStyleOption", "QStyleOptionSpinBox*", "void", 42, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "textFromDateTime(QDateTime&)", { "textFromDateTime", "QDateTime&", "QString", 43, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "fixup(QString&)", { "fixup", "QString&", "void", 44, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 45, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 46, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 47, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 48, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 49, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "stepEnabled()", { "stepEnabled", "", "StepEnabled", 50, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "validate(QString&,int&)", { "validate", "QString&,int&", "QValidator::State", 51, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 52, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setDate(QDate&)", { "setDate", "QDate&", "void", 53, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setDateTime(QDateTime&)", { "setDateTime", "QDateTime&", "void", 54, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setTime(QTime&)", { "setTime", "QTime&", "void", 55, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDateTimeEdit::plastiqSignals = {
    { "dateChanged(QDate&)", { "dateChanged", "QDate&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "dateTimeChanged(QDateTime&)", { "dateTimeChanged", "QDateTime&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "timeChanged(QTime&)", { "timeChanged", "QTime&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDateTimeEdit::plastiqProperties = {
    { "calendarPopup", { "calendarPopup", "bool", "setCalendarPopup", "calendarPopup" } },
    { "currentSection", { "currentSection", "long", "setCurrentSection", "currentSection" } },
    { "currentSectionIndex", { "currentSectionIndex", "int", "setCurrentSectionIndex", "currentSectionIndex" } },
    { "date", { "date", "QDate", "setDate", "date" } },
    { "dateTime", { "dateTime", "QDateTime", "setDateTime", "dateTime" } },
    { "displayFormat", { "displayFormat", "QString", "setDisplayFormat", "displayFormat" } },
    { "displayedSections", { "displayedSections", "long", "", "displayedSections" } },
    { "maximumDate", { "maximumDate", "QDate", "setMaximumDate", "maximumDate" } },
    { "maximumDateTime", { "maximumDateTime", "QDateTime", "setMaximumDateTime", "maximumDateTime" } },
    { "maximumTime", { "maximumTime", "QTime", "setMaximumTime", "maximumTime" } },
    { "minimumDate", { "minimumDate", "QDate", "setMinimumDate", "minimumDate" } },
    { "minimumDateTime", { "minimumDateTime", "QDateTime", "setMinimumDateTime", "minimumDateTime" } },
    { "minimumTime", { "minimumTime", "QTime", "setMinimumTime", "minimumTime" } },
    { "sectionCount", { "sectionCount", "int", "", "sectionCount" } },
    { "time", { "time", "QTime", "setTime", "time" } },
    { "timeSpec", { "timeSpec", "long", "setTimeSpec", "timeSpec" } },

};

QHash<QByteArray, long> PlastiQQDateTimeEdit::plastiqConstants = {

    /* QDateTimeEdit::Section */
   { "NoSection", QDateTimeEdit::NoSection },
   { "AmPmSection", QDateTimeEdit::AmPmSection },
   { "MSecSection", QDateTimeEdit::MSecSection },
   { "SecondSection", QDateTimeEdit::SecondSection },
   { "MinuteSection", QDateTimeEdit::MinuteSection },
   { "HourSection", QDateTimeEdit::HourSection },
   { "DaySection", QDateTimeEdit::DaySection },
   { "MonthSection", QDateTimeEdit::MonthSection },
   { "YearSection", QDateTimeEdit::YearSection },
   { "TimeSections_Mask", QDateTimeEdit::TimeSections_Mask },
   { "DateSections_Mask", QDateTimeEdit::DateSections_Mask },

};

QVector<PlastiQMetaObject*> PlastiQQDateTimeEdit::plastiqInherits = { &PlastiQQAbstractSpinBox::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDateTimeEdit::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQDateTimeEdit::plastiq_static_metaObject = {
    { &PlastiQQAbstractSpinBox::plastiq_static_metaObject, &plastiqInherits, "QDateTimeEdit", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDateTimeEdit::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQDateTimeEditWrapper : public QDateTimeEdit {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQDateTimeEditWrapper(QWidget *parent = Q_NULLPTR)
         : QDateTimeEdit(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQDateTimeEditWrapper(const QDateTime &datetime, QWidget *parent = Q_NULLPTR)
         : QDateTimeEdit(datetime,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQDateTimeEditWrapper(const QDate &date, QWidget *parent = Q_NULLPTR)
         : QDateTimeEdit(date,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQDateTimeEditWrapper(const QTime &time, QWidget *parent = Q_NULLPTR)
         : QDateTimeEdit(time,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QDateTime dateTimeFromText(const QString &text) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QDateTime dateTimeFromText(const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_string = const_cast<QString&>(text);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QDateTime _r = QDateTime(*reinterpret_cast<QDateTime*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QDateTimeEdit::dateTimeFromText(text);
    }

    QDateTime PlastiQParentCall_dateTimeFromText(const QString &text) const {
        return QDateTimeEdit::dateTimeFromText(text);
    }

    QString textFromDateTime(const QDateTime &dateTime) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString textFromDateTime(const QDateTime&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QDateTime(dateTime) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QDateTime");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QDateTimeEdit::textFromDateTime(dateTime);
    }

    QString PlastiQParentCall_textFromDateTime(const QDateTime &dateTime) const {
        return QDateTimeEdit::textFromDateTime(dateTime);
    }

    void fixup(QString &input) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void fixup(QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_string = input;
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::fixup(input);
    }

    void PlastiQParentCall_fixup(QString &input) const {
        return QDateTimeEdit::fixup(input);
    }

    void focusInEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QDateTimeEdit::focusInEvent(event);
    }

    bool focusNextPrevChild(bool next) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool focusNextPrevChild(bool)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_bool = next;
            stack[1].name = QByteArrayLiteral("bool");
            stack[1].type = PlastiQ::Bool;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QDateTimeEdit::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QDateTimeEdit::focusNextPrevChild(next);
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
        else return QDateTimeEdit::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QDateTimeEdit::keyPressEvent(event);
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
        else return QDateTimeEdit::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QDateTimeEdit::mousePressEvent(event);
    }

    void paintEvent(QPaintEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QDateTimeEdit::paintEvent(event);
    }

    QValidator::State validate(QString &text, int &pos) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QValidator::State validate(QString&,int&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_string = text;
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            stack[2].s_int = pos;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QValidator::State _r = QValidator::State(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QDateTimeEdit::validate(text,pos);
    }

    QValidator::State PlastiQParentCall_validate(QString &text, int &pos) const {
        return QDateTimeEdit::validate(text,pos);
    }

    void wheelEvent(QWheelEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QDateTimeEdit::wheelEvent(event);
    }

    void stepBy(int steps) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void stepBy(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = steps;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::stepBy(steps);
    }

    void PlastiQParentCall_stepBy(int steps) {
        return QDateTimeEdit::stepBy(steps);
    }

    StepEnabled stepEnabled() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("StepEnabled stepEnabled()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            StepEnabled _r = StepEnabled(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QDateTimeEdit::stepEnabled();
    }

    StepEnabled PlastiQParentCall_stepEnabled() const {
        return QDateTimeEdit::stepEnabled();
    }

    void changeEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QDateTimeEdit::changeEvent(event);
    }

    void closeEvent(QCloseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::closeEvent(event);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *event) {
        return QDateTimeEdit::closeEvent(event);
    }

    void contextMenuEvent(QContextMenuEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QDateTimeEdit::contextMenuEvent(event);
    }

    void focusOutEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QDateTimeEdit::focusOutEvent(event);
    }

    void hideEvent(QHideEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hideEvent(QHideEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QHideEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::hideEvent(event);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *event) {
        return QDateTimeEdit::hideEvent(event);
    }

    void keyReleaseEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QDateTimeEdit::keyReleaseEvent(event);
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QDateTimeEdit::mouseMoveEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QDateTimeEdit::mouseReleaseEvent(event);
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
        else return QDateTimeEdit::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QDateTimeEdit::resizeEvent(event);
    }

    void showEvent(QShowEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDateTimeEdit::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QDateTimeEdit::showEvent(event);
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
        else return QDateTimeEdit::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QDateTimeEdit::timerEvent(event);
    }

};

void PlastiQQDateTimeEdit::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQDateTimeEditWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQDateTimeEditWrapper(); break;
        case 1: o = new PlastiQQDateTimeEditWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQDateTimeEditWrapper((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp))); break;
        case 3: o = new PlastiQQDateTimeEditWrapper((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 4: o = new PlastiQQDateTimeEditWrapper((*reinterpret_cast< QDate(*) >(stack[1].s_voidp))); break;
        case 5: o = new PlastiQQDateTimeEditWrapper((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 6: o = new PlastiQQDateTimeEditWrapper((*reinterpret_cast< QTime(*) >(stack[1].s_voidp))); break;
        case 7: o = new PlastiQQDateTimeEditWrapper((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQDateTimeEdit *p = new PlastiQQDateTimeEdit();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDateTimeEdit *p = new PlastiQQDateTimeEdit();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 56) {
            id -= 56;
            PlastiQQAbstractSpinBox::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDateTimeEdit *o = sc ? Q_NULLPTR : reinterpret_cast<QDateTimeEdit*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->calendarPopup();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QCalendarWidget* _r = o->calendarWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QCalendarWidget"; } break;
        case 2: o->clearMaximumDate();
                stack[0].type = PlastiQ::Void; break;
        case 3: o->clearMaximumDateTime();
                stack[0].type = PlastiQ::Void; break;
        case 4: o->clearMaximumTime();
                stack[0].type = PlastiQ::Void; break;
        case 5: o->clearMinimumDate();
                stack[0].type = PlastiQ::Void; break;
        case 6: o->clearMinimumDateTime();
                stack[0].type = PlastiQ::Void; break;
        case 7: o->clearMinimumTime();
                stack[0].type = PlastiQ::Void; break;
        case 8: { qint64 _r = o->currentSection(); // HACK for Section 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { int _r = o->currentSectionIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { /* COPY OBJECT */
            QDate *_r = new QDate(o->date());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->dateTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { QString _r = o->displayFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { qint64 _r = o->displayedSections(); // HACK for Sections 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { /* COPY OBJECT */
            QDate *_r = new QDate(o->maximumDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->maximumDateTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QTime *_r = new QTime(o->maximumTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QDate *_r = new QDate(o->minimumDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->minimumDateTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { /* COPY OBJECT */
            QTime *_r = new QTime(o->minimumTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { qint64 _r = o->sectionAt(stack[1].s_int); // HACK for Section 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 21: { int _r = o->sectionCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { QString _r = o->sectionText(QDateTimeEdit::Section(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: o->setCalendarPopup(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setCalendarWidget(reinterpret_cast<QCalendarWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setCurrentSection(QDateTimeEdit::Section(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setCurrentSectionIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setDateRange((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QDate(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setDateTimeRange((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QDateTime(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setDisplayFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setMaximumDate((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setMaximumDateTime((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setMaximumTime((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setMinimumDate((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setMinimumDateTime((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setMinimumTime((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setSelectedSection(QDateTimeEdit::Section(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setTimeRange((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTime(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setTimeSpec(Qt::TimeSpec(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 39: { /* COPY OBJECT */
            QTime *_r = new QTime(o->time());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: { qint64 _r = o->timeSpec(); // HACK for Qt::TimeSpec 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 41: { /* COPY OBJECT */
            QDateTime *_r;
                if (isWrapper) _r = new QDateTime(((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_dateTimeFromText(stack[1].s_string));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 43: { QString _r;
                if (isWrapper) _r = ((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_textFromDateTime((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 44: if (isWrapper) ((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_fixup((*reinterpret_cast< QString(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 45: if (isWrapper) ((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 46: { bool _r;
                if (isWrapper) _r = ((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: if (isWrapper) ((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 48: if (isWrapper) ((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 49: if (isWrapper) ((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 50: /* UNSUPPORTED_RETURN_VALUE o->stepEnabled() | ret: `StepEnabled` */ break;
        case 51: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_validate((*reinterpret_cast< QString(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< int(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 52: if (isWrapper) ((PlastiQQDateTimeEditWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 53: o->setDate((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 54: o->setDateTime((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 55: o->setTime((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQAbstractSpinBox::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QDateTimeEdit *o = reinterpret_cast<QDateTimeEdit*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QDateTimeEdit::dateChanged,
            [=](const QDate& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QDate(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QDate";
                PlastiQ_activate(sender, "dateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QDateTimeEdit::dateTimeChanged,
            [=](const QDateTime& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QDateTime(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QDateTime";
                PlastiQ_activate(sender, "dateTimeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QDateTimeEdit::timeChanged,
            [=](const QTime& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QTime(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QTime";
                PlastiQ_activate(sender, "timeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QDateTimeEdit *o = reinterpret_cast<QDateTimeEdit*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDateTimeEdit *o = reinterpret_cast<QDateTimeEdit*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDateTimeEdit *o = reinterpret_cast<QDateTimeEdit*>(object->plastiq_data());

        if(className == "QAbstractSpinBox") {
            stack[0].s_voidp = static_cast<QAbstractSpinBox*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDateTimeEdit::~PlastiQQDateTimeEdit() {
    QDateTimeEdit* o = reinterpret_cast<QDateTimeEdit*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
