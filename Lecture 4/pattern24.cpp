/*
    Pattern
       1
      121
     12321
    1234321
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    while(rows <= n){
        //print pattern 1
        int space = n - rows;
        while(space){
            cout << " ";
            space--;
        }

        //print pattern 2
        int cols = 1;
        while(cols <= rows){
            cout << cols;
            cols++; 
        }
        

        //print pattern 3
        int count = rows - 1;
        while(count){
            cout << count;
            cols++;
            count--;
        }
        cout << endl;
        rows++;
    }
}
