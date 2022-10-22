/*
pattern
    1 2 3
    4 5 6
    7 8 9
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    int count = 1;
    while (rows <= n){
        int cols = 1;
        while(cols <= n){
            cout << count << " ";
            cols++;
            count++;
        }
        cout << endl;
        rows++;
    }

}