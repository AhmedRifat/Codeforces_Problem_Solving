#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,count=0,j,temp;
    cin>>t>>n;
    int arr[t],i;
    for(i=0;i<t;i++){
        cin>>arr[i];
    }
    for(i=1;i<t;i++){
        for(j=0;j<t-i;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==0) count+=0;
        else count++;
    }
    for(i=n-1;i<t-1;i++){
        if(arr[i]==arr[i+1] && arr[i]>0) count++; 
        else break;
    }
    cout<<count<<endl;
    return 0;
}
