/*
    Pattern
    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/
#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int rows = 1;
    while(rows<=n){
        //print pattern 1
        int cols = 1;
        while(cols <= n - rows + 1){
            cout << cols;
            cols++;
        }
        //print pattern 2
        int stars = rows - 1;
        while(stars){
            cout << "*";
            stars--;
        }
        //print pattern 3
        int stars2 = rows - 1;
        while(stars2){
            cout << "*";
            stars2--;
        }
        //print pattern 4
        int count = n - rows + 1;
        while(count){
            cout << count;
            cols++;
            count--;
        }
        cout << endl;
        rows++;
    }

}
