#include<stdio.h>

int main()
{
    int a=10,b=5,v=10;
    if((a>b) && (v<=a))
    a=a+1;
    else 
    v=v+1;
    printf("a=%d\nv=%d",a,v);
    return 0;
}