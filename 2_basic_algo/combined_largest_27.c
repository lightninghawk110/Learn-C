// Write a C program to find the larger of two given integers. However if the two integers have the same remainder when divided by 5, choose the smaller integer. If the two integers are the same, return 0
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    if (a == b)
    {
        printf ("0");
    }
    else if(a<b && (a%5)==(b%5))
    {
        printf ("%d",a);
    }
    else 
        printf ("%d",b);
}