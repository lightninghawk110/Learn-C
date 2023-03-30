#include<stdio.h>
int main()
{
    int corr_pass = 1234, ent_pass;
    do
    {
        printf("enter the password\n");
        scanf("%d", &ent_pass);
    }while (ent_pass != corr_pass);
    if (ent_pass == corr_pass)
    {
        printf("Correct Password\n");
    }
    else
    {
        printf("Incorrect Password\n");
    }
    
    
    
}