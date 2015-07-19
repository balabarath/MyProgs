#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
    int l1,i=0,j=0,count=0,k;
    char *in[]={"4#11","6#0","5#2","6#1","7#1","5#11","5#11","5#10","5#8"};
    l1=(int)(sizeof(in)/sizeof(*in));
    int a[l1],b[l1];
    while(j<l1)
    {
     k=0;
     assert(a[j]=atoi(&in[j][k]));
     while((in[j][k++])!='#');
     b[j]=atoi(&in[j][k]);
     j++;
    } 
    for(i=0;i<l1;i++)
    {
     if(a[i]<4||a[i]>7)
     return -1;
     if(b[i]<0||b[i]>11)
     return -1;
     for(j=i+1;j<l1;j++)
     {
       if((a[i]>a[j])||(a[i]==a[j]&&b[i]>b[j]))
       count++;
     }
    }  
    printf("%d",count);
    scanf("%d");                      
    return 0;
}
