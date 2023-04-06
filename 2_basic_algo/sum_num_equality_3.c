	// 3. Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a & b:");
    scanf("%d %d",&a, &b);
    if (a == 30 || b == 30 || (a+b) == 30)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
}