#include<stdio.h>
#include<math.h>
void main(){
    double a,b,c,x,y,D;
    printf("Enter 3 number\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    D = (b*b - 4*a*c);
    if (D> 0 &&  a!= 0)
    {
        D = sqrt(D);
        x = (-b + D)/(2*a);
        y = (-b - D)/(2*a);
        printf(" Your root value are : %lf %lf\n",x,y);
    }
    else
    printf("Impossible Root");    
}