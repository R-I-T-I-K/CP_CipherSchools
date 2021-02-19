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

int diameterHelper(Node *root, int *height)
{
    if (root == NULL)
    {
        height = 0;
        return 0;
    }
    int lh = 0, rh = 0, ld = 0, rd = 0;
    ld = diameterHelper(root->left, &lh);
    rd = diameterHelper(root->right, &rh);

    *height = max(lh, rh) + 1;
    return max(lh + rh + 1, max(ld, rd));
}

int diameter(Node *root)
{
    int height;
    return diameterHelper(root, &height);
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

    cout << diameter(root) << endl;
    return 0;
}
