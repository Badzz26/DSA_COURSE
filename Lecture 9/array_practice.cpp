//Implementation of array basics
#include <iostream>
using namespace std;

void printArray(int a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    //First
    int arr1[3] = {2, 4, 6};
    int arr_size = sizeof(arr1)/sizeof(int);
    //Can't
    printArray(arr1, arr_size);

    //Second, initiallizing all locations with 0
    int arr2[5] = {0};
    printArray(arr2, 5);

    //Third, this does not work same as above
    int arr3[5] = {1};
    printArray(arr3, 5);
    //To populate all elements with 1
    //int arr4[5] = {[0...4] = 1};

    //Fifth
    int arr5[3] = {1, 4 , 5};
    cout << arr5[20] << endl;// Gives garbage value?


}