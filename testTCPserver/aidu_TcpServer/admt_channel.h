#ifndef ADMT_CHANNEL_H
#define ADMT_CHANNEL_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class admt_Channel
{
private:
    int xChNo;                 // Number of channel start with channel 1 R
    uint32_t xChID;            // Identify of channel R
    uint8_t xChSTA;      // Status of channel R/W
    bool xChConSTA;        // Channel connection status -Down R/W
    uint16_t xChResister;      // Resister value of channel -Down R/W
    uint8_t xChProbeType;      // Channel probe type 0-Magnet probe;1-M of electric probe ;2-N of electric probe -Down R/W
    uint8_t xChAdMultipleTime; // Channel sample multiple times from 4 to 16,default 6;-UP R/W
    uint32_t AD_DataNum;       // Number of data to sample,from 1024 to 4096 default 1024.Now this value is in firm value,1024-fast speed mode;2048 middle  speed mode;4096 slow speed mode.-UP R/W
    float fChAD_Freq;          // Frequency need to sample-UP R/W Hz
    uint32_t xMeaNeedTime;     // Measurement of down machine require time./ms Down
    uint8_t xMeaStartTime;
    float *data;
    friend class admt;
public:
    admt_Channel();
    int getChannelNo(){return this->xChNo;}
    void setChannelNo(const int setChNo){this->xChNo=setChNo;}

    uint32_t getChID(){return this->xChID;}
    void setChID(const uint32_t setID){this->xChID=setID;}

    uint8_t getChannelStatus(){return this->xChSTA;}
    void setChannelStatus(uint8_t setStatus){this->xChSTA=setStatus;}

    bool isChannelConnected(){return this->xChConSTA;}
    void setChannelConnect(bool isConnect){this->xChConSTA=isConnect;}

    uint16_t getChannelResister(){return this->xChResister;}
    void setChannelResister(uint16_t res){this->xChResister=res;}

    uint8_t getChannelProbeType(){return this->xChProbeType;}
    void setChannelProbeType(uint8_t probeType){this->xChProbeType=probeType;}

    uint8_t getChannelMultipleTime(){return this->xChAdMultipleTime;}
    void setChannelMultipleTime(uint8_t mulTime){this->xChAdMultipleTime=mulTime;}

    uint32_t getChannelMeasureDataNumber(){return this->AD_DataNum;}
    void setChannelMeasureDataNumber(uint32_t setAdNumber){;this->AD_DataNum=setAdNumber;}

    float getChannelMeasureFrequency(){return this->fChAD_Freq;}
    void setChannelMeasureFrequency(float setFreq){this->fChAD_Freq=setFreq;}

    uint32_t getChannelMeasureNeedTime(){return this->xMeaNeedTime;}
    void setChannelMeasureNeedTime(uint32_t setNeedTime_s){this->xMeaNeedTime=setNeedTime_s;}

    uint8_t getChannelMeasureStartTime(){return this->xMeaStartTime;}
    void setChannelMeasureStartTime(uint8_t setStartTime){this->xMeaStartTime=setStartTime;}

    float *getChannelMeasureDataCache(){return this->data;}
    void setChannelMeasureDataCache(float *setDataAddr){ this->data=setDataAddr;}
    void clearChanelMeasureDataCache(){
        if (this->data != nullptr)
        {
            delete []this->data;
        }
        this->data= nullptr;
        ;}
};

#endif // ADMT_CHANNEL_H
