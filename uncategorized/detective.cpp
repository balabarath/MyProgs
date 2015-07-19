#include<iostream>
#include<stdio.h>
int main()
{
short t;
long n,i,prev;
long long c;
long a;
scanf("%d",&t);
while(t--)
{
  c=0; 
  scanf("%ld",&n);
  
  scanf("%ld",&prev);
  c=prev;
  for(i=1;i<n;i++)
  {
  scanf("%ld",&a);
  if(a==prev);
  else if(a>prev)
  c=c+(a-prev);
  else 
  c+=a;
  prev=a; 
  }
  printf("%ld\n",c);
}
//scanf("%d");
return 0;
}




