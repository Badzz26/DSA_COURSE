#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int flag = 0;
    int i = 2;
    while(i<n){
        if(n%i == 0){
            flag = 0;
            break;
        }
        else {
            flag = 1;
        }
        i++;
    }
    if(flag == 1){
        cout << "Prime." << endl;
    }
    else {
        cout << "Not prime." << endl;
    }
}