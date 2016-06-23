#include "header.h"

Cell::Cell(){
	up = false;	
	down = false;
	left = false;
	right = false;
	visited = false;
};

bool Cell::hasBeenVisited(){
	return visited;
}
