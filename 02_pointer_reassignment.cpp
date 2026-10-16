#include<iostream>
using namespace std;
int main(){
int arr[5] = {10, 20, 30, 40, 50};
int *ptr = arr;
cout<< *ptr;
cout<< *(ptr + 1);
cout<< *(ptr + 2);
cout<< *(ptr + 4);
	return 0;
} 