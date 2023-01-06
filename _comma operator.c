#include<stdio.h>

int main()
{
    //comma operator accept right side value
    int a,b;
    a=(0,2);
    b=(2,3);
    printf("a=%d\nb=%d",a,b);

    return 0;
}