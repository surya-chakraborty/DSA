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
void FactIterative(int n){
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
    return n * fact(n -1);
    // Time - o(n) and space - o(n)

}

void printArr(int arr[], int n){
    cout << "The revrsed array is: " <, endl;
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
}

// Revrese an array given its size n - ierative approach using auxilary array space
void reverseArrIterSpace(int arr[], int n){
    int ans[n];
    for(int i = n-1; i >= 0; i++){
        ans[n - i - 1] = arr[i]
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
void reverseArrRecursive(int start, int end, int arr){
    if(start < end){
        swap(arr[start], arr[end]);
        reverseArrRecursive(start + 1, end -1, arr);
    }
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
    cout << FactIterative(n) << endl;
    cout << FactRecursive(n) << endl;

    // Reverse an array
    int m = 5;
    int arr[] = {5, 4, 8, 6, 2};
    reverseArrIterSpace(arr, n);
    reverseArrIter(arr, n);
    reverseArrRecursive(0, n-1, arr);
    printArr(arr, m);

    return 0;
}