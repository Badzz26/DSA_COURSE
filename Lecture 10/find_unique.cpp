//Leetcode: Find Unique
//Finding the unique element in the array
#include <iostream>
using namespace std;

void inputElem(int arr[], int size){
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

int findUnique(int *arr, int size){//We shall learn about pointer later
    int ans = 0; 
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int size, unique;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[100];
    inputElem(arr, size);
    unique = findUnique(arr, size);
    cout << "The unique element is " << unique << endl;
    return 0;
}