//Find the minimum and the maximum integer element from an unsorted array.
#include <iostream>
using namespace std;

int min(int arr[], int n){
    int min = INT8_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int max(int arr[], int n){
    int max = INT8_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int num[100];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "Maximun is " << max(num, size) << endl;

    cout << "Minimum is " << min(num, size) << endl;

}