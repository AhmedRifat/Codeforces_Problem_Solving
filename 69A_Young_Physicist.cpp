#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,flag=0;
    cin>>n;
    int arr[n][3],sum[n]={0};

    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            sum[j]+=arr[i][j];
        }
    }

    for(i=0;i<n;i++){
        if(sum[i]==0){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
