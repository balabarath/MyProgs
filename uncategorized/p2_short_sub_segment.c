#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,sl,al,n,k,st,et,s,e,i1,f,flag;
    char a[200001],str[100000][17];
    gets(a);
    scanf("%d",&n);
    int nc[n];
    char nstr[n][17];
    for(i=0;i<n;i++)
    {
      scanf("%s",&(nstr[i]));
    }
    for(i=0,j=0,k=0;i<strlen(a);i++)
    {
      if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
      {
        str[j][k]=a[i];
        k++;
      }
      else if(a[i]==' ')
      {
       str[j][k]='\0'; 
       j++;
       k=0;
      }
    }
    str[j][k]='\0';
    al=j+1;
   /* for(i=0;i<=j;i++)
    printf("%s\n",str[i]);*/
    for(i=0;i<n;i++)
    nc[i]=0;
    st=-1;
    f=0;
    for(i=0;i<al;i++)
    {
      flag=0;
      for(j=0;j<n;j++)
      {
        k=0;
        if(nc[j]!=1)
        {
          while(str[i][k]!='\0')
          {
            if(tolower(str[i][k])==tolower(nstr[j][k]))
            {
              k++;
            }
            else
            break;
          }
         // printf("%d %d\n",k,strlen(str[i]));
          if(k==strlen(str[i]))
          {
            //printf("hai");
            nc[j]=1;
            if(st==-1)
            {
            st=i;
            }
            else
            et=i;
            flag=1;
            k=0;
           // printf("%s\n",str[i]);
            break;
          }
          else
          {
              for(i1=0;i1<n;i1++)
              nc[i1]=0;
              k=0;
                       
          }
        }
      }
      if(flag)
      f++;
      else
      {
      f=0;
      st=-1;
      }
     //printf("%d\n",st);
      if(f==n)
      {
       for(i=st;i<=et;i++)
       {
       printf("%s ",str[i]);
       }
       //printf("\b");
       goto end;
      }
      
    }
    printf("NO SUBSEGMENT FOUND");
    end:
    //scanf("%d");
    return 0;
}
