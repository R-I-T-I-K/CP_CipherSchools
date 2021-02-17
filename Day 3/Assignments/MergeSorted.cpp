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

Node *mergeSortedLL(Node *first,Node *secound){
    if(first==NULL){
        return secound;
    }
    else if(secound == NULL){
        return first;
    }
    Node *res;

   

    if(first->data <= secound->data){
        res=first;
        first=first->next;
    }
    else{
        res=secound;
        secound=secound->next;
    }

     Node *dummy=res;

    while(first && secound){
        if(first->data <= secound->data){
            res->next=first;
            first=first->next;
            res=res->next;
        }
        else{
            res->next=secound;
            secound=secound->next;
            res=res->next;
        }
    }

    if(first){
        res->next=first;
    }
    else if(secound){
        res->next=secound;
    }
    return dummy;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *first,*second;
    first=NULL;
    second=NULL;

    addAtEnd(&first,1);
    addAtEnd(&first,5);
    addAtEnd(&first,8);
    addAtEnd(&first,8);
    addAtEnd(&first,10);

    
    addAtEnd(&second,2);
    addAtEnd(&second,3);
    addAtEnd(&second,5);
    addAtEnd(&second,4);
    addAtEnd(&second,6);
    addAtEnd(&second,9);

    Node *res=mergeSortedLL(first,second);

    printAll(&res);

    
    return 0;
}
