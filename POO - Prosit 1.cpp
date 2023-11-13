// POO - Prosit 1.cpp : 
// program making the distance between 2 points
//

#include <iostream>
#include "classe.h"

using namespace std; // thsi ligne simplify every "standard" command.
//that saves us from writing "std::" every time we have a cout / cin commande (for example)



int main()
{

    int resultats = pointage::distance_point(point1, point2);

    cout << "Différence entre le point 1 et 2 est : " << resultats << endl;
}
