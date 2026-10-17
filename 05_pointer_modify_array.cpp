#include<iostream>
using namespace std;

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int* ptr = arr;

    for(int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2;
    }

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
