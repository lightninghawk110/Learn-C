#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("Enter 5 digit\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum = sum + a[i]; 
        }
    }
    printf("Sum: %d\n",sum);
    return 0;
}
