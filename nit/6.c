#include<stdio.h>
#include<string.h>
int min(int x,int y)
{
    if(x<y)
    return x;
    return y;
}
int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    char a[n][112];
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    m=strlen(a[0]);
    int in[n][m];
    for(i=0;i<n;i++)
     for(j=0;j<m;j++)
      in[i][j]=(int)(a[i][j]-48);
    
    in[0][0]=1;
     for(i=1;i<m;i++){
     if(in[0][i]==0)
      in[0][i]=in[0][i-1]+1;
      else
      in[0][i]=99999;}
      
     for(i=1;i<n;i++)
     {
      if(in[i][0]==0)
      in[i][0]=in[i-1][0]+1;
      else
      in[i][0]=99999;
      } 
       
            
           
           for(i=1;i<n;i++)
            for(j=1;j<m;j++)
             {
               if(a[i][j]=='0')
              in[i][j]=1;
              else
              in[i][j]=99999;
              in[i][j]+=min(in[i-1][j-1],min(in[i-1][j],in[i][j-1]));
             }
            
            
             printf("%d ",in[i-1][j-1]);
            
    return 0;
}
