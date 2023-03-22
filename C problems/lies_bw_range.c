#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    if ( a<0 || a>80)
    { 
        printf("ERROR");
    }
    else if (a>=0 && a<21)
    {
        printf("The range is [0,21]");
    }
    else if (a>=21 && a<41)
    {
        printf("The range is [21,41]");
    }
    else if (a>=41 && a<61)
    {
        printf("The range is [41,61]");
    }
    else if (a>=61 && a<81)
    {
        printf("The range is [61,81]");
    }
    return 0;
}
