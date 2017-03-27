#include "pqthread.h"

#include "plastiqobject.h"
#include "plastiqmethod.h"

PQThread::PQThread(QObject *parent)
    : QThread(parent)
{

}

void PQThread::run()
{
    PMOGStack cstack = new PMOGStackItem[0];

    PlastiQ_anon_activate(this, "run", 0, cstack);

    delete [] cstack;
    cstack = 0;
}

