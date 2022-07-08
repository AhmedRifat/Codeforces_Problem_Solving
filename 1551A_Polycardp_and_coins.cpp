#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, div, a, b;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        if (n % 3 == 0)
        {
            div = n / 3;
            a = div;
            b = div;
        }
        else
        {
            div = n / 3;
            a = div + 1;
            b = div;
        }
        if (a + 2 * b == n)
            cout << a << " " << b << endl;
        else
            cout << b << " " << a << endl;
    }
    return 0;
}
