#include<stdio.h>
main()
{
    int n,fib1=0,fib2=1,fib3;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d%\n",fib1);
    printf("%d%\n",fib2);
    fib3=fib1+fib2;
 while(fib3<=n)
     {
      printf("%d\n",fib3);
    fib1=fib2;
    fib2=fib3;
    fib3=fib1+fib2;
     }
}
