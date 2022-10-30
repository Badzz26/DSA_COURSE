//Complement of base 10 integer (decimal)
/*
    Approach:
    Make n=0 by using right shift operator
    Create mask by using << and | operators
    (~n & mask)
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter a base 10 integer: ";
    cin >> n;
    m = n;
    int mask = 0;
    if(n == 0){
        cout << "Complement of 0 is 1" << endl;
    }
    
    while(m != 0){
        m = m >> 1; // Making it 0
        mask = (mask << 1) | 1; // Create mask
    }
    
    int ans = (~n) & mask;
    cout << ans << endl;
    
}