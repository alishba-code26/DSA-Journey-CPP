#include<iostream>
using namespace std;
int main(){
	int sum = 0;
	int * ptr = new int[5];
	for(int i=0; i<5; i++){
			cout<<"Enter array number" << i << ":";
		cin>> *(ptr+i);
	
	}
	for(int i=0; i<5; i++){
		sum = sum + *(ptr + i);
	}
	cout<< sum;
	delete[] ptr;
	return 0;
}