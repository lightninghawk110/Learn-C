#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if ( a+b == c || b+c == a || c+b == a)
    {
        printf("possible");
    }
    else
    {
        printf("NOT possible");
    }
}