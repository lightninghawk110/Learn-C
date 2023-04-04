#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    printf(" enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        sum += 1/i;
    }
    printf("your sum is %d\n",sum);
    
}