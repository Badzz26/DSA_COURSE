#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = 1;
    int count = 1;
    while(rows <= n){
        //print space
        int space = n - rows;
        while(space){
            cout << "  ";
            space--;
        }
        //print numbers
        int cols = 1;
        while(cols <= rows){
            cout << count << " ";
            count++;
            cols++;
        }
        cout << endl;
        rows++;
    }
}