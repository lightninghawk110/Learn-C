//Write a C program to check three given integers and return true if one of them is 20 or more and less than one of the others.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two number:");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>20) && (a<20) || (b>20) && (b<20) || (c>20) && (c<20))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}