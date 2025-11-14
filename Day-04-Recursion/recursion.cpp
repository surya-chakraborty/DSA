#include <iostream>
#include <utility> // gives us the inbuilt swap function 
using namespace std;

/*
Recursion - when a function call itself until a specified condition is met.

What is Stack-Overflow/ Stack-Space ? -> when function keep calling itself infinitely
without any terminating condition the previous functions get stacked one
after one and after a point it reaches max memory limit of the stack 
that's where the segmentation fault happens.

Base Condition - is the terminatinf condition from where it keep returning to the previous function in the call stack
Recursion Tree - is a handy representaion of recursion problems breaking them down into smaller function calls


*/

// Basic example of recursion
void printCount(int count){
    if(count == 4){
        return;
    }
    cout << "Count: " << count << endl;
    count++;
    printCount(count);
}

// Print Name n times
void printName(int i, int n){
    if(i > n){
        return;
    }
    cout << "Surya Chakraborty" << endl;
    printName(i+1, n);
}

// Print linearly from 1 to n
void print(int i, int n){
    if(i > n){
        return;
    }
    cout << i << endl;
    i++;
    print(i, n);
}

// Print linearly from n to 1
void printBackWords(int i, int n){
    if(i < 1){
        return;
    }
    cout << i << endl;
    i--;
    printBackWords(i, n);
}


// Print 1 to n using BackTracking 
void printForwardBackTracked(int i, int n){
    if(i > 3){
        return;
    }
    printForwardBackTracked(i - 1, n);
    cout << i << endl;
}

void printBackwardBackTracked(int i, int n){
    if(i > 3){
        return;
    }
    printBackwardBackTracked(i + 1, n);
    cout << i << endl;
}

// Summation of first n numbers - parameterized approach
void summation(int sum, int i, int n){
    if(i > n){
        cout << "Summation: " << sum << endl;
        return;
    }
    sum += i;
    summation(sum, i+1 , n);
}

// Summation of first n numbers - functional approach (simpler and clearer)
int sumOfNaturalNums(int n){
    if(n == 0){
        return 0;
    }
    return n + sumOfNaturalNums(n - 1);
}

// Factorial of a number - iterative
int FactIterative(int n){
    int fact = 1;
    for(int i =1; i <= n; i++){
        fact *= i;
    }
    return fact;
    // Time - o(n) and space - o(1)
}

// Factorial of a number - recursive
int FactRecursive(int n){
    if(n == 0){
        return 1;
    }
    // factorial(N) = N * factorial(N - 1)
    return n * FactRecursive(n -1);
    // Time - o(n) and space - o(n)

}

void printArr(int arr[], int n){
    cout << "The revrsed array is: " << endl;
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
}

// Revrese an array given its size n - ierative approach using auxilary array space
void reverseArrIterSpace(int arr[], int n){
    int ans[n];
    for(int i = n-1; i >= 0; i++){
        ans[n - i - 1] = arr[i];
    }
    printArr(ans, n);
}

// Revrese an array given its size n - ierative approach without auxilary array space
void reverseArrIter(int arr[], int n){
    int start = 0, end = n - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++, end--;
    }
    printArr(arr, n);
}

// Revrse an array - recursive way
void reverseArrRecursive(int start, int end, int arr[]){
    if(start < end){
        swap(arr[start], arr[end]);
        reverseArrRecursive(start + 1, end -1, arr);
    }
}

// Palidrome check - string(using loops)
void PalindromeString(string s){
    int len = s.length();
    int flag = 1;
    for(int i = 0; i < len/2; i++){
        if(tolower(s[i]) != tolower(s[len - i - 1])){
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        cout << "String is not a palindrome" << endl;
    }else{
        cout << "String is a palindrome" << endl;
    }
}

// string palindrome check (using recursion)
bool isPalindromeRecursive(string s, int start, int end){
    if(start >= end){
        return true;
    }

    if(tolower(s[start]) != tolower(s[end])){
        return false;
    }

    return isPalindromeRecursive(s, start + 1, end - 1);
}

// Fibonacci Series - using loops
// We will print fibonacci series upto given nth term
// Time complexity - o(n) {for calculating} + o(n) {for printing}
// Space complexity - o(n) // storing the whole array in auxilary array space
void fibonacciIter(int n){
    if(n == 0){
        cout << 0;
    }else if(n == 1){
        cout << 0 << " " << 1 << endl;
    }
    else{
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;
        for(int i = 2; i <= n; i++){
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        // Print the fibonnaci series next
        cout << "fibonacci series upto " << n << "th term : " << endl;
        for(int i = 0; i <=n; i++){
            cout << fib[i] << " ";
        }
    }
}


// Fibonacci Series - using loops but space optimized
// we will not store all the elements rather we will be having last and secondlast pointers and update them on each iteration etc.
// Time Compelxity - o(n) {only one for loop} and Space Complexity - o(1) {constant terms}
void printFibonacci(int n){
    if(n == 0){
        cout << "Fibonacci series upto " << n << "th term" << endl;
        cout << 0;
    }else{
        int last = 1, secondLast = 0, curr;
        cout << "Fibonacci series upto " << n << "th term" << endl;
        cout << secondLast << " " << last << " ";
        for(int i = 2; i <=n; i++){
            curr = secondLast + last;
            secondLast = last;
            last = curr;
            cout << curr << " ";
        }
    }
}

// Fibonacci Series - using multiple recursion calls
// we will just print the fibonnaci of a given n numebr not the whole series 
// Time complexity - as each recursion calls two recusrion, the time compexity is somewhere around approx ~ o(2^n)
int printFibonaccirecursive(int n){
    if(n <= 1){
        return n;
    }
    // Note: the recursion calls happens one after another not both at the same time
    int last = printFibonaccirecursive(n - 1);
    int secondlast = printFibonaccirecursive(n - 2);
    return last + secondlast;
}


int main(){
    
    // int count = 0;
    // printCount(count);

    int n;
    cin >> n;
    // Time complexity - o(n), space complexity - stack space -> o(n)
    // printName(1, n);

    // print(1, n);
    // printBackWords(n, n);

    // printForwardBackTracked(1, n);
    // printBackwardBackTracked(1, n);
    // summation(0, 1, n);
    // cout << sumOfNaturalNums(n) << endl;
    // cout << FactIterative(n) << endl;
    // cout << FactRecursive(n) << endl;

    // Reverse an array
    // int m = 5;
    // int arr[] = {5, 4, 8, 6, 2};
    // reverseArrIterSpace(arr, n);
    // reverseArrIter(arr, n);
    // reverseArrRecursive(0, n-1, arr);
    // printArr(arr, m);

    // string s;
    // cin >> s;
    // // PalindromeString(s);
    // int n = s.length();
    // bool ans = isPalindromeRecursive(s, 0, n - 1);
    // if(ans){
    //     cout << "string is a palindrome" << endl;
    // }else{
    //     cout << "String is not a palindrome" << endl;
    // }

    int result = printFibonaccirecursive(n);
    cout << "fibonacci of n: " << result << endl;
    return 0;
}