#include<iostream>
using namespace std;
int main(){
	int num = 15;
	int* ptr = &num;
	*ptr = 30;
	cout<< num <<endl;
	cout<< *ptr;
	return 0;
}