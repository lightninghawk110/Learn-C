#include<stdio.h>
int main()
{
    double a,b,c,d,min,max,res;
    printf("Enter the value of a,b,c,d");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    min = (a < b && a < c && a < d ? a : (b < c && b < d ? b :(c < d?c:d)));
    max = (a > b && a > c && a > d ? a : (b > c && b > d ? b :(c > d?c:d)));
    res = max-min;
    printf("result: %lf\n",res);
    return 0;
}