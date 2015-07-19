#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n;
    
	int i,j,p1,p2,d=10;
	double avg;
    int input1[]={2,7,9,12,15,17,19,23,25,27,30};
    int input2[]={2,5,8,10,14,18,19,20,21,25,30};
    n=sizeof(input1)/sizeof(int);   
    int a[2*n];
    
	for(i=0;i<n;i++)
	a[i]=input1[i];
	for(j=0;j<n;j++,i++)
	a[i]=input2[j];
	sort(a,a+(2*n));
	p1=n;
	p2=n-1;
	avg=(a[p1]+a[p2])/(float)2;
	avg=(int)(avg+.5);
	for(i=0;i<2*n;i++)
    cout<<a[i]<<" ";
	
	printf("%d %d %f",p1,p2,avg);
	scanf("%d");
    return 0;
}
