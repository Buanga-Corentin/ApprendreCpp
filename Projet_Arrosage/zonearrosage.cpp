#include "zonearrosage.h"
#include "capteurhumidite.h"


ZoneArrosage::ZoneArrosage(const int _numZone, const int _commandeVanne, const int _senseAVanne,
     const  int _senseBVanne, const int _brocheHumidite):
    laVanne(_commandeVanne,_senseAVanne,_senseBVanne),
    numZone(_numZone),
    Humidite(_brocheHumidite)

{
    cout << "Constructeur de la classe Zone Arrosage" << endl;
}
