#include <iostream>
#include <string>
#include <vector>

using namespace std;


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


int main(){
	vector<Cow> vaquitas;
    		
	vaquitas.push_back(Cow("a",5,meat));
	vaquitas.push_back(Cow("b",4,hide));
	vaquitas.push_back(Cow("c",5,pet));
	
	auto tmp = vaquitas.begin();
	
	cout<<tmp->getName()<<'-'<<tmp->getAge()<<'-'<<(int)tmp->getPurpose()<<'-'<<endl;
	cout<<"recorrer"<<endl;
	for(auto corre = vaquitas.begin(); corre!=vaquitas.end();corre++){
		cout<<corre->getName()<<'-'<<corre->getAge()<<'-'<<(int)corre->getPurpose()<<'-'<<endl;
	}
	
	
	return 0;
}
