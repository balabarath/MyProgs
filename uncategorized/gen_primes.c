#include<stdio.h>
int main()
{
    int i,j,f,c=0;
    for(i=2;i<1000;i++)
    {
     f=0;
     for(j=2;j*j<=i;j++)
     if(i%j==0)
     {
      f=1;
      break;
     }
     if(!f)
     {
     printf("%d,",i);
     c++;
     }
     printf("%d\n",c);
    }
    return 0;
}
