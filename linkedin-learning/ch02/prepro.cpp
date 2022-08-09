#include <iostream>

#define CAPACIDAD 5000
//#define DEBUG

using namespace std;



int main(){
		
	cout<< CAPACIDAD <<endl;
	
	#ifdef DEBUG
		cout<<"algo"<<endl;
	#endif
	
	return 0;
}
