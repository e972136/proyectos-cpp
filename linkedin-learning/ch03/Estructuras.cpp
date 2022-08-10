#include <iostream>
#include <string>

using namespace std;

enum cow_purpuse{dairy, meat, hide, pet};

struct Cow{
	string name;
	int age;
	unsigned char purpose;
};

int main(){
    		
	Cow my_cow;
	my_cow.age = 5;
	my_cow.name="patito";
	my_cow.purpose = meat;
	cout<<my_cow.name<<'-'<<my_cow.age<<'-'<<(int)my_cow.purpose<<'-';
	return 0;
}
