#include<stdio.h>
int main()
{
    long int t,n,s,taxi=0;
    scanf("%d",&t);
    s=0;           
    while(t--)
    {
     
     scanf("%ld",&n);
     s+=n;
    }
    taxi=s/4;
    if(s%4>0)
    taxi++;
    printf("%ld",taxi);
    scanf("%d");
    return 0;
} 
