#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"

class BarreCarree : public Barre
{
public:
    BarreCarree(string _reference, int _longueur, float _densite, string _nomAlliage);
    ~BarreCarree();
};

#endif // BARRECARREE_H
