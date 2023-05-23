//Write a C program to compute the sum of the elements of an array of integers.

#include <stdio.h>

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int array[] = {2, 4, 6, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);
    
    int sum = sumOfArray(array, size);
    
    printf("The sum of the array elements is: %d\n", sum);
    
    return 0;
}