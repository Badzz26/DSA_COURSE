//Reverse an array
#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start, end, temp;
    start = 0;
    end = n - 1;

    while(start <= end){
        // temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}
int main() {
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[100];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    reverse(arr, size);

    printArray(arr, size);

    return 0; 
}