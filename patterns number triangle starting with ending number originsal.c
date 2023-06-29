#include<stdio.h>
main()
{
    int i,j,k,s=40,n,m=2;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m--;
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%4d",m++);
        }
        s=s-2;
        printf("\n");
    }
}

