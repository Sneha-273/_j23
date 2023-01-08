#include<stdio.h>
int s[50],t=-1;
int j,n;
int ch=0;

void push();
void pop();
void show();

int main()
{
    printf("enter elements=");
    scanf("%d",&n);
    while(ch!=4)
    {
        printf("\n1.push\n2.pop\n3.show\n4.exit");
        printf("\n------------------------");
        printf("\nenter choice=");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            printf("exit");
            break;
        }
        default :
        {
            printf("choose vaild option");
            break;
        }
     };
   }
  }
    void push()
    {
        int val;
        if(t==n-1)
        {
            printf("overflow\n");
        }
        else
        {
            printf("\nenter new element=");
            scanf("%d",&val);
            t=t+1;
            s[t]=val;
        }
    }
    void pop()
    {
        if(t==-1)
            printf("underflow\n");
        else
            t=t-1;
    }
    void show()
    {
    printf("------------------------\n");
        for(j=t; j>=0; j--)
        {
            printf("%d\t",s[j]);
        }
    printf("\n------------------------");
        if(t==-1)
        {
            printf("stack is empty\n");
        }
    }

