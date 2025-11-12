#include <iostream>
using namespace std;

// Problem Statement: Given an integer N, return the number of digits in N. 

void countDigits(int n){
    int count = 0;
    int temp = n; // storing in temp variable to use while printing
    // Logic : keep dividing the number by 10 until it becomes zero as in every division it will delete the last element 
    while(n != 0){
        n = n / 10;
        count++;
    }
    cout << "No of digits in  " << temp << " is -> " << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t != 0){
        int n;
        cout << "enter the no. to count digits for: " ;
        cin >> n;
        countDigits(n);
        t--;
    }
    
    return 0;
}