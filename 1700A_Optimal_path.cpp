#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,t,n,m,sum1=0,sum2=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>m;
        sum1=((m-1)*m)/2;
        for(j=1;j<=n;j++){
            sum2=sum2+j*m;
        }
        cout<<sum1+sum2<<endl;
        sum1=0; sum2=0;
    }
    return 0;
}
