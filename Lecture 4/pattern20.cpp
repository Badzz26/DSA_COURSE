/*
    Pattern
    1111
     222
      33
       4
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    while(rows <= n){
        int cols = 1;
        //print space
        int space = rows - 1;
        while(space){
            cout << " ";
            space--;
        }
        //print numbers
        while(cols <= n - rows + 1){
            cout << rows;
            cols++;
        }
        cout << endl;
        rows++;
    }
}
