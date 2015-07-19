#include<stdio.h>
int main()
{
    int t, n, tk, l, result, remain;
    scanf("%d", &t);
    while(t--)
    {
      scanf("%d", &n);
      result = remain = 0;
      while(n--)
      {
        scanf("%d %d",&l,&tk);
        if(remain - l < 0)
        {
          result += (l - remain);
          remain = tk;
        }
        else
        {
          remain -= l;
          remain += tk;                  
        }
      }
      printf("%d", result);
    }
    scanf("%d");
    return 0;
}
