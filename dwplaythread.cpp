#include "dwplaythread.h"
#include <QDebug>

dwPlayThread::dwPlayThread()
{

}

void dwPlayThread::run() {
    while(1){
        qDebug() << "######";
    }
}
