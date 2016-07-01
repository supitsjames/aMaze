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

bool aMaze::checkCell(int i){
	if(i >=0){
		
	}
}

void aMaze::init(){
	vec.resize(numCells); 
	Cell current = vec.front();
	
	for(int i=0;i<numCells;i++){
		int gen = rand() % 4;
		switch(gen){
			case 0:
				if
		}
	}	
}

int main(){	
	cout << "Beginning program\n";
	aMaze m(3);
	m.init();
	printf("The maze has %u cells\n", m.getVec().size());
	return 0;
}
