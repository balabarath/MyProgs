#include<stdio.h>
int main()
{
    long int n,t,l,i,n1;
    scanf("%ld",&t);
    while(t--)
    {
      scanf("%ld",&n);
      n1=n&(n-1);
     // printf("   %d\n",n&(n-1));
      if(n1==0)
      printf("1\n");
      else
     {
      i=2;
      while(i<n)
      i*=2; 
      i/=2;
      printf("%ld\n",2*(n-i)+1);
     }
    }
    return 0;
}
