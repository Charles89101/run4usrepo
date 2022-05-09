#include "dwplay.h"
#include <iostream>
#include <windows.h>
#include <QString>
#include <QThread>
#include <QObject>
#include <QDebug>
#include <QTimer>
#include "dwplaythread.h"

dwPlay::dwPlay()
{
    // initialize all vars here
    this->picture_count = 0;
    this->play_interval = 0;
}

bool dwPlay::setFileList(QString pictures[], int count)
{
    if (count > MAX_PICTURE_COUNT)
    {
        // TODO:: what to do??
    }

    for (int i = 0; i < count; i++)
    {
        this->pictures[i] = pictures[i];
    }
}

QString *dwPlay::getFileList(int *count_get)
{
    *count_get = this->picture_count;
    return this->pictures;
}

bool dwPlay::startPlay(void)
{
    dwPlayThread *thread = new dwPlayThread();
    dwPlayThread->start();
}

bool dwPlay::endPlay(void)
{
}


bool dwPlay::setWallpaper(QString imagePath)
{
    bool ret = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID)imagePath.utf16(), SPIF_SENDWININICHANGE | SPIF_UPDATEINIFILE);
    return ret;
}
