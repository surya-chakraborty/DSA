#include <iostream>
using namespace std;

// Brute force approach - as gcd known as greatest commonn deviser is the highest number
// that can divide both the numbers.
// We run a for loop starting from 1 till the lowest of both the numbers and check each
// number if it divide both the numbers without a remainder and keep updating the gcd variable and finally return it.
// Time - O(min(N1, N2)) and space - o(1)
void gcdBF(int n1, int n2){
    int gcd = 1, lower = 1;
    lower = (n1 > n2) ?  n2 : n1;
    for(int i = 1; i <= lower; i++){
        if(( n1 % i == 0) && (n2 % i == 0)){
            gcd = i;
        }
    }
    cout << "The greatest common divisior of " << n1 << " and " << n2 << " is " << gcd << endl; 
}

// Better approach - strat the for loop from minimum of n and n2 down to 1.
// same time and space complexities as the previous one
void gcdBA(int n1, int n2){
    int gcd = 1, lower = 1;
    lower = (n1 > n2) ?  n2 : n1;
    for(int i = lower; i > 0; i--){
        if(( n1 % i == 0) && (n2 % i == 0)){
            gcd = i;
        }
    }
    cout << "The greatest common divisior of " << n1 << " and " << n2 << " is " << gcd; 
}

// Optimal approach - Euclidean algorithm states that keep subtracting the larger number
// by the smaller one until one of them becomes zero, when it does than the other one will
//  be the gcd of the original two numbers.
int EuclideanGcd(int n1, int n2){
    while( n1 > 0 && n2 > 0){
        if(n1 > n2){
            n1 = n1 % n2;
        }else{
            n2 = n2 % n1;
        }
    }
    if(n1 == 0){
        return n1;
    }
    return n2;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n1, n2;
        cin >> n1 >> n2;
        gcdBF(n1, n2);
    }
    return 0;
}