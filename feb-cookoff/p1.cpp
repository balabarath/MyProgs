#include<stdio.h>
#include<iostream>
using namespace std;
#define max(a,b) a>b?a:b
int main()
{
    int n,q,r,c,i;
    long long max1,max2;
    char ch[10];
    scanf("%d %d",&n,&q);
    int a[n],b[n];
    for(i=0;i<n;i++)
    a[i]=b[i]=0;
    max1=max2=0;
    while(q--)
    {
     scanf("%s %d %d",ch,&r,&c);
     if(ch[0]=='R')
     a[r-1]+=c;
     else 
     b[r-1]+=c;
     
    }
    for(i=0;i<n;i++)
    {
     if(a[i]>max1)
     max1=a[i];
     if(b[i]>max2)
     max2=b[i];
    }
    printf("%lld",max1+max2);
    return 0;
}
