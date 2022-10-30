//Fibonacci series
#include <iostream>
using namespace std;

void fibo(){
    int num, next;
    cout << "Enter how many numbers of fibonacci series do you wish to print? ";
    cin >> num;
    int first = 0; 
    int second = 1;
    cout << first << "\t" << second << "\t";
    for(int i = 0; i < num; i++){
        next = first + second;
        cout << next << "\t";
        first = second;
        second = next;
    }
}

int main(){
    int n;
    cout << "How many times do you wish to print Fibonacci series?: ";
    cin >> n;

    while(n != 0){
        fibo();
        n--;
        cout << endl;
    }
}