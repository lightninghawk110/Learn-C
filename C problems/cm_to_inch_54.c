#include<stdio.h>
int main()
{
    float inch,cm;
    printf("Enter the value in cm");
    scanf("%f",&cm);
    inch = cm*0.393701;
    printf(" %.2f inch",inch);

}