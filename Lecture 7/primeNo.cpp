//Prime number using fuction
#include <iostream>
using namespace std;

void primeNo(){
    int num;
    bool isPrime= 1;
    cout << "Enter the number to be checked: ";
    cin >> num;

    if(num == 1){
        cout << "1 is neither prime nor composite.";
    }
    else {
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                isPrime= 0;
                break;
            }
        }
        if(isPrime== 0){
        cout << num << " is not a prime number.";
    }
        else {
            cout << num << " is a prime number.";
        }
    }
}
//Listing prime numbers from 1 to n
/*
void listPrimeNo(){
    int last;
    cout << "Enter the last count: ";
    cin >> last;
    
    for(int i = 2; i <= last; i++){
        bool isPrime = 1;
        for(int j=2; j < i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            cout << i << "\t";
        }
        
    }
}
*/

int main() {
    int n;
    cout << "How many times do you wish to perform this fuciton?: ";
    cin >> n;
    while(n--){
        primeNo();
        cout << endl;
    }
}