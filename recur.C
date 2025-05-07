#include<stdio.h>
//to print out the fibo series using recursion 
int fibo(int,int,int ,int);
int main()
{
    int term;
    int first_term=0;
    int second_term=1;
    int result=0;
    printf("enter the term:\n");
    scanf("%d",&term);
    printf("the fibonacci series is :\n");
    if(term>=1)
    {
        printf("%d\t",first_term); 
    }
    if(term>=2)
    {
      printf("%d\t",second_term);
    }
    fibo(first_term,second_term,result,term);
    return 0;

}
int fibo(int f,int s,int r,int t)
{
    if(t<=2)
    {
        return 0 ;

    }
    else
    {
        r=f+s;
        printf("%d\t",r);
        f=s;
        s=r;
        fibo(f,s,r,t-1);
    }
}