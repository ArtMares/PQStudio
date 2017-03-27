#ifndef PQTHREAD_H
#define PQTHREAD_H

#include <QThread>

class PQObjectWrapper;
class PQThread : public QThread
{
    Q_OBJECT

public:
    explicit PQThread(QObject *parent = Q_NULLPTR);

protected:
    void run() Q_DECL_OVERRIDE;
};

#endif // PQTHREAD_H
