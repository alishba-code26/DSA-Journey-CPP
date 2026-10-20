#include<iostream>
using namespace std;
int main(){
	int *ptr = new int[5]{2,4,6,8,10};
	for(int i=0; i<5; i++){
		*(ptr + i)= *(ptr + i) * 2;
	}
	for(int i=0; i<5; i++){
		cout<< *(ptr + i)<<endl;
	}
	delete[] ptr;
	return 0;
}