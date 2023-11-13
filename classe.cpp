#include "classe.h"
#include <cmath>


void pointage::point()
{
	point1[0] = 0;
	point1[1] = 0;
	void tableaux 
}

void pointage::point(int x, int y)
{
	point1[0] = x;
	point1[1] = y;
}

int pointage::distance_point(int tab1[2], int tab2[2]) {
	int x = (tab1[0] - tab2[0]);
	int y = (tab1[1] - tab2[1]);
	result = sqrt(pow(x, 2) + (pow(y, 2)));
	return(result);
};