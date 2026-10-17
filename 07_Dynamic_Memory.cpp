#include<iostream>
using namespace std;
int main(){
	int *ptr = new int;
	*ptr = 100;
	cout<< *ptr;
	delete ptr;
	return 0;
}