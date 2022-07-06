// Efficient
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left;
    node *right;
    node(int data)
    {
        key = data;
        left = NULL;
        right = NULL;
    }
};
int res = 0;
int height(node *root)
{
    if (root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    res = max(res, lh + rh + 1);
    return 1 + max(lh, rh);
}
int diameter(node *root)
{
    if (root == NULL)
        return 0;
    height(root);
    return res;
}
int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->right = new node(60);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->left->right->left = new node(70);
    root->left->right->right = new node(80);
    cout << diameter(root);
}