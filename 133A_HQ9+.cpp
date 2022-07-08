#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[101];
    cin >> str;
    int i, count = 0;
    int len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            count++;
        }
    }
    if(count>0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
