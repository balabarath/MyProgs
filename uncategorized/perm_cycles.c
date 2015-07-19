//06/05/12 23:52
#include<stdio.h>
int main()
{
    int n,i,j,k,s;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    b[i]=0;
    }
    i=k=1;
      while(i<=n)
      {
       j=i;
      while(i!=a[j])
       {
        printf("%d %d",j,a[j]);
        b[j]=-1;
        j=a[j];
       }
       //printf("%d %d",j,a[j]);
       printf("\n");
      scanf("%d",&s);
      for(;b[k]!=0;k++)
      i=k;
      }
      scanf("%d");          
    return 0;
}
