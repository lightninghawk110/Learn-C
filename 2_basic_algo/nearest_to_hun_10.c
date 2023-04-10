// Write a C program to check which number is nearest to the value 100 among two given integers. Return 0 if the two numbers are equal. 
#include<stdio.h>
int main()
{
    int num1,num2,diff;
    printf("enter two number\n");
    scanf("%d %d",&num1, & num2);
    if (num1 == num2)
    {
        printf("%d",0);
    }
    
    else if ((100 - num1) < (100 - num2))
    {
        printf("%d",num1);
    }
    else if (( 100 - num1) >(100 - num2))
    {
        printf("%d",num2);
    }
    else
        printf("error\n");

}