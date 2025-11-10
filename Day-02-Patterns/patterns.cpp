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

void pattern7(int n){
    for(int i = 0; i< n; i++){
        // Spaces-Left
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        // Starts
        for(int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }
        // Spaces-Right
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n){
    for(int i = 0; i< n; i++){
        // Spaces-Left
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        // Starts
        for(int j = 0; j < 2*n - (2*i + 1); j++){
            cout << "*";
        }
        // Spaces-Right
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    for(int i = 1; i <= 2*n - 1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}


void pattern11(int n){
    // int arr[] = {0, 1};
    int start = 1;
    
    for(int i = 0; i < n; i++){
        // if the row index is even then 1 is printed first in that row
        if (i % 2 == 0) start = 1;
        // if odd, then the first 0 will be printed in that row.
        else start = 0;

        for(int j = 0; j <= i; j++){

            /*
            Try-01 - it just prints the j numbers
            cout << j << " ";
            Try-02 - it prints wrog
            for(int k = 0; k <= j; k++){
                cout << arr[k];
            }
            */
        //Solution - rather than using array we will use a single variable
        //and according to even or odd row will chnage it's value
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n){
    // Note: The merging two loop will not work beacuse of the inmiddle spaces.
    // if it is below or above, it may work
    // int space = 2*(n - i) - don't know why it didn't work out , okok, find out - you can use it too, just don't give spaces after printing the numbers too
    int space = 2*(n - 1); 
    for(int i = 1; i <= n; i++){
        // Numbers
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        // Spaces
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        // Numbers
        for(int j = i; j >= 1; j--){
            cout << j ;
        }
        cout << endl;
        space -= 2;
    }
}

void pattern13(int n){
    // Worked out on the fiurst try itself, go ahead!
    int start = 1;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j<= i; j++){
            cout << start++ << " ";
        }
        cout << endl;
    }
}

void pattern14(int n){
    // Worked out on the second try itself, move ahead man!
    for(int i = 1; i <=n; i++){
        int start = 65;
        for(int j = 1; j<= i; j++){
            cout << (char) start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern15(int n){
    //Again Worked out on the first try itself, move ahead man!
    for(int i = 1; i <=n; i++){
        int start = 65;
        // Numbers
        for(int j = 1; j<= (n - i + 1); j++){
            cout << (char) start << " ";
            start++;
        }
        // Spaces 
        for(int j = 1; j<= i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern16(int n){
    // Another one on the first try itself, yup!
    int start = 65;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j<= i; j++){
            cout << (char) start << " ";
        }
        start++;
        cout << endl;
    }
}

void pattern17(int n){
    // Good one man, 75% worked out on first try, all of the inner and outer loops
    for(int i = 1; i<= n; i++){
        int start = 65;
        // Spaces 
        for(int j = 1; j < (n - i); j++){
            cout << " ";
        }

        // Alphabets
        // Very important step - the breakpoint, timestamp - approx 59.00 on striver's patterns video
        int breakPoint = (2*i - 1) / 2;
        for(int j = 1; j <= 2*i - 1; j++){
            cout << (char) start;
            (j <= breakPoint) ? start ++ : start--;
        }

        // Spaces 
        for(int j = 1; j < (n - i); j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n){
// Preety good one. a little hard for me as i am going with (char) number typish
    for(int i = 0; i < n; i++){
        for(char ch = 'E' - i; ch <= 'E'; ch++){
            cout << ch << " ";
        }
        
        cout << endl;
    }
}

void pattern19(int n){
    // Upper part of the symmetry
    for(int i = 0; i < n; i++){
        // Stars 
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }

        // Spaces
        for(int j = 0; j < 2*i; j++){
            cout << " ";
        }

        // Stars 
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the symmetry
    for(int i = 1; i <= n; i++){
        // Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        // Spaces
        for(int j = 1; j <= 2*(n - i); j++){
            cout << " ";
        }

        // Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int n){
    int spaces = 2*n - 2;
    for(int i = 1; i <= 2*n - 1; i++){
        // Stars
        int stars = i;
        if (stars > n) stars = 2*n - i;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        // Spaces
        for(int j = 1; j <= spaces; j++){
            cout << " ";
        }
        // Stars
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
        (i < n) ? spaces -= 2 : spaces += 2;
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
        // pattern6(n);
        // pattern7(n);
        // pattern8(n);
        // pattern9(n);
        // pattern10(n);
        // pattern11(n);
        // pattern12(n);
        // pattern13(n);
        // pattern14(n);
        // pattern15(n);
        // pattern16(n);
        // pattern17(n);
        // pattern18(n);
        // pattern19(n);
        pattern20(n);
    }

    return 0;
}