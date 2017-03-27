#include "pqeventfilter.h"
#include "plastiqobject.h"

#include <QWidget>
#include <QEvent>

PQEventFilter::PQEventFilter(QObject *parent)
    : QObject(parent)
{

}

bool PQEventFilter::eventFilter(QObject *obj, QEvent *e)
{
    if(m_eventTypes.contains(e->type())) {
        if(!PlastiQ_event(this, obj, e)) {
            bool prevent = false;
            emit event(obj, e, &prevent);

            if(!prevent) {
                return QObject::eventFilter(obj, e);
            }
        }
    }
    else {
        return QObject::eventFilter(obj, e);
    }

    return true;
}

void PQEventFilter::addEventType(QEvent::Type eventType)
{
    m_eventTypes.append(eventType);
}

void PQEventFilter::removeEventType(QEvent::Type eventType)
{
    m_eventTypes.removeAll(eventType);
}
