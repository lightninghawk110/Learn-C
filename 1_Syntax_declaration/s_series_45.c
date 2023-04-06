#include<stdio.h>
int main()
{
    float s=0;
    int i;
    for (i = 1; i <=50; i++)
    {
        s=s+1/i;
    }
    printf("%.2f", s);
    return 0;
}