#include<stdio.h>
main()
{
    int i,n,fib1=0,fib2=1,fib3;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d%\n",fib1);
    printf("%d%\n",fib2);
    for(i=1;i<n;i++)
    {
     fib3=fib1+fib2;
     printf("%d\n",fib3);
     fib1=fib2;
     fib2=fib3;
    }
}
