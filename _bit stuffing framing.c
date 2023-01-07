#include<stdio.h>
#include<string.h>
void main()
{
    //bit stuffing
    char data[50], stuff[50], dstuff[50];
    int i,j;
    int cnt,len;

    printf("Enter data in form of(1/0)=");
    scanf("%s",&data);

    len=strlen(data);
    cnt=0;
    j=0;

    for(i=0; i<len; i++)
    {
        if(data[i]='1')
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        stuff[j]=data[i];
        j++;

        if(cnt==5 && data[i+1]=='1')
        {
            stuff[j]='0';
            cnt=0;
            j++;
        }
    }
    stuff[j]='\0';
    printf("\nAfter stuffing bit=%s",stuff);


    //Destuffing method

    len=strlen(stuff);
    j=0;
    cnt=0;

    for(i=0; i<len; i++)
    {
        if(stuff[i]='1')
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        dstuff[j]=stuff[i];
        j++;

        if(cnt==5 && stuff[i+1]=='0')
        {
            cnt=0;
            i++;
        }
    }
    dstuff[j]='\0';
    printf("\nAfter destuffing bit=%s",dstuff);

}