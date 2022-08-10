#include <iostream>
#include <string>
#include "cow.h"

using namespace std;

/*
enum cow_purpuse{dairy, meat, hide, pet};

class Cow{
private:
	string name;
	int age;
	unsigned char purpose;
public:
	Cow(string name, int age, unsigned char purpose){
		this->name = name;
		this->age = age;
		this->purpose = purpose;
	}
	string getName(){
		return name;
	}
	int getAge(){
		return age;
	}
	unsigned char getPurpose(){
		return purpose;
	}
	
};
*/

int main(){
    		
	Cow my_cow("patito",5,meat);
	cout<<my_cow.getName()<<'-'<<my_cow.getAge()<<'-'<<(int)my_cow.getPurpose()<<'-';
	return 0;
}
