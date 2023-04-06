#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number");
    scanf("%d",&num);
    if (num%2 == 0)
    {
        (num > 0? printf("positive even"): printf("negative even"));
    }
    else
    {
        (num > 0? printf("positive odd"): printf("negative odd"));
    }
}