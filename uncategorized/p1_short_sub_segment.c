#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,j=0;
    char *a,*b;
    a=malloc(200001);
    b=malloc(200001);
    gets(a);
  //printf("%d\n",strlen(a));
    for(;a[i]!='\0';i++)
    {
     // printf("%c",a[i]);
     if(a[i]==' '||(a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A'))
     {
                b[j]=a[i];
                j++;
              // printf("%c",a[i]);
     }
    }
    b[j]='\0';
    free(a);    
    printf("%s",b);
  //system("pause");
    return 0;
}
