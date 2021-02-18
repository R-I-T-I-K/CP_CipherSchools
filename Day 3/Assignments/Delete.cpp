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

void del(Node *head,int position){
    if(!head){
        return;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;
        int count=position-1;
        while(curr!=NULL && count){
            prev=curr;
            curr=curr->next;
            count--;
        }
        if(curr!=NULL){
            prev->next=curr->next;
            delete curr;
        }

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *head=NULL;

    addAtEnd(&head,1);
    addAtEnd(&head,2);
    addAtEnd(&head,3);
    addAtEnd(&head,4);
    addAtEnd(&head,5);
    addAtEnd(&head,6);
    addAtEnd(&head,7);

    del(head,7);

    printAll(&head);
    
    
    return 0;
}
