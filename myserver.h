#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QAbstractSocket>
#include "myclient.h"

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = nullptr);    
    void startServer();

protected:
    void incomingConnection(qintptr socketDescriptor);

signals:


};

#endif // MYSERVER_H
