#include<stdio.h>
main()
{
    int i,x,n,term=1;
    float sum=1;
    printf("enter the base and limit");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        term=term*x;
        if(i%2==0)
        {
           sum=sum+(float)i/term;
        }
    }
    printf("%f",sum);
}

