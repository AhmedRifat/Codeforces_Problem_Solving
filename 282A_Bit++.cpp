#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i,count=0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        char str[4];
        cin >> str;
        if(str[0]=='+' || str[0]=='-'){
            if(str[0]=='+'){
                count++;
            }
            else{
                count--;
            }
        }
        else if(str[2]=='+' || str[2]=='-'){
            if(str[2]=='+'){
                count++;
            }
            else{
                count--;
            }
        }
    }
    cout<<count;
    return 0;
}
