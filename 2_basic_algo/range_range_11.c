// Write a C program that checks if two given integers are in the range of 40 to 50 inclusive, or if they are both in the range of 50 to 60 inclusive. 

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter btoh number");
    scanf("%d %d", &num1, &num2);
    (( num1>= 40 && num1 <=50) && (num2>=40 && num2<=50) ||( num1>= 50 && num1 <=60) && (num2>=50 && num2<=60) ? printf("1") : printf("0"));
    return 0;
}