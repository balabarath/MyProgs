23-04-12 01:40
#include<stdio.h>
int eclo,start,end,i,j,s,y,c,b[100],k=0,ans[15],n=1,flag,a[10][10];
int eclosure(int);    
int main()
{
    scanf("%d %d",&s,&c); 
    for(i=0;i<s;i++)
    for(j=0;j<s;j++)
    a[i][j]=0;
    for(i=0;i<c;i++)
    {
   printf("Enter starting and ending:");
      scanf("%d %d",&start,&end);
      a[start][end]=end;
    }
    lab:
    printf("Enter the state to find the E-Closure-");
    scanf("%d",&eclo);
    ans[0]=eclo;
    eclosure(eclo);
    printf("\ncontinue..?-->");
    for(i=0;i<n;i++)
    printf("%d\t",ans[i]);
    scanf("%d",&y);
    if(y==1)
    goto lab;
    scanf("%d");
    return 0;                                    
}    
int eclosure(int e)
{
    for(j=0;j<s;j++)
      if(a[e][j]!=0)
     {
     flag=0;
     for(i=0;i<s;i++)
     if(ans[i]==a[e][j])
     flag=1;
     if(flag!=1)
     ans[n++]=a[e][j];
     b[k]=j++;
     k++;
     eclosure(j-1);
     j=b[k];
     }
    k--;
}
