#include<stdio.h>
int main()
{
    char *in,c;
    int stpos,i,num=0,t;
    in=malloc(15);
    
    scanf("%s",in);
    scanf("%d",&stpos);
     i=0;
    //printf("%s",in);
    while(in[stpos]!='-'&&stpos<strlen(in))
    {
      num*=10;
      c=in[stpos];
      t=(int)c-48;
      stpos++;
      num+=t;
      
    }   
    printf("%d",num);
    scanf("%d");
    return 0;
}
