#ifndef COW_W
#define COW_W

#include <iostream>
#include <string>

enum cow_purpuse{dairy, meat, hide, pet};

class Cow{
private:
	std::string name;
	int age;
	unsigned char purpose;
public:
	Cow(std::string name, int age, unsigned char purpose);
	std::string getName();
	int getAge();
	unsigned char getPurpose();	
};

#endif
