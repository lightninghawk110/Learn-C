#include<stdio.h>
int main()
{
    int a[5],gt = 0,i;
    printf("Enter the elements in array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (a[i] > gt)
            gt = a[i];
    }
    printf("highest element: %d \n",gt);
    printf("position: %d \n",i);

}