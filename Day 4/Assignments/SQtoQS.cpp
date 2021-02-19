#include <bits/stdc++.h> 
  
using namespace std; 
  
class Stack { 
    queue<int> q;
  
public: 
    void push(int x) {
        queue<int> temp;
        temp.push(x);
        while(!q.empty()) {
            temp.push(q.front()); q.pop();
        }
        q = temp; 
    } 
  
    void pop() { 
          if (q.empty()) 
            return; 
        q.pop(); 
    } 
  
    int top() { 
        if (q.empty()) 
            return -1; 
        return q.front(); 
    } 
}; 

class Queue { 
    stack<int> s;
  
public: 
    void push(int x) {
        stack<int> temp;
        while(!s.empty()) {
            temp.push(s.top()); s.pop();
        } 
        s.push(x);
        while(!temp.empty()) {
            s.push(temp.top()); temp.pop();
        }
    } 
  
    void pop() { 
          if (s.empty()) 
            return; 
        s.pop(); 
    } 
  
    int front() { 
        if (s.empty()) 
            return -1; 
        return s.top(); 
    } 
}; 
  
int main() 
{ 
    cout<<"---- Stack ----"<<endl;
    Stack s; 
    s.push(1); 
    s.push(2); 
    s.push(3); 
    cout<<s.top()<<endl; s.pop();
    cout<<s.top()<<endl; s.pop();
    cout<<s.top()<<endl; s.pop();
    cout<<"---------------"<<endl;


    cout<<"---- Queue ----"<<endl;
    Queue q; 
    q.push(1); 
    q.push(2); 
    q.push(3); 
    cout<<q.front()<<endl; q.pop();
    cout<<q.front()<<endl; q.pop();
    cout<<q.front()<<endl; q.pop();
    cout<<"---------------"<<endl;

    return 0; 
} 
