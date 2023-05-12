//15.Write a C program to count the number of 5's adjacent to each other in an array of integers. Consider the situation where the second 5 is actually a 6.

#include <stdio.h>
void adjacent_five (int [],int); // int int
int main()
{
    int array[50], size, i;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the elements of the array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    adjacent_five(array,size); //calling only with variables (values in variable) not []
    return 0;
}

void adjacent_five(int array[], int size) //both type and variable name
{
    int i,count=0;
    for (i = 0; i < size-1; i++)
    {
        if (array[i] == 5 && array[i + 1] == 5 || array[i + 1] == 6)
            count++;
    }
    printf(" your count is : %d",count);
}