#include <bits/stdc++.h>
using namespace std;

// by inforkc
vector<int> adj[101], in(101), low(101);
vector<bool> vis(101);
int timer;
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i<e; i++>)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}