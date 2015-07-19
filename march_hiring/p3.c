#include <stdio.h>
#include <string.h>
int min(int x,int y)
{
	if(x<y)
	return x;
	return y;
}
int main()
{
    int t,i,j,a,b,sum,m;
    char ch[10002];
    scanf("%d",&t);
    while(t--)
    {
	  scanf("%s",ch);
	  scanf("%d %d",&a,&b);
	  j=strlen(ch)-1;
	  i=sum=0;
	  m=min(a,b);
	  while(i<=j)
	  {
	   if(ch[i]==ch[j])
	     {
	       if(ch[i]=='/')
	       if(i!=j)
	       sum+=(2*m);
	       else
	       sum+=m;
	     }
	   else
	   {
	   	  if((ch[i]=='a'&&ch[j]=='/')||(ch[i]=='/'&&ch[j]=='a'))
	   	  sum+=a;
	   	  else if((ch[i]=='b'&&ch[j]=='/')||(ch[i]=='/'&&ch[j]=='b'))
	   	  sum+=b;
	   	  else
	   	   { sum=-1;
	   	     break;
	   	   }	   	     
	   	   
	   }
	   
	   i++;
	   j--;
	  }
	  printf("%d\n",sum);
    }
    return 0;
}
