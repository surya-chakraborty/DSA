#include <iostream>
using namespace std;

void ReverseNum(int n){
    int reversed = 0, digit;
    while(n != 0){
        digit = n % 10; // store the last digit
        reversed = reversed * 10 + digit; // add the digit to the reversed number
        n = n / 10; // remove last digit
    }
    cout << " Reversed NO. -> " << reversed << endl;
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cout << "enter the number to find revrese for: ";
        cin >> n;
        ReverseNum(n);
    }
    return 0;
}