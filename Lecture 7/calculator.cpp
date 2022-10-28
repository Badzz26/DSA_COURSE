// Calculator using switch case
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    char operation;
    cout << "Enter the operation you wish to perform: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Addition of "<< a << " & "<< b << " is " << a + b << endl;
        break;
    
    case '-':
        cout << "Subtraction of "<< a << " & "<< b << " is " << a - b << endl;
        break;

    case '*':
        cout << "Multiplication of "<< a << " & "<< b << " is " << a * b << endl;
        break;

    case '/':
        cout << "Division of "<< a << " & "<< b << " is " << a / b << endl;
        break;

    case '%':
        cout << "Modulus of "<< a << " & "<< b << " is " << a % b << endl;
        break;

    default:
        cout << "Enter the valid operation." << endl;
        break;
    }
}