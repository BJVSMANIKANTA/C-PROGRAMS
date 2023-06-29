#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=1000;i++)
    {
        if(i%n==0)
        {
            printf("%d\n",i);
        }
    }
}
