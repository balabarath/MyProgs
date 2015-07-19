#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,j,k,p,q,l,i;
    char a[5000];
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d",&n);
     scanf("%s",a);
     l=strlen(a);
     /*if(l%n!=0)
     {
      for(i=l,j=0;j<l%n;j++,i++)
      {
       a[i]='x';
      }
      a[i]='\0';
     }*/
     p=n*2-1;
     q=1;
     for(i=0;i<n;i++)
     {
      j=i;
      printf("%c",a[j]);
      while(1)
      {
       j+=p;
       if(j<l){
       printf("%c",a[j]);}
       else 
       break;
       j+=q;
       if(j<l){
       printf("%c",a[j]);}
       else
       break;
      }
      p-=2;
      q+=2;
     }
     printf("\n");
    }
       
    return 0;
}
