// Write a C program that takes two positive integer values as input and checks if either of them is in the range of 20 to 30 (inclusive). If at least one number falls in this range, the program returns the larger value. Otherwise, it returns 0. 

#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two number :");
    scanf("%d %d",&x, &y);
    ( (x >= 20 && x <=30) || (y >= 20 && y <=30) ? ((x>y)?printf("%d",x):printf("%d",y)) : printf("%d",0));
}