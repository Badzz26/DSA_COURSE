//Check whether a number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = 1;
    if (n == 1)
    {
        cout << n << " is neither prime not composite." << endl;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 0)
        {
            cout << n << " is not a prime number." << endl;
        }
        else
        {
            cout << n << " is a prime number." << endl;
        }
    }
}