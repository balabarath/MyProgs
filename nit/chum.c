#include<stdio.h>
int swap(int* a,int *b)
{
 *a=*a+*b;
 *b=*a-*b;
 *a=*a-*b;
 return 1;
}
int main()
{
 int i,n,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
 for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
 swap(&a[i],&a[j]);
}
for(i=0;i<n;i++)
 printf("%d ",a[i]);
 scanf("%c");
 return 0;
}
