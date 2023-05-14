//Write a C program to compute the sum of the three integers. Do not count a value that is 13 and add it to the sum. 

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three num");
    scanf("%d %d %d",&a, & b, &c);
    if ( a==13)
        printf("0");
    else if (b == 13)
        printf("%d",a);
    else
        printf("%d",a+b);
    return 0;
    
}