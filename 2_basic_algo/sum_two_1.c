//	1. Write a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum.

#include<stdio.h>
int main()
{
    int a,b,sum = 0;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    sum = a+b;
    (a==b) ? printf(" the sum is :%d",sum*3):printf(" the sum is :%d",sum);
}