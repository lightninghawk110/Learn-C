//2. Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference. 

#include <stdio.h>
#include<math.h>
int main()
{
    int n,diff=0;
    printf("Enter the valeu of n :");
    scanf("%d", &n);
    diff = 51-n;
    (n>51) ? printf(" the abs diff is :%d",abs(diff*3)):printf(" the sum is :%d",diff);

}