#include <iostream>
using namespace std;

int main(){
    char x;
    cin >> x;
    if(x >= 'A' && x <= 'Z'){
        cout << "Upper case." << endl;
    }
    else if(x >= 'a' && x <= 'z'){
        cout << "Lower case." << endl;
    }
    else {
        cout << "Numeric." << endl;
    }
    //Or we can use ASCII values 
    //65 to 90 for upper case
    //97 to 122 for lower case
}