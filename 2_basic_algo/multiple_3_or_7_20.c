// Write a C program that checks if a given non-negative number is a multiple of 3 or 7, but not both.

#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if (num %3 ==0 ^ num%7 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
