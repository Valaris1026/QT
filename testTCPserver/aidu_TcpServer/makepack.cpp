#include "makepack.h"

makePack::makePack()
{

}

uint16_t makePack::crcCheck(uint8_t *ptr, uint32_t len, uint16_t *CRC16Temp)
{
    unsigned int i;
    unsigned short j, tmp;

    for (i = 0; i < len; i++)
    {
        *CRC16Temp = (*ptr) ^ (*CRC16Temp);

        for (j = 0; j < 8; j++)
        {
            tmp = *CRC16Temp & 0x0001;
            *CRC16Temp = *CRC16Temp >> 1;

            if (tmp)
            {
                *CRC16Temp = *CRC16Temp ^ 0xa001;
            }
        }

        ptr++;
    }

    return (*CRC16Temp);
}

uint16_t makePack::crcCheck(std::vector<uint8_t> vec, uint32_t len, uint16_t *CRC16Temp)
{
    unsigned int i;
    unsigned short j, tmp;

    for (i = 0; i < len; i++)
    {
        *CRC16Temp = vec[i] ^ *CRC16Temp;

        for (j = 0; j < 8; j++)
        {
            tmp = *CRC16Temp & 0x0001;
            *CRC16Temp = *CRC16Temp >> 1;

            if (tmp)
            {
                *CRC16Temp = *CRC16Temp ^ 0xa001;
            }
        }
    }

    return (*CRC16Temp);
}

uint32_t makePack::getByte2Int(uint8_t *buf)
{
    uint32_t ret = 0;
    ret = buf[3] | (buf[2] << 8) | (buf[1] << 16) | (buf[0] << 24);
    return ret;
}

uint16_t makePack::getByte2ShortInt(uint8_t *buf)
{
    uint16_t ret = 0;
    ret = buf[0] << 8 | (buf[1] );
    return ret;
}

float makePack::getByte2FloatBigEndian(uint8_t *buf)
{
    FloatNInt2U8 f2u8;
    f2u8.u8[0] = buf[3];
    f2u8.u8[1] = buf[2];
    f2u8.u8[2] = buf[1];
    f2u8.u8[3] = buf[0];

    return f2u8.f;
}


