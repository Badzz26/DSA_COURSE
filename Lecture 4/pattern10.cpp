/*
pattern
    1
    2 1
    3 2 1
    4 3 2 1
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    while(rows <= n){
        int cols = 1;
        while(cols <= rows){
            cout << rows - cols + 1 << " ";
            cols++;
        }
        cout << endl;
        rows++;
    }
}