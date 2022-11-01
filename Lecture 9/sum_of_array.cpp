//Sum of the elements of the array
#include <iostream>
using namespace std;
int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = arr[i] + sum;
    }

    return sum;
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

    cout << "\nThe sum of the elements of the array is " << sum(num, size) << endl;;

}