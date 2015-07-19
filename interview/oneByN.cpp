#include<stdio.h>
int main()
{
    int t,n, num;
    scanf("%d", &t);
    while(t--)
    {
       scanf("%d", &n);
       num = 10;
       while(num)
       {
          while(num<n)
          {
            printf("0");
            num*=10;
          }
          printf("%d", num/n);
          num=(num%n)*10;
       }
    }
    return 0;
}
