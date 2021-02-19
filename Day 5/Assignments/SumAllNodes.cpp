#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int data = 0)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

int findSum(Node *root)
{
    int total_sum = 0;
    stack<Node *> s1, s2;
    s1.push(root);
    Node *top;
    while (!s1.empty())
    {
        top = s1.top();
        s1.pop();
        s2.push(top);
        if (top->left)
            s1.push(top->left);
        if (top->right)
            s1.push(top->right);
    }
    while (!s2.empty())
    {
        total_sum += s2.top()->data;
        s2.pop();
    }
    return total_sum;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->left = new Node(6);
    root->right->right = new Node(5);
    root->right->right->left = new Node(7);
    root->right->right->right = new Node(8);
    root->right->right->right->left = new Node(9);
    cout << findSum(root) << endl;
    return 0;
}
