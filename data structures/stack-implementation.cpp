/* C++ program to implement basic stack 
   operations */
#include<bits/stdc++.h> 
  
using namespace std; 
  
#define MAX 10000
  
class Stack 
{ 
    int top; 
public: 
    int a[MAX];    //Maximum size of Stack 
  
    Stack()  { top = -1; } 
    int push(int x); 
    int pop(); 
    bool isEmpty(); 
}; 
  
bool Stack::push(int x) 
{ 
    if (top >= (MAX-1)) 
    { 
        cout << "Stack Overflow :("; 
        return false; 
    } 
    else
    { 
        top++; 
        a[top] = x; 
        cout<<x <<" pushed into stack\n"; 
        return true; 
    } 
} 
  
int Stack::pop() 
{ 
    if (top < 0) 
    { 
        cout << "Stack Underflow :("; 
        return 0; 
    } 
    else
    { 
        int x = a[top];
        top--;
        return x; 
    } 
} 
  
bool Stack::isEmpty() 
{ 
    return (top < 0); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    struct Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.push(40);
    cout<<s.pop() << " Popped from stack\n"; 
  
    return 0; 
} 
