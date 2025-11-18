#include <iostream>
#include <vector>
using namespace std;

// Selection sort in increasing order - get the smallest number in the array every time and swap it with the first element of the array
// Best , worst and Average Case time complexity - o(n^2)
void selection_sort(int arr[],int n){
    arr[n];
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i + 1; j < n ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}


// Bubble Sort - push the maximum to the last by adjacent swaps
// Worst and Average Case time complexity - o(n^2), Best - o(n) {optimize using a boolean variable}
int bubble_sort(int arr[], int n){
    for(int i = n - 1; i >= 1; i--){
        int didSwap = 0;
        for(int j = 0; j <= i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}


void bubble_sort_recursive(int arr[], int n){

}

// Insertion Sort - keep increating by one elemnt and sort the elemnt correctly in that array
// Worst and Average Case time complexity - o(n^2), Best - o(n) {already optimized}
void insertion_sort(int arr[], int n){
    for(int i = 0; i <= n -1; i++){
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            swap(arr[j- 1], arr[j]);
            j --;
        }
    }
}

// Merge Sort - Divide and Merge
// Time Complexity - o(n * log2n) and space complexity - o(n) {worst case}



void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid + 1;

    while(left <= mid && right <=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        }else{
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid)
            temp.push_back(arr[left++]);

    while (right <= high)
            temp.push_back(arr[right++]);
    
    for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];

}


void merge_sort(vector<int> &arr, int low, int high){
    if(low == high) return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}


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

// Quick Sort - Divide and Conquer Algorithm
// Time cplexity - o(n logn) and Space Coplexity - o(1)
void quick_sort(int arr[], int low, int high){
    if(low < high){
        int partition = pivot(arr, low, high);
        quick_sort(arr, low, partition - 1);
        quick_sort(arr, partition + 1, high);
    }
}

int main(){
    /*
    int n;
    // Number of arr elements
    cin >> n;
    int arr[n];
    // Taking input of the array elements
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    // Printing the sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
    */
   vector <int> arr = {5, 9, 6, 1, 2, 5};
   merge_sort(arr, 0, arr.size() - 1);
   for(int x : arr){
    cout << x << " ";
   }
   cout << endl;
   return 0;
}