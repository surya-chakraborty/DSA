#include <iostream>
using namespace std;

// Brute force approach of checking wheather a number is prime or not
// Time - o(n) and space - o(1)
bool checkPrime(int n){
    int flag = true;
    for(int i =2; i <= n - 1; i++){
        if(n % i == 0){
            return flag = false;
        }
    }
    return flag;
}

// Optimized Approach - optimise the algorithm by only iterating up to the square root of n
bool checkPrimeOptimized(int n){
    int flag = true;
    for(int i =2; i * i <= n; i++){
        if(n % i == 0){
            return flag = false;
        }
    }
    return flag;
} 

int main(){
    int n;
    cin >> n;
    if(checkPrimeOptimized(n)){
        cout << n << " is a prime number." << endl;
    }else{
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}