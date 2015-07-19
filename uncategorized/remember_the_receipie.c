//01/05/12 21:58
#include<stdio.h>
int main()
{
    int n,q,i,j,c,f;
    long int v[1000],t;
    char s[1000][1001];
    char qr[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%s %ld",s[i],&v[i]);   
    }
    scanf("%d",&q);
    while(q--)
    {
       scanf("%s",qr);
       t=-999999999;
       f=0;
       for(i=0;i<n;i++)
       {
        for(j=0;j<strlen(qr);j++)
        if(qr[j]!=s[i][j])
        break;
        if(j==strlen(qr))
        if(v[i]>t)
        {
        c=i;
        t=v[i];
        f=1;
        }
       }
       if(f==1)
       printf("%s\n",s[c]);
       else
       printf("NO\n");
    }
   // scanf("%d");
    return 0;
}
