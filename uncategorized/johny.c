#include<stdio.h>
int main()
{
int t,n,k,i,j,num,count;
scanf("%d", &t);
while ( t-- )
{
scanf("%d", &n);
int a[n];
count = 0;
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
scanf("%d", &k);
num = a[k - 1];
for(i = 0; i < n; i++)
{
if( a[i] < num )
{
count ++;
}
}
printf("%d\n", count+1);
}
return 0;
}
