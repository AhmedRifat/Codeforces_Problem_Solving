#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, a, b, c, x, y;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> x >> y;
        if (x - a > 0)
        {
            if (y - b > 0)
            {
                c = c - (x - a);
                c = c - (y - b);
                if (c >= 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                c = c - (x - a);
                if (c >= 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else if (x - a <= 0)
        {
            if (y - b > 0)
            {
                c = c - (y - b);
                if (c >= 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        // else{
        //     if (y - b > 0)
        //     {
        //         c = c - (y - b);
        //         if (c >= 0)
        //             cout << "YES" << endl;
        //         else
        //             cout << "NO" << endl;
        //     }
        // }
    }
    return 0;
}
