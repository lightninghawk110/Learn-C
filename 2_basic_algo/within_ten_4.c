// Write a C program to check a given integer and return true if it is within 10 of 100 or 200.

#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the valeu of n :");
    scanf("%d", &n);
    (abs((100 -n)) <= 10 || abs((200 - n)) <=10) ? printf("TRUE"):printf("FALSE");
    return 0;
}