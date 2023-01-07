#include<stdio.h>
int fact(int);
int main()
{
    int n, result;
    printf("Enter number=");
    scanf("%d",&n);
    result=fact(n);
    printf("factorial=%d", result);
}
int fact(int n1)
{
    int ans;
    if(n1<=0)
    {
        return 1;
    }
    ans=n1*fact(n1-1);

    return ans;
}