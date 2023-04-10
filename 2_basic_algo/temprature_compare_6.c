// Write a C program that checks two given temperatures and returns true if one temperature is less than 0 and the other is greater than 100, otherwise it returns false. 


#include<stdio.h>
int main()
{
    int temp1,temp2;
    printf("enter two temp");
    scanf("%d %d",&temp1, &temp2);
    (temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100 ) ? printf("TRUE") : printf("FALSE");
}