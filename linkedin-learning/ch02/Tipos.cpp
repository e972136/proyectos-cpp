#include <iostream>
#include <typeinfo>

using namespace std;

auto a = 8;
auto b = 12345678901;
auto c = 3.14f;
auto e = 3.14;
auto f = 'c';

int main(){
	cout<< typeid(a).name()<<endl;
	cout<< typeid(b).name()<<endl;
	cout<< typeid(c).name()<<endl;
	cout<< typeid(e).name()<<endl;
	cout<< typeid(f).name()<<endl;
	return 0;
}
