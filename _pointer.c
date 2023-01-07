#include<stdio.h>

int main()
{
    int a=11;
    int* p;
    int**pp;
    printf("a=%u\n&a=%u",a,&a);
    p=&a;
    printf("\np=%u\n&p=%u\n*p=%u\n",p,&p,*p);
    pp=&p;
    printf("\npp=%u\n&pp=%u\n*pp=%u\n**pp=%u\n",pp,&pp,*pp,**pp);
    return 0;
}