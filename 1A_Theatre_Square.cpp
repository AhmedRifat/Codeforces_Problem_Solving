#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,a,nrow,mcol;
    cin>>n>>m>>a;
    nrow=n/a; mcol= m/a;
    if(n%a!=0) nrow++;
    if(m%a!=0) mcol++;
    cout<<nrow*mcol<<endl;
    return 0;
}
