//Swap the alternate element of the array
#include<iostream>
using namespace std;

void inputElem(int arr[], int size){
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void swapAlt(int arr[], int size){
    for(int i = 0; i < size; i += 2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[100];
    inputElem(arr, size);
    swapAlt(arr, size);
    printArray(arr, size);
    
    return 0;
}