#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("Enter the number of lines :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1;j<=3;j++)
        {
            printf("%d ",(int)pow(i,j));    
        }
        printf("\n");
    }
}