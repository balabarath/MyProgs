//04/05/12 00:15
#include<stdio.h>
int main()
{
    int t,f;
    long n,no;
    scanf("%d",&t);
    while(t--)
    {
      f=0;
      scanf("%ld",&n);
      if(n%7==0)
      {
      printf("%d\n",n);
      f=1;
      }
      else
      {
          no=n;
          while(no>=0)
          {
          no-=4;
          if(no==0)
          {
          printf("0\n");
          f=1;
          break;
          }
          else if(no%7==0)
           {
           printf("%d\n",no);               
           f=1;
           break;
           }
          }
      }
     if(f==0)
      printf("-1\n");
     /* if((n%7==0)||(n%7%4==0))
      {
      no=n-(n%7%4);
      printf("%ld\n",no);
      }
      else
      printf("-1\n");*/
    }
   // scanf("%d");
    return 0;
}

