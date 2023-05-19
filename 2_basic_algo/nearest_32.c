//Write a C program to check two given integers and return the one nearest to 13 without crossing over. Return 0 if both numbers go over.
#include<stdio.h>
int nearest(int a, int b)
{
    if ( a> 13 && b > 13)
    {
        return 0;
    }
    else if ((13-a) > (13 - b))
        return b;
    else if (13-b > 13-a )
        return a;
}
int main(void)  
{
    printf("%d", nearest(5,12));
}