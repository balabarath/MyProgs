#include<stdio.h>
int josephus(int n,int k)
{
    if(n==1)
    return 1;
    else
    return (josephus(n-1,k)+k-1)%n+1;
}
int main()
{
    int t,n,k,i;
    //scanf("%d",&n);
    while(1)
    {
     scanf("%d",&n);
     if(n==0)
     break;
     i=1;
     while(i<=n)
     {
      if(josephus(n,i)==13)
      break;
      i++;        
     }    
     printf("%d\n",i);
     
    }
    return 0;
}
