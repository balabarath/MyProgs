#include<stdio.h>
int main()
{
    char *s,*str="welcome to th ner wjfhjwkeh";
    int i,star=4,n=4;
    s=malloc(n+1);
    for(i=0;i<star-1;i++)
    {
    str++;
    }
    for(i=0;i<n;i++,str++)
    {
    *(s+i)=*str;
    printf("%c",s[i]);
    }
    *(s+i)='\0';
   //*s='\0';
    printf("%s",s);
    scanf("%d");
    return 0;
}
