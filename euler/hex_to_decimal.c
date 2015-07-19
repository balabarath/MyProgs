#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long int a,num=0,l,i;
    char *in;
    in=malloc(sizeof(10));
    scanf("%s",in);
    l=strlen(in);
    a=pow(16,l-1);
    for(i=0;i<l;i++)
    {
      //printf("%d    %d\n",num,a);
     if(isdigit(in[i]))
     {
     num+=(a*(in[i]-'0'));
     
     }
     else
     {
     switch(in[i])
     {
      case 'A':
           num+=(10*a);
           break;
       case 'B':
           num+=(11*a);
           break;
        case 'C':
           num+=(12*a);
           break;
        case 'D':
           num+=(13*a);
           break;
       case 'E':
           num+=(14*a);
           break;
        case 'F':
           num+=(15*a);
           break;
     }
     }
     a/=16;
    }
    printf("%d",num);
    //scanf("%d");
    return 0;
} 
