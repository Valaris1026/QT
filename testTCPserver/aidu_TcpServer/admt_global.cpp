#include "admt_global.h"

admt_Global::admt_Global()
{
    memcpy(this->devName, ADMT_NAME2, strlen(ADMT_NAME2));//default name
    this->devSerialNum = ADMT_DEFAULT_SERIAL_NUM;
    this->AdChCounter =0;
    this->xTotalChannelNum=1;
    this->xOpChNo=1;
    this->xAllChSTA=0;
    this->xFilter=ADMT_DEFAULT_FILTER;
    this->Probe=ADMT_DEFAULT_PROBE;
    this->xFilter_Probe=(ADMT_SUPPORT_FILTER << 6 | ADMT_SUPPORT_PROBE << 4 |
                         ADMT_DEFAULT_FILTER | ADMT_DEFAULT_PROBE);
    this->xGlobalProgress=0;
    this->xMeaMethod=ADMT_DEFAULT_METHOD;
    this->xMeaNeedTime=0;
    this->xSlaveType=ADMT_RECEIVER;
    this->batteryPercent=100;
}
