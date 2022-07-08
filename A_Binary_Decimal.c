#include<stdio.h>

int main()
{
    int t,i;
    long long int n,rmndr,max=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        again:
        if(n==0) goto jump;
        rmndr=n%10;
        if(max<=rmndr){
            max=rmndr;
        }
        n/=10;
        goto again;
        jump:
        printf("%lld\n",max);
        max=0;
    }

    return 0;
}
