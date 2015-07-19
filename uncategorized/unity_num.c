#include<stdio.h>
int main()
{
    long n,num;
    scanf("%d",&n);
    do
    {
    
     num=0;
     while(n>0)
     {
               num=num+n%10;
               n/=10;
              //  printf("%d\n",num);
     }
     n=num;
    }while(num>9);
    printf("%d",num);
    scanf("%d");
}
