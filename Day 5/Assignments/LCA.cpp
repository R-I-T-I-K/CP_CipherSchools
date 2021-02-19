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

Node *LCA(Node *root, Node *a, Node *b)
{
    if (root == NULL)
        return NULL;

    if (root == a || root == b)
    {
        return root;
    }

    Node *l = LCA(root->left, a, b);
    Node *r = LCA(root->right, a, b);

    if (l != NULL && r != NULL)
        return root;
    else
        return (l != NULL ? l : r);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    Node *a = root->right->left->left = new Node(6);
    root->right->right = new Node(5);
    Node *b = root->right->right->left = new Node(7);
    root->right->right->right = new Node(8);
    root->right->right->right->left = new Node(9);

    Node *lca = LCA(root, a, b);
    if (lca != NULL)
        cout << "lowest common ancestor " << lca->data << endl;
    else
        cout << "no lowest common ancestor" << endl;
    return 0;
}
