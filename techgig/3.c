#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	int i=0,j=0,k,l,c=0,n,t,l1=1;
	char* input1={"4#11,6#0,5#2,6#1,7#1,5#11,5#11,5#10,5#8"};
	l=strlen(input1);
	
	for(i=0;i<l;i++)
	{
     if(*(input1+i)==',')
     l1++;
    }
    int a[l1],b[l1];
    for(i=0;i<l1;i++)
    a[i]=b[i]=0;
    i=0;
	while(i<l)
	{
         t=0;
         if(*(input1+i)>='0'&&*(input1+i)<='9')
         a[j]=atoi(&input1[i]);
        // printf("%d %d \n",j,a[j]); 
         while(*(input1+i)!='#'&&i<l)
         {
          i++;
         }
         i++;
        // printf("%c-->\n",input1[i]);
        
         if(*(input1+i)>='0'&&*(input1+i)<='9')            
         b[j]=atoi(&input1[i]);
         // printf("%d %d \n",j,b[j]); 
          
         while(*(input1+i)!=','&&i<l) 
         {
          
          i++;
         }
         i++;
        // printf("%c--<\n",input1[i]);
         
         j++;
         
	}
	n=j;
	for(i=0;i<n;i++)
	{
         if(a[i]<4||a[i]>7)
         return -1;
         if(b[i]<0||b[i]>11)
         return -1;
	 for(j=i+1;j<n;j++)
	 {
	  if(a[i]>a[j])
	  c++;
	  else if(a[i]==a[j])
	  if(b[i]>b[j])
	  c++;	  
	 }
	}
	printf("%d\n",c);
	scanf("%c");
	return 0;
}
