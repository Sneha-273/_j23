#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter first byte=");
    scanf("%d",&a);
    printf("\nEnter second byte=");
    scanf("%d",&b);
    printf("\nEnter third byte=");
    scanf("%d",&c);
    printf("\nEnter forth byte=");
    scanf("%d",&d);

    if(a<=255&& b<=255&& c<=255&&d<=255)
    {
        printf("\nIP ADDRESS=%d.%d.%d.%d",a,b,c,d);
    }
    else
    {
        printf("\nINVALID IP ADDRESS!!");
    }
    printf("\n------------------");
    if(a<127)
    {
        printf("\nclass A");
    }
    else if(a>127&&a<=191)
    {
        printf("\nclass B");
    }
    else if(a>191&&a<=223)
    {
        printf("\nclass C");
    }
    else if(a>223&&a<=239)
    {
        printf("\nclass D");
    }
    else
    {
        printf("\nclass E");
    }
    return 0;
}