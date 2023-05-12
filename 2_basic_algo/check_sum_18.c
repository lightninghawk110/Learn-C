//  Write a C program that accepts two integers and checks whether either one of them is 5 or their sum or difference is 5. If any of these conditions are met, the program returns true. Otherwise, it returns false. 

#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("%d",test(5, 4));
    printf("\n%d",test(4, 3));
    printf("\n%d",test(1, 4));
    }   
    
    int test(int x, int y)
         {
          return x == 5 || y == 5 || x + y == 5 || abs(x - y) == 5;
        }
