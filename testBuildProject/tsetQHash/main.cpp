#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    QList<int> iList;
    iList<<1<<2<<3<<4<<5<<6;
    QListIterator<int> listIter(iList);
    for(;listIter.hasNext();)
    {
        qDebug()<<listIter.next();
    }
    return a.exec();
}
