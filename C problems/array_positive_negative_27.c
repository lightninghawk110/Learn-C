#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5],i,ncount = 0,pcount = 0;
    printf("Enter 5 digit\n");
    for (i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
            ncount++;
        else if (arr[i] > 0)
            pcount++;;
    }
    printf("No. of N_Count is %d\n", ncount);
    printf("No. of P_Count is %d\n", pcount);
    return 0;
}
