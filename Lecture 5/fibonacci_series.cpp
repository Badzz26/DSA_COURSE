//Print fibonacci series upto n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int firstNo = 0; 
    int secondNo = 1;
    cout << firstNo << "\t" << secondNo << "\t";

    for(int i = 1; i <= n; i++){
        int nextNo = firstNo + secondNo;
        cout << nextNo << "\t";
        firstNo = secondNo;
        secondNo = nextNo;
    }
}