// Write a C program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is the same.

#include<stdio.h>

int check_med_large(int a, int b, int c)
{
    int small, medium, large;
    small = medium = large = a;
    //small
    if (b < small )
    {
        small = b;
    }
    if (c < small)
    {
        small = c;
    }

    //large
    if (b > large )
    {
        large = b;
    }

    if ( c > large)
    {
        large = c;
    }

    //medium
    if ( b > small && b < large)
    {
        medium = b;
    }
    if (c > small && c < large)
    {
        medium = c;
    }

    printf(" Large : %d, medium : %d, small : %d", large, medium, small);

    if ( (medium - small) == (medium - large)) 
    {
            printf("true");
    }
}


int main()
{
    check_med_large(3,1,2);

}