#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[101];
    cin>>str;
    int len,i,cnt1=0,cnt2=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>='a') cnt1++;
        else cnt2++;
    }
    if(cnt1>=cnt2){
        strlwr(str);
        cout<<str<<endl;
    }
    else{
        strupr(str);
        cout<<str<<endl;
    }
    return 0;
}
