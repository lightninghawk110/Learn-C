#include<stdio.h>
int main()
{
    int i,n = 25;
    for (i = 1; i <=100;i++) {
        if (i%n ==3)
        {
            printf(" %d \n", i);
        }
    }
}