#include "admt.h"

admt::admt()
{
    if(channel==nullptr)
    {
        qDebug()<<"Channel point to null,created a new one";
        channel = new admt_Channel[global.getTotalChannelNumber()];
    }
    else
    {
        delete [] channel;
        channel = new admt_Channel[global.getTotalChannelNumber()];
    }
}
