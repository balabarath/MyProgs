//this program generates the prime number upto 999999999;
#include<stdio.h>
int main()
{
    long n,i,j,k=0;
    for(i=2;i<=999999999;i++)
    {
    n=0;
    for(j=2;j*j<=i;j++)
    {
    if(i%j==0)
    {
     n=1;
     break;
    }
    }
    if(n==0)
    {
    printf("a[%ld]=%d,",k,i);
    k++;
    }
    }
    return 0;
}
