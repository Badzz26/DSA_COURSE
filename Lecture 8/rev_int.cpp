//Reversing an integer 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any integer: ";
    cin >> n;

    int rev = 0;
    int i = 0;
    while(n != 0){
        int digit = n % 10;
        rev = (rev * 10) + digit; 
        n = n / 10;
        i++;
    }
    cout << rev << endl;
}