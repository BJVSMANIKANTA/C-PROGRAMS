#include<stdio.h>
void main()
{
    int n,r=0,dup,sum=0;
    dup=n;
    printf("enter the  number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==dup)
    {
        printf("the number is amstrong");
    }
    else
    {
        printf("the number is not amstrong");
    }
}
