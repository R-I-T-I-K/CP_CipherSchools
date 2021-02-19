#include <iostream> 
using namespace std; 
  
int main() 
{ 
    deque<int> mydeque{ 1, 2, 3, 4, 5 }; 
    deque<int>::iterator it; 
  
    it = mydeque.begin(); 
    mydeque.erase(it); 
  
    // Printing the deque 
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it) 
        cout << ' ' << *it; 
    return 0; 
} 
