#include <bits/stdc++.h>
using namespace std;

/*

STL - stand for standerd template library, one of the most powerful
feature in c++ that gives us out of the box data structures without
having to worry about time and spscae complexity.

// Think them as a container which is a data structure that has
some proerties and few functions to work them without having to worry
about defining them such as stack, queue or linkedlist.

Unorderd set - contains unique elements but not with order
functions - insert, begin(returns an iterator pointinmg to the first elem),
end(returns an iterator to the theoritical elemnt after the last element),
count(returns 1 if found otherwise 0), clear(deletes all the elems),
erase(delete a particular elem or in a range),
empty(checks if it is ?),
size, find(elem)
*very operation in a unordered list takes o(n) is worst case and o(1) at average case 

Syntax - unordered_set<object_type> variable_name; operations - variable_name.insert(1)

Vector - is nothing but dynamic arrays that can chnage it's size automatically according to the elems present in contigious memory locations.
indexing is also allowed in vector

functions - begin, end, insert, erase(delete a specific elem), empty,
clear(dleted all elem in the vector), push_back(), pop_back(),
front(refrence to the first elem - not a pointer),back(), size()

syntax - vector<object_type> variable_name;

Set - stores unique elements and with order
* Time complexity is same as unordered set - o(n) worst case and o(1) average case 
functions - begin, end, insert, empty, count, clear, find, erase, size
All the functions works as the same way as the previous data structures aka containers
syntax - set<object_type> variable_name;


Unordered_multiset - same as unordered set diffrence is that it can store duplicate elenmts means the elems need not to be unique
functions - all the functions and their working are same except the count() - now it returns the number of ocuurance of an element in the multiset
syntax - unordered_multiset<object_type> variable_name;

Mutliset - associative container same ass set with diffrence as it can store duplicate elements and in order as set.
functions - all of the functions are same as unordered_numtisate or even set too.
syntax - multiset<object_type> variable_name;.

Unordered_map - are associative containers whre each elent contains a unique key
associated to it, the elements can be in any order.
They are kinda comparable to objects in other languages.

functions - insert, begin, end, empty, clear, erase, find, size
syntax - unordered_map <object_type, object_type> variable_name
**Note: take look at the syntax while initializinf and looping through it.


Map - are associative memory containing unique key and mapped value.
functions - all functions and their working are same as the unordered-map
Syntax - map <object_type, object_type> variable_name;

*/


void unorder_set(){
    unordered_set < int > s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    // auto it is a pointer here , and we are derefencing it while printing through *
    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in unordered set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;

    cout << "The size of the unordered set is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}


void vector_fnc(){
    vector < int > v;

    for (int i = 0; i < 10; i++) {
        v.push_back(i); //inserting elements in the vector
    }

    cout << "the elements in the vector: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << * it << " ";

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());
    cout << "Now the first element is: " << v[0] << endl;

    if (v.empty())
        cout << "\nvector is empty";
    else
        cout << "\nvector is not empty" << endl;

    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size();
}


void set_fnc(){
    set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}

void unordered_multiset_fnc(){
  unordered_multiset < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }
  s.insert(5);
  cout << "Elements present in the unordered multiset: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in unorderd multiset" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the unordered multiset is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The unordered multiset is not empty " << endl;
  else
    cout << "The unordered multiset is empty" << endl;
  s.clear();
  cout<<"Size of the unordered multiset after clearing all the elements: "<<s.size();
}

void multiset_fnc(){
    
  multiset < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }
  s.insert(5);
  cout << "Elements present in the multiset: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in multiset" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the multiset is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The multiset is not empty " << endl;
  else
    cout << "The multiset is empty" << endl;
  s.clear();
  cout << "Size of the multiset after clearing all the elements: " << s.size();
}

void unordered_map_fnc(){  
  unordered_map < int, int > mp;
   for (int i = 1; i <= 5; i++) {
    mp.insert({ i , i * 10});
  }

  cout << "Elements present in the map: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2;
  if (mp.find(2) != mp.end())
    cout << n << " is present in map" << endl;

  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the map is: " << mp.size() << endl;

  if (mp.empty() == false)
    cout << "The map is not empty " << endl;
  else
    cout << "The map is empty" << endl;
  mp.clear();
  cout << "Size of the set after clearing all the elements: " << mp.size();
}

void map_fnc(){
  map < int, int > mp;
  for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10});
  }

  cout << "Elements present in the map: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2;
  if (mp.find(2) != mp.end())
    cout << n << " is present in map" << endl;

  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the map is: " << mp.size() << endl;

  if (mp.empty() == false)
    cout << "The map is not empty " << endl;
  else
    cout << "The map is empty" << endl;
  mp.clear();
  cout << "Size of the map after clearing all the elements: " << mp.size();
}


int main(){

    // unorderd_set
    unorder_set();

    // Vector      
    vector_fnc();

    // Set
    set_fnc()

    // Unorderd_multiset
    unordered_multiset_fnc()

    // Multiset
    multiset_fnc()

    // Unorderd_map
    unordered_map_fnc()

    // Map
    map_fnc()

    return 0;
}
