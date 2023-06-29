#include<stdio.h>
main()
{
    int i,j,x,n,fact=1,term=1;
    float sum=1;
    printf("enter the base and limit");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
         fact=fact*j;
        }
        term=term*x;
        sum=sum+(float)fact/term;
    }
    printf("%f",sum);


}
