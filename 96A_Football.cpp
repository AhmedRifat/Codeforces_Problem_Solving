#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[101];
    int i,count=1;
    cin>>str;
    int len=strlen(str);
    for(i=0;i<len-1;i++){
        if(str[i]==str[i+1]){
            count++;
            if(count==7) break;
            continue;
        }
        count=1;
    }
    if(count==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
