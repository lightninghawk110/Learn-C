#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    printf("Enter the number of lines :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1;j<=3;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}