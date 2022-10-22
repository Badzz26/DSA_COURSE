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
        int count = rows; // As value of the first col is given based on the rows number.
        while(cols <= rows){
            cout << count << " "; 
            cols++;
            count++;
        }
        cout << endl;
        rows++;
    }
}

