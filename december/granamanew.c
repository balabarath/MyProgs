#include<stdio.h>
#define max 1001
int main()
{
    int t,i,num[26],j,f1,f2;
    char a[max],b[max];
    scanf("%d",&t);
    while(t--)
    {
    scanf("%s %s",a,b);
    for(i=1;i<27;i++)
    num[i]=0;
    for(i=0;i<strlen((char *)a);i++)
    num[a[i]-96]++;
    for(i=0;i<strlen(b);i++)
    num[b[i]-96]++;
    f1=f2=0;
    for(i=1;i<27;i++)
    {
     if(num[i]%2==0)
     f2=1; 
     else
     f1=1;
    }
    for(i=1;i<27;i++)
    printf("%d ",num[i]);
    printf("\n");
    if((!f2&&f1)||(f2&&!f1))
    printf("YES\n");
    else
    printf("NO\n");
    }
    
    scanf("%d");
    return 0;
}
