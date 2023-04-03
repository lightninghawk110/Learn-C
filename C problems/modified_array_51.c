#include<Stdio.h>
int main()
{
    int a[6],i;
    printf("Enter the elements of the array");
    for ( i = 0; i < 6; i++)
    {
        scanf("%d",&a[i]);
    }
    a[0] = a[5];
    a[1] = a[4];
    a[2] = a[3];
    printf("Your new array is : ");
    for (i = 0; i < 6; i++)
    {
        printf("%d \n",a[i]);
    }
    
    return 0;
}