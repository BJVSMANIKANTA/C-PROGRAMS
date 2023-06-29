#include<stdio.h>
main()
{
    int i,x,n,term=1,sum=1;
    printf("enter the base and limits");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        term=term*x;
        sum=sum+term;
    }
    printf("%d",sum);
}
