//Number is even or odd using funciton
#include <iostream>
using namespace std;

// void evenOdd(){
//     int num;
//     cout << endl;
//     cout << "Enter the number: ";
//     cin >> num;

//     if(num%2==0){
//         cout << num << " is even." << endl;
//     }
//     else{
//         cout << num << " is odd." << endl;
//     }
//     cout << endl;
// }

void evenOdd(){
    int num;
    cout << endl;
    cout << "Enter the number: ";
    cin >> num;

    if(num&1){
        cout << num << " is odd." << endl;
    }
    else {
        cout << num << " is even." << endl;
    }
}

int main(){
    int n;
    cout << "How many numbers are to be checked? : ";
    cin >> n;
    while(n != 0){
        evenOdd();
        n--;
    }
    return 0;
}