#include<stdio.h>
void print(int n,int x[])
{
     int i,j,t;
     char c[100][100];
     for(i=1;i<=n;i++)
     printf("%d ",x[i]);
     printf("\n");
    scanf("%d",&t);
 }
 int place(int x[],int n)
 {
     int i;
     for(i=1;i<n;i++)
     if((x[i]==x[n])||(i-x[i]==n-x[n])||i+x[i]==n+x[n])
     return 0;
     return 1;
 }
 void nqueen(int n)
 {
       int x[100],count=0,k=1;
    x[k]=0;
    while(k!=0)
    {
               x[k]+=1;
               while((x[k]<=n)&&(!place(x,k)))
               x[k]+=1;
               if(x[k]<=n)
               if(k==n)
               {
                       count++;
                       printf("%d\n",n);
                       print(n,x);
               }
               else
               {
                   k++;
                   x[k]=0;
                   
               }
               else 
               k--;
    } 
  }
int main()
{
   int n;
   while(1)
   {
   scanf("%d",&n);
   nqueen(n);
   }
   scanf("%d");
    return 0;
}
