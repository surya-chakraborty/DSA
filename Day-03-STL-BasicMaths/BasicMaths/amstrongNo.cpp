#include <bits/stdc++.h>
using namespace std;
//  An Amrstrong number is a number that is equal to the sum of its own digits each
// raised to the power of the number of digits. 
// TIme - O(log10n + 1) and space - o(1)
bool armstrongNum(int num){

    /* Try -01
    int temp = n, count = 0, digit;

    // counting the number of digits in the number
    while(n > 0){
        n = n / 10;
        count++;
    }
    int arr[count];

    // storing the number digits in an array
    for(int i = 0, i < n, i++){
        digit = n % 10;
        arr[i] = digit;
        n = n / 10;
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + pow(arr[i], count);
    }

    // check
    if(sum == temp){
        return true;
    }
    return false;
    */


    int k = to_string(num).length();

    int sum = 0;
    
    int n = num;
    
    while(n > 0){  
        int ld = n % 10;
        
        sum += pow(ld, k); 
        
        n = n / 10;
    }

    return sum == num ? true : false;
}

int main(){
    int n;
    cin >> n;
    int res = armstrongNum(n);
    if(res == true){
        cout << n << " is an armstrong number" << endl;
    }
    else{
        cout << n << " is not an armstrong number" << endl;
    }
    return 0;
}