#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    c+=a[i];
    }
    if(a[i]%2==1)
   {
     printf("NO");
     return 0;
   }
    for(i=n-1;i>0;i--)
    {
    
     if(a[i]==a[i-1])
     {
      a[i]=a[i-1]=0;
      i--; 
     }
     else if(((a[i-1]-a[i])==a[i-2])&&((i-2)>=0))
     {
       a[i]=a[i-1]=a[i-2]=0;
       i-=2;
     } 
    }
    for(i=0;i<n;i++)
    if(a[i]!=0)
    {
     printf("NO");
     return 0;
    }
    printf("YES");
   // scanf("%d");
    return 0;
}
