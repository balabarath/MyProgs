#include<stdio.h>
int main()
{
    int t,p,c,i,a[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    scanf("%d",&t);
    while(t--)
    {
      c=0;
      scanf("%d",&p);
      while(p>0)
      {
       for(i=11;i>=0;i--)
       if(p>=a[i])
       {
         p-=a[i];
         c++;
         break;     
       }
      }
      printf("%d\n",c);
    }
   // scanf("%d");
    return 0;
}
