#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[200001];
    int i, t, j, len, flag = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> str;
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            if (str[0] == 'B')
            {
                flag = 0;
                break;
            }
            if (str[len - 1] == 'A')
            {
                flag = 0;
                break;
            }

            if (str[j] == 'A')
            {
                flag = 1;
                continue;
            }
            else if (str[j] == 'B')
            {
                //if(j==(len-1)==0) 
                if (j < len - 1)
                {
                    if (str[j - 1] == 'A' && str[j + 1] == 'A')
                    {
                        flag = 1;
                        continue;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    if (str[j - 1] == 'A')
                    {
                        flag = 1;
                        continue;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
