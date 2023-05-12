//14.Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere. 

#include <stdio.h>
void array_sequence (int [],int); // int int
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
    array_sequence(array,size); //calling only with variables (values in variable) not []
    return 0;
}

void array_sequence(int array[], int size) //both type and variable name
{
    int i;
    for (i = 0; i < size-1; i++)
    {
        if (array[i] == 1 && array[i + 1] == 2 && array[i + 2] == 3)
            printf("%d",1);
    }
    printf("%d",0);
}