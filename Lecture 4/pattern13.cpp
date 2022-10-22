/*
A B C
D E F
G H I
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rows = 1;
    while(rows <= n){
        int cols = 1;
        char ch = 'A'; // ch = 'A' + rows + cols - 2;
        while(cols <= n){
            cout << ch << " ";
            cols++;
            ch++;
        }
        cout << endl;
        rows++;
    }
}