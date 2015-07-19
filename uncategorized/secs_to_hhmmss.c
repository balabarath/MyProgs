#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    long num;
    char *str,*c;
    int h,m,s;
     str=malloc(9);
    c=malloc(1);
    scanf("%ld",&num);
    h=num/3600;
    m=(num%3600)/60;
    s=(num%3600)%60;
    //printf("%d %d %d ",h,m,s);
    if(h>9)
    {
      ltoa(h/10,c,10);
      printf("   %s     ",c);
      strcat(str,c);
      ltoa(h%10,c,10);
      strcat(str,c);
     }
    else
    {
      strcat(str,"0");
      ltoa(h,c,10);
      strcat(str,c);
    }
    strcat(str,":");
    if(m>9)
    {
      ltoa(m/10,c,10);
      strcat(str,c);
      ltoa(m%10,c,10);
      strcat(str,c);
     }
    else
    {
      strcat(str,"0");
      ltoa(m,c,10);
      strcat(str,c);
    }
    strcat(str,":");
    if(s>9)
    {
      ltoa(s/10,c,10);
      strcat(str,c);
      ltoa(s%10,c,10);
      strcat(str,c);
     }
    else
    {
      strcat(str,"0");
      ltoa(s,c,10);
      strcat(str,c);
    }
    //strcat(str,":");
    
    printf("%s",str);
    scanf("%d");
    return 0;
}
