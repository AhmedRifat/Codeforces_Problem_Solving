#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w,sum=0,i;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
        sum=sum+i*k;
    }
    if(sum>n) cout<<sum-n<<endl;
    else cout<<"0"<<endl;
    return 0;
}
