#include<stdio.h>
long fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else 
        return n*fact(n-1);
}
int main ()
{
    int n;
    long facts;
    printf("enter the number\n");
    scanf("%d",&n);
    facts=fact(n);
    printf("the factorial of the number is %ld",facts);
    return 0;
}