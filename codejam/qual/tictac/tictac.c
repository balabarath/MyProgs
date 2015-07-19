#include<stdio.h>
int main()
{
    char a[4][5];
    int i,j,f,t,n=4,s[4],k=1;
    scanf("%d",&t);
    while(t--)
    {
     printf("Case #%d: ",k);
     for(i=0;i<n;i++)
     scanf("%s",a[i]);
     
     for(i=0;i<n;i++)
     {
      s[0]=s[1]=s[2]=s[3]=0;
      for(j=0;j<n;j++)
      {
       if(a[i][j]=='X')
       s[0]++;
       else if(a[i][j]=='O')
       s[1]++;
       else if(a[i][j]=='T')
       s[2]++;
       else if(a[i][j]=='.')
       s[3]++;
      }
      if(s[0]==4||(s[0]==3&&s[2]==1))
      {
       printf("X won");
       goto end;
      }
      else if(s[1]==4||(s[1]==3&&s[2]==1))
      {
       printf("O won");
       goto end;
      }
     } 
     
     for(i=0;i<n;i++)
     {
      s[0]=s[1]=s[2]=0;
      for(j=0;j<n;j++)
      {
       if(a[j][i]=='X')
       s[0]++;
       else if(a[j][i]=='O')
       s[1]++;
       else if(a[j][i]=='T')
       s[2]++;
       else if(a[j][i]=='.')
       s[3]++;
      }
      if(s[0]==4||(s[0]==3&&s[2]==1))
      {
       printf("X won");
       goto end;
      }
      else if(s[1]==4||(s[1]==3&&s[2]==1))
      {
       printf("O won");
       goto end;
      }
     }
     
      s[0]=s[1]=s[2]=0;
      for(i=0;i<n;i++)
      {
       if(a[i][i]=='X')
       s[0]++;
       else if(a[i][i]=='O')
       s[1]++;
       else if(a[i][i]=='T')
       s[2]++;
       else if(a[i][i]=='.')
       s[3]++;
      }
      if(s[0]==4||(s[0]==3&&s[2]==1))
      {
       printf("X won");
       goto end;
      }
      else if(s[1]==4||(s[1]==3&&s[2]==1))
      {
       printf("O won");
       goto end;
      }
      
      s[0]=s[1]=s[2]=0;
      for(i=0,j=3;i<n;i++,j--)
       {
       if(a[i][j]=='X')
       s[0]++;
       else if(a[i][j]=='O')
       s[1]++;
       else if(a[i][j]=='T')
       s[2]++;
       else if(a[i][j]=='.')
       s[3]++;
      }
      if(s[0]==4||(s[0]==3&&s[2]==1))
      {
       printf("X won");
       goto end;
      }
      else if(s[1]==4||(s[1]==3&&s[2]==1))
      {
       printf("O won");
       goto end;
      }
      
      if(s[3]!=0)
      printf("Game has not completed");
      else
      printf("Draw");
      end:
      k++;
      if(t>0)
      printf("\n");
     
    }
    return 0;
}
