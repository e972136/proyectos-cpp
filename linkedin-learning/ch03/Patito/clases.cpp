#include <iostream>
#include <string>
#include "cow.h"

using namespace std;

//build: g++ -Wall -o "%e" "%f"
//https://www.youtube.com/watch?v=KRAHce3zewM
int main(){
    //ptr examples		
    int a = 37;
    int *ptr = &a;
    
    cout<<"a:"<<a<<endl;
    cout<<"ptr:"<<ptr<<endl;
    cout<<"&a:"<<&a<<endl;
    cout<<"*ptr:"<<*ptr<<endl;
    cout<<"&ptr:"<<&ptr<<endl;
    //
    		
	Cow my_cow("patito",5,meat);
	cout<<my_cow.getName()<<'-'<<my_cow.getAge()<<'-'<<(int)my_cow.getPurpose()<<'-'<<endl;
	
	Cow *otra = new Cow("vquita",8,hide);
	cout<<otra->getName()<<'-'<<otra->getAge()<<'-'<<(int)otra->getPurpose()<<'-'<<endl;
	
	delete otra;
	return 0;
}
