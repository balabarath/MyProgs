#include<stdio.h>
int main()
{
    int i,j,n=3,k,f=0;
    char np,a[3][4],p,chumma[2];
    scanf("%c",&p);
    gets(chumma);
    for(i=0;i<n;i++){
   
    gets(a[i]);
    }
   goto next;
    for(k=0;k<8;k++)
    {
    scanf("%c",&p);
   
    for(i=0;i<n;i++)
    {
   
    gets(a[i]);
       
    }
   
  next:
     f=1;
    for(i=0;i<3;i++)
    printf("%s\n",a[i]);
    if(p=='X')
    np='O';
    else
    np='X';
    
    for(i=0;i<n;i++)
    {
      if((a[i][0]==p&&a[i][1]==p)&&((a[i][2]=='_')))
      {
       printf("%d 2",i);
       return 0;
      }
      else if((a[i][0]==np&&a[i][1]==np)&&((a[i][2]=='_')))
      {
       printf("%d 2",i);
       goto end;
      }
      else if((a[i][0]==p&&a[i][2]==p)&&((a[i][1]=='_')))
      {
       printf("%d 1",i);
       goto end;
      }
      else if((a[i][0]==np&&a[i][2]==np)&&((a[i][1]=='_')))
      {
       printf("%d 1",i);
       goto end;
      }
      else if((a[i][1]==p&&a[i][2]==p)&&((a[i][0]=='_')))
      {
       printf("%d 0",i);
       goto end;
      }
      else if((a[i][1]==np&&a[i][2]==np)&&((a[i][0]=='_')))
      {
       printf("%d 0",i);
       goto end;
      }
    }
    for(i=0;i<n;i++)
    {
      if((a[0][i]==p&&a[1][i]==p)&&((a[2][i]=='_')))
      {
       printf("2 %d",i);
       goto end;
      }
      else if((a[0][i]==np&&a[1][i]==np)&&((a[2][i]=='_')))
       {
       printf("2 %d",i);
       goto end;
      }
      else if((a[0][i]==p&&a[2][i]==p)&&((a[1][i]=='_')))
      {
       printf("1 %d",i);
       goto end;
      }
      else if((a[0][i]==np&&a[2][i]==np)&&((a[1][i]=='_')))
      {
       printf("1 %d",i);
       goto end;
      }
      else if((a[1][i]==p&&a[2][i]==p)&&((a[0][i]=='_')))
      {
       printf("0 %d",i);
       goto end;
      }     
      else if((a[1][i]==np&&a[2][i]==np)&&((a[0][i]=='_')))
      {
       printf("0 %d",i);
       goto end;
      }
    }
    
    
    if((a[0][0]==p)&&(a[1][1]==p)&&((a[2][2]=='_')||(a[2][2]==np)))
    {
     printf("2 2");
     goto end;
    }
     if((a[2][2]==p)&&(a[1][1]==p)&&((a[0][0]=='_')||(a[0][0]==np)))
    {
     printf("0 0");
     goto end;
    }
     if((a[0][0]==p)&&(a[2][2]==p)&&((a[1][1]=='_')||(a[1][1]==np)))
    {
     printf("1 1");
     goto end;
    }
     if((a[0][2]==p)&&(a[1][1]==p)&&((a[2][0]=='_')||(a[2][0]==np)))
    {
     printf("2 0");
     goto end;
    }
    if((a[0][2]==p)&&(a[2][0]==p)&&((a[1][1]=='_')||(a[1][1]==np)))
    {
     printf("1 1");
     goto end;
    }
    if((a[1][1]==p)&&(a[2][0]==p)&&((a[0][2]=='_')||(a[0][2]==np)))
    {
     printf("0 2");
     goto end;
    }
    
    
    if((a[0][0]==np)&&(a[1][1]==np)&&((a[2][2]=='_')||(a[2][2]==p)))
    {
     printf("2 2");
     goto end;
    }
     if((a[2][2]==np)&&(a[1][1]==np)&&((a[0][0]=='_')||(a[0][0]==p)))
    {
     printf("0 0");
     goto end;
    }
     if((a[0][0]==np)&&(a[2][2]==np)&&((a[1][1]=='_')||(a[1][1]==p)))
    {
     printf("1 1");
     goto end;
    }
     if((a[0][2]==np)&&(a[1][1]==np)&&((a[2][0]=='_')||(a[2][0]==p)))
    {
     printf("2 0");
     goto end;
    }
    if((a[0][2]==np)&&(a[2][0]==np)&&((a[1][1]=='_')||(a[1][1]==p)))
    {
     printf("1 1");
     goto end;
    }
    if((a[1][1]==np)&&(a[2][0]==np)&&((a[0][2]=='_')||(a[0][2]==p)))
    {
     printf("0 2");
     goto end;
    }
   
   
    if((a[0][0]==p)&&(a[0][2]==p))
    {
      if((a[1][0]==np)&&(a[2][0]=='_'))
      {
        printf("2 0");
        goto end;
      }  
      if((a[1][2]==np)&&(a[2][2]=='_'))
      {
        printf("2 2");
        goto end;
      }                         
    } 
    
    if((a[0][0]==p)&&(a[2][0]==p))
    {
      if((a[0][1]==np)&&(a[2][2]=='_'))
      {
        printf("2 2");
        goto end;
      }  
      if((a[2][1]==np)&&(a[0][2]=='_'))
      {
        printf("0 2");
        goto end;
      }                         
    } 
    
    if((a[0][2]==p)&&(a[2][2]==p))
    {
      if((a[0][1]==np)&&(a[2][0]=='_'))
      {
        printf("2 0");
        goto end;
      }  
      if((a[2][1]==np)&&(a[0][0]=='_'))
      {
        printf("0 0");
        goto end;
      }                         
    } 
    
    if((a[2][0]==p)&&(a[2][2]==p))
    {
      if((a[1][0]==np)&&(a[0][2]=='_'))
      {
        printf("0 2");
        goto end;
      }  
      if((a[1][2]==np)&&(a[0][0]=='_'))
      {
        printf("0 0");
        goto end;
      }                         
    } 
 
    
    
    
    
    if(a[0][0]=='_')
    {
     printf("0 0");
     goto end;
    } 
    if(a[0][2]=='_')
    {
     printf("0 2");
     goto end;
    }               
    if(a[2][2]=='_')
    {
     printf("2 2");
     goto end;
    } 
    if(a[2][0]=='_')
    {
     printf("2 0");
     goto end;
    } 
    if(a[1][1]=='_')
    {
     printf("1 1");
     goto end;
    } 
    end:
        printf("\n");
}
    return 0;
} 
