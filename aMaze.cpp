#include "header.h"
#include "Cell.cpp"
#include <vector>
#include <math.h>

class aMaze{
private:
	int numCells;
	vector<Cell> vec;
public:
	aMaze(int);
	vector<Cell> getVec();
	void init();
};

aMaze::aMaze(int s){
	numCells = pow(s,2);
}

vector<Cell> aMaze::getVec(){
	return vec;
}

void aMaze::init(){
	vec.resize(numCells);
	Cell current = vec.front(); 
}

int main(){	
	cout << "Beginning program\n";
	aMaze m(3);
	m.init();
	printf("The maze has %u cells\n", m.getVec().size());
	return 0;
}
