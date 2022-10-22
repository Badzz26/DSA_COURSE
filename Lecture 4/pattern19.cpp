/*
pattern
    * * *
      * *
        *
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    while(rows<=n){
        int cols=1;
        int space = rows - 1;
        //print space
        while(space){
            cout << " ";
            space--;
        }
        //print stars
        while(cols <= n - rows + 1){
            cout << "*";
            cols++;
        }
        cout << endl;
        rows++;
    }
    
}

