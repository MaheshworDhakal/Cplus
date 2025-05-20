#include<stdio.h>
int fibo(int term)
{
    if (term==0||term==1)
    {
        return term;

    }
    else
    {
        return fibo(term-1)+fibo(term-2);
    }
}
int main ()
{
    int n,i;
    printf("enter the term till were you want to print the fibo series :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",fibo(i));
    }
    return 0;
}