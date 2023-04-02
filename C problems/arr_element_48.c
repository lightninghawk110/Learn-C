#include<stdio.h>
int main()
{

    int arr[10],i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i] == 0 || arr[i] < 0)
        {
            arr[i] = 100;
        }
        
    }
printf("your array is :\n");
for ( i = 0; i < n; i++)
{
    printf("%d\n",arr[i]);
}

    
}