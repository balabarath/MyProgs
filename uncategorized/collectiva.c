#include<stdio.h>
int main()
{
    char in[15][15],a[100],temp;
    int i,c,j;
    float num=0,tot=0,d;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
       c=(int)a[i];
       if(a[i]!=' '||a[i]!='\\'||a[i]!='n')
       {
       strcat(&in[j],&a[i]); 
       printf("%s\n",in[j]);
       if(a[i+1]==' '||a[i+1]=='\\') 
         {
           num=atoi(&in[j]);
           tot+=num;
           j++;
         } 
       }
       
   }
    d=(float)j;
    printf("%f",tot/d);
    scanf("%d");
    return 0;
}
