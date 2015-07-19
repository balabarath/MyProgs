#include<stdio.h>
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    char a[55];
    scanf("%s",&a);
    for(i=1;a[i]!='\0';i++)
    {
     if(a[i]==a[i-1])
     t++;
    }
    printf("%d",t);
    return 0;
}
