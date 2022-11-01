//Linear search
#include <iostream>
using namespace std;

int search(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
    
}

int main(){
    int key;
    int num[10] = {5, 2, 6, 1, -7, 22, 1, 0, 4, 3};
    cout << "Enter the element to search for: ";
    cin >> key;
    bool found = search(num, 10, key);
    if(found){
        cout << "Key found." << endl;
    }
    else {
        cout << "Key not found." << endl;
    }
}