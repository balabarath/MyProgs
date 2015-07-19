#include<stdio.h>
int main()
{
    int x[100000],y[100000],n,d,i,t,tot=1,prev,f,min_i=9999999,max_i=0,no=0,was;
    scanf("%d %d",&n,&d);
    t=n;
    for(i=0;i<n;i++)
    {
     scanf("%d %d",&was,&y[i]);
     if(min_i>y[i])
     {
      min_i=y[i];
     }
     else if(max_i<y[i])
     {
      max_i=y[i];
     }
    }
    prev=y[0];
    x[0]=0;
    f=i=0;
    for(;i<n;)
    {
      f=0;
      while(y[i]>prev&&i<n){
      prev=y[i];
      i++;
      f=1;
      }
      if(f)
       x[tot++]=i-1;
      
      while(y[i]<prev&&i<n){
      prev=y[i];
      i++;
      f=2;
      }
      if(f==2)
      x[tot++]=i-1;
      
      while(y[i]==prev&&i<n){
      prev=y[i];
      i++;
      f=3;
      }
      if(f==3)
       x[tot++]=i-1;
 }
 x[tot++]=n-1;
    
    prev=-1;
    for(i=0;i<tot;i++)
    {
    if(prev!=x[i])
    {
    no++;
    prev=x[i];
    //printf("%d %d\n",x[i]+1,y[x[i]]);
    }
    }
    printf("%d\n",no);
    prev=-1;
    for(i=0;i<tot;i++)
    {
    if(prev!=x[i])
    {
    no++;
    prev=x[i];
    printf("%d %d\n",x[i]+1,y[x[i]]);
    }
    }
  //  scanf("%d");
        return 0;
}
