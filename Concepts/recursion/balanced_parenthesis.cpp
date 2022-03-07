#include <bits/stdc++.h>
using namespace std;

int i = 0;

void balance(int op, int cl, string s = "")
{
    if (op == 0 && cl == 0)
    {
        cout << ++i << s << endl;
        return;
    }
    if (op >= cl)
    {
        balance(op - 1, cl, s + "(");
    }

    else
    {
        if (op != 0)
        {
            balance(op - 1, cl, s + "(");
        }
        balance(op, cl - 1, s + ")");
    }
}

int main()
{

    int n;
    cin >> n;
    balance(n, n);
    return 0;
}