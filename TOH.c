#include<stdio.h>
int TOH(int,char,char,char);
int main()
{
    int n;
    printf("enter the number of disk\n");
    scanf("%d",&n);
    TOH(n,'O','D','I');
    return 0;
}
 int TOH(int n, char A, char B, char C)
{
    if(n>0)
     {
         TOH(n-1,A,C,B);
        printf("\n move %d from %c to %c",n,A,B);
        TOH(n-1,C,B,A);
     }
}