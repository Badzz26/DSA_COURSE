//Power of 2 
// If n = 2 ^ x and if n is possible for any x then true otherwise false.
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int power = 0;
    for(int i = 0; i <= 30; i++){
        if(pow(2, i) == n){
            power = 1;
        }
    }
    if(power == 0){
        cout << "No. " << n << " is not a power of 2.";
    }
    else {
        cout << "Yes. " << n << " is a power of 2.";
    }
}