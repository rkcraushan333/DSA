// print left Iterrative approach

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

void print_left(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    cout << q.front()->key << " ";
    while (q.size() > 1)
    {
        node *child = q.front();
        q.pop();
        if (child == NULL)
        {
            q.push(NULL);
            cout << q.front()->key << " ";
            continue;
        }
        if (child->left != NULL)
            q.push(child->left);
        if (child->right != NULL)
            q.push(child->right);
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(50);
    root->right = new node(60);
    root->right->left = new node(70);
    root->right->left->right = new node(8);
    root->right->right = new node(20);

    print_left(root);
    return 0;
}