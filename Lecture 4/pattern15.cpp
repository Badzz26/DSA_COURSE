/*
pattern
    A
    B C
    D E F
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    char ch = 'A';//ch = ('A' + rows - 1);
        while(rows <= n){
        int cols = 1;
        
        while(cols <= rows){
            cout << ch << " ";
            cols++;
            ch++;
        }
        cout << endl;
        rows++;
    }
    
}

