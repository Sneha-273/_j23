#include<stdio.h>

int main()
{
    int n;
    printf("enter number=");
    scanf("%d",&n);
    //printf("ans=%d",n&1);
    (n&1 && printf("odd")||printf("Even"));
    return 0;
}