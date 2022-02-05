#ifndef MYTASK_H
#define MYTASK_H

#include <QRunnable>
#include <QObject>

class MyTask : public QObject, public QRunnable
{
    Q_OBJECT
public:
    explicit MyTask(QObject *parent = nullptr);

signals:
    // notify to the main thread when we're done
        void Result(int Number);

    protected:
        void run();
};

#endif // MYTASK_H
