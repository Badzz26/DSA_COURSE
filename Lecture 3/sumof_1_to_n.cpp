#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int sum = 0;
    int n;
    cin >> n;

    while(x <= n){
        sum = sum + x;
        x++;
    }
    cout << sum;
    /*
    For larger number, to verify the output, we use the formula, 
    [n(min_num + max_number)]/2
    = [100(1+100)]/2
    = 5050
    */
}