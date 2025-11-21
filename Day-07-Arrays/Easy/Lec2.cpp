#include <iostream>
using namespace std;

// Left rotate an array by one place
// Time Complexity - o(n) and Space Complexity - o(1) // extra-Space and in the alogorithm - o(n) // already given array
void LeftRotateByOne(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i< n -1; i++){
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

// Time Complexity - o(n + d) and space complexity - O(d)
void LeftRotateByD(int arr[], int n, int d){
    d = d % n;

    // storing the first d elements in an temp array
    int temp[d];
    for(int i =0; i< d; i++){
        temp[i] = arr[i];
    }

    // Shifting by i - d index
    for(int i = 0; i< n -d; i++){
        arr[i] = arr[i + d];
    }

    // adding the d elemnts in the last of the original array
    // int j = 0; // for the alternate approach
    for(int i = n -d; i< n; i++){
        arr[i] = temp[i - n + d];
        // Otherwise alternately
        // arr[i] = temp[j];
        // j++;
    }
}

// Reverse approach
void LeftRotateByDOP(int arr[], int n, int d){
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

// Reverse manual logic - 
// void ReverseBF(int arr[], int start, int end){
//     while(start <= end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

int main(){
    int n;
    cout << " Size of the array: " ;
    cin >> n;
    int arr[n];
    cout << "Input the array elems: " << endl;
    for(int i =0; i< n; i++){
        cin >> arr[i];
    }

    // Left roate by one place
    LeftRotateByOne(arr, n);
    return 0;
}