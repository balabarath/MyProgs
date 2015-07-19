#include<stdio.h>
#include<string.h>

int main()
{
	int t,i,n,c=0,j,k;
	int input1,input2;
	char a[11];
	scanf("%d %d",&input1,&input2);
	if((input1<0)||(input2<0)||(input1>input2))
	return -1;
	if(input2<=100)
        return 0;
	for(i=input1;i<=input2;i++)
	{
		j=0;
		n=i;
		while(n>0)
		{
		  a[j]=(char)((n%10)+48);
		  n/=10;
		  j++;
		}
		a[j]='\0';
	        for(k=1;k<j-1;k++)
		{
		  if((a[k]>a[k-1])&&(a[k]>a[k+1]))
		  c++;
		  else if((a[k]<a[k-1])&&(a[k]<a[k+1]))
		  c++;
		}
		
	}
	printf("%d",c);
	scanf("%s");
	return 0;
}
