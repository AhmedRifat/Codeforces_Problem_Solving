#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,m,a,total,length,width;
    scanf("%lld %lld %lld",&n,&m,&a);
    length=ceil((double)n/a);
    width=ceil((double)m/a);
    total=length*width;
    printf("%lld\n",total);
    return 0;
}
