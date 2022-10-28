//Print prime numbers from 1 to n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 2; i <= n; i++){
        bool isPrime = 1;
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime != 0){
            cout << i << endl;
        }
    }
}
