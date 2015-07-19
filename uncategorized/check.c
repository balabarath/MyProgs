#include<stdio.h>
int main()
{
    int n,sum,i;
    char a[5000];
    scanf("%d",&n);
    while(n--)
   {
              sum=0;
              scanf("%s",a);
              for(i=0;i<strlen(a);i++)
              sum+=a[i];
              printf("%c\n",sum/i);
   } 
  //scanf("%d");
}
