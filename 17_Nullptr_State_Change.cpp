#include<iostream>
using namespace std;
int main(){
	int* ptr = nullptr;
	if(ptr == nullptr){
		cout<<"Pointer is empty"<<endl;
	}
	int num = 100;
	ptr = &num;
	if (ptr != nullptr){
		cout<<"pointer is pointing value";
	}
	return 0;
}