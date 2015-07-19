#include<stdio.h>
//#include<iostream>
#include<queue>
#include<string.h>
#include<stdlib.h>
#define for(i,n) for(i=0;i<n;i++)

#define end scanf("%d")
using namespace std;
int main()
{
    int r,c,f,i,j,l,t;
    queue<int> q;
    scanf("%d",&t);
    while(t--)
    {
     l=0;
     scanf("%d %d",&r,&c);
     char a[r+1][c+1];
     char b[r+1][c+1];
     for(i,r)
     //for(j,c)
     scanf("%s",&a[i]);
   // a[i][j]='\0';
     
    
    // b[i][j]='\0';
     
  /*  for(i,r)
    {
     for(j,c)
     {
      printf("%c ",a[i][j]);
     }
     printf("\n");
    }*/
      for(i,r)
      for(j,r)
      if(a[i][j]>='a'&&a[i][j]<='z')
      {
       q.push(i);
       q.push(j);
       //l+=2;
      }
     
      while(1)
      {
              f=0;
              for(i,r)
              for(j,c)
              if(a[i][j]!=b[i][j])
              {
               f=1;
               break;
              }
              if(!f)
              break;
              
               for(i,r)
               for(j,c)
               b[i][j]=a[i][j];
              
             for(i,r)
     for(j,c)
     b[i][j]=a[i][j];
     b[i][j]='\0'; 
      
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
       q.pop();
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
    
    for(i,r)
    {
     for(j,c)
     {
      printf("%c ",b[i][j]);
     }
     printf("\n");
    }
}
    end;
    return 0;

}
