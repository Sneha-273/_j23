#include<stdio.h>

int main()
{
    int x,y,n=1;
    int row;
    printf("enter rows=");
    scanf("%d",&row);
    for(x=1; x<=row; x++)
    {
        for(y=1; y<=x; y++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}