// POO - Prosit 1.cpp : 
// program making the distance between 2 points
// And verify if this distance is 1
//

#include <iostream>
#include "classe.h"

using namespace std; // thsi ligne simplify every "standard" command.
//that saves us from writing "std::" every time we have a cout / cin commande (for example)

void main(){
	pointage* test;
	test = new pointage();

	test -> set_pointA(0, 0);
	test -> set_pointB(1, 1);
	test->distance_point();
	cout <<"the assuption is " << test->verif() << endl;
	delete test;
}