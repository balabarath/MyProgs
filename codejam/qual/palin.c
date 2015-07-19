#include<stdio.h>
#include<math.h>
int ispal(long double num)
{
    long double r=0,n=num;
     printf("%Le ",r);
    while(n>0)
    {
     r*=10;
     r+=fmod(n,10);
    
     n/=10;
    }
    if(num==r)
    return 1;
    return 0;
}
int main()
{
    long double a,b,i,fk;
    int t,c,k=1;
    scanf("%d",&t);
    while(t--)
    {
     c=0;
     printf("Case #%d: ",k);
     scanf("%Lf",&a);
     scanf("%La",&b);
     printf("%Lf %Lf",a,b);
     for(i=a;i<=b;i++)
     {printf(" Le");
      if(ispal(i))
      {
       fk=sqrt(i);
       
       if(fk*fk==i)
       if(ispal(fk))
       c++;
      }
     }
     printf("%d",c);
     if(t>0)
     printf("\n");
     k++;
    }
    return 0;
}
