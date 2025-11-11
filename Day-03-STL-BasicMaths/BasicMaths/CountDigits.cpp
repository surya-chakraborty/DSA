#include <iostream>
using namespace std;

// Problem Statement: Given an integer N, return the number of digits in N. 

void countDigits(int n){
    int count = 0;
    // Logic : keep dividing the number by 10 until it becomes zero as in every division it will delte the last element 
    while(n != 0){
        n = n / 10;
        count++;
    }
}

int main(){
    int t;
    cin >> t;
    while(t != 0){
        int n;
        cout << "enter the no. to count digits for: " ;
        cin >> n;
        countDigits();
        t--;
    }
    
    return 0;
}