#include<stdio.h>
void main() {
    int a[5], avg = 0, sum = 0, pcount= 0, i;
    printf("Enter 5 numbers");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i]> 0)
        {
            
            sum = sum + a[i]; 
            pcount++ ;
            
        }    
    }
    avg = sum/pcount;
    printf("Average is %d\n", avg);
    
}