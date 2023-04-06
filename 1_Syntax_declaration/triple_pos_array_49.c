#include <stdio.h>
int main()
{
    int arr[7],i;
    printf("enter the first element of array \n");
    scanf("%d",&arr[0]);
    for ( i = 0; i < 7; i++)
    {
        arr[i+1] = arr[i]*3;
    }
    printf("Your ARRAY IS:");
    for (i = 0; i < 7; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
