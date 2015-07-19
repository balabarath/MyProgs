//02/05/12 18:36
#include<stdio.h>
int main()
{
    long t;
    unsigned long n,m,i,j,c;
    scanf("%ld",&t);
    while(t--)
    {
     c=0;
     scanf("%ld %ld",&n,&m);
     for(i=1;i<=n;i++)
     for(j=i+1;j<=n;j++)
     if((i+j)%m==0)
     c++;
     //printf("%d\n",c++);
     printf("%d\n",c);
    } 
    scanf("%d");
    return 0;
} 
