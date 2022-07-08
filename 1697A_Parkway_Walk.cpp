#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int j,n,energy,sum=0;
        cin>>n>>energy;
        int arr[n];
        for(j=0;j<n;j++) cin>>arr[j];
        for(j=0;j<n;j++){
            sum+=arr[j];
        }
        if(sum>energy) cout<<sum-energy<<endl;
        else cout<<0<<endl;
        sum=0;
    }
    return 0;
}
