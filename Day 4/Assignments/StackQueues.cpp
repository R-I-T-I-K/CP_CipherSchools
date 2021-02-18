//Stack Using LL

#include <bits/stdc++.h> 
using namespace std; 
 
struct Node 
{ 
    int data; 
    struct Node* link; 
}; 
 
struct Node* top; 
void push(int data) 
{ 
    struct Node* temp; 
    temp = new Node(); 
    if (!temp)
    { 
        cout << "\nHeap Overflow"; 
        exit(1); 
    } 
    temp->data = data; 
    temp->link = top; 
    top = temp; 
} 
 
int isEmpty() 
{ 
    return top == NULL; 
} 
 
int peek() 
{ 
    if (!isEmpty()) 
        return top->data; 
    else
        exit(1); 
} 
 
void pop() 
{ 
    struct Node* temp; 
    if (top == NULL) 
    { 
        cout << "\nStack Underflow" << endl; 
        exit(1); 
    } 
    else
    { 
        temp = top; 
        top = top->link; 
        temp->link = NULL; 
        free(temp); 
    } 
} 
 
void display() 
{ 
    struct Node* temp; 
    if (top == NULL)
    { 
        cout << "\nStack Underflow"; 
        exit(1); 
    } 
    else
    { 
        temp = top; 
        while (temp != NULL)
        { 
            cout << temp->data << "-> "; 
            temp = temp->link; 
        } 
    } 
} 
 
int main() 
{ 
    push(11); 
    push(22); 
    push(33); 
    push(44); 
 
    display(); 
 
    cout << "\nTop element is "
         << peek() << endl; 
 
    pop(); 
    pop(); 
 
    display(); 
 
    cout << "\nTop element is "
         << peek() << endl; 
          
    return 0; 
} 





//Queues Using LL

#include <bits/stdc++.h> 
using namespace std; 

struct QNode { 
	int data; 
	QNode* next; 
	QNode(int d) 
	{ 
		data = d; 
		next = NULL; 
	} 
}; 

struct Queue { 
	QNode *front, *rear; 
	Queue() 
	{ 
		front = rear = NULL; 
	} 

	void enQueue(int x) 
	{ 
		QNode* temp = new QNode(x); 

		if (rear == NULL) { 
			front = rear = temp; 
			return; 
		} 

		rear->next = temp; 
		rear = temp; 
	} 

	void deQueue() 
	{ 
		if (front == NULL) 
			return; 

		QNode* temp = front; 
		front = front->next; 

		if (front == NULL) 
			rear = NULL; 

		delete (temp); 
	} 
}; 

int main() 
{ 

	Queue q; 
	q.enQueue(10); 
	q.enQueue(20); 
	q.deQueue(); 
	q.deQueue(); 
	q.enQueue(30); 
	q.enQueue(40); 
	q.enQueue(50); 
	q.deQueue(); 
	cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
} 
