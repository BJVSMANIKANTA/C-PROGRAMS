#include<stdio.h>
main()
{
    int i,term=1, x,n;
    printf("enter the values of base and limit");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        term=term*x;
        if(i==n)
        {
            printf("%d",term);
        }
    }
}

