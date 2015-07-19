#include<stdio.h>
int main()
{
    int a[3][3],i,j,n=3,p,np;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    scanf("%d",&p);
    if(p==1)
    np=2;
    else
    np=1;
    
    for(i=0;i<n;i++)
    {
      if((a[i][0]==p&&a[i][1]==p)&&((a[i][2]==0)))
      {
       printf("%d 2",i);
       return 0;
      }
      else if((a[i][0]==np&&a[i][1]==np)&&((a[i][2]==0)))
      {
       printf("%d 2",i);
       return 0;
      }
      else if((a[i][0]==p&&a[i][2]==p)&&((a[i][1]==0)))
      {
       printf("%d 1",i);
       return 0;
      }
      else if((a[i][0]==np&&a[i][2]==np)&&((a[i][1]==0)))
      {
       printf("%d 1",i);
       return 0;
      }
      else if((a[i][1]==p&&a[i][2]==p)&&((a[i][0]==0)))
      {
       printf("%d 0",i);
       return 0;
      }
      else if((a[i][1]==np&&a[i][2]==np)&&((a[i][0]==0)))
      {
       printf("%d 0",i);
       return 0;
      }
    }
    for(i=0;i<n;i++)
    {
      if((a[0][i]==p&&a[1][i]==p)&&((a[2][i]==0)))
      {
       printf("2 %d",i);
       return 0;
      }
      else if((a[0][i]==np&&a[1][i]==np)&&((a[2][i]==0)))
       {
       printf("2 %d",i);
       return 0;
      }
      else if((a[0][i]==p&&a[2][i]==p)&&((a[1][i]==0)))
      {
       printf("1 %d",i);
       return 0;
      }
      else if((a[0][i]==np&&a[2][i]==np)&&((a[1][i]==0)))
      {
       printf("1 %d",i);
       return 0;
      }
      else if((a[1][i]==p&&a[2][i]==p)&&((a[0][i]==0)))
      {
       printf("0 %d",i);
       return 0;
      }     
      else if((a[1][i]==np&&a[2][i]==np)&&((a[0][i]==0)))
      {
       printf("0 %d",i);
       return 0;
      }
    }
    
    
    if((a[0][0]==p)&&(a[1][1]==p)&&((a[2][2]==0)))
    {
     printf("2 2");
     return 0;
    }
     if((a[2][2]==p)&&(a[1][1]==p)&&((a[0][0]==0)))
    {
     printf("0 0");
     return 0;
    }
     if((a[0][0]==p)&&(a[2][2]==p)&&((a[1][1]==0)))
    {
     printf("1 1");
     return 0;
    }
     if((a[0][2]==p)&&(a[1][1]==p)&&((a[2][0]==0)))
    {
     printf("2 0");
     return 0;
    }
    if((a[0][2]==p)&&(a[2][0]==p)&&((a[1][1]==0)))
    {
     printf("1 1");
     return 0;
    }
    if((a[1][1]==p)&&(a[2][0]==p)&&((a[0][2]==0)))
    {
     printf("0 2");
     return 0;
    }
    
    
    if((a[0][0]==np)&&(a[1][1]==np)&&((a[2][2]==0)))
    {
     printf("2 2");
     return 0;
    }
     if((a[2][2]==np)&&(a[1][1]==np)&&((a[0][0]==0)))
    {
     printf("0 0");
     return 0;
    }
     if((a[0][0]==np)&&(a[2][2]==np)&&((a[1][1]==0)))
    {
     printf("1 1");
     return 0;
    }
     if((a[0][2]==np)&&(a[1][1]==np)&&((a[2][0]==0)))
    {
     printf("2 0");
     return 0;
    }
    if((a[0][2]==np)&&(a[2][0]==np)&&((a[1][1]==0)))
    {
     printf("1 1");
     return 0;
    }
    if((a[1][1]==np)&&(a[2][0]==np)&&((a[0][2]==0)))
    {
     printf("0 2");
     return 0;
    }
   
   
    if((a[0][0]==p)&&(a[0][2]==p))
    {
      if((a[1][0]==np)&&(a[2][0]==0))
      {
        printf("2 0");
        return 0;
      }  
      if((a[1][2]==np)&&(a[2][2]==0))
      {
        printf("2 2");
        return 0;
      }                         
    } 
    
    if((a[0][0]==p)&&(a[2][0]==p))
    {
      if((a[0][1]==np)&&(a[2][2]==0))
      {
        printf("2 2");
        return 0;
      }  
      if((a[2][1]==np)&&(a[0][2]==0))
      {
        printf("0 2");
        return 0;
      }                         
    } 
    
    if((a[0][2]==p)&&(a[2][2]==p))
    {
      if((a[0][1]==np)&&(a[2][0]==0))
      {
        printf("2 0");
        return 0;
      }  
      if((a[2][1]==np)&&(a[0][0]==0))
      {
        printf("0 0");
        return 0;
      }                         
    } 
    
    if((a[2][0]==p)&&(a[2][2]==p))
    {
      if((a[1][0]==np)&&(a[0][2]==0))
      {
        printf("0 2");
        return 0;
      }  
      if((a[1][2]==np)&&(a[0][0]==0))
      {
        printf("0 0");
        return 0;
      }                         
    } 
 
    
    
    
    
    if(a[0][0]==0)
    {
     printf("0 0");
     return 0;
    } 
    if(a[0][2]==0)
    {
     printf("0 2");
     return 0;
    }               
    if(a[2][2]==0)
    {
     printf("2 2");
     return 0;
    } 
    if(a[2][0]==0)
    {
     printf("2 0");
     return 0;
    } 
    if(a[1][1]==0)
    {
     printf("1 1");
     return 0;
    } 
    return 0;
} 
