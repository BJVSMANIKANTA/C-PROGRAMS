#include<stdio.h>
main()
{
    int i,j,k,s=40,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("   *");
        }
        s=s-2;
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*   ");
        }
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        s=s-2;
        printf("\n");
    }
}

