#include <stdio.h>
#include <string.h>
#include <math.h>

/* Complete the function below to print 2 integers separated by a single space which will be your next move 
 */
int nextMove(char p, char a[3][4]){
    char np;
    int i,j,n=3;
  if(p=='X')
    np='O';
    else
    np='O';
    
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
       return 0;
      }
      else if((a[i][0]==p&&a[i][2]==p)&&((a[i][1]=='_')))
      {
       printf("%d 1",i);
       return 0;
      }
      else if((a[i][0]==np&&a[i][2]==np)&&((a[i][1]=='_')))
      {
       printf("%d 1",i);
       return 0;
      }
      else if((a[i][1]==p&&a[i][2]==p)&&((a[i][0]=='_')))
      {
       printf("%d 0",i);
       return 0;
      }
      else if((a[i][1]==np&&a[i][2]==np)&&((a[i][0]=='_')))
      {
       printf("%d 0",i);
       return 0;
      }
    }
    for(i=0;i<n;i++)
    {
      if((a[0][i]==p&&a[1][i]==p)&&((a[2][i]=='_')))
      {
       printf("2 %d",i);
       return 0;
      }
      else if((a[0][i]==np&&a[1][i]==np)&&((a[2][i]=='_')))
       {
       printf("2 %d",i);
       return 0;
      }
      else if((a[0][i]==p&&a[2][i]==p)&&((a[1][i]=='_')))
      {
       printf("1 %d",i);
       return 0;
      }
      else if((a[0][i]==np&&a[2][i]==np)&&((a[1][i]=='_')))
      {
       printf("1 %d",i);
       return 0;
      }
      else if((a[1][i]==p&&a[2][i]==p)&&((a[0][i]=='_')))
      {
       printf("0 %d",i);
       return 0;
      }     
      else if((a[1][i]==np&&a[2][i]==np)&&((a[0][i]=='_')))
      {
       printf("0 %d",i);
       return 0;
      }
    }
    
    
    if((a[0][0]==p)&&(a[1][1]==p)&&((a[2][2]=='_')||(a[2][2]==np)))
    {
     printf("2 2");
     return 0;
    }
     if((a[2][2]==p)&&(a[1][1]==p)&&((a[0][0]=='_')||(a[0][0]==np)))
    {
     printf("0 0");
     return 0;
    }
     if((a[0][0]==p)&&(a[2][2]==p)&&((a[1][1]=='_')||(a[1][1]==np)))
    {
     printf("1 1");
     return 0;
    }
     if((a[0][2]==p)&&(a[1][1]==p)&&((a[2][0]=='_')||(a[2][0]==np)))
    {
     printf("2 0");
     return 0;
    }
    if((a[0][2]==p)&&(a[2][0]==p)&&((a[1][1]=='_')||(a[1][1]==np)))
    {
     printf("1 1");
     return 0;
    }
    if((a[1][1]==p)&&(a[2][0]==p)&&((a[0][2]=='_')||(a[0][2]==np)))
    {
     printf("0 2");
     return 0;
    }
    
    
    if((a[0][0]==np)&&(a[1][1]==np)&&((a[2][2]=='_')||(a[2][2]==p)))
    {
     printf("2 2");
     return 0;
    }
     if((a[2][2]==np)&&(a[1][1]==np)&&((a[0][0]=='_')||(a[0][0]==p)))
    {
     printf("0 0");
     return 0;
    }
     if((a[0][0]==np)&&(a[2][2]==np)&&((a[1][1]=='_')||(a[1][1]==p)))
    {
     printf("1 1");
     return 0;
    }
     if((a[0][2]==np)&&(a[1][1]==np)&&((a[2][0]=='_')||(a[2][0]==p)))
    {
     printf("2 0");
     return 0;
    }
    if((a[0][2]==np)&&(a[2][0]==np)&&((a[1][1]=='_')||(a[1][1]==p)))
    {
     printf("1 1");
     return 0;
    }
    if((a[1][1]==np)&&(a[2][0]==np)&&((a[0][2]=='_')||(a[0][2]==p)))
    {
     printf("0 2");
     return 0;
    }
   
   
    if((a[0][0]==p)&&(a[0][2]==p))
    {
      if((a[1][0]==np)&&(a[2][0]=='_'))
      {
        printf("2 0");
        return 0;
      }  
      if((a[1][2]==np)&&(a[2][2]=='_'))
      {
        printf("2 2");
        return 0;
      }                         
    } 
    
    if((a[0][0]==p)&&(a[2][0]==p))
    {
      if((a[0][1]==np)&&(a[2][2]=='_'))
      {
        printf("2 2");
        return 0;
      }  
      if((a[2][1]==np)&&(a[0][2]=='_'))
      {
        printf("0 2");
        return 0;
      }                         
    } 
    
    if((a[0][2]==p)&&(a[2][2]==p))
    {
      if((a[0][1]==np)&&(a[2][0]=='_'))
      {
        printf("2 0");
        return 0;
      }  
      if((a[2][1]==np)&&(a[0][0]=='_'))
      {
        printf("0 0");
        return 0;
      }                         
    } 
    
    if((a[2][0]==p)&&(a[2][2]==p))
    {
      if((a[1][0]==np)&&(a[0][2]=='_'))
      {
        printf("0 2");
        return 0;
      }  
      if((a[1][2]==np)&&(a[0][0]=='_'))
      {
        printf("0 0");
        return 0;
      }                         
    } 
 
    
    
    
    
    if(a[0][0]=='_')
    {
     printf("0 0");
     return 0;
    } 
    if(a[0][2]=='_')
    {
     printf("0 2");
     return 0;
    }               
    if(a[2][2]=='_')
    {
     printf("2 2");
     return 0;
    } 
    if(a[2][0]=='_')
    {
     printf("2 0");
     return 0;
    } 
    if(a[1][1]=='_')
    {
     printf("1 1");
     return 0;
    } 

}


int main() {

    int i,j,k;
    char p;
    char a[3][4];

    //If player is X, I'm the first player.
    //If player is O, I'm the second player.
    for(j=0;j<7;j++)
    {
    scanf("%c", &p);

    //Read the board now. The board is a 3x3 array filled with X, O or _.
    for(i=0; i<3; i++) 
    for(k=0;k<3;k++){
        scanf("%c", &a[i][k]);
    }
   
   nextMove(p,a);
   printf("\n");
  }
    return 0;
}
