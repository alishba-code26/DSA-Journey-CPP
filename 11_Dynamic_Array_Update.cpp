#include<iostream>
using namespace std;
int main(){
	int *ptr = new int[5]{3,6,9,12,15};
	for(int i=0; i<5; i++){
		*(ptr + i) = *(ptr + i) + 5;
	}
	for(int i=0; i<5; i++){
		cout<< *(ptr + i) <<endl;
	}
	delete[] ptr;
	return 0;
}