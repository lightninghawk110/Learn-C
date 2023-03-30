#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter x & y");
    scanf("%f %f",&x,&y);
    if (y !=0)
    {
        printf("%f", x/y);
    }
    else
        printf("division not possible\n");
    
}