#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,temp,rmd,count=0,digcount=0;
    cin>>n;
    temp=n;
    for(;n>0;){
        rmd=n%10;
        if(rmd==7 || rmd==4) count++;
        n/=10;
        digcount++;
    }
    if(count==digcount || temp%7==0 || temp%4==0 || temp%44==0 || temp%47==0 || temp%74==0 || temp%77==0 || temp%444==0 || temp%447==0 || temp%474==0 || temp%477==0 || temp%744==0 || temp%747==0 || temp%774==0 || temp%777==0)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
