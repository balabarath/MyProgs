#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    clock_t start;
    clock_t end;
    double running_time;
    start=clock();
    int n,m,f;
    long long int i,p=600851475143LL;
    for(i=3;i<775146;i+=2)
    {
     if(p%i==0)
     {
      printf("%d    \n",i);
      f=0;
      for(n=3;n<sqrt(i);n+=2)
      {
       if(i%n==0)
       {f=1;
        break;
       }
      }
      if(!f)
      {
      m=i;
      }
     }
    }
    printf("%d",m);
    end=clock();
    running_time=(double)(end-start)/CLOCKS_PER_SEC/1000.0;
    printf("\n %lf  ",running_time);
    scanf("%d");
    return 0;
}
