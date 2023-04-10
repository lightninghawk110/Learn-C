//Write a C program to check if two given non-negative integers have the same last digit. 
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    ((num1 % 10) == (num2 % 10)) ? printf("YES\n") : printf("NO\n");
}