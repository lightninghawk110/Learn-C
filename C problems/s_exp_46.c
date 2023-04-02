#include<stdio.h>
int main()
{
    int i=1,j=2;
    float S = 1;
    for (i = 3; i <= 7; i+=2)
    {
        S += (float)i/j;
        j*=2;
    }
    printf("\n%.2f\n",S);
    return 0;
}