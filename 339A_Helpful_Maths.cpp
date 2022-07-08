#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[101];
    cin>>str;
    int i,len,j,temp;
    len=strlen(str);

    for(i=2;i<len;i=i+2){
        for(j=0;j<len-i;j+=2){
            if(str[j]>str[j+2]){
                temp=str[j];
                str[j]=str[j+2];
                str[j+2]=temp;
            }
        }
    }

    for(i=0;i<len;i++) cout<<str[i];
    return 0;
}
