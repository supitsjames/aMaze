#include "header.h"
#include "Cell.cpp"

aMaze::aMaze(int i){

	int numCells = pow(i,2);	
	vec.resize(numCells); 
	
}

vector<Cell> aMaze::getVec(){
	return vec;
}

bool aMaze::checkCell(int d, int index){
	int row = sqrt(numCells);
	if(d==0 && d - row >= 0){
		return true;
	}
	if(d==1 && d + row < numCells){
		return true;
	}
	if(d==2 && (d-1) % row != 0){
		return true;
	}	
	if(d==3 && (d+1) % row != 1){
		return true;
	}
	return false;
}

void aMaze::init(){
	Cell current = vec.front();
	int index =0;
	
	for(int i=0;i<numCells;i++){
		int gen = rand() % 4;
/*		switch(gen){
			case 0:
				if
		}
*/		cout << gen << endl;
	}	
}

int main(){	
	cout << "Beginning program\n";
	aMaze m(3);
	m.init();
	printf("The maze has %u cells\n", m.getVec().size());
	return 0;
}
