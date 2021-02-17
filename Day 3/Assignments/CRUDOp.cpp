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
}*head=NULL;

void addAtEnd(int x){
    Node *curr=head;
    Node *temp=new Node(x);
    if(curr==NULL){
        head=temp;
    }
    else{
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
}
void addAtFront(int x){
    Node *temp=new Node(x);
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }

}

void printAll(){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

bool idEmpty(){
    if(head==NULL){
        return true;
    }
    else{
        return false;
    }
}

void deleteFromBeg(){
    if(head==NULL){
        return;
    }
    else if(head->next ==NULL){
        head=NULL;
    }
    else{
        Node *curr=head;
        head=head->next;
        delete curr;
    }
}

void deleteFromLast(){
    if(head==NULL){
        return;
    }
    else if(head->next ==NULL){
        head=NULL;
    }
    else{
        Node *prev=NULL;
        Node *curr=head;
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        delete curr;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    
    
    
    return 0;
}
