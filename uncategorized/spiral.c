#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    i=j=0;
    while(1)
    {
    for(;j<n,k<i*j;j++)
     {
      printf("%d",a[i][j]);
      k++; 
     }
     j--;
     i++;
     for(;i<m,k<i*j;i++)
     {
      printf("%d",a[j][i]);
      k++; 
     }
     i--;
     j--;
     for(;j>0,k<i*j;j--)
     {
      printf("%d",a[j][i]);
      k++; 
     }
     i--;
     j++;
     for(;i>0,k<i*j;i--)
     {
      printf("%d",a[j][i]);
      k++; 
     }
     if(k==i*j)
     break;
    
     i++;
     j++;
     m--;
     n--;
}
    scanf("%d");
    return 0;
    
}
