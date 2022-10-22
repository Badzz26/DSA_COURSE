/*
pattern
    *
    * * 
    * * *
    * * * *
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    
    while(rows<=n){
        int cols = 1;
        while(cols <= rows){
            cout << "* ";
            cols++;
        }
        cout << endl;
        rows++;
    }
}