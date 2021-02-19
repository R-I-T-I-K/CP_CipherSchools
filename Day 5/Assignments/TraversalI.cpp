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

void preorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> S;
    while (true)
    {
        while (root != NULL)
        {
            cout << root->data << " ";
            S.push(root);
            root = root->left;
        }
        if (S.empty())
            return;
        root = S.top();
        S.pop();
        root = root->right;
    }
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> S;
    while (true)
    {
        while (root != NULL)
        {
            S.push(root);
            root = root->left;
        }
        if (S.empty())
            return;
        root = S.top();
        S.pop();
        cout << root->data << " ";
        root = root->right;
    }
}

void postorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s1, s2;
    s1.push(root);
    while (!s1.empty())
    {
        root = s1.top();
        s1.pop();
        s2.push(root);
        if (root->left)
            s1.push(root->left);
        if (root->right)
            s1.push(root->right);
    }

    while (!s2.empty())
    {
        int data = s2.top()->data;
        s2.pop();
        cout << data << " ";
    }
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
    cout << "preorder" << endl;
    preorder(root);
    cout << endl;
    cout << "postorder" << endl;
    postorder(root);
    cout << endl;
    cout << "inorder" << endl;
    inorder(root);
    cout << endl;
    return 0;
}
