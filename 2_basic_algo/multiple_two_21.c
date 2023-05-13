 //Write a C program to check whether a given number is within 2 of a multiple of 10.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    if ( num % 10 <= 2 || num % 10 >= 8)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}