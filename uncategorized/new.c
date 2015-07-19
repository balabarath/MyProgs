#include<stdio.h>
#include<conio.h>
 
#define MAX 100
 
int gcd(int a, int b)
  { 
    if (b == 0) 
    return a; 
 
    return gcd(b, a % b); 
  }
 
int main()
  {
     int t,n,d,arr[MAX],i,j,k;
     
     scanf("%d",&t);
     
      while(t--)
       {
        scanf("%d",&n);
        
         for(i=0;i<n;i++)
          {
           scanf("%d",&arr[i]);
          }
       
       d = arr[0];
        
        for(j=1;j<n;j++)
         {
           d = gcd(d,arr[j]);
           printf("%d",d);
         }
       
     //  for(k=0;k<n;k++)
       //   {
        //   printf("%d ",arr[k]/d);
         //  if(k==n-1) printf("");
         // else printf(" ");
         // }
       
        
       }
     
         
    getch();
    return 0;
  }
