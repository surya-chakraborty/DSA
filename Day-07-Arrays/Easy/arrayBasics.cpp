#include <iostream>
using namespace std;

/*
Introduction - array is aa linear data structure that contains similar/homogeneous elements contigously
array can be initialized as - int arr[size] both within int main and gloablly
Within int main() -> all values intialized by garbage value, max size - 10^6
Globally -> all value initialized as 0, maximum size can be 10^7
Indexing - starts from 0 to n - 1
accesing, changing value of an index and taking input and printing an array
How array are stored in memory pointing to a address to the first index and stored contigously

Drive the interview by asking the test cases, constraints and evetually solving it by bruteforce -> better -> optimal solution


*/

// 1. Find the largest element in the array 
// BruteForce Solution - sort the rray in ascending order and print the last index
// TIme complexity for the best soring algorithm - Quick Sort -> o(nlogn) and space -> o(1)
int pivot(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low, j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high){
            i++;
        }
        while(arr[j] > pivot && i >= low){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    return j;
}

void quick_sort(int arr[], int low, int high){
    if(low < high){
        int partition = pivot(arr, low, high);
        quick_sort(arr, low, partition - 1);
        quick_sort(arr, partition + 1, high);
    }
}

// Optimal Solution - we can asssume the first elem to
// be the largest and loop through the array and change its value comparing the others
// Time Complexity - O(n) and Space Complexity - O(1)
int findLargest(int arr[], int n){
    int largest = 0;
    for(int i =0; i< n; i++){
        if(arr[i] > arr[largest]){
            largest = i;
        }
    }
    return arr[largest];
}


// 2. Second largest element in an array 
// Bruteforce - we will sort the array, and then will
// traverse through the array gain from the back and
// check if that is equal to the largest if not, then
// that is the secondlargest array in the sorted array,
// the check is important as there migh be more than one 
// same largest element.
// Example : 1 2 4 7  7 6
// Time Compexity - O( nlogn + n)
int pivot(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low, j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high){
            i++;
        }
        while(arr[j] > pivot && i >= low){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    return j;
}

void quick_sort(int arr[], int low, int high){
    if(low < high){
        int partition = pivot(arr, low, high);
        quick_sort(arr, low, partition - 1);
        quick_sort(arr, partition + 1, high);
    }
}


// Better Approach
// Time Compexity - O(2n)
void FindSecondLargestB(int arr[], int n){
    // Find largest
    int largest = arr[0];
    for(int i =0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    // find secondlargest
    int secondlargest = -1; // initially
    for(int i =0; i < n; i++){
        if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    cout << "Second largst element is: " << secondlargest << endl;
}

// Optimal Approach - do find both the largest and 
// second largest to reduce the time complexity down
// to - O(n)
void finSecLargestOptimal(int arr[], int n){
    int largest = 0, secondLargest = -1, temp = 0;
    for(int i =0; i< n; i++){
        if(arr[i] > arr[largest] && arr[i - 1] != arr[largest]){
            temp = largest;
            largest = i;
            secondLargest = temp;
        }
    }
    return arr[secondLargest];
}

int main(){
    int n;
    cout << "size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Array inputs: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // BruteForce
    // quick_sort(arr, 0, n-1);
    // cout << "Largest Element in the array: " << arr[n - 1] << endl;
    // Second Largest Element 
    for(int i = n -2; i >= 0; i++){
        if(arr[i] != arr[n - 1]){
            cout << "Second Largest Element in the array is" << arr[i] << endl;
            break;
        }
    } 
    
    // Optimal
    int result = findLargest(arr, n);
    cout << "Largest Element in the array: " << result << endl;


    // Finding out the second largest eleemnt in the array -
    FindSecondLargestB(arr, n);

    return 0;
}