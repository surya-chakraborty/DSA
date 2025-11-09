#include <iostream>
using namespace std;

/*
Question - Complete the function printNumber which takes 
an integer input from the user and prints it on the screen.
Constraints: -1000 <= User Input <= 1000

Common pitfalls - printNumber function should be in global scope, it's not possible to define a function within main in cpp.
Compilation command - g++ fileName.cpp -o fileName.exe
To run - ./fileName.exe
*/
void printNumber(){
    int num;
    cout << "Put a number of you choice: ";
    cin >> num;
    cout << "Here is your output: " << num;
}
int main(){

    printNumber();
    return 0;
}