//Arithmetic progression
#include <iostream>
using namespace std;


void AP(){
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    int AP = 3 * x + 7;
    cout << "AP of (3 * x + 7) is " << AP << endl;
}

int main() {
    int n;
    cout << "How many times do you wish to calculate AP?: ";
    cin >> n;

    while(n != 0){
        AP();
        n--;
    }
}