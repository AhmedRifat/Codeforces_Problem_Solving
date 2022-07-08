#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[101];
    cin>>str;
    int i,j,len,count=0,temp;
    len=strlen(str);
    for(i=1;i<len;i++){
        for(j=0;j<len-i;j++){
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    for(i=0;i<len;i++){
        if(str[i]==str[i+1]) continue;
        else count++;
    }
    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
