#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <stdio.h>
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
	bool hasBeenVisited();
		
};

#endif
