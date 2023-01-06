#include<stdio.h>

int main()
{
    int a=1,b;
    b=a++;
    a=++ a;
    printf("a=%d",a);
    printf("\nb=%d",b);
    return 0;
}