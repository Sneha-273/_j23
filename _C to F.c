#include<stdio.h>

int main()
{
    int  temp;
    float celsius, Fahrenheit;
    printf("please enter room temperature:");
    scanf("%d",& temp);
    printf("\n--------");
    Fahrenheit=(temp*1.8)+32;
    printf("\nFahrenheit=%f", Fahrenheit);
    printf("\n-----------");
    celsius=0.55*(Fahrenheit-32);
    printf("\ncelcius=%f", celsius);
    
    
    return 0;
}