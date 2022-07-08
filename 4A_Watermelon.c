#include<stdio.h>

int main()
{
    int W;
    scanf("%d",&W);

    if(W!=2 && W%2==0){ //কারণ তরমুজ টাকে ২ভাগে ভাগ করতে হবে তাও জোড় সংখ্যায়
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
