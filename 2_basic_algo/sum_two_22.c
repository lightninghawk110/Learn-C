//Write a C program to compute the sum of the two given integers. Return 18 if one of the integer values given is in the range 10..20 inclusive. 

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    if ( a>=10 && a<=20)
    {
        printf("18");
    }
    else 
        printf("%d",a+b);
}