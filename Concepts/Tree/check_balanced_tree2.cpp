// Time complexity o(n)
// check balanced tree  O(n^2)
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int checkBalanced(node *root)
{
    if (root == NULL)
        return 0;
    int lh = checkBalanced(root->left);
    if (lh == -1)
        return -1;
    int rh = checkBalanced(root->right);
    if (rh == -1)
        return -1;
    if (abs(lh - rh) > 1)
        return -1;
    else
        return max(lh, rh) + 1;
}
int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->right = new node(6);
    root->left->left = new node(8);
    root->left->right = new node(7);
    root->left->right->left = new node(9);
    root->left->right->right = new node(15);
    if (checkBalanced(root) == -1)
        cout << "No";
    else
        cout << "Yes";
    // cout << checkBalanced(root);
    return 0;
}