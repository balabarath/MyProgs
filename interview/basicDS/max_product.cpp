#include<stdio.h>
// https://www.hackerearth.com/may-easy-challenge-15/algorithm/panda-and-maximum-product/
#define max(a, b) a>b?a:b
int main()
{
    int t,n,min,min2,max,max2,tmpmin,tmpmax;
    scanf("%d %d", &t, &n);
    min = max = n;
    min2 = 100000009;
    max2 = -100000009;
    while(--t)
    {
       scanf("%d", &n);
       if(n > max)
       {
         max2 = max;
         max = n;
       }
       else if(n > max2)
       {
         max2 = n;
       }
       else if(n < min)
       {
         min2 = min;
         min = n;
       }
       else
       {
         min2 = n;
       }
    }
    printf("%d %d %d %d", min, min2, max, max2);
    printf("%d", max((min*min2),(max*max2)));
    scanf("%d");
    return 0;
}
