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
void removeDuplicate(Node *head){
    if(!head || head->next==NULL){
        return;
    }
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        prev=curr;
        curr=curr->next;
        while(curr!=NULL && prev->data == curr->data){
            Node *dummy=curr;
            curr=curr->next;
            prev->next=curr;
            delete dummy;
            // if(curr==NULL) break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head=new Node(1);
    addAtEnd(&head,1);

    removeDuplicate(head);

    printAll(&head);
    
    return 0;
}
