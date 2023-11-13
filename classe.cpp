#include "classe.h"
#include <cmath>



void pointage::set_pointA(int x, int y) {
	this -> x1 = x;
	this -> y1 = y;
}

void pointage::set_pointB(int x, int y) {
	this -> x2 = x;
	this -> y2 = y;
}

bool pointage::verif() {
	if (this -> result != 1) {
		return (false);
	}
	else {
		return(true);
	}
}

int pointage::distance_point() {
	this -> result = sqrt(pow((this-> x1 - this -> x2), 2) + (pow((this-> y1 - this-> y2), 2)));
	return(result);
};