#include <bits/stdc++.h>
using namespace std;

int i = 0;

void balance(int n, int op, int cl, string s = "")
{
    if (s.length() == (2 * n))
    {
        cout << ++i << s << endl;
        return;
    }
    if (op >= cl)
    {
        balance(n, op - 1, cl, s + "(");
    }

    else
    {
        if (op != 0)
        {
            balance(n, op - 1, cl, s + "(");
        }
        balance(n, op, cl - 1, s + ")");
    }
}

int main()
{

    int n;
    cin >> n;
    balance(n, n, n);
    return 0;
}