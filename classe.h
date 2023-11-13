#pragma once
class pointage
{
private:
	int result;

	int x1;
	int y1;
	int x2;
	int y2;
	
public:
	void set_pointA(int x,int y);
	void set_pointB(int x,int y);
	int distance_point();
	bool verif();
};

