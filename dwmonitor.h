#ifndef DWMONITOR_H
#define DWMONITOR_H

#include <QThread>
#include <QString>


class dwMonitor : public QThread
{
public:
    dwMonitor();
    ~dwMonitor();
    explicit dwMonitor(QString s);
    void run();
private:
    QString name;
    QThread playThread;
};

#endif // DWMONITOR_H

