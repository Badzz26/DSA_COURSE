/*
    Pattern
    1234
     234
      34
       4
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    while(rows <= n){
        //print space
        int space = rows - 1;
        while(space){
            cout << " ";
            space--;
        }

        //print numbers
        int cols = 1;
        int count = rows;
        while(cols <= n - rows + 1){
            cout << count;
            cols++;
            count++;
        }
        cout << endl;
        rows++;
    }
}
