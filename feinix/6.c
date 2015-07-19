#include<stdio.h>
int main()
{
    char a[10000];
    int i,j,l,c[3];
    c[0]=c[1]=c[2]=0;
    for(i=0;a[i]!='\0';i+=2)
    {
     if(a[i]=='0')
     c[0]++;
     else if(a[1]=='1')
     c[1]++;
     else if(a[2]=='2')
     c[2]++;
     else
      return -1;
    }
    while(c[0]-->0)
    printf("0,");
    while(c[1]-->0)
    printf("1,");
    while(c[2]-->0)
    {
    printf("2");
    if(c[2]>1)
    printf(",");
    }
    return 0;
}
