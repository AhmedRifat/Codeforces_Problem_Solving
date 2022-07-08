#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,length;
    scanf("%d",&n);
    char string[100];
    for(i=0;i<n;i++){
        scanf("%s",&string);
        length=strlen(string);
        if(length>10){
            printf("%c%d%c\n",string[0],length-2,string[length-1]);
        }
        else{
            printf("%s\n",string);
        }
    }
    return 0;
}
