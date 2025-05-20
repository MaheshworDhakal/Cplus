#include<stdio.h>
int sumofnatural(int n)
{
    if(n==1)
        return n;
    else
        return n+sumofnatural(n-1);

}
int main ()
{
    int n ;
    printf("enter the number up to which you want to find the sum :\n");
    scanf("%d",&n);
    int result=sumofnatural(n);
    printf("the sum of natural number is %d",result);
    return 0;
}