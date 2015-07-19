#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,c1,l=0,f=0,l1=0,l2=0,l3=0;
    char a[110],c;
    scanf("%s",&a);
    n=strlen(a);
    
    for(i=0;i<n;i++){
    if(a[i]=='1')
    l1++;
    else if(a[i]=='0')
    l2++;
    else
    l3++;
    }
   // printf("%d %d %d",l1,l2,l3);
    if(l3>1)
    goto hi;
    
    for(i=1;i<n;i++)
    {
     if(a[i]==a[i-1])
     continue;
     l=1;
    }
    
    if(l==0)
    {
    
     if(a[0]=='?')
     {
      hi:
     printf("00\n01\n10\n11");
     }
     else if(a[0]=='1')
     {
     hi1:
     printf("11");
     }
     else
     {
     hi2:
     printf("00");
     }
     return 0;
    }
    
    l=(n/2);
    
    
   // printf("%d  ",l);
  /*  if(l3==0)
    {
     if(l1>l)
     {
       goto hi2;
     }    
    else if(l2>l)
     {
       
       goto hi1;
     } 
    }
    */
    if(l1<l){
      i=c1=0;
      while((i<n)&&(c1<(l-l1)))
      {
        if(a[i]=='0')
        a[i]='-';
       i++;
      }
      }
      i=c1=0;
    
      while((i<n)&&(c1<l1))
      {
        if(a[i]=='1')
        a[i]='-';
        i++;
      }
    
    
    
    l=(n/2);
    if(n%2==0)
    l--;
    
    if(l2<l)
    {
    i=c1=0;
      while((i<n)&&(c1<(l-l2)))
      {
        if(a[i]=='1')
        a[i]='-';
        i++;
      }
    }
      i=c1=0;
      while((i<n)&&(c1<l2))
      {
        if(a[i]=='0')
        a[i]='-';
        i++;
      }
    
    for(i=0;i<n;i++)
    printf("%c",a[i]);
       
    if(!l3)
    {
     for(i=0;i<n;i++)
     if((a[i]=='1')||(a[i]=='0'))
     printf("%c",a[i]);
    }
    else
    {
     for(i=0;i<n;i++)
     {
       if(a[i]=='?')
       {
        f=1;
        break;
       } 
       else if((a[i]=='1')||(a[i]=='0'))
       break;
     }
     for(i=0;i<n;i++)
     if((a[i]=='1')||(a[i]=='0'))
     c=a[i];
     
    if(f==1)
    printf("0%c\n1%c",c,c);
    else
    printf("%c0\n%c1",c,c);
    }
    
    return 0;
}
