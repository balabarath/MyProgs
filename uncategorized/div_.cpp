#include<stdio.h>
#include<iostream>
//using namespace std;
int main()
{
    int t,n,m,x;
    long long int c,l,i,lc,uc,y;
    scanf("%ld",&t);
    while(t--)
    {
      c=0;
      scanf("%ld %ld",&n,&m);
      l=(long long int)n+(n-1);
      x=n/m;
      lc=((long long int)x*(x+1))/2;
      c=((lc*m)/2)-((x*3)/4);
      y=l/m;
      uc=(y*(y+1))/2;
      uc-=lc;
      c+=((uc*m)/2)-(((y-x)*3)/4)-((uc*m)-((n+1)*(y-x)));
      printf("%d\n",c);
    }
    return 0;
} 
