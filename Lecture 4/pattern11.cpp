/*
A A A 
B B B
C C C
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rows = 1;
    char ch = 'A';
    while(rows <= n){
        int cols = 1;
        while(cols <= n){
            cout << ch << " ";
            cols++;
        }
        ch++;
        cout << endl;
        rows++;
    }

}