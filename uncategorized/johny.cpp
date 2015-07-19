#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,k,i,j,num;
    scanf("%d", &t);
    while ( t-- )
    {
          scanf("%d", &n);
          int a[n];
          for(i = 0; i < n; i++)
          {
                scanf("%d", &a[i]);
          }
          scanf("%d", &k);
          num = a[k];
          sort(a, a+n);
          for(i = 0; i < n; i++)
          {
                if( a[i] == num )
                {
                    break;
                }
          }
          printf("%d\n", i);
    }
    return 0;
}
