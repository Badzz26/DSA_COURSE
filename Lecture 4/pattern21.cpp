/*
    Pattern
       1
      22
     333
    4444
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    while(rows <= n){
        //print space
        int space = n - rows;
        while(space){
            cout << " ";
            space--;
        }
        //print stars
        int cols = 1;
        while(cols <= rows){
            cout << rows;
            cols++;
        }
        cout << endl;
        rows++;
    }
}
