//Two numbers a and b will be input.
//Output should be the total number of 1's in a and b;
//Example a = 2 --> 10 and b = 3 --> 11. Thus output should be 3

#include <iostream>
#include <math.h>
using namespace std;

int toBinary(int n){
    int ans = 0, i = 0;
    while(n != 0){
        int bit;
        bit = n & 1;
        ans = (bit * pow(2, i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}

int ones(int n){
    int count = 0;
    while(n != 0){
        int bit;
        bit = n & 1;
        if(bit == 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}

void hamming(){
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value fo b: ";
    cin >> b;

    int a_binary = toBinary(a);
    int b_binary = toBinary(b);
    

    int count_a = ones(a_binary);
    int count_b = ones(b_binary);
    

    cout << "Ans is " << count_a + count_b << endl;

}

int main(){
    int n;
    cout << "How many times do you wish to get hamming distance?: ";
    cin >> n;

    while(n != 0){
        hamming();
        n--;
    }
}