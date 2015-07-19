#include<stdio.h>
int main()
{
    long n,m=0,i;
    scanf("%ld",&n);
    while(n>0)
    {
    m*=10;
    m=m+(n%10);
    n/=10;
    }
    printf("    %ld",m);
    scanf("%d");
    return 0;
} 
