#ifndef PQEVENTFILTER_H
#define PQEVENTFILTER_H

#include <QObject>
#include <QEvent>

class PQEventFilter : public QObject
{
    Q_OBJECT

public:
    explicit PQEventFilter(QObject *parent = Q_NULLPTR);
    bool eventFilter(QObject *obj, QEvent *e);
    void addEventType(QEvent::Type eventType);
    void removeEventType(QEvent::Type eventType);

signals:
    void event(QObject *obj, QEvent *e, bool *prevent);

private:
    QList<QEvent::Type> m_eventTypes;
};

#endif // PQEVENTFILTER_H
