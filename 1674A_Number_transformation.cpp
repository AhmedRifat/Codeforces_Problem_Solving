#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,a=0,b,i,j,temp;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y;
        temp=y/x;
        if(temp*x==y){
            cout<<"1 "<<temp<<endl;
        }
        else{
            cout<<"0 0"<<endl;
        }
        // temp=y;
        // if(x<=y){
        //     b=sqrt(y/x);
        //     for(;y>0;){
        //         y/=10;
        //         a++;
        //     }
        // if(temp== x*(int)pow(b,a))
        //     cout<<a<<" "<<b<<endl;
        //     else cout<<"0 0"<<endl;
        // }
        // else{
        //     cout<<"0 0"<<endl;
        // }
        a=0;
    }
    return 0;
}
