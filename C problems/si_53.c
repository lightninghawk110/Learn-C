#include<stdio.h>
int main()
{
    int si =0, p,r,t;
    printf("enter the value of p,r, t");
    scanf("%d %d %d",&p, &r, &t);
    si = (p*r*t)/100;
    printf("%d",si);
}