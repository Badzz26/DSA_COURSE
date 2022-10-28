//How many Rs.100, 50, 20 and 10 will be required to get the total amount
#include<iostream>
using namespace std;

int main(){
    int total, Rs100, Rs50, Rs20, Rs10;
    cout << "Enter the total amount: ";
    cin >> total;
    switch (1)
    {
    case 1:
        if(total>=100){
            Rs100 = total / 100;
            total = total % 100;
            cout << Rs100 << " Rs100 note." << endl;
        }
    case 2:
        if(total>=50 && total<100){
            Rs50 = total / 50;
            total = total % 50;
            cout << Rs50 << " Rs50 note." << endl;
        }
        
    case 3:
        if(total>=20 && total < 50){
            Rs20 = total / 20;
            total = total % 20;
            cout << Rs20 << " Rs20 note." << endl;
        }
        
    case 4:
        if(total>=10 && total < 20){
            Rs10 = total / 10;
            total = total % 10;
            cout << Rs10 << " Rs10 note." << endl;
        }
        
    }
}