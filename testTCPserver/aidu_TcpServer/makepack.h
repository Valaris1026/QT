#ifndef MAKEPACK_H
#define MAKEPACK_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

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

class makePack
{
public:
    makePack();
    template <typename type>
    void add2Pack(std::vector<uint8_t> *vec, type param);
    void add2Pack(std::vector<uint8_t> *vec, float param);
    void add2Pack(std::vector<uint8_t> *vec, double param);
    template <typename type, typename type2>
    void addArray(std::vector<uint8_t> *vec, type *param, type2 len);
    template <typename type>
    void addHead(std::vector<uint8_t> *vec, type *param);
};

#endif // MAKEPACK_H
