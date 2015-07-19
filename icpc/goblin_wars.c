#include<stdio.h>
#include<queue>
#define for(i,n) for(i=0;i<n;i++)
#define end scanf("%d")
int main()
{
    int r,c,t,i,j,l;
    queue<int> q;
    scanf("%d",&t);
    while(t--)
    {
     l=0;
     scanf("%d %d",&r,&c);
     char a[r][c],b[r][c];
     for(i,r)
     for(j,r)
     scanf("%c",&a[i][j]);
     strcpy(b,a);
      for(i,r)
      for(j,r)
      if(a[i][j]>='a'&&a[i][j]<='z')
      {
       q.push(i);
       q.push(j);
       //l+=2;
      }
      while(!q.empty())
      {
       i=q.front();
       q.pop()
       j=q.front();
       q.pop();
       
       if(a[i-1][j]=='.')
       b[i-1][j]==b[i][j];
       else if(a[i-1][j]>='a'&&a[i-1][j]<='z')
       a[i-1][j]='*';
       
       if(a[i+1][j]=='.')
       b[i+1][j]==b[i][j];
       else if(a[i+1][j]>='a'&&a[i+1][j]<='z')
       a[i+1][j]='*';
       
       if(a[i][j-1]=='.')
       b[i][j-1]==b[i][j-1];
       else if(a[i][j-1]>='a'&&a[i][j-1]<='z')
       a[i][j-1]='*';
       
       if(a[i][j+1]=='.')
       b[i][j+1]==b[i][j+1];
       else if(a[i][j+1]>='a'&&a[i][j+1]<='z')
       a[i][j+1]='*';
      }
      while(strcmp(a,b))
      {
      strcpy(b,a);
      for(i,r)
      for(j,r)
      if(a[i][j]>='a'&&a[i][j]<='z')
      {
       q.push(i);
       q.push(j);
       //l+=2;
      }
      while(!q.empty())
      {
       i=q.front();
       q.pop()
       j=q.front();
       q.pop();
       
       if(a[i-1][j]=='.')
       b[i-1][j]==b[i][j];
       else if(a[i-1][j]>='a'&&a[i-1][j]<='z')
       a[i-1][j]='*';
       
       if(a[i+1][j]=='.')
       b[i+1][j]==b[i][j];
       else if(a[i+1][j]>='a'&&a[i+1][j]<='z')
       a[i+1][j]='*';
       
       if(a[i][j-1]=='.')
       b[i][j-1]==b[i][j-1];
       else if(a[i][j-1]>='a'&&a[i][j-1]<='z')
       a[i][j-1]='*';
       
       if(a[i][j+1]=='.')
       b[i][j+1]==b[i][j+1];
       else if(a[i][j+1]>='a'&&a[i][j+1]<='z')
       a[i][j+1]='*';
      }
    }
    }
    for(i,n)
    {
     for(j,n)
     {
      printf("%c ");
     }
     printf("\n");
    }
    return 0;
}
