#include<stdio.h>
int main()
{
    int c,i,j;
    char a[202];
    scanf("%d",&c);
    while(1)
    {
     scanf("%d",&c);
     if(c==0)
     break;
     scanf("%s",a);
     for(i=0;i<c;i++)
     for(j=i;j<strlen(a);j+=c)
     printf("%c",a[j]);
     printf("\n");
     
    }
    scanf("%d");
    return 0;
}
