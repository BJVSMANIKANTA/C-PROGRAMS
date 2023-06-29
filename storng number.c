#include<stdio.h>
main()
{
    int i,n,r,fact,dup,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    dup=n;
    while(n>0)
    {
    r=n%10;
    fact=1;
    for(i=1;i<=r;i++)
    {
        fact=fact*i;
    }
    n=n/10;
    sum=sum+fact;
    }
    if(sum==dup)
    {
        printf("the number is strong");
    }
    else
        {
            printf("the number is not strong");
        }

}
