#pragma once
class pointage
{
private:
	int result;
	int x;
	int y;
	int point1[2];
	int point2[2];
	
public:
	void point();
	void point(int, int);
	int distance_point(int point1[2],int point2[2]);
};

