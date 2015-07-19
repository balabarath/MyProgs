#include<stdio.h>
int main()
{
    char *in,*c=NULL;
    int stpos,i=0,j;
    in=malloc(15);
    c=malloc(29);
    gets(in);
    j=strlen(in)-1;
    while(j>=0)
    {
      *(c+i)=*(in+j);
      j--;
      i++;
      *(c+i)='-';
      i++;
      //printf("%s",c);   
    }  
    *(c+i-1)='\0'; 
    printf("%s",c);
    scanf("%d");
    return 0;
}
