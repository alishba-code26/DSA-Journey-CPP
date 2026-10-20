#include<iostream>
using namespace std;
int main(){
	int *ptr = new int;
	*ptr = 20;
	*ptr = 50;
	cout<< *ptr;
	delete ptr;
	return 0;
}