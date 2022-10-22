#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int sum = 0;
    int n;
    cin >> n;

    while(x <= n){
        sum = sum + x;
        x += 2;
    }
    cout << sum;
}