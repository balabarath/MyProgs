#include<stdio.h>
int cast(int num)
{
    if(num<0)
    num*=-1;
    return num;
}
int main()
{
    int t,a,b,x,y,d,n;
    scanf("%d",&t);
    while(t--)
    { 
     scanf("%d %d %d",&n,&a,&b);
     d=0;
     while(n--)
     {
      scanf("%d %d",&x,&y);
      d+=(cast(a-x)+cast(b-y));
     }
     printf("%d\n",2*d);
    }
    return 0;
}
