#include<stdio.h>

int main()
{
    int a=0,b=1, result,n;
    printf("enter number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    printf("%d", a);
    result=a+b;
    a=b;
    b=result;
    }
    return 0;
}