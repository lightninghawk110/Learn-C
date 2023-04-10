// Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.

#include<stdio.h>
int main()
{
    int num;
    printf("enter num\n");
    scanf("%d", &num);
    if (num >= 100 && num <=200)
    {
        printf("True");
    }
    else
        printf("False");
    
    return 0;
}