#include <iostream>
#include <unordered_map>
using namespace std;

/*
Hashing - has two steps precomputation and fetch

maximum size of int array - inside int main() ~ 10^6 and globally ~ 10^7
// Gloablly every array is insialized to 0 rather than garbage values.
maximum size of boolean array - inside int main() ~ 10^7 and gloablly ~ 10^8

In character hashing there won't be any array size problem as 
the max size will be 256 otherwise 26 with indexing as ch - 'a/A' accordingly

*/

int main(){
    // Number Hashing
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }

    // // Precomputation
    // int hash[13] = {0};
    // for(int i = 0; i < n; i++){
    //     hash[arr[i]] += 1;
    // }

    // int t;
    // cin >> t;
    // while(t != 0){
    //     int number;
    //     cin >> number;
    //     // fetch
    //     cout << hash[number] << endl;
    //     t--;
    // }


    // Character Hashing
    // indexing formula in hashed array -> ch - 'a'
    // string s;
    // cin >> s;

    // // precomputation 
    // int hash[26] = {0};
    // for(int i = 0; i < s.size(); i++){
    //     hash[s[i] - 'a']++;
    // }

    // int q;
    // cin >> q;
    // while(q != 0){
    //     char ch;
    //     cin >> ch;
    //     cout << hash[ch - 'a'] << endl;
    //     q--;
    // }

    /*
    What if the size of the array we need to use is in order of ~ 10^9,
    we will use map instead as wella s it save auxilary space too by not
    storing the leemnts which are not required
    Time Complexity - in map for both storing and fetching, in all cases it's o(logn)
    In unordered map for worst case - o(n){very very rear} otherwise o(1) {that's why we choose unordered_map}
    
    When does the worst case happen in unordered_map -> when collision happens, we can explain it how hashing occurs using division method.
    
    In unorderd map why <int, int> pair of same data structure is not possible.
    */
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Precomputation
    unordered_map <int, int> mpp;
    for(int i =0; i < n; i++){
        mpp[arr[i]]++;
    }

    // Iterate over the map to view the key-mapped value pairs
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }

    int m;
    cin >> m;
    while(m--){
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
    return 0;
}