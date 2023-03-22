#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c, peri;
    printf(" Enter 3 sides of triangle\n");
    scanf("%f %f %f", &a, &b, &c);
    if ((b + c) > a || (a + b) > c || (a + c) > b)
    {
        printf("VALID\n");
        peri = a + b + c;
        printf(" peri: %f\n", peri);
    }
    else
        printf(" NOT VALID");
    return 0;
}
