//06/05/12 11:07
#include<stdio.h>
int main()
{
    int n,n1,n2,t,m,no1,no2,n_1,n_2;
    scanf("%d",&n);
    no2=n1=n2=0;
    while(n--)
    {
     scanf("%d %d",&n_1,&n_2);
     n1+=n_1;
     n2+=n_2;
     if(n1>n2)
     {
      t=n1-n2;
      m=1;
     }
     else if(n2>n1)
     {
      t=n2-n1;
      m=2;
     }
     if(t>no2)
     {
      no2=t;
      no1=m;
     }
    
    }
    printf("%d %d\n",no1,no2);
    //scanf("%d");
     return 0;
}
