#include<stdio.h>
int in(long &x)
{
     x=0;
     int ch;
     for(ch=getchar();ch>='0'&&ch<='9';ch=getchar())
     x=x*10+ch-'0';
     
}
int main()
{
long t;
long n,i,sum,s;
in(t);
while(t--)
{
in(&n);
long a[n];
in(a[0]);
sum=0;
s=a[0];
for(i=1;i<n;i++)
{
  in(a[i]);
  if(a[i]<s)
  s=a[i];
  else if(a[i]-s>sum)
  sum=a[i]-s;
}
if(sum==0)
printf("UNFIT\n");
else
printf("%ld\n",sum);
}
scanf("%d");
}
