#ifndef ADMT_H
#define ADMT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QDebug>
#include <admt_global.h>
#include <admt_channel.h>

class admt
{
private:

public:
    admt();
    admt_Global global;
    admt_Channel *channel;
//    friend class admt_Channel;
//    friend class admt_Global;
};

#endif // ADMT_H
