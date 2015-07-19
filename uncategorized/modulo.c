#include<stdio.h>
int main()
{
    int a[1000],i,n=0,no,k=10;
    while(k--)
    {
    n=0;
    for(i=0;i<42;i++)
    a[i]=0;
    for(i=0;i<10;i++)
    {
    scanf("%d",&no);
    a[no%42]++;
    //printf("%d  ",a[i]);
    }
    for(i=0;i<42;i++)
    if(a[i])
    n++;
    printf("%d\n",n);
    //scanf("%d");
    }
    return 0;
}
