#include<stdio.h>
int main()
{
    long int n1=0,n2=1,sum=0,fib=0,t;
    while(fib<4000000)
    {
     printf("%d   \n",fib);
     if(fib%2==0)
     sum+=fib;
     //t=fib;
     fib=n1+n2;
     n1=n2;
     n2=fib;
    }
    printf("%ld",sum);
    scanf("%d");
    return 0;
}
