//Write a C program that checks if a given non-negative integer is a multiple of 13 or one more than a multiple of 13. For example, if the given integer is 26 or 27, the program will return true, but if it is 25 or 28, the program will return false.

#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if (num %13 ==0 || num%13 == 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}






















