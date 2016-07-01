#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;

class Cell{
private:
	bool up;
	bool down;
	bool left;
	bool right;
	bool visited;
public:
	Cell();
	bool getWall(int);
	bool hasBeenVisited();
		
};


class aMaze{
private:
	int numCells;
	vector<Cell> vec;
public:
	aMaze(int);
	vector<Cell> getVec();
	bool checkCell(int,int);
	void init();
};


#endif
