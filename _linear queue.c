#include<stdio.h>
#define SIZE 100
void enq();
void deq();
void show();
int a[SIZE],rear=-1, front=-1;
int main()
{
    int ch;
    while(1)
    {
        printf("1.insert");
        printf("\n2.delete");
        printf("\n3.show");
        printf("\n4.exit");

        printf("\nchoice=");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            enq();
            break;
        case 2:
            deq();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("\nwrong choice'");
            break;
        }

    }
}


void enq()
{
    int inval;
    if(rear==SIZE-1)
        printf("\noverflow");

    else
    {
        if(front==-1)
            front=0;
        printf("\ninsert element=");
        scanf("%d",&inval);
        rear=rear+1;
        a[rear]=inval;
    }
}

void deq()
{
    if(front==-1||front>rear)
    {
        printf("\nunderflow");
        return;
    }
    else
    {
        printf("\n%d is deleted",a[front]);
        front=front+1;
    }
}

void show()
{
    if(front==-1)
        printf("\nempty queue");

    else
    {
        printf("\nQueue\n");
        for(int i=front; i<=rear; i++)
            printf("%d",a[i]);
        printf("\n");
    }
}