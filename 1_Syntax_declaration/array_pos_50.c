#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter the elements in arrray");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your array is:");
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < 5)
        {
            printf("A[%d] = %d",i,arr[i]);
        }
        
    }
    
    
}