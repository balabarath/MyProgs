#include<stdio.h>
int main()
{
    int t,i,j,k1,k2,n=8,f,temp;
    char a[8][9],chumma[10];
    scanf("%d",&t);
    while(t--)
    {
     for(i=0;i<n;i++)
     scanf("%s",a[i]);
     f=temp=0;     
     
     for(i=0;i<n;i++)
      for(j=0;j<n;j++)
       if(a[i][j]=='B')
       temp++;
       
       if(temp==1)
       {
        f=1;
        goto end;
       }
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
       {
        if(a[i][j]=='B')
         { 
          for(k1=i+1,k2=j+1;k1<n,k2<n;k1++,k2++)
          {
           if(a[k1][k2]=='B')
           {
            f=1;
            break;
           }
          }
          for(k1=i-1,k2=j-1;k1>=0,k2>=0;k1--,k2--)
          {
           if(a[k1][k2]=='B')
           {
            f=1;
            goto end;
           }
          }
          for(k1=i+1,k2=j-1;k1<n,k2>=0;k1++,k2--)
          {
           if(a[k1][k2]=='B')
           {
            f=1;
            goto end;
           }
          }
          for(k1=i-1,k2=j+1;k1>=0,k2<n;k1--,k2++)
          {
           if(a[k1][k2]=='B')
           {
            f=1;
            goto end;
           }
          }
          
         } 
       }   
     }
     end:
     if(f)
     printf("YES");
     else
     printf("NO");
     if(t>0)
     printf("\n");
     gets(chumma);
    }
    return 0;
}
