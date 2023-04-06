#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],sum, i;
    printf("enter 5 numbers");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        if ((a[i]% 2)!=0)
        {
            sum+=a[i];
        }
        
    }
    printf("your sum is %d\n",sum);

    return 0;
}
