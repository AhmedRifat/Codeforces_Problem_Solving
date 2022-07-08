#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,rmd,flag=0,count=0;
    cin>>n;
    for(;n>0;){
        rmd=n%10;
        if(rmd==7 || rmd==4){
            count++;
        }
        n/=10;
    }
    if(count==7 || count==4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
