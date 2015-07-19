#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int ispal(long long num)
{
    long long n=num,r=0;
     
    while(n>0)
    {
     r*=10;
     r+=n%10;
     n/=10;
    // printf("%d ",r);
    }
    if(num==r)
    return 1;
    return 0;
}
int main()
{
    long long int b,i,fk,a;
    int t,c,k=1;
    scanf("%d",&t);
    while(t--)
    {
     c=0;
     printf("Case #%d: ",k);
     cin>>a>>b;
     for(i=a;i<=b;i++)
     {
      if(ispal(i))
      {
       fk=sqrt(i);
       if(fk*fk==i)
       if(ispal(fk))
       c++;
      }
     }
     printf("%d",c);
     if(t>0)
     printf("\n");
     k++;
    }
    return 0;
}
