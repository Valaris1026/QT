#ifndef AIDUPROTOCOL_H
#define AIDUPROTOCOL_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class aiduProtocol
{
public:
    aiduProtocol();
    bool recvMsg(
        ADMT_ModbusStack *modbus,
        ADMT_Global *Global,
        ADMT_Channel **channel,
        uint8_t *buf,
        uint32_t len);
    bool txMsg(ADMT_Global *Global,
               Aidu_ERR_t aiduErrcode);
    bool txMsg(ADMT_Global *Global,
               ADMT_Channel *channel,
               Aidu_command_t aiduCommand);

    bool errorCheck(
        ADMT_ModbusStack *modbus,
        Aidu_mFrame_T *master,
        ADMT_Global *Global,
        ADMT_Channel **channel); // 主机接收从机数据

    bool executeMsg(
        ADMT_ModbusStack *modbus,
        Aidu_mFrame_T *slave,
        ADMT_Global *Global,
        ADMT_Channel **channel);                                                                               // 主机接收从机数据
    void makePack(std::vector<uint8_t> *vec, ADMT_Global *Global, ADMT_Channel *channel, Aidu_command_t func); // 发
    void makePack(std::vector<uint8_t> *vec, ADMT_Global *Global, Aidu_ERR_t erro_code);                       // 发
    static uint32_t getByte2Int(uint8_t *buf);

    void send(uint8_t *buf, uint32_t len);
};

#endif // AIDUPROTOCOL_H
