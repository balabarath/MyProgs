#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,count;
    scanf("%d", &t);
    while(t--)
    {
      count = 1;
      scanf("%d", &n);
      int a[n];
      for(i = 0; i < n; i++)
      {
         scanf("%d",&a[i]);
      }
      sort(a, a+n);
      for(i = 1; i < n; i++)
      {
         if(a[i]!=a[i-1])
         {
           count++;
         }
      }
      printf("%d\n", count);
    }
    return 0;
}
