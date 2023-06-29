#include<stdio.h>
main ()
{
    int n,i=1,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("the sum is %d",sum);
}

