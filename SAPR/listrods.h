#ifndef LSITRODS_H
#define LSITRODS_H
#include <QVector>
#include "rod.h"
class ListRods
{
    QVector <Rod> rods;
public:
    ListRods(int i);
//    ListRods getListRoads();

    Rod getRod(int id);
    ~ListRods();
};

#endif // LSITRODS_H
