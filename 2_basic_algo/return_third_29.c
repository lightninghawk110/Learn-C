//Write a C program to compute the sum of three given integers. Return the third value if the two values are the same.


#include <stdio.h>
#include <stdlib.h>

int main(void){    
    printf("%d",test(4, 5, 7));
    printf("\n%d",test(7, 4, 12));
    printf("\n%d",test(10, 10, 12));
    printf("\n%d",test(12, 12, 18));
    }       
    int test(int x, int y, int z)
         {
            if (x == y && y == z) return 0;
            if (x == y) return z;
            if (x == z) return y;
            if (y == z) return x;
            return x + y + z;
         }