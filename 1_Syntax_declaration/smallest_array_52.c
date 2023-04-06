#include<stdio.h>
int main()
{
    int i,a[5],sm,pos=0;
    printf("Enter the elements in array");
    for ( i = 0; i < 5; i++)
    {
    scanf("%d",&a[i]);     
    }
    sm = a[0];
    for ( i = 0; i < 5; i++)
    {
        if (sm > a[i])
        {
            sm = a[i];
            pos = i; 

        }
    }
    printf("smallest element is %d \n its position is %d",sm,pos); 
    return 0;   
}