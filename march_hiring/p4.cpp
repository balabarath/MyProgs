//#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	scanf("%d",&n);
	long long int a[n][n];
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	 {
	  scanf("%lld",&a[i][j]);
	 }
	}
	for(i=0;i<n;i++)
	a[i][0]=!a[i][0];
	
	for(j=1;j<n;j++)
	a[0][j]=!a[0][j];
	
	for(i=1;i<n;i++)
	{
	 for(j=1;j<n;j++)
	 {
	  if(a[i][j]==1)
	  a[i][j]=0;
	  else
	  {
	  	a[i][j]=a[i-1][j]+a[i][j-1];
	  }
     }
	 }
	 
     
	 printf("%lld\n",a[i-1][j-1]);
	 //scanf("%c");
	return 0;
}
