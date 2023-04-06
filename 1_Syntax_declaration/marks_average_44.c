#include<stdio.h>
int main()
{
    float a[99],count=0,sum=0,average;
    int i=0;
    while (1)
    {
        printf("enter the element in array:");
        scanf("%f",&a[i]);
        if(a[i]< 0 || a[i]==0)
        {
            break;
        }
        else
        {
            sum = sum + a[i];
            count++;
            i++;
        }
    }
    average = sum / count;
    printf("average is : %.2f\n",average);
    return 0;
}