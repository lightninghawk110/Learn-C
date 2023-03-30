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
    for (i = num1; i < num2; i++)
    {
        if ((i % 7 == 2) ||  (i % 7 == 3))
        {
            printf("%d\n",i); 
        }
    }

    return 0;
}