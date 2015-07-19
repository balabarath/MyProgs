#include<stdio.h>
int main()
{
    long int t,n,i,no,j,f;
    scanf("%ld",&t);
    while(t--)
    {
     scanf("%ld",&n);
     if(n==1||(n&(n-1)==0))
     printf("1\n");
     else
     {
       no=n;
       i=1;
       f=1;
       int a[n];
       memset(a,-1,sizeof(a));
      // for(i=0;i<n;i++)
       //printf("%d ",a[i]);
       a[i]=0; 
       j=++i;
       no--;
       while(no>1)
       {
           if(a[i]&&f==1)
           {
            f==2;           
           }
           else if(a[i]&&f==2)
           {
            no--;
            a[i]=0;
           }
           i=(i++)%n;
       }
       while(1)
       {
        if(a[i])
        break;
        i=i++%n;
       }
       printf("%d\n",a[i]);
     }
    
    }
    return 0;
}
