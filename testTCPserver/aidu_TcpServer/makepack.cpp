#include "makepack.h"

makePack::makePack()
{

}
/**
 * @brief add2Pack
 * @param vec
 * @param param
 */
template <typename type>
void add2Pack(std::vector<uint8_t> *vec, type param)
{
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
/**
 * @brief add2Pack
 * @param vec
 * @param param
 */
void add2Pack(std::vector<uint8_t> *vec, float param)
{
    Float2U8 flo;
    flo.f = param;
    vec->push_back(flo.u8[3]);
    vec->push_back(flo.u8[2]);
    vec->push_back(flo.u8[1]);
    vec->push_back(flo.u8[0]);
}
/**
 * @brief add2Pack
 * @param vec
 * @param param
 */
void add2Pack(std::vector<uint8_t> *vec, double param)
{
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
/**
 * @brief addArray
 * @param vec
 * @param param
 * @param len
 */
template <typename type, typename type2>
void addArray(std::vector<uint8_t> *vec, type *param, type2 len)
{
    uint8_t *p = nullptr;
    p = (uint8_t *)param;
    for (int i = 0; i < len; ++i)
    {
        vec->push_back(p[i]);
    }
}
/**
 * @brief addHead
 * @param vec
 * @param param
 */
template <typename type>
void addHead(std::vector<uint8_t> *vec, type *param)
{
    uint8_t *p = nullptr;
    p = (uint8_t *)param;
    for (int i = 0; i < sizeof(type); ++i)
    {
        vec->push_back(p[i]);
    }
}


