#include<stdio.h>
int main()
{
    int i,t,n=10,num,a[10];
    num=t=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    num=a[0];
    for(i=1;i<n;i++)
    {
      if(a[i]>=num)
     {
     t=num; 
     num=a[i];
     printf("%d\n",num);}
     if(a[i]<num&&a[i]>t)
      t=a[i];
    }
    printf("%d",t);
    scanf("%d");
    return 0;
} 
