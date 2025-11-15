#include <iostream>
using namespace std;

// Brute Force Approach - time complexity {o(n)} and space complexity {o(1)}
void printdivisors(int n){
    for(int i =1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}

// Optimal Approach -We can optimise the previous approach by using the property that for
// any non-negative integer n, if d is a divisor of n then n/d is also a divisor of n.
// This property is symmetric about the square root of N. Thus, by traversing just the
// first half we can avoid redundant iteration and computations improving the efficiency of the algorithm.
// Same time and space complexity as the previous one 
void DivisorsOptimized(int n){
    for(int i =1; i * i <= n; i++){
        if(n % i == 0){
            if(n/ i == i){
                cout << i << " ";
            }else{
                cout << i << " ";
                cout << n / i << " ";
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    // printdivisors(n);
    DivisorsOptimized(n);
    return 0;
}