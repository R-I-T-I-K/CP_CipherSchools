#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

bool isPalindromeHelper(Node ** left, Node * right) {
    // Has the rigght pointer reached the end of LL or not?
    if (right == NULL) {
        return true;
    }
    bool isPalin = isPalindromeHelper(left, right->next);
    if (!isPalin) {
        return false;
    }

    bool dataEqual = ((*left)->data == right->data);
    (*left) = (*left)->next;
    return dataEqual;
}

bool isPalindrome(Node * head){
    return isPalindromeHelper(&head, head);
}

int main()
{
  
}
