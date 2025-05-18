#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);

    }
}
int main()
{
    int num1,nmu2;
    printf("enter the num of which yuo want find hcf\n");
    scanf("%d%d",&num1,&nmu2);
    printf("the Hcf of %d and %d is %d\n",num1,nmu2,gcd(num1,nmu2));
    return 0;
}