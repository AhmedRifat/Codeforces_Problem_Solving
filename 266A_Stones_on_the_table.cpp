#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=0;
    cin>>n;
    char str[n];
    for(i=0;i<n;i++){
        cin>>str[i];
    }
    for(i=0;i<n;i++){
        if(str[i]==str[i+1]) count++;
    }
    cout<<count<<endl;
    return 0;
}
