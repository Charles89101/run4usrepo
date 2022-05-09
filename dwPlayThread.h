#ifndef DWTHREAED_H
#define DWTHREAED_H
#include <QThread>

class dwPlayThread : public QThread
{
public:
    dwPlayThread();
    void run();
};

#endif // DWTHREAED_H
