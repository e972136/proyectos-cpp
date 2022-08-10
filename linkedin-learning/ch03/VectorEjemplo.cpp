#include <iostream>
#include <string>
#include <vector>

using namespace std;

//https://parzibyte.me/blog/2019/06/19/recorrer-vectores-cpp/
int main(){
    		
    vector<int> elementos;
    
    cout<<elementos.size()<<endl;

	elementos.push_back(1);
	elementos.push_back(2);
	elementos.push_back(3);
	
	cout<<elementos.size()<<endl;
	
	cout<<"con size_t"<<endl;	
	for(size_t i=0;i<elementos.size();i++){
		cout<<elementos[i]<<endl;
	}
	
	cout<<"con auto"<<endl;	
	for(auto j=0;j<elementos.size();j++){
		cout<<elementos[j]<<endl;
	}
	
	
	cout<<"con puntero"<<endl;	
	for(auto elemento=elementos.begin();elemento!=elementos.end();elemento++){
		cout<< *elemento<<endl;
	}
	
	return 0;
}
