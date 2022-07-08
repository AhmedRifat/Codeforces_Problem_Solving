#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,arr[3],count=0,flag=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>arr[0]>>arr[1]>>arr[2];
        for(int j=0;j<3;j++){
            if(arr[j]==1) count++; 
        }
        if(count>=2) flag++;
        count=0;
    }
    cout<<flag<<endl;
    return 0;
}

