 //Write a C program to check if a triple is present in an array of integers or not. If a value appears three times in a row in an array it is called a triple.

#include<stdio.h>
void triple_array ( int[],int);
int main()
{
    int arr[50],size,i;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("enter the elements of the array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    triple_array(arr,size);
}
void triple_array(int arr[],int size)
{
    int i=0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == arr[i+1] && arr[i+1] == arr[i+2])
    {
        printf("Yes !");
    }
    }
    printf("No !");
    
}
