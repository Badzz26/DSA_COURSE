//Print count using function
#include <iostream>
using namespace std;

void printCount(){
    int num;
    cout << "Enter the last number of the count: ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        cout << i << "\t";
    }
}

int main() {
    int n;
    cout << "How many times do you wish to perform printCount function?: ";
    cin >> n;
    while(n--){
        printCount();
        cout << endl;
    }
}