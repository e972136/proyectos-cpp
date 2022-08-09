#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int STR_LEN = 25;

char c_str1[STR_LEN] = "hola como estas";
char c_str2[] = "hola como estas";

string s_str1 = "hola como estas";
string s_str2 = "hola como estas";

int main(){
	cout<<c_str1<<endl;	
	cout<<c_str2<<endl;	
	cout<<s_str1<<endl;	
	cout<<s_str2<<endl;	

	
	return 0;
}
