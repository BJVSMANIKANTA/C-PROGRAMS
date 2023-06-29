#include<stdio.h>
main()
{
    int n,i=0;
    printf("enter the limit");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}
