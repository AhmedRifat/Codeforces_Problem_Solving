#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i;
    cin>>x;
    if(x==1 || x==2 || x==3 || x==4 || x==5) cout<<"1"<<endl;
    else{
        if(x%5!=0){
            x/=5;
            cout<<x+1<<endl;
        }
        else{
            x/=5;
            cout<<x<<endl;
        }
    }
    return 0;
}
