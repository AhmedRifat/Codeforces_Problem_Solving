#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a + b > c && b + c > a && c + a > b) || (a + c > d && c + d > a && d + a > c) || (b + c > d && c + d > b && d + b > c) || (b + c > d && c + d > b && d + b > c))
        cout << "TRIANGLE" << endl;
    else if (b + c == d || b + c == a || c + d == a || c + d == b || d + b == c || d + b == a || a + b == c || a + b == d || a + c == b || a + c == d || a + d == b || a + d == c)
        cout << "SEGMENT" << endl;
    else
        cout << "IMPOSSIBLE" << endl;

    return 0;
}
