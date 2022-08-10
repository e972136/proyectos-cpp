#include "cow.h"

Cow::Cow(std::string name, int age, unsigned char purpose){
		this->name = name;
		this->age = age;
		this->purpose = purpose;
	}
	std::string Cow::getName(){
		return name;
	}
	int Cow::getAge(){
		return age;
	}
	unsigned char Cow::getPurpose(){
		return purpose;
	}
