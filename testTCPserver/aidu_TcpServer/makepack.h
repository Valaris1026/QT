#ifndef MAKEPACK_H
#define MAKEPACK_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <vector>

typedef union
{
    double d;
    uint8_t u8[8];
} Double2U8;
typedef union
{
    float f;
    uint8_t u8[4];
} Float2U8;
typedef union
{
    float f;
    uint32_t Int;
    uint8_t u8[4];
} FloatNInt2U8;

class makePack
{
public:
    makePack();
    template <typename type>
    void add2Pack(std::vector<uint8_t> *vec, type param){
        switch (sizeof(param))
        {
        case 1:
        {
            vec->push_back(param);
        }
        break;
        case 2:
        {
            uint8_t Temp1 = param >> 8;
            uint8_t Temp2 = (param << 8) >> 8;
            vec->push_back(Temp1);
            vec->push_back(Temp2);
        }
        break;
        case 4:
        {
            uint8_t fTemp1 = (param >> 24);
            uint8_t fTemp2 = (param << 8) >> 24;
            uint8_t fTemp3 = (param << 16) >> 24;
            uint8_t fTemp4 = (param << 24) >> 24;
            vec->push_back(fTemp1);
            vec->push_back(fTemp2);
            vec->push_back(fTemp3);
            vec->push_back(fTemp4);
        }
        break;
        }
    }
    void add2Pack(std::vector<uint8_t> *vec, float param){
        Float2U8 flo;
        flo.f = param;
        vec->push_back(flo.u8[3]);
        vec->push_back(flo.u8[2]);
        vec->push_back(flo.u8[1]);
        vec->push_back(flo.u8[0]);
    }
    void add2Pack(std::vector<uint8_t> *vec, double param){
        Double2U8 doub;
        doub.d = param;
        vec->push_back(doub.u8[7]);
        vec->push_back(doub.u8[6]);
        vec->push_back(doub.u8[5]);
        vec->push_back(doub.u8[4]);
        vec->push_back(doub.u8[3]);
        vec->push_back(doub.u8[2]);
        vec->push_back(doub.u8[1]);
        vec->push_back(doub.u8[0]);
    }
    template <typename type, typename type2>
    void addArray(std::vector<uint8_t> *vec, type *param, type2 len){
        uint8_t *p = nullptr;
        p = (uint8_t *)param;
        for (int i = 0; i < len; ++i)
        {
            vec->push_back(p[i]);
        }
    }
    template <typename type>
    void addHead(std::vector<uint8_t> *vec, type *param){
        uint8_t *p = nullptr;
        p = (uint8_t *)param;
        for (int i = 0; i < sizeof(type); ++i)
        {
            vec->push_back(p[i]);
        }
    }
    uint16_t crcCheck(uint8_t *ptr, uint32_t len, uint16_t *CRC16Temp);
    uint16_t crcCheck(std::vector<uint8_t> vec, uint32_t len, uint16_t *CRC16Temp);
    uint32_t getByte2Int(uint8_t *buf);
    uint16_t getByte2ShortInt(uint8_t *buf);
    float getByte2FloatBigEndian(uint8_t *buf);
};
#endif // MAKEPACK_H
