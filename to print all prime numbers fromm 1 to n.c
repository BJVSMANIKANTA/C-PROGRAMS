#include<stdio.h>
main()
{
    int i,n,j,count;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("the prime numbers are%d\n",i);
        }
    }
}

