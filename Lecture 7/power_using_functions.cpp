//Finding power using function
#include <iostream>
#include <math.h>
using namespace std;

void power(){
    int a, b;
    cout << "***** Power is of the form a^b *****" << endl;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }
    cout << a << " power " << b << " is " << ans << endl;
}
int main() {
    int n;
    cout << "Enter the number of power operations you wish to find: ";
    cin >> n;
    while(n!=0){
        power();
        n--;
    }

    return 0; 
}
