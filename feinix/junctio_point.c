/*
 iterative binary search implmentation;
 running time: O(log n)
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    k=n-1;
    
    while(i<=k)
    {
      //printf("hi");
     j=(i+k)/2;
     if(a[j]==1&&a[j+1]==2)
     {
      printf("The junction point is %d",j+2);
      break;
     }
     else if(a[j]==2)
     {
      k=j-1;
     }
     else
     {
      i=j+1;
     }
     printf("%d %d %d\n",i,j,k);
    }
    
    scanf("%d");
    return 0;
}
