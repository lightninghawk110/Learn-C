// Write a C program to check two given integers. Each integer is in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33. 

#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two number");
    scanf("%d %d",&x,&y);
    if ((x>=10 && x<=99) && (y>=10 && y<=99))
    {
        if (x / 10 == y / 10 || x / 10 == y % 10 || x % 10 == y / 10 || x % 10 == y % 10) 
        /*
        
        It first checks whether the tens digit of x and y are the same.
        Then check whether the tens digit of x is the same as the ones digit of y.
        Then check whether the ones digit of x is the same as the tens digit of y.
        Finally check whether the ones digit of x and y are the same.
         */
        {
            printf("1");
        }
        else
            printf("0");
        
    }
    
}