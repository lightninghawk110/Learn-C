//Write a C program to check a given array of integers of length 1 or more. Return true if the first element and the last element in the array are equal.


#include<stdio.h>
int check_equal(int arr[], int size )
{
    if (arr[0] == arr[size-1])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int arr[10],s,i;
    printf("enter the size of array:");
    scanf("%d",&s);
    printf("Enter the elements of the array:");
    for (i = 0; i < s; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",check_equal(arr,s));
    return 0;

}
    
    