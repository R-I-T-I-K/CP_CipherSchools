#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;


struct Node{
    int data;
    Node* next;
    Node(){
        Node(0);
    }
    Node(int x){
        data=x;
        next=NULL;
    }
};

void addAtEnd(Node **head,int x){
    Node *curr=*head;
    Node *temp=new Node(x);
    if(curr==NULL){
        *head=temp;
    }
    else{
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
}
void addAtFront(Node **head,int x){
    Node *temp=new Node(x);
    if(*head==NULL){
        *head=temp;
    }
    else{
        temp->next=*head;
        *head=temp;
    }

}

void printAll(Node **head){
    Node *curr=*head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

bool idEmpty(Node **head){
    if(*head==NULL){
        return true;
    }
    else{
        return false;
    }
}

Node* SortedMerge(Node* a, Node* b)
{
    Node* result = NULL;
 
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);
 
    if (a->data <= b->data) {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
 
    return result;
}
 
Node* mergeKLists(Node* arr[], int last)
{
    while (last != 0) {
        int i = 0, j = last;
 
        while (i < j) {
            arr[i] = SortedMerge(arr[i], arr[j]);
 
            i++, j--;
 
            if (i >= j)
                last = j;
        }
    }
 
    return arr[0];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
    return 0;
}
