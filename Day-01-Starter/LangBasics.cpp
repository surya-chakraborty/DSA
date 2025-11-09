/*
Topics - User I/O, Data Types, conditionals, Switch, Arrays and Strings, Iterators, Functions

Intro- c++ is a middle level programming language invented by Bjarne Stroustrup 
at Bell Labs that provides both c-like low-level control 
as well as object - Oriented features.

Program Structure - Header File, Namespace, main function

Basic syntax - semicolons are important but not in header invlusion line, endl and \n
Keywords vs Identifiers

Variables - decalaration and initialization, naming convention and scope
Data Types in CPP - primitive, derived and user-defined
Primitive - int(4 bytes), float(4, points), double(8, more precision), bool(1), char(1), void
derived - array, string, function
user-defined - struct, union, class
extras - SizeOf operator, data type conversion{(int)C}, data type modifiers(short, long, long long, signed and unsigned)

Operators - arithmetic, relational(>, <, >=, <=, ==, !=),
Logical(&&, ||, !),
Bitwise(Binary and&, Binary or|, left shift <<, Right shift >>, one's compliment ~)
Assignment(=, +=, -=, *=, /=)
can also be defined as - unary, binary and ternary
Operator Precedence (() > *, / > +, - ) and associativity

input and Output - are based on streams -> cin, cout, cerr, clog

Conditionals - if-else-if ladder and neste-if, ternary operator and switch statement

Lops - for, while, do-while(exit control loop)
control statements in loop - break, continue etc.

Array - is a collection of homongeneous data types contiguosly in memory.
we can store, edit and delte any value of an array through indexig(0 - n-1, where n is the size of the array) 

String - is nothing but a character array, has a separate data type as - 'string'.
when we pass a string within an function, it creates a copy of the string and then modify it internally.
we can eaily check equality of two strings using == or != operators unline an array.

Function - used to modularize code to reuse
pass by value vs Passed by refrence

*/
#include <iostream> // provides the std cout, cin functions, use <bits/stdc++> for all header file inclusion
using namespace std; //otherwise we need to write std::cout/cin  every time

// Program execution starts with the main function
int main(){
    cout << "Hello CPP, met you again after a long time!";
    int dsaStreakCount = 1;
    float gpayBalace = 50.2358;
    double range = 5633.7864111257653;
    bool iswritting = true;
    char name = 'S';
    void invert(bool value) {
        cout << !iswritting << endl;
    }
    invert(iswritting);

    for(int i = 0; i < 5; i++){
        cout << "The number keeps increamenting - ", << i << endl;
    }

    // Binary search using while loop
    int BinarySearch(int arr[], int n, int key){
        int low = 0, high = n - 1, mid;
        while(low < high){
            if(mid == key){
                return mid;
            }else if(key > mid){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    int arr[] = {1,5, 8, 26}
    int key = 8;
    int size = sizeof(arr)/sizeof(arr[0]);
    int indexfoundAt = BinarySearch(arr, size, key);
    cout << "key found at position: " << indexfoundAt + 1 << endl;

    string course = "Data Structures and Algorithm";
    string shortname = "DSA"

    (course == shortname) ? cout << "They are equal" : cout << "They maybe identical or different!";

    string myName = "Surya"
    // Call By value
    function callMe(string name){
        name = "Something";
        cout << "My name is " << name << endl;
    }
    callMe(myName)
    
    // Call by refrence
    function callMeAgain(string &name){
        name = "Something";
        cout << "My name is " << name << endl;
    }
    callMeAgain(myName)

    return 0;
}

/*
Time and Sapce Complexity 

Why they are important indeed ? - they will help the interviewer to judge your code by evaluating how much time and space is needed for your code to run.


But isn't that a variable ? I mean the same code might take x time on some old machine and x/4 time on a new MacBook. 
Yeah, that's why we don't consider it in seconds , it has its own unit.
Time taken != Time Complexity 

Time Complexity - 

Big O notation - is the count of number of steps to run a program in terms of time and space 
But it would take so much time to cpount each step right ? that's why there are the rules.
Rules - 
1. Always calculate in terms of worst case scenario
2. Avoid contants
3. Avoid lower values
for (int i = 0; i < n; i++) {
 // Any operation of code within here.
} 
Time Complexity - O (n × 3) == O (n)

Cases - best, worst and average case
Notations - Omega, Big- O and theta respectively 
Bounds - Lower and Upper Bound respectively 

Space Complexity - auxiliary space + input space
Auxiliary space - space taken to solve the problem
Input space - space taken by the problem variables

Important rule - never ever mutate the input data if not  mentioned in the problem rather take an extra variable in auxiliary space.
In competitive programming websites, 1s ~ 10^8 operations
*/