#include <iostream>
using namespace std;

void palindrome_check(int n){
    int digit, reversed = 0, temp = n;
    while(n != 0){
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    if(reversed == temp){
        cout << temp << " is a palindrome." << endl;
    }else{
        cout << temp << " is not a palindrome." << endl;

    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cout << "Enter the number: " ;
        cin >> n;
        palindrome_check(n);
    }
    return 0;
}