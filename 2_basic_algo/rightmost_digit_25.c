//Write a C program to check if two or more non-negative integers have the same rightmost digit. 
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    if ((a%10)== (b%10))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}