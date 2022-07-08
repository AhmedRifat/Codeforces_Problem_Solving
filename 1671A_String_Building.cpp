#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, i, j, len, sumA = 97, sumB = 98;
    cin >> a;
    for (i = 0; i < a; i++)
    {
        char st[100] = {0};
        cin >> st;
        len = strlen(st);
        for (j = 0; j < len; j++)
        {
            if (j == 0)
            {
                if ((st[j] == 97 && st[j + 1] == 98) || (st[j] == 98 && st[j + 1] == 97))
                {
                    sumA = 50;
                    sumB = 51;
                    break;
                }
            }
            if (j >= 1 && j <= (len - 2))
            {
                if ((st[j - 1] == 98 && st[j] == 97 && st[j + 1] == 98) || (st[j - 1] == 97 && st[j] == 98 && st[j + 1] == 97))
                {
                    sumA = 50;
                    sumB = 51;
                    break;
                }
                if (st[j] == 97 && st[j + 1] == 97)
                    sumA += st[j];
                if (st[j] == 98 && st[j + 1] == 98)
                    sumB += st[j];
            }
            if (j == len - 1)
            {
                if ((st[j] == 97 && st[j - 1] == 98) || (st[j] == 98 && st[j - 1] == 97))
                {
                    sumA = 50;
                    sumB = 51;
                    break;
                }
                if (st[j] == 97 && st[j - 1] == 97)
                    sumA += st[j];
                if (st[j] == 98 && st[j - 1] == 98)
                    sumB += st[j];
            }
        }
        if(sumA==97 && sumB==98) { sumA=50; sumB=51;}
        if ((sumA % 194 == 0 || sumA % 194 == 97 || sumA % 291 == 0 || sumA % 291 == 194) || (sumB % 196 == 0 || sumB % 196 == 98 || sumB % 294 == 0 || sumB % 294 == 196))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        sumA = 97;
        sumB = 98;
    }

    return 0;
}
