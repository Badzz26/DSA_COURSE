#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //For n of 2 bytes or 16 bits
    long long int n;
    cin >> n;
    unsigned long long int i = 0, ans = 0;
    if(n < 0){
        n = pow(2, 16) + n;
    }
    cout << n << endl;
    while(n){
        int lastBit = n & 1;
        ans = (pow(10, i) * lastBit) + ans;
        n = n >> i;
        i++;
    }
    cout << ans << endl;
    return 0;
}