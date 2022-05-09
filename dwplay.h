#ifndef DWPLAY_H
#define DWPLAY_H
#include <QString>
#include <QObject>
#include <stdint.h>
#include <QTimer>

#include "dwPlayThread.h"

#define MAX_PICTURE_COUNT 256

class dwPlay
{
public:
    dwPlay();

private:
    QString pictures[MAX_PICTURE_COUNT];
    int16_t picture_count;
    int32_t play_interval;

    dwPlayThread *p_thread;

public:
    bool    setFileList(QString pictures[], int count);
    QString *getFileList(int *count_get);
    bool    startPlay(void);
    bool    endPlay(void);


private:
    bool    setWallpaper(QString imagePath);

    void    run(void);

};


#endif // DWPLAY_H
