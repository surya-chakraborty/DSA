/*
Patterns are important to tackle loops in any programming language 

Four steps to print any pattern-nested loops mostly two- inner loop for columns and outer loops for the rows
1. For outer loop, count the number of lines/ rows
2. For inner loop, focus on the columns and comnnect them somehow to the rows
3. Print the '*' inside the inner for loop
4. Observe symmetry [optional - only for few patterns]

Online compilers - mostly the int main is hidden and we need
to write the void function body part only which will run
for diffrent test cases
**Always try to practice on oonline compilers whoch will help too much
*/

#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
}
}

void pattern2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
}
}

void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
}
}

void pattern4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
}
}

void pattern5(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << "* ";
        }
        cout << endl;
}
}

void pattern6(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << n - j + 1 << " ";
        }
        cout << endl;
}
}

int main(){

    // t is the n umber of test cases
    // In online compiler the hindden int main is written somewhat like this only
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cout << "Print the value of n: ";
        cin >> n;
        // pattern1(n);
        // pattern2(n);
        // pattern3(n);
        // pattern4(n);
        // pattern5(n);
        pattern6(n);
    }

    return 0;
}