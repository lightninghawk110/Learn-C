#include<stdio.h>
int main()
{
    int a,b,c,sum=0;    
    printf("Enter three num");
    scanf("%d %d %d",&a, &b, &c);
    if ((a <=10 || a>=20) || (a==13 || a==17)) 
    {
        sum = sum + a;
    }
    if ((b <=10 || b>=20) || (b==13 || b==17)) 
    {
        sum = sum + b;
    }
    if ((b <=10 || b>=20) || (b==13 || b==17)) 
    {
        sum = sum + c;
    }
    printf("sum = %d\n", sum);
    return 0;
}