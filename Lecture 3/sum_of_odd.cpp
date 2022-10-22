#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int sum = 0;
    int n;
    cin >> n;

    while(x <= n){
        sum = sum + x;
        x += 2;
    }
    cout << sum;
}