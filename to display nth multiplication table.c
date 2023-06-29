#include<stdio.h>
main()
{
    int i,n,r=0;
    printf("enter the value of multiplicent ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        r=n*i;
        printf("%d*%d=%d\n",n,i,r);
    }
}
