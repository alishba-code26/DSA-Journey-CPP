#include<iostream>
using namespace std;
int main(){
	int *ptr = new int[5];
	for(int i=0; i<5; i++){
		cout<<"Enter number" << i + 1 <<": ";
		cin>> *(ptr+i);
	}
	
	int max = *(ptr+0);
	int min = *(ptr+0);
	
	for(int i=1; i<5; i++){
		if(*(ptr+i)>max){
			max = *(ptr+i);
		}
		if(*(ptr+i)<min){
			min = *(ptr+i);
		}
	}
	cout<< "maximum: "<< max<<endl;
	cout<< "minimum: "<<min<<endl;
	delete[] ptr;
	return 0;
}