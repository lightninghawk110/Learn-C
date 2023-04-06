#include<stdio.h>
int main()
{
    int num1,num2,sum=0,temp=0,i;
    printf("enter both numbers:");
    scanf("%d %d",&num1, &num2);
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (i = num1; i <= num2; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i; 
        }
    }
    printf("sum = %d ",sum);
    
    return 0;
}
