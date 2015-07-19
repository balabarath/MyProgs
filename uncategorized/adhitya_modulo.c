//22/04/12 18:24
#include<stdio.h>
int main()
{
    short flag;
    char c;
    int n,i,j;
    scanf("%d",&n);
    long a[n],a1[n],temp,no=2;
    for(i=0;i<n;i++,scanf("%ld",&a[i]));
    while(1)
    {
    for(i=0;i<n;i++)
    a1[i]=a[i]%no;
    no++;
    flag=0;
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    if(a1[i]==a1[j])
    {
     flag=1;
     
     break;
    }
    if(flag==0)
    break;
    }
    printf("%ld\n",no-1);
    for(i=0;i<n;i++)
    printf("%ld\t",a1[i]);
    scanf("%d");
    return 0;
}
