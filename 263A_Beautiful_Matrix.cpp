#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mat[5][5], i, j, flag=0,countrow = 0, countcol = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> mat[i][j];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }

    cout<<abs(2-i)+abs(2-j)<<endl;
    return 0;
}
