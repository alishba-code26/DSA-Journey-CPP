#include<iostream>
using namespace std;

void add(int a, int b){
	cout<< "sum = " << a + b << endl;
}
int main(){
	int a,b;
	cout<< "Enter Number 1:";
	cin>> a;
	cout<< "Enter Number 2:";
	cin>> b;
	add(a,b);
	 return 0;
}