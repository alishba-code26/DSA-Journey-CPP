#include<iostream>
using namespace std;
int main(){
	int arr[5] = {3, 6, 9, 12, 15};
	int *ptr = arr;
	for(int i = 0; i<5; i++){
		*(ptr + i) = *(ptr + i) + 5;
	}
	for(int i=0; i<5; i++){
		cout<< arr[i]<<endl;
	}
	return 0;
}