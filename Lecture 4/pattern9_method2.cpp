/*
pattern
    1
    2 3
    3 4 5
    4 5 6 7 
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
            cout << rows + cols - 1 << " ";
            cols++;
        }
        cout << endl;
        rows++;
    }
}