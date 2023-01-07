#include<stdio.h>
#include<string.h>
int main()
{
    //character count
    char data[50],stuff[50], dstuff[50];
    int i, j,s;
    int dlen,flen;
    int total,nof;

    printf("Enter data=");
    scanf("%s",& data);
    dlen=strlen(data);
    printf("Enter frame size=");
    scanf("%d",&flen);

    s=flen;
    total=flen-1;
    nof=(dlen/total+1);
    j=0;

    for(i=0; i<(dlen+nof); i++)
    {
        if(i%flen==0)
        {
            if((dlen-j)<flen)
            {
                flen=(dlen-j)+1;
            }
            stuff[i]=(char)(48+flen);
            flen=s;
        }

        else
        {
            stuff[i]=data[j];
            j++;
        }
    }
    stuff[i]='\0';
    printf("\nStuffed data=%s",stuff);

    //destuffing method

    j=0;
    for(i=0; i<(dlen+nof); i++)
    {
        if(i%flen!=0)
        {
            dstuff[j]=stuff[i];
            j++;
        }
    }
    dstuff[i]='\0';
    printf("\nDestuffed data=%s",dstuff);
    return 0;
}