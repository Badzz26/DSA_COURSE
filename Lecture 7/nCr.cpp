//Calculating nCr
#include <iostream>
using namespace std;

//Iterative method
int fact (int num){
    int fact = 1;
    if(num == 0 || num == 1){
        fact = 1;
    }
    else {
        while(num != 0){
            fact = fact * num;
            num--;
        }
    }
}

//Recursive method
// int fact(int num){
//     if(num == 0 || num == 1){
//         return 1;
//     }
//     return num * fact(num-1);
// }
void nCr(){
    int n, r, ans, d;
    cout << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    
    if(r == 0){
        ans = 1;
    }
    else if(r == 1){
        ans = n;
    }
    else {
        d =  fact(r) * fact(n-r);
        ans = fact(n) / d;
    }

    cout << n << "C" << r << " is " << ans;
    cout << endl;
}

int main() {
    int n;
    cout << "How many times do you wish to perform nCr operation?: ";
    cin >> n;

    while(n != 0){
        nCr();
        n--;
    }

    return 0;
}