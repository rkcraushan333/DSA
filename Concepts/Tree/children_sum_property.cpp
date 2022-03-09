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
bool childrenSumProperty(node *root)
{
    if ((root->left == NULL && root->right == NULL) || root == NULL)
        return true;
    int sum = 0;
    if (root->left != NULL)
        sum += root->left->key;
    if (root->right != NULL)
        sum += root->right->key;
    return (root->key == sum) && (childrenSumProperty(root->left) && childrenSumProperty(root->right));
}
int main()
{
    node *root = new node(10);
    root->left = new node(8);
    root->right = new node(2);
    root->left->left = new node(3);
    root->left->right = new node(5);
    if (childrenSumProperty(root))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}