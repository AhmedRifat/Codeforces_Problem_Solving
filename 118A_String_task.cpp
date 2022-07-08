#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[101];
    int i,len;
    cin>>str;
    len=strlen(str);
    strlwr(str);
    for(i=0;i<len;i++){
        if(str[i]=='a' ||
        str[i]=='e' || str[i]=='i' || str[i]=='o' ||
        str[i]=='u' || str[i]=='y') ;
        else{
            cout<<"."<<str[i];
        }
    }
    return 0;
}
