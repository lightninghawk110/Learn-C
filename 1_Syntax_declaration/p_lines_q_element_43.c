#include<stdio.h>
int main()
{
    int p,i,q,j,k=1;
    printf("Enter the number of lines :");
    scanf("%d", &p);
    printf("enter the no. of elements :");
    scanf("%d", &q);
    for (i = 1; i <= p; i++)
    {
        for (j = 1;j<=q;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}