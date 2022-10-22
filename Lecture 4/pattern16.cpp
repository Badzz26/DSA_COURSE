/*
pattern
    D
    C D
    B C D
    A B C D
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    while(rows <= n){
        int cols = 1;
        char ch = 'A' + n - rows;
        while(cols <= rows){
            cout << ch << " ";
            cols++;
            ch++;
        }
        cout << endl;
        rows++;
    }
    
}

