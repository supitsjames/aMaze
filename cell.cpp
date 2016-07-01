#include "header.h"

Cell::Cell(){
	up = false;	
	down = false;
	left = false;
	right = false;
	visited = false;
};

Cell:getWall(int i){
	switch(i){
		case 0:
			return up;
		case 1:
			return down;
		case 2:
			return left;
		case 3:
			return right;
	}
}

bool Cell::hasBeenVisited(){
	return visited;
}
