#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    scanf("%d");
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
