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


unordered - mutimap - similar to unordered map with diffrence as it can store duplicate elements (key- mapped value pairs)
syntax - unordered_multimap<object_type,object_type> variable_name;
ex - unordered_multimap<int,int> num; num.insert({1, 10}) i.e {key, mapped value}

// queue - is a linear list container in stl that two ends as front and rear,
it works according to fifo(first in first out principle) , deletions happen
on the front - end and insertion on rear-end
Functions - push, pop, front, back, emplace(to insert an elemnt in the queue), size, empty, 

// Stack - is a non-primitive data structure which acts as a ordered list,
has only one-end called top from which both deletion and insertion happens and
it acts according to LIFO(Last in First Out) principle
syntax - stack<object_type> variable_name; 
Function - push, pop, top(returns the lem at the top of the stack), emplace(), size, empty

//  Deque - In Double ended queue, insertion and delteion can occur either ends of the queue front or back
Function - push_back(), pop_back, push_front, pop_front, front, back, empty, size, begin, end

// Priority queue - are type of container adaptors that can be classifieed into - max heap(by default) and min heap
Max - Heap -> its first element is always the greatest of the elements it contains and the rest elements are in decreasing order.
syntax - priority_queue<object_type> variable_name;

Min - Heap -> its first element is always the lowest of the elements it contains and the rest elements are in increasing order.
syntax - priority_queue<object_type, vector<object_type>, greater<object_type>> variable_name;

Functions - push, pop, top, emplace, size, empty

Multimap - are containers contraining key-value pairs mapped lemednts and can contain duplicate lements
Functions - insert, begin, end, clear, find, erase, size, empty


List - is contiguous conatiners that allows inserting and delteing any elemnt in constant time and iterating in both both directions
Functions - push_front/back, pop_front/back, front, back, reverse, sort, empty, size
syntax - list <object_type> variable_name;


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

void unordered_multimap_fnc(){
  unordered_multimap < int, int > mp;
  for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10});
  }
  mp.insert({4,40});

  cout << "Elements present in the unordered multimap: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2;
  if (mp.find(2) != mp.end())
    cout << n << " is present in unordered multimap" << endl;

  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the unordered multimap is: " << mp.size() << endl;

  if (mp.empty() == false)
    cout << "The unordered multimap is not empty " << endl;
  else
    cout << "The unordered multimap is empty" << endl;
  mp.clear();
  cout << "Size of the unordered multimap after clearing all the elements: " 
  << mp.size();
}

void printqueue(queue<int> q1)
{
    queue<int> q2=q1;
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}

void queue_fnc(){

    queue<int> q;
    for(int i=1;i<=5;i++)
      q.push(i);
    
    cout<<"The elements of the queue are:"<<endl;
    printqueue(q);
    
    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"The last element of the queue: "<<q.back()<<endl;
    cout<<"Pop the front element: "<<endl;
    q.pop();
    printqueue(q);
}

void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\n";
        s2.pop();
    }
}

void stack_fnc(){
  stack<int> s;
    for(int i=1;i<=5;i++)
    s.push(i);
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    printstack(s);
}

void printdeque(deque<int> dq)
{
    deque<int>::iterator it;
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void deque_fnc(){
  deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);
    
    cout<<"The elements in the deque are: ";
    printdeque(dq);
    
    cout<<"The size of the deque is: "<<dq.size()<<endl;
    cout<<"The first element in the deque: "<<dq.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    dq.pop_front();
    printdeque(dq);
    cout<<"The last element of the deque: "<<dq.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    dq.pop_back();
    printdeque(dq);
}

void multimap_fnc(){
  multimap < int, int > mp;
  for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10});
  }
  mp.insert({4,40});

  cout << "Elements present in the multimap: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2;
  if (mp.find(2) != mp.end())
    cout << n << " is present in multimap" << endl;

  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the multimap is: " << mp.size() << endl;

  if (mp.empty() == false)
    cout << "The multimap is not empty " << endl;
  else
    cout << "The multimap is empty" << endl;
  mp.clear();
  cout << "Size of the multimap after clearing all the elements: " << mp.size();
}

void printlist(list<int> li)
{
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void list_fnc(){
  list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);
    
    cout<<"The elements in the list are: ";
    printlist(li);
    cout<<"Reversing the list: ";
    li.reverse();
    printlist(li);
    cout<<"Sorting the list: ";
    li.sort();
    printlist(li);
    cout<<"The size of the list is: "<<li.size()<<endl;
    cout<<"The first element in the list: "<<li.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    li.pop_front();
    printlist(li);
    cout<<"The last element of the list: "<<li.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    li.pop_back();
    printlist(li);
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

    // Unordered multimap
    unordered_multimap_fnc()

    // Queue 
    queue_fnc()

    // Stack 
    stack_fnc()

    // Deque
    deque_fnc()
  
    // Priority queue


    // multimap 
    multimap_fnc()

    // list
    list_fnc()

    return 0;
}
