#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i,a[15];
    char ch[315];
    scanf("%d",&t);
    getline(cin,ch);
    printf("%s",ch);
    while(t--)
    {
     
     getline(cin,ch);
     for(i=0;i<26;i++)
     a[i]=0;
     
     for(i=0;ch[i]!='\0';i++)
     {
      
      if(ch[i]>=65&&ch[i]<=90)
      a[ch[i]-65]=1;
      else if(ch[i]>=97&&ch[i]<=122)
      a[ch[i]-97]=1;
      
     }
     for(i=0;i<26;i++)
     {
      if(a[i]==0)
      {
       printf("%c\n",a[i]+65);
       break;
      }
     }
     if(i==26)
     printf("~\n");
    }
    return 0;
}
