#include<stdio.h>
#include<string.h>
/*int substring(char a[50],char b[50])
{
 int i,j,t=0;
 for(i=0;i<strlen(a);i++)
 {
  t=0;
  for(j=0;j<strlen(b);j++)
  {
    //printf("%c %c %d %d  ",a[i],b[j],i,j);
    if(a[i]!=b[j])
    {
    i-=t;
    break;
    } 
    t++;
    i++; 
       
  //  printf("%c %c   ",a[i-1],b[j]);
  } 
  if(j==strlen(b))
  return 1;
 
 printf("( %d %d )",j,strlen(b));
 return 0; 
 }
  */

int main()
{
    int n,k,i,j,c;
    char a[60][55],b[60];
    scanf("%d %d",&k,&n);
    for(i=0;i<k;i++)
    scanf("%s",a[i]);
    while(n--)
    {
     c=0;
     scanf("%s",b);
     if(strlen(b)>=47)
     printf("Good\n");
     else
     {
       for(i=0;i<k;i++)
       if(strstr(b,a[i]))
       {
       c=1;
       printf("Good\n");
       break;
       }
       if(c!=1)
       printf("Bad\n");
     }
    }
    return 0;
}
